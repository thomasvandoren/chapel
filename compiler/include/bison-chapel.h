/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
# define YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "chapel.ypp" /* yacc.c:1915  */

  extern int  captureTokens;
  extern char captureString[1024];
#line 44 "chapel.ypp" /* yacc.c:1915  */

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);

  #endif
#line 63 "chapel.ypp" /* yacc.c:1915  */

  #ifndef _BISON_CHAPEL_DEFINES_1_
  #define _BISON_CHAPEL_DEFINES_1_

  #include "symbol.h"

  #include <cstdio>

  class ArgSymbol;
  class BlockStmt;
  class CallExpr;
  class DefExpr;
  class EnumType;
  class Expr;
  class FnSymbol;
  class Type;

  enum   ProcIter {
    ProcIter_PROC,
    ProcIter_ITER
  };

  struct IntentExpr {
    Expr*  first;
    Expr*  second;
  };

  // The lexer only uses pch.
  // The remaining types are for parser productions
  union  YYSTYPE {
    const char*       pch;

    Vec<const char*>* vpch;
    RetTag            retTag;
    bool              b;
    IntentTag         pt;
    Expr*             pexpr;
    DefExpr*          pdefexpr;
    CallExpr*         pcallexpr;
    BlockStmt*        pblockstmt;
    Type*             ptype;
    EnumType*         penumtype;
    FnSymbol*         pfnsymbol;
    Flag              flag;
    ProcIter          procIter;
    FlagSet*          flagSet;
    IntentExpr        pIntentExpr;
  };

  #endif
#line 119 "chapel.ypp" /* yacc.c:1915  */

  #ifndef _BISON_CHAPEL_DEFINES_2_
  #define _BISON_CHAPEL_DEFINES_2_

  struct YYLTYPE {
    int         first_line;
    int         first_column;
    int         last_line;
    int         last_column;
    const char* comment;
  };

  #define YYLTYPE_IS_DECLARED 1
  #define YYLTYPE_IS_TRIVIAL  1

  #endif
#line 141 "chapel.ypp" /* yacc.c:1915  */

  #ifndef _BISON_CHAPEL_DEFINES_3_
  #define _BISON_CHAPEL_DEFINES_3_

  class ParserContext {
  public:
    ParserContext()
    {
      scanner       = 0;
      latestComment = 0;
      generatedStmt = 0;
    }

    ParserContext(yyscan_t scannerIn)
    {
      scanner       = scannerIn;
      latestComment = 0;
      generatedStmt = 0;
    }

    yyscan_t    scanner;
    const char* latestComment;
    BaseAST*    generatedStmt;
  };

  #endif

#line 158 "../include/bison-chapel.h" /* yacc.c:1915  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TIDENT = 258,
    INTLITERAL = 259,
    REALLITERAL = 260,
    IMAGLITERAL = 261,
    STRINGLITERAL = 262,
    EXTERNCODE = 263,
    TALIGN = 264,
    TATOMIC = 265,
    TBEGIN = 266,
    TBREAK = 267,
    TBY = 268,
    TCLASS = 269,
    TCOBEGIN = 270,
    TCOFORALL = 271,
    TCONFIG = 272,
    TCONST = 273,
    TCONTINUE = 274,
    TDELETE = 275,
    TDMAPPED = 276,
    TDO = 277,
    TELSE = 278,
    TENUM = 279,
    TEXPORT = 280,
    TEXTERN = 281,
    TFOR = 282,
    TFORALL = 283,
    TIF = 284,
    TIN = 285,
    TINDEX = 286,
    TINLINE = 287,
    TINOUT = 288,
    TITER = 289,
    TLABEL = 290,
    TLAMBDA = 291,
    TLET = 292,
    TLOCAL = 293,
    TMINUSMINUS = 294,
    TMODULE = 295,
    TNEW = 296,
    TNIL = 297,
    TNOINIT = 298,
    TON = 299,
    TOTHERWISE = 300,
    TOUT = 301,
    TPARAM = 302,
    TPLUSPLUS = 303,
    TPRAGMA = 304,
    TPRIMITIVE = 305,
    TPROC = 306,
    TRECORD = 307,
    TREDUCE = 308,
    TREF = 309,
    TRETURN = 310,
    TSCAN = 311,
    TSELECT = 312,
    TSERIAL = 313,
    TSINGLE = 314,
    TSPARSE = 315,
    TSUBDOMAIN = 316,
    TSYNC = 317,
    TTHEN = 318,
    TTYPE = 319,
    TUNDERSCORE = 320,
    TUNION = 321,
    TUSE = 322,
    TVAR = 323,
    TWHEN = 324,
    TWHERE = 325,
    TWHILE = 326,
    TWITH = 327,
    TYIELD = 328,
    TZIP = 329,
    TALIAS = 330,
    TAND = 331,
    TASSIGN = 332,
    TASSIGNBAND = 333,
    TASSIGNBOR = 334,
    TASSIGNBXOR = 335,
    TASSIGNDIVIDE = 336,
    TASSIGNEXP = 337,
    TASSIGNLAND = 338,
    TASSIGNLOR = 339,
    TASSIGNMINUS = 340,
    TASSIGNMOD = 341,
    TASSIGNMULTIPLY = 342,
    TASSIGNPLUS = 343,
    TASSIGNSL = 344,
    TASSIGNSR = 345,
    TBAND = 346,
    TBNOT = 347,
    TBOR = 348,
    TBXOR = 349,
    TCOLON = 350,
    TCOMMA = 351,
    TDIVIDE = 352,
    TDOT = 353,
    TDOTDOT = 354,
    TDOTDOTDOT = 355,
    TEQUAL = 356,
    TEXP = 357,
    TGREATER = 358,
    TGREATEREQUAL = 359,
    THASH = 360,
    TLESS = 361,
    TLESSEQUAL = 362,
    TMINUS = 363,
    TMOD = 364,
    TNOT = 365,
    TNOTEQUAL = 366,
    TOR = 367,
    TPLUS = 368,
    TQUESTION = 369,
    TSEMI = 370,
    TSHIFTLEFT = 371,
    TSHIFTRIGHT = 372,
    TSTAR = 373,
    TSWAP = 374,
    TIO = 375,
    TLCBR = 376,
    TRCBR = 377,
    TLP = 378,
    TRP = 379,
    TLSBR = 380,
    TRSBR = 381,
    TNOELSE = 382,
    TUPLUS = 383,
    TUMINUS = 384
  };
#endif

/* Value type.  */

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



#ifndef YYPUSH_MORE_DEFINED
# define YYPUSH_MORE_DEFINED
enum { YYPUSH_MORE = 4 };
#endif

typedef struct yypstate yypstate;

int yypush_parse (yypstate *ps, int pushed_char, YYSTYPE const *pushed_val, YYLTYPE *pushed_loc, ParserContext* context);

yypstate * yypstate_new (void);
void yypstate_delete (yypstate *ps);
/* "%code provides" blocks.  */
#line 172 "chapel.ypp" /* yacc.c:1915  */

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 333 "../include/bison-chapel.h" /* yacc.c:1915  */

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */
