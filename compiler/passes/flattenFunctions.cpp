#include "alist.h"
#include "astutil.h"
#include "expr.h"
#include "passes.h"
#include "stmt.h"
#include "symscope.h"


//
// returns true if the symbol is defined in an outer function to fn
// third argument not used at call site
//
static bool
isOuterVar(Symbol* sym, FnSymbol* fn, Symbol* parent = NULL) {
  if (!parent)
    parent = fn->defPoint->parentSymbol;
  if (!isFnSymbol(parent))
    return false;
  else if (sym->defPoint->parentSymbol == parent)
    return true;
  else
    return isOuterVar(sym, fn, parent->defPoint->parentSymbol);
}


//
// finds outer vars directly used in a function
//
static void
findOuterVars(FnSymbol* fn, Vec<Symbol*>* uses) {
  Vec<BaseAST*> asts;
  collect_asts(&asts, fn);
  forv_Vec(BaseAST, ast, asts) {
    if (SymExpr* symExpr = toSymExpr(ast)) {
      Symbol* sym = symExpr->var;
      if (toVarSymbol(sym) || toArgSymbol(sym))
        if (isOuterVar(sym, fn))
          uses->add_exclusive(sym);
    }
  }
}


static void
addVarsToFormals(FnSymbol* fn, Vec<Symbol*>* vars) {
  Vec<BaseAST*> asts;
  collect_asts(&asts, fn->body);
  forv_Vec(Symbol, sym, *vars) {
    if (sym) {
      Type* type = sym->type;
      if (!type->symbol->hasPragma("heap")) {
        if (type->refType)
          type = type->refType;
      }
      ArgSymbol* arg = new ArgSymbol(INTENT_BLANK, sym->name, type);
      fn->insertFormalAtTail(new DefExpr(arg));
      forv_Vec(BaseAST, ast, asts) {
        if (SymExpr* se = toSymExpr(ast)) {
          if (se->var == sym) {
            CallExpr* call = toCallExpr(se->parentExpr);
            if (type == sym->type ||
                (call && call->isPrimitive(PRIMITIVE_MOVE) && call->get(1) == se) ||

                //
                // let GET_LOCALE work apply to the reference
                //
                (call && call->isPrimitive(PRIMITIVE_GET_LOCALEID))) {

              se->var = arg;
            } else if (call && call->isPrimitive(PRIMITIVE_SET_REF)) {
              call->replace(new SymExpr(arg));
            } else if (!type->symbol->hasPragma("heap")) {
              VarSymbol* tmp = new VarSymbol("_tmp", sym->type);
              se->getStmtExpr()->insertBefore(new DefExpr(tmp));
              se->getStmtExpr()->insertBefore(new CallExpr(PRIMITIVE_MOVE, tmp, new CallExpr(PRIMITIVE_GET_REF, arg)));
              se->var = tmp;
            }
          }
        }
      }
    }
  }
}


static void
addVarsToActuals(CallExpr* call, Vec<Symbol*>* vars) {
  forv_Vec(Symbol, sym, *vars) {
    if (sym) {
      if (!isReference(sym->type) && !sym->type->symbol->hasPragma("heap")) {
        VarSymbol* tmp = new VarSymbol("_tmp", sym->type->refType);
        call->getStmtExpr()->insertBefore(new DefExpr(tmp));
        call->getStmtExpr()->insertBefore(new CallExpr(PRIMITIVE_MOVE, tmp, new CallExpr(PRIMITIVE_SET_REF, sym)));
        call->insertAtTail(tmp);
      } else {
        call->insertAtTail(sym);
      }
    }
  }
}


void flattenFunctions(void) {
  compute_call_sites();

  Vec<FnSymbol*> all_nested_functions;
  Map<FnSymbol*,Vec<Symbol*>*> args_map;
  forv_Vec(FnSymbol, fn, gFns) {
    if (isFnSymbol(fn->defPoint->parentSymbol)) {
      all_nested_functions.add_exclusive(fn);
      Vec<Symbol*>* uses = new Vec<Symbol*>();
      findOuterVars(fn, uses);
      args_map.put(fn, uses);
    }
  }

  // iterate to get outer vars in a function based on outer vars in
  // functions it calls
  bool change;
  do {
    change = false;
    forv_Vec(FnSymbol, fn, all_nested_functions) {
      Vec<BaseAST*> asts;
      collect_top_asts(&asts, fn);
      Vec<Symbol*>* uses = args_map.get(fn);
      forv_Vec(BaseAST, ast, asts) {
        if (CallExpr* call = toCallExpr(ast)) {
          if (call->isResolved()) {
            if (FnSymbol* fcall = call->findFnSymbol()) {
              Vec<Symbol*>* call_uses = args_map.get(fcall);
              if (call_uses) {
                forv_Vec(Symbol, sym, *call_uses) {
                  if (isOuterVar(sym, fn))
                    if (uses->add_exclusive(sym))
                      change = true;
                }
              }
            }
          }
        }
      }
    }
  } while (change);

  // update all call sites of nested functions this must be done
  // before updating the function so that the outer var actuals can be
  // updated with the outer var functions when the formals are updated
  // (in nested functions that call one another)
  forv_Vec(FnSymbol, fn, all_nested_functions) {
    Vec<Symbol*>* uses = args_map.get(fn);
    forv_Vec(CallExpr, call, *fn->calledBy) {
      addVarsToActuals(call, uses);
    }
  }

  // move nested functions to module level
  forv_Vec(FnSymbol, fn, all_nested_functions) {
    ModuleSymbol* mod = fn->getModule();
    Expr* def = fn->defPoint;
    def->remove();
    mod->block->insertAtTail(def);
  }

  // add extra formals to nested functions
  forv_Vec(FnSymbol, fn, all_nested_functions) {
    Vec<Symbol*>* uses = args_map.get(fn);
    addVarsToFormals(fn, uses);
  }

  //
  // remove types from functions
  //
  forv_Vec(TypeSymbol, ts, gTypes) {
    if (FnSymbol* fn = toFnSymbol(ts->defPoint->parentSymbol))
      fn->defPoint->insertBefore(ts->defPoint->remove());
  }
}
