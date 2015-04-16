/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 1

/* Pull parsers.  */
#define YYPULL 0




/* Copy the first part of user declarations.  */

#line 67 "bison-chapel.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "bison-chapel.h".  */
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
#line 33 "chapel.ypp" /* yacc.c:355  */

  extern int  captureTokens;
  extern char captureString[1024];
#line 44 "chapel.ypp" /* yacc.c:355  */

  #ifndef _BISON_CHAPEL_DEFINES_0_
  #define _BISON_CHAPEL_DEFINES_0_

  #define YYLEX_NEWLINE                  -1
  #define YYLEX_SINGLE_LINE_COMMENT      -2
  #define YYLEX_BLOCK_COMMENT            -3

  typedef void* yyscan_t;

  int processNewline(yyscan_t scanner);

  #endif
#line 63 "chapel.ypp" /* yacc.c:355  */

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
#line 119 "chapel.ypp" /* yacc.c:355  */

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
#line 141 "chapel.ypp" /* yacc.c:355  */

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

#line 211 "bison-chapel.cpp" /* yacc.c:355  */

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
    TDOMAIN = 278,
    TELSE = 279,
    TENUM = 280,
    TEXPORT = 281,
    TEXTERN = 282,
    TFOR = 283,
    TFORALL = 284,
    TIF = 285,
    TIN = 286,
    TINDEX = 287,
    TINLINE = 288,
    TINOUT = 289,
    TITER = 290,
    TLABEL = 291,
    TLAMBDA = 292,
    TLET = 293,
    TLOCAL = 294,
    TMINUSMINUS = 295,
    TMODULE = 296,
    TNEW = 297,
    TNIL = 298,
    TNOINIT = 299,
    TON = 300,
    TOTHERWISE = 301,
    TOUT = 302,
    TPARAM = 303,
    TPLUSPLUS = 304,
    TPRAGMA = 305,
    TPRIMITIVE = 306,
    TPROC = 307,
    TRECORD = 308,
    TREDUCE = 309,
    TREF = 310,
    TRETURN = 311,
    TSCAN = 312,
    TSELECT = 313,
    TSERIAL = 314,
    TSINGLE = 315,
    TSPARSE = 316,
    TSUBDOMAIN = 317,
    TSYNC = 318,
    TTHEN = 319,
    TTYPE = 320,
    TUNDERSCORE = 321,
    TUNION = 322,
    TUSE = 323,
    TVAR = 324,
    TWHEN = 325,
    TWHERE = 326,
    TWHILE = 327,
    TWITH = 328,
    TYIELD = 329,
    TZIP = 330,
    TALIAS = 331,
    TAND = 332,
    TASSIGN = 333,
    TASSIGNBAND = 334,
    TASSIGNBOR = 335,
    TASSIGNBXOR = 336,
    TASSIGNDIVIDE = 337,
    TASSIGNEXP = 338,
    TASSIGNLAND = 339,
    TASSIGNLOR = 340,
    TASSIGNMINUS = 341,
    TASSIGNMOD = 342,
    TASSIGNMULTIPLY = 343,
    TASSIGNPLUS = 344,
    TASSIGNSL = 345,
    TASSIGNSR = 346,
    TBAND = 347,
    TBNOT = 348,
    TBOR = 349,
    TBXOR = 350,
    TCOLON = 351,
    TCOMMA = 352,
    TDIVIDE = 353,
    TDOT = 354,
    TDOTDOT = 355,
    TDOTDOTDOT = 356,
    TEQUAL = 357,
    TEXP = 358,
    TGREATER = 359,
    TGREATEREQUAL = 360,
    THASH = 361,
    TLESS = 362,
    TLESSEQUAL = 363,
    TMINUS = 364,
    TMOD = 365,
    TNOT = 366,
    TNOTEQUAL = 367,
    TOR = 368,
    TPLUS = 369,
    TQUESTION = 370,
    TSEMI = 371,
    TSHIFTLEFT = 372,
    TSHIFTRIGHT = 373,
    TSTAR = 374,
    TSWAP = 375,
    TIO = 376,
    TLCBR = 377,
    TRCBR = 378,
    TLP = 379,
    TRP = 380,
    TLSBR = 381,
    TRSBR = 382,
    TNOELSE = 383,
    TUPLUS = 384,
    TUMINUS = 385
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
#line 172 "chapel.ypp" /* yacc.c:355  */

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 387 "bison-chapel.cpp" /* yacc.c:355  */

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 393 "bison-chapel.cpp" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 38 "chapel.ypp" /* yacc.c:359  */

  int         captureTokens;
  char        captureString[1024];
#line 180 "chapel.ypp" /* yacc.c:359  */

  #include "build.h"
  #include "DoWhileStmt.h"
  #include "driver.h"
  #include "flex-chapel.h"
  #include "ForLoop.h"
  #include "parser.h"
  #include "stmt.h"
  #include "stringutil.h"
  #include "vec.h"
  #include "WhileDoStmt.h"

  #include <cstdio>
  #include <cstdlib>
  #include <cstring>
  #include <stdint.h>

  static int query_uid = 1;

  #define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
    if (N) {                                                              \
      (Current).first_line   = (Rhs)[1].first_line;                       \
      (Current).first_column = (Rhs)[1].first_column;                     \
      (Current).last_line    = (Rhs)[N].last_line;                        \
      (Current).last_column  = (Rhs)[N].last_column;                      \
      (Current).comment      = NULL;                                      \
                                                                          \
      if ((Current).first_line)                                           \
        yystartlineno = (Current).first_line;                             \
                                                                          \
    } else  {                                                             \
      (Current) = yylloc;                                                 \
    }

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str) {
    // TODO -- should this begin with error:
    if (!chplParseString) {
      const char* yyText = yyget_text(context->scanner);

      fprintf(stderr, "%s:%d: %s", yyfilename, chplLineno, str);

      if (strlen(yyText) > 0) {
        fprintf(stderr, ": near '%s'", yyText);
      }
    } else {
      fprintf(stderr, "%s: %s", yyfilename, str);

      if (chplParseStringMsg && (strlen(chplParseStringMsg) > 0)) {
        fprintf(stderr, " %s", chplParseStringMsg);
      }
    }

    fprintf(stderr, "\n");

    clean_exit(1);
  }

#line 459 "bison-chapel.cpp" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10649

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  131
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  421
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  797

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   385

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   400,   400,   405,   406,   412,   413,   418,   419,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   453,   455,   460,   475,   476,
     481,   482,   487,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   509,   510,
     514,   518,   519,   523,   524,   528,   529,   530,   531,   532,
     533,   537,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   562,   563,   564,   565,   566,   567,   568,   574,
     580,   586,   592,   599,   609,   613,   614,   615,   616,   620,
     625,   626,   630,   632,   637,   644,   649,   650,   654,   659,
     664,   672,   673,   678,   679,   681,   686,   696,   705,   709,
     717,   718,   723,   728,   722,   753,   759,   766,   774,   782,
     790,   801,   807,   800,   835,   839,   844,   848,   856,   857,
     858,   859,   860,   861,   862,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   885,   886,   887,   888,   889,   890,
     891,   892,   893,   894,   895,   896,   900,   901,   905,   909,
     910,   911,   915,   917,   919,   921,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   939,   940,   941,   945,
     946,   950,   951,   952,   953,   954,   958,   959,   963,   964,
     968,   970,   975,   976,   980,   981,   985,   986,   990,   992,
     994,   999,  1012,  1029,  1030,  1032,  1037,  1044,  1051,  1058,
    1066,  1075,  1076,  1077,  1081,  1082,  1090,  1092,  1098,  1103,
    1105,  1107,  1112,  1114,  1116,  1123,  1124,  1125,  1129,  1130,
    1135,  1136,  1137,  1138,  1158,  1162,  1166,  1174,  1178,  1179,
    1180,  1184,  1186,  1192,  1194,  1196,  1201,  1202,  1203,  1205,
    1206,  1207,  1213,  1214,  1215,  1216,  1220,  1221,  1222,  1226,
    1227,  1231,  1232,  1236,  1237,  1241,  1242,  1243,  1244,  1245,
    1249,  1260,  1261,  1262,  1263,  1264,  1265,  1267,  1271,  1273,
    1275,  1277,  1282,  1284,  1286,  1288,  1290,  1292,  1294,  1296,
    1298,  1300,  1302,  1304,  1306,  1313,  1319,  1325,  1331,  1340,
    1345,  1353,  1354,  1355,  1356,  1357,  1358,  1359,  1360,  1365,
    1366,  1370,  1374,  1376,  1384,  1394,  1398,  1399,  1404,  1409,
    1417,  1418,  1419,  1420,  1421,  1422,  1423,  1424,  1425,  1427,
    1429,  1431,  1433,  1435,  1440,  1441,  1442,  1443,  1454,  1455,
    1459,  1460,  1461,  1465,  1466,  1467,  1475,  1476,  1477,  1481,
    1482,  1483,  1484,  1485,  1486,  1487,  1494,  1495,  1499,  1500,
    1501,  1502,  1503,  1504,  1505,  1506,  1507,  1508,  1509,  1510,
    1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,
    1521,  1525,  1526,  1527,  1528,  1529,  1530,  1534,  1535,  1536,
    1537,  1541,  1542,  1543,  1544,  1549,  1550,  1551,  1552,  1553,
    1554,  1555
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "INTLITERAL", "REALLITERAL",
  "IMAGLITERAL", "STRINGLITERAL", "EXTERNCODE", "TALIGN", "TATOMIC",
  "TBEGIN", "TBREAK", "TBY", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCONFIG",
  "TCONST", "TCONTINUE", "TDELETE", "TDMAPPED", "TDO", "TDOMAIN", "TELSE",
  "TENUM", "TEXPORT", "TEXTERN", "TFOR", "TFORALL", "TIF", "TIN", "TINDEX",
  "TINLINE", "TINOUT", "TITER", "TLABEL", "TLAMBDA", "TLET", "TLOCAL",
  "TMINUSMINUS", "TMODULE", "TNEW", "TNIL", "TNOINIT", "TON", "TOTHERWISE",
  "TOUT", "TPARAM", "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPROC",
  "TRECORD", "TREDUCE", "TREF", "TRETURN", "TSCAN", "TSELECT", "TSERIAL",
  "TSINGLE", "TSPARSE", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTYPE",
  "TUNDERSCORE", "TUNION", "TUSE", "TVAR", "TWHEN", "TWHERE", "TWHILE",
  "TWITH", "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN", "TASSIGNBAND",
  "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE", "TASSIGNEXP",
  "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNSL", "TASSIGNSR", "TBAND",
  "TBNOT", "TBOR", "TBXOR", "TCOLON", "TCOMMA", "TDIVIDE", "TDOT",
  "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP", "TGREATER", "TGREATEREQUAL",
  "THASH", "TLESS", "TLESSEQUAL", "TMINUS", "TMOD", "TNOT", "TNOTEQUAL",
  "TOR", "TPLUS", "TQUESTION", "TSEMI", "TSHIFTLEFT", "TSHIFTRIGHT",
  "TSTAR", "TSWAP", "TIO", "TLCBR", "TRCBR", "TLP", "TRP", "TLSBR",
  "TRSBR", "TNOELSE", "TUPLUS", "TUMINUS", "$accept", "program",
  "toplevel_stmt_ls", "toplevel_stmt", "pragma_ls", "stmt",
  "module_decl_stmt", "module", "block_stmt", "stmt_ls", "use_stmt",
  "assignment_stmt", "opt_ident", "ident", "do_stmt", "return_stmt",
  "class_level_stmt", "extern_block_stmt", "loop_stmt",
  "zippered_iterator", "if_stmt", "select_stmt", "when_stmt_ls",
  "when_stmt", "type_select_stmt", "class_decl_stmt", "opt_extern",
  "class_tag", "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt",
  "enum_ls", "enum_item", "lambda_decl_expr", "$@1", "$@2", "linkage_spec",
  "fn_decl_stmt", "$@3", "$@4", "fn_decl_stmt_inner", "fn_ident",
  "assignop_ident", "opt_formal_ls", "req_formal_ls", "formal_ls",
  "formal", "opt_intent_tag", "opt_this_intent_tag", "proc_or_iter",
  "opt_ret_tag", "opt_function_body_stmt", "function_body_stmt",
  "query_expr", "opt_query_expr", "var_arg_expr", "opt_where_part",
  "type_alias_decl_stmt", "type_alias_decl_stmt_inner", "opt_init_type",
  "var_decl_stmt", "opt_config", "var_decl_stmt_inner_ls",
  "var_decl_stmt_inner", "tuple_var_decl_component",
  "tuple_var_decl_stmt_inner_ls", "opt_init_expr", "opt_reindex_expr",
  "opt_type", "array_type", "opt_formal_array_elt_type",
  "formal_array_type", "opt_formal_type", "expr_ls", "tuple_component",
  "tuple_expr_ls", "opt_actual_ls", "actual_ls", "actual_expr",
  "ident_expr", "type_level_expr", "for_expr", "cond_expr", "nil_expr",
  "stmt_level_expr", "opt_task_intent_ls", "task_intent_clause",
  "task_intent_ls", "intent_expr", "io_expr", "new_expr", "let_expr",
  "expr", "lhs_expr", "fun_expr", "call_expr", "dot_expr",
  "parenthesized_expr", "literal_expr", "assoc_expr_ls", "binary_op_expr",
  "unary_op_expr", "reduce_expr", "scan_expr", "reduce_scan_op_expr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385
};
# endif

#define YYPACT_NINF -690

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-690)))

#define YYTABLE_NINF -375

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -690,    41,  2217,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    3226,    -5,    83,    -5,  5926,    12,    83,  5926,  3226,    83,
      83,   387,  4968,  5926,  5926,   -35,  -690,    83,  -690,    31,
    3226,  5926,  -690,  5926,  -690,  5926,  5926,    93,    10,  5146,
    5926,  5270,  5926,    81,    80,  3226,    16,  5348,  5926,  5926,
    -690,  -690,  5926,  -690,  -690,  6628,  5926,  5926,  -690,  5926,
    -690,  -690,  2482,  4768,  5348,  -690,  3102,  -690,  -690,    83,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,   351,  -690,   283,   344,  -690,  -690,  -690,   307,
      19,  -690,  -690,  -690,   151,   177,   179,   188,   189, 10496,
    1106,   262,   199,   225,  -690,  -690,  -690,  -690,  -690,  -690,
     349,  -690, 10496,   224,  3226,  -690,   236,  -690,   250,  5926,
    5926,  5926,  5926,  5926,  5348,  5348,   284,  -690,  -690,  -690,
    -690,  8054,   302,  -690,  -690,    83,   264,  8252,   325,   298,
    -690,  -690,    83,  -690,    83,   310,    47,  7064,  6998,  7196,
    5348,  3226,   311,    17,    71,   -15,  -690,  -690,   241,   332,
    7262,   241,  -690,  5348,  -690,  8318,  7922,  3226,  -690,  -690,
    7262, 10496,   312,  5348,  -690, 10496,  5348,   359,   327,    83,
    -690,    77, 10496,  7262,  8384,   260,  2045,   241,   260,   241,
    -690,  -690,  2606,   -31,  -690,  5926,  -690,    32,    82, 10496,
      59,  8450,   -57,   431,  -690,   323,  -690,  -690,  -690,    83,
    -690,  -690,  -690,    30,    31,    31,    31,  -690,  5926,  5926,
    5926,  5926,  5448,  5448,  5926,  5926,  5926,  5926,  5926,  5926,
     155,  6628,  5926,  5926,  5926,  5926,  5926,  5926,  5926,  5926,
    5926,  5926,  5926,  5926,  5926,  5926,  5926,  5926,  5926,  5926,
    5926,  5926,  5926,  5926,  5926,  5926,  5926,  5926,  5926,  5926,
    5926,  5926,  5348,  5348,  5448,  5448,   677,  -690,  -690,  2730,
    -690,  8120,  8186,  8516,    49,  5448,    47,   333,  -690,  -690,
    5926,    83,   339,   417,  5348,  -690,  3350,  5448,  -690,  3474,
    5448,  -690,    47,  3226,   434,   122,  -690,   335,   371,  -690,
   10496,  -690,    73,  -690,  -690,    17,  -690,   372,   345,  -690,
    1997,   395,   398,  5926,    31,  -690,   353,  -690,  -690,  -690,
    -690,  5348,   354,    11,  4590,   383,  -690,  -690,  5348,  -690,
    -690,  -690,  -690,  -690,  -690,   755,  4868,  -690,  5046,  -690,
    5448,  2358,   355,  5926,  5926,  -690,  -690,  2854,   388,   288,
      31,   174,   176,   191,   197,  7988,  1815,  1815,   100,  -690,
     100,  -690,   100,  1664,   910,  1419,  5224,   332,   260,  -690,
    -690,  -690,  2045,  6762,   100,   275,   275,  1815,   275,   275,
    5133,   260,  6762, 10530,  5133,   241,   241,   260,  8582,  8648,
    8714,  8780,  8846,  8912,  8978,  9044,  9110,  9176,  9242,  9308,
    9374,  9440,  9506,   361,   362,  -690,   100,  -690,   100,    87,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,    83,   164,  -690,
     436,  6004,  5448,  6082,  5448,  5926,  5448,  1242,    -5,  9572,
    -690,  -690,  9638,   410,     0,  -690,  -690,  5926,   172,  5926,
   10496,    51,  7328,  5926, 10496,    22,  7130,  -690,   467,  9704,
    3226,  5926,  5348,  -690,  5348,   181,  -690,    40,    33,   367,
      17,    74,  -690,  5348,  -690,   526,  5926,  5548,  -690, 10496,
    -690,  -690,    78,   369,  -690,  -690,  5348,  -690,   245,    83,
    -690, 10496,  -690,  -690,  -690,  -690,    -2,  2073,  -690, 10496,
    3226, 10496,  9770,  -690,  2978,  5348,   377,  -690,  -690,  -690,
    6683,   267,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,   677,  -690,    83,  5926,
     480,  9836,  5926,   482,  9902,   379,  6796,    47,    47,  -690,
    5926,    83,  -690,  7262,  -690,  7394,  3598,  -690,  3722,  -690,
    7460,  3846,  -690,    47,  3970,  -690,    47,  3226,  5926,  -690,
   10496,  -690, 10496,  -690,   477,  -690,    17,   413,  -690,  -690,
    -690,  -690,    23,  -690,  -690,  4590,   398,    62, 10496,  -690,
   10496,  3226,  5348,  -690,  -690,  -690,   135,    68,  -690,  4094,
     385,  4218,   390,  -690,  5926,  -690,   421,  -690,    33,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,    83,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -690,   411,   396,   396,  -690,  -690,
    -690,  9968,  6160,  6238, 10034,  6316,  6394,  6472,  6550,  -690,
    -690, 10496,  -690,  -690,  3226,  5926, 10496,  5926, 10496,  3226,
    5926, 10496,  -690,  5926, 10496,  -690,  -690, 10496,  -690,   389,
    5626,   105,   450,  -690,  5448,  4342,  -690,    39,  -690,  4466,
    5926,  -690, 10496,  3226,  5926,  -690, 10496,  3226, 10496,   448,
      66,  -690,  6683,    73,  -690,  -690,  5926,  5926,  5926,  5926,
    5926,  5926,  5926,  5926,  9704,  7526,  7592,  9704,  7658,  7724,
     413,  5926,  5926,  4668,  -690,  -690,   185,  5348,  -690,  -690,
    5926,     8,  6830,  -690,   563,  -690,  7790,  -690,  7856,  -690,
     502,    83,  -690,   535,  -690,   450,  -690,   396,   396,   194,
   10100, 10166, 10232, 10298, 10364, 10430,  3226,  3226,  3226,  3226,
     105,  5726,    75,  -690,  -690, 10496, 10496,  -690,  -690,  -690,
    6550,  3226,  3226,  -690,   -38,  -690,  -690,  -690,  5926,  5926,
    5926,  5926,  5926,  5926,  9704,  9704,  9704,  9704,  -690,  -690,
    -690,  -690,  -690,   322,  5448,  1029,   888,  9704,  9704,  -690,
    -690,  -690,  6932,  -690,  -690,  5826,  -690
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,    34,    60,   369,   370,   371,   372,
       0,   329,    58,   329,     0,   232,    58,     0,     0,     0,
     127,   233,     0,     0,     0,     0,   126,     0,   122,     0,
       0,     0,    37,     0,   320,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     417,   419,     0,   420,   421,   353,     0,     0,   418,   415,
      65,   416,     0,     0,     0,     4,     0,     5,     9,     0,
      10,    11,    13,   290,    19,    12,    14,    16,    15,    17,
      18,    67,     0,    68,   345,     0,    66,    69,    70,     0,
     354,   341,   342,   293,   291,     0,     0,   346,   347,     0,
     292,     0,   355,   356,   357,   340,   295,   294,   343,   344,
       0,    21,   300,     0,     0,   330,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,   345,   354,   291,   346,
     347,   329,   292,   355,   356,     0,     0,     0,     0,     0,
     128,    71,     0,   130,     0,     0,     0,     0,     0,     0,
     281,     0,     0,     0,     0,     0,   234,    28,   403,   338,
       0,   404,     7,   281,    63,     0,     0,     0,    62,    31,
       0,   296,     0,   281,    32,   301,     0,   223,     0,   211,
     273,     0,   272,     0,     0,   406,   352,   402,   405,   401,
      38,    40,     0,     0,   276,     0,   278,     0,     0,   277,
       0,   272,     0,     0,     6,     0,   108,   109,   110,     0,
     200,   199,   131,     0,     0,     0,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   281,   281,     0,     0,   186,    22,    23,     0,
      24,     0,     0,     0,     0,     0,     0,     0,    25,    26,
       0,     0,     0,     0,     0,    80,     0,     0,    79,     0,
       0,    86,     0,     0,    96,   290,   288,     0,   282,   283,
     289,    27,   179,   123,   239,     0,   240,   242,     0,   253,
       0,     0,   245,     0,     0,    29,     0,    64,   100,    61,
      30,   281,     0,     0,     0,   221,   218,   210,     0,    42,
      73,    33,    39,    41,   373,     0,     0,   366,     0,   368,
       0,     0,     0,     0,     0,   375,     8,     0,   111,   196,
       0,     0,     0,     0,     0,   328,   398,   397,   400,   408,
     407,   412,   411,   394,   391,   392,   393,   349,   381,   365,
     364,   363,   350,   385,   396,   390,   388,   399,   389,   387,
     379,   384,   386,   395,   378,   382,   383,   380,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   410,   409,   414,   413,   190,
     187,   188,   189,   193,   194,   195,   415,     0,     0,   332,
       0,     0,     0,     0,     0,     0,     0,   374,   329,   329,
      76,   219,     0,   120,     0,   117,   220,     0,     0,     0,
     304,     0,     0,     0,   310,     0,     0,    87,    95,     0,
       0,     0,     0,   297,     0,     0,   180,     0,   201,     0,
     243,     0,   257,     0,   252,   341,     0,     0,   236,   339,
     235,   362,     0,     0,   298,   100,     0,   225,   341,     0,
     275,   274,   348,   367,   279,   280,     0,     0,    92,   314,
       0,   376,     0,    35,     0,     0,     0,   197,   198,   132,
       0,     0,   227,   226,   228,   230,    43,    50,    51,    52,
      47,    49,    56,    57,    45,    48,    46,    44,    54,    53,
      55,   360,   361,   191,   192,   334,   186,   331,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   118,   116,     0,    94,     0,     0,    78,     0,    77,
       0,     0,    84,     0,     0,    82,     0,     0,     0,    98,
     287,   285,   286,   284,   186,   178,     0,   266,   202,   204,
     203,   205,     0,   241,   244,     0,   245,     0,   237,   246,
     247,     0,     0,    99,   101,   299,     0,     0,   222,     0,
       0,     0,     0,    93,     0,    36,   112,   113,   201,   161,
     159,   164,   171,   172,   173,   168,   170,   166,   169,   167,
     165,   175,   174,   140,   143,   141,   142,   153,   144,   157,
     149,   147,   160,   148,   146,   151,   156,   158,   145,   150,
     154,   155,   152,   162,   163,   138,   176,   176,   229,   333,
     335,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      74,   121,   119,    81,     0,     0,   303,     0,   302,     0,
       0,   309,    85,     0,   308,    83,    97,   319,   181,     0,
       0,   245,   216,   238,     0,     0,   103,     0,   104,     0,
       0,    90,   316,     0,     0,    88,   315,     0,   377,   231,
       0,   139,     0,   179,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,   307,     0,     0,   313,     0,     0,
     266,   269,   270,     0,   268,   271,   341,   212,   183,   182,
       0,     0,     0,   255,   341,   102,     0,    91,     0,    89,
     233,     0,   105,   231,   114,   216,   138,   176,   176,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,   258,     0,   213,   215,   214,   217,   208,   209,   124,
       0,     0,     0,   115,     0,   136,   137,   177,     0,     0,
       0,     0,     0,     0,   306,   305,   312,   311,   185,   184,
     260,   261,   263,   341,     0,   374,   341,   318,   317,   206,
     133,   207,     0,   262,   264,   258,   265
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -690,  -690,  -690,    -1,  -163,  1524,  -690,  -690,  1285,   180,
    -690,  -690,   513,  1674,   175,  -661,  -602,  -690,  -690,    37,
    -690,  -690,    56,  -690,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -690,    -8,   336,  -690,  -690,  -690,  -690,  -690,  -690,
    -690,  -157,  -153,  -587,  -690,  -159,   -19,  -258,  -690,  -690,
     -52,  -690,  -213,   493,  -690,  -197,  -176,  -690,  -132,  -690,
    -690,  -690,  -158,   249,  -690,  -300,  -570,  -690,  -433,  -322,
    -601,  -689,  -145,     1,    94,  -690,  -146,  -690,   119,   254,
    -288,  -690,  -690,   548,  -690,    -4,  -137,  -690,    48,  -690,
     826,   873,   -10,   912,  -690,  1058,  1198,  -690,  -690,  -690,
    -690,  -690,  -690,  -690,  -251
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   191,    66,   448,    68,    69,    70,   192,
      71,    72,   116,    73,   169,    74,    75,    76,    77,   535,
      78,    79,   472,   584,    80,    81,    82,   209,   496,   689,
      83,   434,   435,   126,   152,   458,    85,    86,   349,   598,
     499,   636,   637,   694,   303,   455,   456,   457,   500,   212,
     572,   790,   759,   180,   754,   718,   721,    87,   178,   325,
      88,    89,   155,   156,   307,   308,   468,   311,   312,   464,
     781,   715,   671,   193,   197,   198,   297,   298,   299,   127,
      91,    92,    93,   128,    95,   114,   115,   418,   419,    96,
     129,   130,    99,   132,   101,   133,   134,   104,   105,   202,
     106,   107,   108,   109,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,    65,   477,   277,   131,   459,   673,   137,   417,   118,
     282,   292,   147,   148,   149,   420,   313,   316,    39,     5,
       5,   158,   465,   159,   309,   160,   161,   322,   576,   165,
     166,   170,   171,     5,     5,   175,   478,   182,   183,   184,
     344,     3,   185,     5,   551,   186,   187,   188,   181,   189,
     695,   568,   182,   199,   201,   351,   352,   353,   354,   146,
     758,   167,   782,   342,    39,   200,   328,   309,   113,   167,
     345,   113,   309,   546,   176,   309,  -186,   135,   789,  -250,
     426,   569,   314,   304,   269,   350,     5,   734,   570,   150,
     340,   409,   334,   674,  -250,   113,   794,   541,   571,   674,
     162,   719,  -250,   758,   410,  -250,   784,   411,   328,   112,
     271,   272,   273,   175,   182,   201,   403,   404,   523,   575,
     412,   413,  -250,   542,   581,   589,   274,   276,   414,   336,
     269,   763,   113,   475,   163,  -322,   328,  -250,   415,   672,
     300,   305,   524,   172,   269,  -250,   328,  -248,   582,  -250,
     765,   766,  -250,   300,   153,   153,   328,   337,     5,   328,
     574,   269,   575,   300,   566,   328,   182,   310,  -250,   269,
     575,  -250,   328,   269,   328,   473,   427,   323,   369,   338,
     779,   581,  -250,   467,   793,   335,   341,  -250,  -250,   675,
    -250,   333,   501,   329,   796,   679,   228,  -186,   451,   230,
     452,   583,   785,   233,   173,   582,   717,   339,   355,   356,
     357,   358,   360,   362,   363,   364,   365,   366,   367,   368,
     370,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   300,   300,   406,   408,    90,   735,   678,   359,
     361,   526,   221,  -267,    90,   429,   669,  -321,   417,   328,
     432,   314,    90,   314,   182,   420,   440,   442,   564,   444,
     446,   221,  -267,   449,    90,   438,  -267,   465,   314,   527,
     502,   564,   503,   217,   314,   222,   221,   544,   223,    90,
     218,   405,   407,   469,  -326,  -327,   565,   504,   553,   556,
    -267,   300,   428,   505,   222,  -324,    90,   223,   481,   767,
      90,   285,   288,   291,   441,   213,   199,   445,   199,   222,
     487,   489,   223,   491,   492,   315,   497,   228,    84,   229,
     230,  -323,  -224,   498,   233,   320,    84,   588,   266,   590,
     592,   240,   268,   723,    84,   214,   228,   723,   330,   230,
     246,  -224,   215,   233,   314,   206,    84,   225,    90,   226,
     227,   228,   269,   229,   230,   231,   216,   486,   233,   210,
     278,    84,   716,   638,   239,   240,   262,   724,   263,   243,
       5,   724,   244,   245,   246,   141,   211,   280,    84,  -325,
    -259,  -107,    84,   264,   207,    90,   265,  -359,  -359,  -359,
    -359,   440,   531,   444,   534,   449,   536,   489,   208,  -259,
     281,    90,  -129,  -259,   537,   538,  -358,   543,  -358,   545,
     484,   230,   485,   550,   284,   302,   321,   324,   346,  -129,
    -107,   560,   562,   326,   300,   347,    90,  -259,   437,   431,
      84,   430,   142,   201,  -107,   436,   578,   580,   450,   530,
     453,   533,  -106,   783,   577,    15,   201,   447,   454,   460,
     461,   466,   786,    19,    20,   730,   467,   587,   471,   474,
     479,    26,   490,  -125,   495,   182,   521,    84,   540,   522,
     528,   557,   573,   333,   585,   409,   596,   783,    37,   597,
    -125,  -106,   642,    84,   645,     5,   647,   783,   410,   670,
     692,   411,   683,   731,   710,  -106,  -107,   687,   328,   641,
     693,   720,   644,    90,   412,   413,   733,   494,    84,   136,
     651,   586,   414,   652,   739,   737,   656,  -129,   658,   738,
      90,   661,   415,    90,   664,   668,   690,    90,   667,  -106,
      94,   791,    15,   778,  -129,  -107,   196,  -251,    94,   764,
      19,    20,   730,   470,    60,   750,    94,   142,    26,  -107,
    -125,   732,   182,   563,   639,     0,     0,     0,    94,   682,
       0,   686,  -251,   677,   688,   203,     0,  -125,  -106,     0,
       0,     0,     0,    94,  -254,    90,     0,  -251,     0,     0,
     731,    90,  -106,     0,  -251,    84,     0,     0,     0,     0,
      94,     0,     0,     0,    94,     0,   547,   549,     0,  -254,
     552,   555,    84,  -251,     0,    84,     0,     0,     0,    84,
       0,     0,   656,   658,  -254,   661,   664,   682,   686,     0,
       0,  -254,  -251,   296,   704,   705,     0,   706,  -251,   707,
     708,    60,     0,   709,     0,     0,   296,     0,     0,     0,
    -254,     0,    94,     0,   722,   489,   296,     0,     0,   489,
     726,   525,     0,     0,   728,     0,     0,    84,     0,  -254,
       0,     0,     0,    84,     0,  -254,   704,   740,   741,   707,
     742,   743,   744,   745,     0,   409,     0,     0,     0,    94,
       0,   171,   175,   201,    90,     0,     0,   755,   410,     0,
     756,   411,   649,   650,   752,    94,     0,     0,   653,     0,
       0,     0,     0,     0,   412,   413,     0,     0,   662,     0,
       0,   665,   414,     0,     0,     0,   774,   775,   776,   777,
      94,     0,   415,     0,    90,     0,     0,     0,    90,     0,
     686,   787,   788,     0,    50,   296,   296,     0,   774,   775,
     776,   777,   787,   788,   219,     0,     0,     0,   220,    51,
       0,    53,    54,     0,   792,   489,   221,     0,     0,     0,
       0,     0,   640,     0,     0,   686,    84,     0,     0,     0,
      58,   416,     0,     0,     0,     0,    61,     0,     0,     0,
      90,     0,    90,     0,     0,    90,     0,     0,    90,   222,
       0,    90,   223,     0,   296,     0,     0,    94,     0,     0,
       0,   480,     0,     0,     0,     0,    84,     0,    97,   196,
      84,   196,   224,     0,    94,    90,    97,    94,     0,     0,
       0,    94,     0,    90,    97,    90,     0,   225,     0,   226,
     227,   228,   725,   229,   230,   231,    97,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,    97,   244,   245,   246,    98,     0,     0,     0,     0,
     482,     0,    84,    98,    84,     0,     0,    84,    97,    94,
      84,    98,    97,    84,     0,    94,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,    90,     0,
       0,     0,     0,    90,   100,     0,     0,    84,    98,  -256,
       0,     0,   100,     0,     0,    84,     0,    84,     0,     0,
     100,   221,     0,     0,     0,    98,     0,    90,     0,    98,
      97,    90,   100,     0,  -256,   561,     0,   296,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,     0,  -256,
       0,     0,     0,     0,   222,     0,  -256,   223,     0,     0,
       0,     0,     0,     0,   100,     0,     0,    97,   100,     0,
       0,     0,     0,     0,     0,  -256,     0,    98,     0,     0,
      84,     0,     0,    97,     0,    84,     0,     0,    94,     0,
      90,    90,    90,    90,  -256,     0,   228,     0,   229,   230,
    -256,     0,     0,   233,     0,    90,    90,     0,    97,    84,
     240,     0,     0,    84,    98,     0,   100,   244,   245,   246,
       0,     0,     5,     6,     7,     8,     9,     0,    94,   119,
      98,     0,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   121,   122,
     102,    25,     0,   100,     0,    98,    28,    29,   102,    31,
       0,    33,    34,     0,     0,     0,   102,     0,    36,   100,
      38,     0,    84,    84,    84,    84,     0,     0,   102,    42,
      43,    44,   123,     0,    94,    97,    94,    84,    84,    94,
       0,     0,    94,   102,   100,    94,     0,  -258,     0,     0,
       0,     0,    97,     0,     0,    97,     0,     0,     0,    97,
     102,     0,    52,     0,   102,     0,  -258,     0,     0,    94,
    -258,     0,     0,     0,     0,     0,     0,    94,     0,    94,
      57,     0,    98,     0,   179,     0,     0,     0,     0,     0,
       0,   124,     0,    63,  -258,   713,     0,     0,     0,    98,
       0,     0,    98,   714,     0,     0,    98,    97,     0,     0,
       0,     0,   102,    97,     0,     0,     0,     0,     0,     0,
       0,   100,     0,     0,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   100,     0,
     103,   100,    94,     0,     0,   100,     0,    94,   103,   102,
     753,     0,     0,     0,    98,     0,   103,     0,     0,     0,
      98,     0,     0,     0,     0,   102,   261,  -336,   103,     0,
    -358,    94,  -358,     0,     0,    94,     0,     0,     0,     0,
       0,     0,     0,   103,   780,     5,     6,     7,     8,     9,
     102,     0,   119,   100,     0,     0,     0,     0,     0,   100,
     103,     0,     0,     0,   103,     0,     0,     0,     0,     0,
     120,   121,   122,     0,    25,     0,    97,     0,   780,    28,
      29,     0,    31,     0,    33,    34,     0,     0,   780,     0,
       0,    36,     0,    38,    94,    94,    94,    94,     0,     0,
       0,     0,    42,    43,    44,   123,     0,     0,     0,    94,
      94,     0,   103,     0,     0,     0,    97,     0,     0,     0,
      97,     0,     0,    98,     0,     0,   168,   102,     0,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,   102,     0,   103,
       0,   102,     0,    57,     0,     0,     0,     0,     0,     0,
       0,     0,   100,    98,     0,   103,    63,    98,   125,     0,
       0,     0,    97,     0,    97,     0,     0,    97,     0,     0,
      97,     0,     0,    97,     0,     0,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,     0,     0,   102,
       0,     0,   100,   270,     0,   102,   100,    97,     0,     0,
       0,     0,     0,     0,     0,    97,     0,    97,     0,    98,
       0,    98,     0,     0,    98,     0,     0,    98,     0,     0,
      98,   168,   168,   168,   294,     0,     0,     0,     0,     0,
     221,     0,     0,     0,     0,   168,     0,     0,     0,     0,
       0,     0,     0,     0,    98,   168,     0,     0,   100,     0,
     100,     0,    98,   100,    98,     0,   100,   103,   168,   100,
       0,     0,     0,   222,     0,     0,   223,     0,     0,     0,
      97,     0,     0,     0,   103,    97,     0,   103,     0,     0,
       0,   103,     0,   100,     0,     0,     0,     0,     0,     0,
       0,   100,     0,   100,     0,     0,     0,     0,   102,    97,
       0,   225,     0,    97,   227,   228,     0,   229,   230,     0,
       0,     0,   233,     0,     0,     0,    67,    98,     0,   240,
       0,     0,    98,     0,   111,     0,   244,   245,   246,   103,
       0,     0,   138,     0,     0,   103,     0,     0,   102,     0,
       0,     0,   102,     0,   157,     0,    98,     0,     0,     0,
      98,   168,     0,     0,     0,     0,   100,     0,     0,   174,
       0,   100,    97,    97,    97,    97,     0,   168,     0,     0,
       0,     0,     0,     0,     0,     0,    67,    97,    97,     0,
     204,     0,     0,     0,     0,   100,     0,     0,     0,   100,
       0,     0,     0,     0,   102,     0,   102,     0,     0,   102,
       0,     0,   102,     0,     0,   102,     0,     0,     0,    98,
      98,    98,    98,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    98,     0,     0,   267,   102,
       0,     0,     0,     0,     0,     0,     0,   102,   103,   102,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   100,
     100,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   100,   301,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   221,   117,     0,   103,     0,
     117,   319,   103,   139,   140,   143,     0,     0,     0,     0,
       0,   151,     0,   154,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,    67,   102,   222,     0,
     177,   223,     0,     0,     0,     0,   168,   168,     0,     0,
     168,   168,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   102,     0,   205,   103,   102,   103,     0,     0,   103,
       0,     0,   103,     0,     0,   103,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
       0,   237,   238,   239,   240,     0,   241,     0,   243,   103,
       0,   244,   245,   246,     0,     0,     0,   103,     0,   103,
       0,     0,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,   102,   102,   102,     0,   177,
     319,     0,     0,   319,     0,     0,   177,     0,   283,   102,
     102,     0,   168,   168,   295,     0,     0,   306,   168,     0,
     294,     0,     0,     0,     0,   294,   221,   295,   168,     0,
       0,   168,     0,     0,     0,     0,     0,   295,     0,     0,
       0,     0,   103,   327,     0,     0,     0,   103,     0,     0,
       0,     0,     0,     0,     0,   488,     0,     0,     0,   222,
       0,    67,   223,     0,     0,     0,     0,     0,     0,     0,
       0,   103,     0,   348,     0,   103,     0,   154,   154,   154,
     154,     0,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,     0,   237,   238,   239,   240,     0,   241,   242,   243,
       0,     0,   244,   245,   246,     0,   295,   295,     0,     0,
       0,     0,     0,     0,   103,   103,   103,   103,     0,     0,
       0,     0,     0,     0,     0,   433,     0,     0,     0,   103,
     103,     0,   168,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   559,     0,     0,     0,     0,   306,
       0,     0,     0,     0,     0,     0,     0,     0,   154,     0,
     294,   294,     0,   294,   294,   295,     0,     0,   462,     0,
       5,     6,     7,     8,     9,     0,   757,   119,     0,     0,
       0,   294,     0,   294,   593,     0,     0,     0,    67,     0,
       0,     0,     0,     0,   154,   120,   121,   122,     0,    25,
       0,     0,     0,     0,    28,    29,     0,    31,     0,    33,
      34,     0,     0,     0,     0,     0,    36,     0,    38,   757,
       0,     0,     0,     0,     0,     0,     0,    42,    43,    44,
     123,     0,     0,     0,     0,     0,   221,     0,     0,     0,
     319,     0,   319,     0,    50,   319,     0,     0,   319,     0,
       0,   666,   219,     0,     0,     0,   220,     0,     0,    51,
      52,    53,    54,     0,   221,     0,     0,    55,     0,   222,
       0,     0,   223,     0,     0,   676,    56,     0,    57,     0,
      58,    59,     0,   681,     0,   685,    61,     0,     0,   124,
       0,    63,     0,   463,     0,     0,     0,   222,   295,     0,
     223,   567,     0,     0,   306,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,     0,   113,     0,   233,     0,
     224,     0,     0,   177,   239,   240,     0,     0,     0,   243,
       0,     0,   244,   245,   246,   225,     0,   226,   227,   228,
       0,   229,   230,   231,   635,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,     0,     0,     0,     0,     0,     0,     0,
     591,     0,     0,     0,     0,     0,     0,   727,     0,     0,
       0,   729,     0,     0,     0,   433,     0,    -2,     4,     0,
       5,     6,     7,     8,     9,     0,     0,    10,    11,    12,
       0,  -106,    13,    14,    15,  -231,    16,    17,     0,    18,
     306,     0,    19,    20,    21,    22,    23,    24,     0,    25,
      26,     0,  -125,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    35,     0,     0,  -231,    36,    37,    38,  -125,
    -106,     0,  -231,    39,     0,    40,    41,    42,    43,    44,
      45,     0,    46,     0,  -106,    47,  -231,     0,   691,    48,
       0,    49,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,    57,     0,
      58,    59,     0,    60,     0,     0,    61,     0,     0,    62,
       0,    63,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     5,     6,     7,     8,     9,   736,  -374,    10,    11,
      12,  -374,  -106,    13,    14,    15,  -231,    16,    17,  -374,
      18,     0,  -374,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,  -125,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    35,   143,   177,  -231,    36,     0,    38,
    -125,  -106,  -374,  -231,    39,  -374,    40,    41,    42,    43,
      44,    45,     0,    46,     0,  -106,    47,  -231,     0,     0,
      48,     0,    49,     0,     0,  -374,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -374,    52,  -374,  -374,  -374,  -374,  -374,  -374,  -374,     0,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,  -374,    57,
    -374,  -374,  -374,     0,    60,  -374,  -374,  -374,     0,     0,
      62,  -374,    63,     4,    64,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,     0,  -106,    13,    14,    15,
    -231,    16,    17,     0,    18,     0,     0,    19,    20,    21,
      22,    23,    24,     0,    25,    26,     0,  -125,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    35,     0,     0,
    -231,    36,    37,    38,  -125,  -106,     0,  -231,    39,     0,
      40,    41,    42,    43,    44,    45,     0,    46,     0,  -106,
      47,  -231,     0,     0,    48,     0,    49,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,    57,     0,    58,    59,   179,    60,     0,
       0,    61,     0,     0,    62,   190,    63,     4,    64,     5,
       6,     7,     8,     9,     0,     0,    10,    11,    12,     0,
    -106,    13,    14,    15,  -231,    16,    17,     0,    18,     0,
       0,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,  -125,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    35,     0,     0,  -231,    36,    37,    38,  -125,  -106,
       0,  -231,    39,     0,    40,    41,    42,    43,    44,    45,
       0,    46,     0,  -106,    47,  -231,     0,     0,    48,     0,
      49,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,    57,     0,    58,
      59,     0,    60,     0,     0,    61,     0,     0,    62,   332,
      63,     4,    64,     5,     6,     7,     8,     9,     0,     0,
      10,    11,    12,     0,  -106,    13,    14,    15,  -231,    16,
      17,     0,    18,     0,     0,    19,    20,    21,    22,    23,
      24,     0,    25,    26,     0,  -125,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    35,     0,     0,  -231,    36,
      37,    38,  -125,  -106,     0,  -231,    39,     0,    40,    41,
      42,    43,    44,    45,     0,    46,     0,  -106,    47,  -231,
       0,     0,    48,     0,    49,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,    57,     0,    58,    59,     0,    60,     0,     0,    61,
       0,     0,    62,   190,    63,     4,    64,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,     0,  -106,    13,
      14,    15,  -231,    16,    17,     0,    18,     0,     0,    19,
      20,    21,    22,    23,    24,     0,    25,    26,     0,  -125,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    35,
       0,     0,  -231,    36,    37,    38,  -125,  -106,     0,  -231,
      39,     0,    40,    41,    42,    43,    44,    45,     0,    46,
       0,  -106,    47,  -231,     0,     0,    48,     0,    49,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,    57,     0,    58,    59,     0,
      60,     0,     0,    61,     0,     0,    62,   493,    63,     4,
      64,     5,     6,     7,     8,     9,     0,     0,    10,    11,
      12,     0,  -106,    13,    14,    15,  -231,    16,    17,     0,
      18,     0,     0,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,  -125,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    35,     0,     0,  -231,    36,    37,    38,
    -125,  -106,     0,  -231,    39,     0,    40,    41,    42,    43,
      44,    45,     0,    46,     0,  -106,    47,  -231,     0,     0,
      48,     0,    49,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    57,
       0,    58,    59,     0,    60,     0,     0,    61,     0,     0,
      62,   595,    63,     4,    64,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,     0,  -106,    13,    14,    15,
    -231,    16,    17,     0,    18,     0,     0,    19,    20,    21,
      22,    23,    24,     0,    25,    26,     0,  -125,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    35,     0,     0,
    -231,    36,   203,    38,  -125,  -106,     0,  -231,    39,     0,
      40,    41,    42,    43,    44,    45,     0,    46,     0,  -106,
      47,  -231,     0,     0,    48,     0,    49,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,    57,     0,    58,    59,     0,    60,     0,
       0,    61,     0,     0,    62,     0,    63,     4,    64,     5,
       6,     7,     8,     9,     0,     0,    10,    11,    12,     0,
    -106,    13,    14,    15,  -231,    16,    17,     0,    18,     0,
       0,    19,    20,    21,    22,    23,    24,     0,    25,    26,
       0,  -125,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    35,     0,     0,  -231,    36,     0,    38,  -125,  -106,
       0,  -231,    39,     0,    40,    41,    42,    43,    44,    45,
       0,    46,     0,  -106,    47,  -231,     0,     0,    48,     0,
      49,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,    57,     0,    58,
      59,     0,    60,     0,     0,    61,     0,     0,    62,     0,
      63,     4,    64,     5,     6,     7,     8,     9,     0,     0,
      10,    11,    12,     0,  -106,    13,    14,    15,  -231,    16,
      17,     0,    18,     0,     0,    19,    20,    21,    22,    23,
     439,     0,    25,    26,     0,  -125,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    35,     0,     0,  -231,    36,
       0,    38,  -125,  -106,     0,  -231,    39,     0,    40,    41,
      42,    43,    44,    45,     0,    46,     0,  -106,    47,  -231,
       0,     0,    48,     0,    49,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,    57,     0,    58,    59,     0,    60,     0,     0,    61,
       0,     0,    62,     0,    63,     4,    64,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,     0,  -106,    13,
      14,    15,  -231,    16,    17,     0,    18,     0,     0,    19,
      20,    21,    22,    23,   443,     0,    25,    26,     0,  -125,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    35,
       0,     0,  -231,    36,     0,    38,  -125,  -106,     0,  -231,
      39,     0,    40,    41,    42,    43,    44,    45,     0,    46,
       0,  -106,    47,  -231,     0,     0,    48,     0,    49,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,    57,     0,    58,    59,     0,
      60,     0,     0,    61,     0,     0,    62,     0,    63,     4,
      64,     5,     6,     7,     8,     9,     0,     0,    10,    11,
      12,     0,  -106,    13,    14,    15,  -231,    16,    17,     0,
      18,     0,     0,    19,    20,    21,    22,    23,   655,     0,
      25,    26,     0,  -125,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    35,     0,     0,  -231,    36,     0,    38,
    -125,  -106,     0,  -231,    39,     0,    40,    41,    42,    43,
      44,    45,     0,    46,     0,  -106,    47,  -231,     0,     0,
      48,     0,    49,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    57,
       0,    58,    59,     0,    60,     0,     0,    61,     0,     0,
      62,     0,    63,     4,    64,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,     0,  -106,    13,    14,    15,
    -231,    16,    17,     0,    18,     0,     0,    19,    20,    21,
      22,    23,   657,     0,    25,    26,     0,  -125,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    35,     0,     0,
    -231,    36,     0,    38,  -125,  -106,     0,  -231,    39,     0,
      40,    41,    42,    43,    44,    45,     0,    46,     0,  -106,
      47,  -231,     0,     0,    48,     0,    49,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,    57,     0,    58,    59,     0,    60,     0,
       0,    61,     0,     0,    62,     0,    63,     4,    64,     5,
       6,     7,     8,     9,     0,     0,    10,    11,    12,     0,
    -106,    13,    14,    15,  -231,    16,    17,     0,    18,     0,
       0,    19,    20,    21,    22,    23,   660,     0,    25,    26,
       0,  -125,    27,    28,    29,    30,    31,    32,    33,    34,
       0,    35,     0,     0,  -231,    36,     0,    38,  -125,  -106,
       0,  -231,    39,     0,    40,    41,    42,    43,    44,    45,
       0,    46,     0,  -106,    47,  -231,     0,     0,    48,     0,
      49,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,    56,     0,    57,     0,    58,
      59,     0,    60,     0,     0,    61,     0,     0,    62,     0,
      63,     4,    64,     5,     6,     7,     8,     9,     0,     0,
      10,    11,    12,     0,  -106,    13,    14,    15,  -231,    16,
      17,     0,    18,     0,     0,    19,    20,    21,    22,    23,
     663,     0,    25,    26,     0,  -125,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    35,     0,     0,  -231,    36,
       0,    38,  -125,  -106,     0,  -231,    39,     0,    40,    41,
      42,    43,    44,    45,     0,    46,     0,  -106,    47,  -231,
       0,     0,    48,     0,    49,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,     0,     0,     0,    56,
       0,    57,     0,    58,    59,     0,    60,     0,     0,    61,
       0,     0,    62,     0,    63,     4,    64,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,     0,  -106,    13,
      14,    15,  -231,    16,    17,     0,    18,     0,     0,    19,
      20,    21,    22,    23,   680,     0,    25,    26,     0,  -125,
      27,    28,    29,    30,    31,    32,    33,    34,     0,    35,
       0,     0,  -231,    36,     0,    38,  -125,  -106,     0,  -231,
      39,     0,    40,    41,    42,    43,    44,    45,     0,    46,
       0,  -106,    47,  -231,     0,     0,    48,     0,    49,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,    57,     0,    58,    59,     0,
      60,     0,     0,    61,     0,     0,    62,     0,    63,     4,
      64,     5,     6,     7,     8,     9,     0,     0,    10,    11,
      12,     0,  -106,    13,    14,    15,  -231,    16,    17,     0,
      18,     0,     0,    19,    20,    21,    22,    23,   684,     0,
      25,    26,     0,  -125,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    35,     0,     0,  -231,    36,     0,    38,
    -125,  -106,     0,  -231,    39,     0,    40,    41,    42,    43,
      44,    45,     0,    46,     0,  -106,    47,  -231,     0,     0,
      48,     0,    49,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    57,
       0,    58,    59,     0,    60,     0,     0,    61,     0,     0,
      62,     0,    63,   462,    64,     5,     6,     7,     8,     9,
       0,  -374,   119,     0,     0,  -374,     0,     0,     0,     0,
       0,     0,     0,  -374,     0,     0,     0,     0,     0,     0,
     120,   121,   122,     0,    25,     0,     0,     0,     0,    28,
      29,     0,    31,     0,    33,    34,     0,     0,     0,     0,
       0,    36,     0,    38,     0,     0,  -374,     0,     0,  -374,
       0,     0,    42,    43,    44,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -249,  -374,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -374,    52,  -374,  -374,  -374,     0,
    -374,  -374,  -374,     0,  -374,  -374,  -374,  -374,  -374,  -374,
    -374,  -374,  -374,    57,  -374,  -374,  -374,     0,     0,  -374,
    -374,  -374,     0,     0,   124,     0,    63,   462,   476,     5,
       6,     7,     8,     9,     0,  -374,   119,     0,     0,  -374,
       0,     0,     0,     0,     0,     0,     0,  -374,     0,     0,
       0,     0,     0,     0,   120,   121,   122,     0,    25,     0,
       0,     0,     0,    28,    29,     0,    31,     0,    33,    34,
       0,     0,     0,     0,     0,    36,     0,    38,     0,     0,
    -374,     0,     0,  -374,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -374,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -374,    52,
    -374,  -374,  -374,     0,  -374,  -374,  -374,     0,  -374,  -374,
    -374,  -374,  -374,  -374,  -374,  -374,  -374,    57,  -374,  -374,
    -374,     0,     0,  -374,  -374,  -374,     0,     0,   124,     0,
      63,   462,   476,     5,     6,     7,     8,     9,     0,     0,
     119,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   120,   121,
     122,     0,    25,     0,     0,     0,     0,    28,    29,     0,
      31,     0,    33,    34,     0,     0,     0,     0,     0,    36,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   119,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,   120,   121,   122,    56,
      25,    57,     0,    58,    59,    28,    29,     0,    31,    61,
      33,    34,   124,     0,    63,     0,   476,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     5,     6,     7,     8,     9,     0,    56,   119,    57,
       0,    58,    59,   179,     0,     0,     0,    61,     0,     0,
     124,     0,    63,     0,   125,   751,   120,   121,   122,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,     0,     0,     0,     0,     0,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,   194,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,   195,
       0,     5,     6,     7,     8,     9,     0,    56,   119,    57,
       0,    58,    59,   179,     0,     0,     0,    61,     0,     0,
     124,     0,    63,     0,   125,     0,   120,   121,   122,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,     0,     0,     0,     0,     0,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,   194,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     5,     6,     7,     8,     9,     0,    56,   119,    57,
       0,    58,    59,   179,     0,     0,     0,    61,     0,     0,
     124,     0,    63,   483,   125,     0,   120,   121,   122,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,     0,     0,     0,     0,   144,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,     0,    50,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,   119,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,   120,   121,   122,    56,    25,    57,
       0,    58,    59,    28,    29,     0,    31,    61,    33,    34,
     124,     0,    63,     0,   125,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,   194,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     5,
       6,     7,     8,     9,   221,    56,   119,    57,     0,    58,
      59,   179,     0,     0,     0,    61,     0,     0,   124,     0,
      63,     0,   125,     0,   120,   121,   122,     0,    25,     0,
       0,     0,     0,    28,    29,     0,    31,   222,    33,    34,
     223,     0,     0,     0,     0,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,   225,     0,   226,   227,   228,
       0,   229,   230,     0,     0,     0,   233,     0,    51,    52,
      53,    54,     0,   240,     0,   221,    55,     0,     0,     0,
     244,   245,   246,     0,     0,    56,     0,    57,     0,    58,
      59,     0,   164,     0,     0,    61,     0,     0,   124,     0,
      63,     0,   125,     5,     6,     7,     8,     9,   222,     0,
     119,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     0,     0,     0,   120,   121,
     122,     0,    25,     0,     0,     0,     0,    28,    29,     0,
      31,     0,    33,    34,     0,     0,   225,     0,     0,    36,
     228,    38,   229,   230,     0,     0,     0,   233,     0,     0,
      42,    43,    44,   123,   240,     0,     0,     0,     0,     0,
       0,   244,   245,   246,     0,     0,     0,    50,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   119,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,   120,   121,   122,    56,
      25,    57,     0,    58,    59,    28,    29,     0,    31,    61,
      33,    34,    62,     0,    63,     0,   125,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     5,     6,     7,     8,     9,     0,    56,   119,    57,
       0,    58,    59,   179,     0,     0,     0,    61,     0,     0,
     124,     0,    63,     0,   125,     0,   120,   121,   122,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,     0,     0,     0,     0,     0,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   145,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     5,     6,     7,     8,     9,     0,    56,   119,    57,
       0,    58,    59,     0,     0,     0,     0,    61,     0,     0,
     124,     0,    63,     0,   125,     0,   120,   121,   122,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,   579,     0,     0,     0,     0,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,   119,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,   120,   121,   122,    56,    25,    57,
       0,    58,    59,    28,    29,     0,    31,    61,    33,    34,
     124,     0,    63,     0,   125,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,   711,    43,    44,   712,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     5,
       6,     7,     8,     9,     0,    56,   119,    57,     0,    58,
      59,   179,     0,     0,     0,    61,     0,     0,   124,     0,
      63,     0,   713,     0,   120,   121,   122,     0,    25,     0,
       0,     0,     0,    28,    29,     0,    31,     0,    33,    34,
       0,     0,     0,     0,     0,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     5,
       6,     7,     8,     9,     0,    56,   119,    57,     0,    58,
      59,   179,     0,     0,     0,    61,     0,     0,   124,     0,
      63,     0,   713,     0,   120,   121,   703,     0,    25,     0,
       0,     0,     0,    28,    29,     0,    31,     0,    33,    34,
       0,     0,     0,     0,     0,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     5,
       6,     7,     8,     9,     0,    56,   119,    57,     0,    58,
      59,   179,     0,     0,     0,    61,     0,     0,   124,     0,
      63,     0,   125,     0,   120,   121,   122,     0,    25,     0,
       0,     0,     0,    28,    29,     0,    31,     0,    33,    34,
       0,     0,     0,     0,     0,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,   119,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,   120,   121,   529,    56,    25,    57,     0,    58,
      59,    28,    29,     0,    31,    61,    33,    34,   124,     0,
      63,     0,   125,    36,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,   119,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
     120,   121,   532,    56,    25,    57,     0,    58,    59,    28,
      29,     0,    31,    61,    33,    34,   124,     0,    63,     0,
     125,    36,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
     119,     0,     0,     0,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,   120,   121,
     697,    56,    25,    57,     0,    58,    59,    28,    29,     0,
      31,    61,    33,    34,   124,     0,    63,     0,   125,    36,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   119,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,   120,   121,   698,    56,
      25,    57,     0,    58,    59,    28,    29,     0,    31,    61,
      33,    34,   124,     0,    63,     0,   125,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,   119,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,   120,   121,   700,    56,    25,    57,
       0,    58,    59,    28,    29,     0,    31,    61,    33,    34,
     124,     0,    63,     0,   125,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,   119,     0,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,   120,   121,   701,    56,    25,    57,     0,    58,
      59,    28,    29,     0,    31,    61,    33,    34,   124,     0,
      63,     0,   125,    36,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,   119,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
     120,   121,   702,    56,    25,    57,     0,    58,    59,    28,
      29,     0,    31,    61,    33,    34,   124,     0,    63,     0,
     125,    36,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
     119,     0,     0,     0,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,   120,   121,
     703,    56,    25,    57,     0,    58,    59,    28,    29,     0,
      31,    61,    33,    34,   124,     0,    63,     0,   125,    36,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   119,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,   120,   121,   122,    56,
      25,    57,     0,    58,    59,    28,    29,     0,    31,    61,
      33,    34,   124,     0,    63,     0,   125,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     5,     0,    42,    43,
      44,   123,   599,     0,     0,     0,   600,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    57,
       0,     0,    59,     0,     0,     0,     0,    61,     0,     0,
     124,     0,    63,     0,   125,     0,     0,     0,     0,     0,
       0,   601,   602,   603,   604,   605,   606,     0,     0,   607,
     608,   609,   610,   611,   612,   613,   614,   615,   616,     0,
       0,   617,     0,   221,     0,   618,   619,   620,   621,   622,
     623,   624,   625,   626,   627,   628,     0,   629,     0,     0,
     630,   631,   632,   633,   634,   219,     0,     0,     0,   220,
       0,     0,     0,     0,     0,     0,   222,   221,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,     0,
     222,   221,     0,   223,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,     0,   233,   234,   235,     0,   237,
     238,   239,   240,   224,     0,     0,   243,     0,     0,   244,
     245,   246,     0,     0,   222,     0,     0,   223,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   224,   241,   242,
     243,     0,     0,   244,   245,   246,     0,     0,     0,     0,
       0,     0,   225,   648,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   219,   241,   242,   243,   220,     0,   244,   245,   246,
       0,     0,     0,   221,     0,     0,     0,   760,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
     289,     0,     0,     0,   225,     0,   226,   227,   228,   290,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,     0,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,   795,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   113,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,   286,     0,     0,     0,
     225,     0,   226,   227,   228,   287,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,     0,   244,   245,   246,   222,     0,
     269,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,   554,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
       0,   244,   245,   246,   222,     0,   269,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,     0,   269,   223,     0,     0,     0,     0,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,   167,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,     0,   244,   245,   246,   222,     0,   269,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
     548,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,     0,   244,
     245,   246,   222,     0,   269,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,     0,   244,   245,   246,   222,     0,
     269,   223,     0,     0,     0,     0,     0,     0,   654,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
       0,   244,   245,   246,   222,     0,   269,   223,     0,     0,
       0,     0,     0,     0,   659,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,     0,   269,   223,     0,     0,     0,     0,     0,     0,
     746,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,     0,   244,   245,   246,   222,     0,   269,   223,
       0,     0,     0,     0,     0,     0,   747,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,     0,   244,
     245,   246,   222,     0,   269,   223,     0,     0,     0,     0,
       0,     0,   748,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,     0,   244,   245,   246,   222,     0,
     269,   223,     0,     0,     0,     0,     0,     0,   749,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
       0,   244,   245,   246,   222,     0,   269,   223,     0,     0,
       0,     0,     0,     0,   761,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,     0,   269,   223,     0,     0,     0,     0,     0,     0,
     762,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,     0,   244,   245,   246,   222,     0,   269,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,     0,   244,
     245,   246,   222,     0,   318,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,   275,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,     0,   244,   245,   246,   222,  -337,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,   421,     0,     0,     0,   225,     0,   226,   227,
     228,   422,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
       0,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,   423,     0,
       0,     0,   225,     0,   226,   227,   228,   424,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,     0,   244,   245,   246,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,   279,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,   317,   244,   245,   246,   222,     0,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
     331,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   343,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,     0,     0,   223,     0,     0,     0,     0,     0,     0,
     425,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,     0,   244,   245,   246,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,   506,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,   507,   244,   245,   246,   222,     0,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
     508,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,   509,   244,   245,   246,
     222,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,   510,   244,   245,   246,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,   511,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,   512,   244,   245,   246,   222,     0,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
     513,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,   514,   244,   245,   246,
     222,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,   515,   244,   245,   246,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,   516,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,   517,   244,   245,   246,   222,     0,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
     518,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,   519,   244,   245,   246,
     222,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,   520,   244,   245,   246,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   113,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,     0,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,   558,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,   539,   244,   245,   246,   222,     0,
       0,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
       0,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   594,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,   643,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,   646,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,     0,   244,   245,   246,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,     0,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,     0,
       0,     0,   696,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,     0,   244,   245,   246,   222,     0,
       0,   223,     0,     0,     0,     0,     0,     0,   699,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
       0,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,   768,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,     0,     0,   223,     0,     0,     0,     0,     0,     0,
     769,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   224,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,     0,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,   241,   242,
     243,     0,     0,   244,   245,   246,   222,     0,     0,   223,
       0,     0,     0,     0,     0,     0,   770,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,     0,   224,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,   241,   242,   243,     0,     0,   244,
     245,   246,   222,     0,     0,   223,     0,     0,     0,     0,
       0,     0,   771,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   224,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,     0,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
     241,   242,   243,     0,     0,   244,   245,   246,   222,     0,
       0,   223,     0,     0,     0,     0,     0,     0,   772,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   224,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   225,     0,   226,   227,
     228,     0,   229,   230,   231,     0,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,   241,   242,   243,     0,
       0,   244,   245,   246,   222,     0,     0,   223,     0,     0,
       0,     0,     0,     0,   773,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,     0,   224,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,   241,   242,   243,     0,     0,   244,   245,   246,
     222,   221,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   222,     0,     0,   223,   225,     0,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   224,   241,   242,
     243,     0,     0,   244,   245,   246,     0,     0,     0,     0,
       0,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,     0,   237,   238,   239,
     240,     0,   241,     0,   243,     0,     0,   244,   245,   246
};

static const yytype_int16 yycheck[] =
{
      10,     2,   324,   135,    14,   305,   576,    17,   266,    13,
     142,   148,    22,    23,    24,   266,    31,   163,    56,     3,
       3,    31,   310,    33,     1,    35,    36,   173,   461,    39,
      40,    41,    42,     3,     3,    45,   324,    47,    48,    49,
      97,     0,    52,     3,    22,    55,    56,    57,    47,    59,
     637,    18,    62,    63,    64,   213,   214,   215,   216,    22,
     721,    22,   751,   200,    56,    64,    97,     1,    73,    22,
     127,    73,     1,    22,    58,     1,     3,    65,   116,    56,
      31,    48,    97,    66,   122,    55,     3,   689,    55,   124,
      31,    18,   123,    31,    71,    73,   785,    97,    65,    31,
       7,   671,    31,   764,    31,    31,    31,    34,    97,   119,
     120,   121,   122,   123,   124,   125,   262,   263,    31,    96,
      47,    48,    56,   123,    46,   127,   125,   131,    55,    97,
     122,   733,    73,   122,   124,   116,    97,    71,    65,   572,
     150,   124,    55,    62,   122,   122,    97,    76,    70,    78,
     737,   738,    78,   163,   124,   124,    97,   125,     3,    97,
     460,   122,    96,   173,   124,    97,   176,    96,    97,   122,
      96,    97,    97,   122,    97,   321,   127,   176,    23,    97,
     750,    46,   116,    78,   785,   195,   127,   116,   122,   127,
     116,   192,   350,   116,   795,   127,    96,   124,    76,    99,
      78,   123,   127,   103,   124,    70,   101,   125,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      65,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,     2,   690,   123,   222,
     223,    97,    21,    78,    10,   275,   566,   116,   526,    97,
     280,    97,    18,    97,   284,   526,   286,   287,    97,   289,
     290,    21,    97,   293,    30,   284,   101,   575,    97,   125,
     116,    97,   116,   116,    97,    54,    21,   125,    57,    45,
     121,   264,   265,   313,   116,   116,   125,   116,   445,   446,
     125,   321,   275,   116,    54,   116,    62,    57,   328,   125,
      66,   146,   147,   148,   287,    18,   336,   290,   338,    54,
     340,   341,    57,   343,   344,   160,    48,    96,     2,    98,
      99,   116,    97,    55,   103,   170,    10,   479,   124,   486,
     487,   110,   116,   675,    18,    48,    96,   679,   183,    99,
     119,   116,    55,   103,    97,    14,    30,    92,   114,    94,
      95,    96,   122,    98,    99,   100,    69,   340,   103,    35,
     116,    45,   670,   116,   109,   110,   124,   675,   126,   114,
       3,   679,   117,   118,   119,     8,    52,    72,    62,   116,
      78,    14,    66,    54,    53,   151,    57,   124,   124,   126,
     126,   421,   422,   423,   424,   425,   426,   427,    67,    97,
     122,   167,    35,   101,   428,   429,   124,   437,   126,   439,
     336,    99,   338,   443,   124,   124,   124,    78,     7,    52,
      53,   451,   452,   116,   454,   122,   192,   125,    31,   116,
     114,   276,    65,   463,    67,   116,   466,   467,    24,   422,
     125,   424,    14,   751,   463,    17,   476,   292,    97,    97,
     125,    76,   760,    25,    26,    27,    78,   476,   125,   125,
      97,    33,   127,    35,    96,   495,   125,   151,    78,   127,
      54,    24,   125,   494,   125,    18,   495,   785,    50,   122,
      52,    53,    22,   167,    22,     3,   127,   795,    31,    96,
      99,    34,   127,    65,   125,    67,    14,   127,    97,   529,
     124,    71,   532,   269,    47,    48,   689,   347,   192,    16,
     540,   475,    55,   541,   693,   692,   546,    35,   548,   692,
     286,   551,    65,   289,   554,   564,   598,   293,   558,    14,
       2,   764,    17,   750,    52,    53,    63,    31,    10,   735,
      25,    26,    27,   314,   116,   710,    18,    65,    33,    67,
      35,   123,   582,   454,   526,    -1,    -1,    -1,    30,   589,
      -1,   591,    56,   582,   594,    50,    -1,    52,    53,    -1,
      -1,    -1,    -1,    45,    31,   341,    -1,    71,    -1,    -1,
      65,   347,    67,    -1,    78,   269,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    -1,    66,    -1,   441,   442,    -1,    56,
     445,   446,   286,    97,    -1,   289,    -1,    -1,    -1,   293,
      -1,    -1,   642,   643,    71,   645,   646,   647,   648,    -1,
      -1,    78,   116,   150,   654,   655,    -1,   657,   122,   659,
     660,   116,    -1,   663,    -1,    -1,   163,    -1,    -1,    -1,
      97,    -1,   114,    -1,   674,   675,   173,    -1,    -1,   679,
     680,   417,    -1,    -1,   684,    -1,    -1,   341,    -1,   116,
      -1,    -1,    -1,   347,    -1,   122,   696,   697,   698,   699,
     700,   701,   702,   703,    -1,    18,    -1,    -1,    -1,   151,
      -1,   711,   712,   713,   450,    -1,    -1,   717,    31,    -1,
     720,    34,   537,   538,   713,   167,    -1,    -1,   543,    -1,
      -1,    -1,    -1,    -1,    47,    48,    -1,    -1,   553,    -1,
      -1,   556,    55,    -1,    -1,    -1,   746,   747,   748,   749,
     192,    -1,    65,    -1,   490,    -1,    -1,    -1,   494,    -1,
     760,   761,   762,    -1,    77,   262,   263,    -1,   768,   769,
     770,   771,   772,   773,     9,    -1,    -1,    -1,    13,    92,
      -1,    94,    95,    -1,   784,   785,    21,    -1,    -1,    -1,
      -1,    -1,   528,    -1,    -1,   795,   450,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,
     546,    -1,   548,    -1,    -1,   551,    -1,    -1,   554,    54,
      -1,   557,    57,    -1,   321,    -1,    -1,   269,    -1,    -1,
      -1,   328,    -1,    -1,    -1,    -1,   490,    -1,     2,   336,
     494,   338,    77,    -1,   286,   581,    10,   289,    -1,    -1,
      -1,   293,    -1,   589,    18,   591,    -1,    92,    -1,    94,
      95,    96,   677,    98,    99,   100,    30,   102,   103,   104,
     105,   106,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,    45,   117,   118,   119,     2,    -1,    -1,    -1,    -1,
     125,    -1,   546,    10,   548,    -1,    -1,   551,    62,   341,
     554,    18,    66,   557,    -1,   347,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,   654,    -1,
      -1,    -1,    -1,   659,     2,    -1,    -1,   581,    45,    31,
      -1,    -1,    10,    -1,    -1,   589,    -1,   591,    -1,    -1,
      18,    21,    -1,    -1,    -1,    62,    -1,   683,    -1,    66,
     114,   687,    30,    -1,    56,   452,    -1,   454,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    71,
      -1,    -1,    -1,    -1,    54,    -1,    78,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,   151,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    97,    -1,   114,    -1,    -1,
     654,    -1,    -1,   167,    -1,   659,    -1,    -1,   450,    -1,
     746,   747,   748,   749,   116,    -1,    96,    -1,    98,    99,
     122,    -1,    -1,   103,    -1,   761,   762,    -1,   192,   683,
     110,    -1,    -1,   687,   151,    -1,   114,   117,   118,   119,
      -1,    -1,     3,     4,     5,     6,     7,    -1,   490,    10,
     167,    -1,   494,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
       2,    32,    -1,   151,    -1,   192,    37,    38,    10,    40,
      -1,    42,    43,    -1,    -1,    -1,    18,    -1,    49,   167,
      51,    -1,   746,   747,   748,   749,    -1,    -1,    30,    60,
      61,    62,    63,    -1,   546,   269,   548,   761,   762,   551,
      -1,    -1,   554,    45,   192,   557,    -1,    78,    -1,    -1,
      -1,    -1,   286,    -1,    -1,   289,    -1,    -1,    -1,   293,
      62,    -1,    93,    -1,    66,    -1,    97,    -1,    -1,   581,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   589,    -1,   591,
     111,    -1,   269,    -1,   115,    -1,    -1,    -1,    -1,    -1,
      -1,   122,    -1,   124,   125,   126,    -1,    -1,    -1,   286,
      -1,    -1,   289,   670,    -1,    -1,   293,   341,    -1,    -1,
      -1,    -1,   114,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   269,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,   286,    -1,
       2,   289,   654,    -1,    -1,   293,    -1,   659,    10,   151,
     717,    -1,    -1,    -1,   341,    -1,    18,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,   167,   120,   121,    30,    -1,
     124,   683,   126,    -1,    -1,   687,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,   751,     3,     4,     5,     6,     7,
     192,    -1,    10,   341,    -1,    -1,    -1,    -1,    -1,   347,
      62,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    -1,    32,    -1,   450,    -1,   785,    37,
      38,    -1,    40,    -1,    42,    43,    -1,    -1,   795,    -1,
      -1,    49,    -1,    51,   746,   747,   748,   749,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,   761,
     762,    -1,   114,    -1,    -1,    -1,   490,    -1,    -1,    -1,
     494,    -1,    -1,   450,    -1,    -1,    41,   269,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   286,    -1,    -1,   289,    -1,   151,
      -1,   293,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   450,   490,    -1,   167,   124,   494,   126,    -1,
      -1,    -1,   546,    -1,   548,    -1,    -1,   551,    -1,    -1,
     554,    -1,    -1,   557,    -1,    -1,    -1,    -1,    -1,    -1,
     192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   341,
      -1,    -1,   490,   118,    -1,   347,   494,   581,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   589,    -1,   591,    -1,   546,
      -1,   548,    -1,    -1,   551,    -1,    -1,   554,    -1,    -1,
     557,   146,   147,   148,   149,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   581,   170,    -1,    -1,   546,    -1,
     548,    -1,   589,   551,   591,    -1,   554,   269,   183,   557,
      -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,
     654,    -1,    -1,    -1,   286,   659,    -1,   289,    -1,    -1,
      -1,   293,    -1,   581,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   589,    -1,   591,    -1,    -1,    -1,    -1,   450,   683,
      -1,    92,    -1,   687,    95,    96,    -1,    98,    99,    -1,
      -1,    -1,   103,    -1,    -1,    -1,     2,   654,    -1,   110,
      -1,    -1,   659,    -1,    10,    -1,   117,   118,   119,   341,
      -1,    -1,    18,    -1,    -1,   347,    -1,    -1,   490,    -1,
      -1,    -1,   494,    -1,    30,    -1,   683,    -1,    -1,    -1,
     687,   276,    -1,    -1,    -1,    -1,   654,    -1,    -1,    45,
      -1,   659,   746,   747,   748,   749,    -1,   292,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,   761,   762,    -1,
      66,    -1,    -1,    -1,    -1,   683,    -1,    -1,    -1,   687,
      -1,    -1,    -1,    -1,   546,    -1,   548,    -1,    -1,   551,
      -1,    -1,   554,    -1,    -1,   557,    -1,    -1,    -1,   746,
     747,   748,   749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   761,   762,    -1,    -1,   114,   581,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   589,   450,   591,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   746,   747,
     748,   749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   761,   762,   151,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    12,    -1,   490,    -1,
      16,   167,   494,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   654,    -1,    -1,    -1,   192,   659,    54,    -1,
      46,    57,    -1,    -1,    -1,    -1,   441,   442,    -1,    -1,
     445,   446,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   683,    -1,    69,   546,   687,   548,    -1,    -1,   551,
      -1,    -1,   554,    -1,    -1,   557,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
      -1,   107,   108,   109,   110,    -1,   112,    -1,   114,   581,
      -1,   117,   118,   119,    -1,    -1,    -1,   589,    -1,   591,
      -1,    -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   746,   747,   748,   749,    -1,   135,
     286,    -1,    -1,   289,    -1,    -1,   142,    -1,   144,   761,
     762,    -1,   537,   538,   150,    -1,    -1,   153,   543,    -1,
     545,    -1,    -1,    -1,    -1,   550,    21,   163,   553,    -1,
      -1,   556,    -1,    -1,    -1,    -1,    -1,   173,    -1,    -1,
      -1,    -1,   654,   179,    -1,    -1,    -1,   659,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,    -1,    54,
      -1,   347,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   683,    -1,   209,    -1,   687,    -1,   213,   214,   215,
     216,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,    -1,    -1,    92,    -1,    94,
      95,    96,    -1,    98,    99,   100,    -1,   102,   103,   104,
     105,    -1,   107,   108,   109,   110,    -1,   112,   113,   114,
      -1,    -1,   117,   118,   119,    -1,   262,   263,    -1,    -1,
      -1,    -1,    -1,    -1,   746,   747,   748,   749,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,   761,
     762,    -1,   677,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   450,    -1,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   314,    -1,
     705,   706,    -1,   708,   709,   321,    -1,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,   721,    10,    -1,    -1,
      -1,   726,    -1,   728,   490,    -1,    -1,    -1,   494,    -1,
      -1,    -1,    -1,    -1,   350,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,   764,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,
     546,    -1,   548,    -1,    77,   551,    -1,    -1,   554,    -1,
      -1,   557,     9,    -1,    -1,    -1,    13,    -1,    -1,    92,
      93,    94,    95,    -1,    21,    -1,    -1,   100,    -1,    54,
      -1,    -1,    57,    -1,    -1,   581,   109,    -1,   111,    -1,
     113,   114,    -1,   589,    -1,   591,   119,    -1,    -1,   122,
      -1,   124,    -1,   126,    -1,    -1,    -1,    54,   454,    -1,
      57,   457,    -1,    -1,   460,    -1,    -1,    92,    -1,    94,
      95,    96,    -1,    98,    99,    -1,    73,    -1,   103,    -1,
      77,    -1,    -1,   479,   109,   110,    -1,    -1,    -1,   114,
      -1,    -1,   117,   118,   119,    92,    -1,    94,    95,    96,
      -1,    98,    99,   100,   500,   102,   103,   104,   105,   106,
     107,   108,   109,   110,    -1,   112,   113,   114,    -1,    -1,
     117,   118,   119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     127,    -1,    -1,    -1,    -1,    -1,    -1,   683,    -1,    -1,
      -1,   687,    -1,    -1,    -1,   541,    -1,     0,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
     566,    -1,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    -1,    67,    68,    69,    -1,   614,    72,
      -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,
     113,   114,    -1,   116,    -1,    -1,   119,    -1,    -1,   122,
      -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,   692,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    -1,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,   730,   731,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,    -1,   116,   117,   118,   119,    -1,    -1,
     122,   123,   124,     1,   126,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,   113,   114,   115,   116,    -1,
      -1,   119,    -1,    -1,   122,   123,   124,     1,   126,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,   113,
     114,    -1,   116,    -1,    -1,   119,    -1,    -1,   122,   123,
     124,     1,   126,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    74,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
      -1,    -1,   122,   123,   124,     1,   126,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,   122,   123,   124,     1,
     126,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,   113,   114,    -1,   116,    -1,    -1,   119,    -1,    -1,
     122,   123,   124,     1,   126,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,   113,   114,    -1,   116,    -1,
      -1,   119,    -1,    -1,   122,    -1,   124,     1,   126,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      -1,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,   113,
     114,    -1,   116,    -1,    -1,   119,    -1,    -1,   122,    -1,
     124,     1,   126,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    -1,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    74,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
      -1,    -1,   122,    -1,   124,     1,   126,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    -1,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,   122,    -1,   124,     1,
     126,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    -1,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,   113,   114,    -1,   116,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,     1,   126,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    -1,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    -1,    55,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    67,
      68,    69,    -1,    -1,    72,    -1,    74,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,   111,    -1,   113,   114,    -1,   116,    -1,
      -1,   119,    -1,    -1,   122,    -1,   124,     1,   126,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      -1,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      -1,    55,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    -1,   111,    -1,   113,
     114,    -1,   116,    -1,    -1,   119,    -1,    -1,   122,    -1,
     124,     1,   126,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    -1,    55,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    -1,    67,    68,    69,
      -1,    -1,    72,    -1,    74,    -1,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,   111,    -1,   113,   114,    -1,   116,    -1,    -1,   119,
      -1,    -1,   122,    -1,   124,     1,   126,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    -1,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      -1,    -1,    48,    49,    -1,    51,    52,    53,    -1,    55,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    -1,   111,    -1,   113,   114,    -1,
     116,    -1,    -1,   119,    -1,    -1,   122,    -1,   124,     1,
     126,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    -1,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    -1,    55,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      72,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,   113,   114,    -1,   116,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,     1,   126,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    -1,    -1,   117,
     118,   119,    -1,    -1,   122,    -1,   124,     1,   126,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      54,    -1,    -1,    57,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,    -1,    -1,   117,   118,   119,    -1,    -1,   122,    -1,
     124,     1,   126,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,   109,
      32,   111,    -1,   113,   114,    37,    38,    -1,    40,   119,
      42,    43,   122,    -1,   124,    -1,   126,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,     3,     4,     5,     6,     7,    -1,   109,    10,   111,
      -1,   113,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,    -1,   126,   127,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,   101,
      -1,     3,     4,     5,     6,     7,    -1,   109,    10,   111,
      -1,   113,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,    -1,   126,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,     3,     4,     5,     6,     7,    -1,   109,    10,   111,
      -1,   113,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,   125,   126,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    77,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,   109,    32,   111,
      -1,   113,   114,    37,    38,    -1,    40,   119,    42,    43,
     122,    -1,   124,    -1,   126,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,     3,
       4,     5,     6,     7,    21,   109,    10,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
     124,    -1,   126,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    54,    42,    43,
      57,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    92,    -1,    94,    95,    96,
      -1,    98,    99,    -1,    -1,    -1,   103,    -1,    92,    93,
      94,    95,    -1,   110,    -1,    21,   100,    -1,    -1,    -1,
     117,   118,   119,    -1,    -1,   109,    -1,   111,    -1,   113,
     114,    -1,   116,    -1,    -1,   119,    -1,    -1,   122,    -1,
     124,    -1,   126,     3,     4,     5,     6,     7,    54,    -1,
      10,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    42,    43,    -1,    -1,    92,    -1,    -1,    49,
      96,    51,    98,    99,    -1,    -1,    -1,   103,    -1,    -1,
      60,    61,    62,    63,   110,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,   119,    -1,    -1,    -1,    77,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,   109,
      32,   111,    -1,   113,   114,    37,    38,    -1,    40,   119,
      42,    43,   122,    -1,   124,    -1,   126,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,     3,     4,     5,     6,     7,    -1,   109,    10,   111,
      -1,   113,   114,   115,    -1,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,    -1,   126,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,     3,     4,     5,     6,     7,    -1,   109,    10,   111,
      -1,   113,   114,    -1,    -1,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,    -1,   126,    -1,    28,    29,    30,    -1,
      32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,   109,    32,   111,
      -1,   113,   114,    37,    38,    -1,    40,   119,    42,    43,
     122,    -1,   124,    -1,   126,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,     3,
       4,     5,     6,     7,    -1,   109,    10,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
     124,    -1,   126,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,     3,
       4,     5,     6,     7,    -1,   109,    10,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
     124,    -1,   126,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,     3,
       4,     5,     6,     7,    -1,   109,    10,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,   119,    -1,    -1,   122,    -1,
     124,    -1,   126,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,   109,    32,   111,    -1,   113,
     114,    37,    38,    -1,    40,   119,    42,    43,   122,    -1,
     124,    -1,   126,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,   109,    32,   111,    -1,   113,   114,    37,
      38,    -1,    40,   119,    42,    43,   122,    -1,   124,    -1,
     126,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,   109,    32,   111,    -1,   113,   114,    37,    38,    -1,
      40,   119,    42,    43,   122,    -1,   124,    -1,   126,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,   109,
      32,   111,    -1,   113,   114,    37,    38,    -1,    40,   119,
      42,    43,   122,    -1,   124,    -1,   126,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,   109,    32,   111,
      -1,   113,   114,    37,    38,    -1,    40,   119,    42,    43,
     122,    -1,   124,    -1,   126,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,   109,    32,   111,    -1,   113,
     114,    37,    38,    -1,    40,   119,    42,    43,   122,    -1,
     124,    -1,   126,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    -1,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,   109,    32,   111,    -1,   113,   114,    37,
      38,    -1,    40,   119,    42,    43,   122,    -1,   124,    -1,
     126,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,   109,    32,   111,    -1,   113,   114,    37,    38,    -1,
      40,   119,    42,    43,   122,    -1,   124,    -1,   126,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,   109,
      32,   111,    -1,   113,   114,    37,    38,    -1,    40,   119,
      42,    43,   122,    -1,   124,    -1,   126,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    60,    61,
      62,    63,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   111,
      -1,    -1,   114,    -1,    -1,    -1,    -1,   119,    -1,    -1,
     122,    -1,   124,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    -1,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    98,    -1,    21,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,   114,    -1,    -1,
     117,   118,   119,   120,   121,     9,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    21,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    21,    -1,    57,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,    -1,   103,   104,   105,    -1,   107,
     108,   109,   110,    77,    -1,    -1,   114,    -1,    -1,   117,
     118,   119,    -1,    -1,    54,    -1,    -1,    57,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    77,   112,   113,
     114,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    92,   127,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,     9,   112,   113,   114,    13,    -1,   117,   118,   119,
      -1,    -1,    -1,    21,    -1,    -1,    -1,   127,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    31,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,    -1,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,   127,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    31,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,    -1,   117,   118,   119,    54,    -1,
     122,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
      -1,   117,   118,   119,    54,    -1,   122,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    -1,   122,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,    -1,   117,   118,   119,    54,    -1,   122,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,    -1,   117,
     118,   119,    54,    -1,   122,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,    -1,   117,   118,   119,    54,    -1,
     122,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
      -1,   117,   118,   119,    54,    -1,   122,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    -1,   122,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,    -1,   117,   118,   119,    54,    -1,   122,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,    -1,   117,
     118,   119,    54,    -1,   122,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,    -1,   117,   118,   119,    54,    -1,
     122,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
      -1,   117,   118,   119,    54,    -1,   122,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    -1,   122,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,    -1,   117,   118,   119,    54,    -1,   122,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,    -1,   117,
     118,   119,    54,    -1,   122,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    31,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,    -1,   117,   118,   119,    54,   121,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    31,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
      -1,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    31,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,    -1,   117,   118,   119,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,    -1,   117,   118,   119,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,   116,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
     116,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,   116,   117,   118,   119,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,   116,   117,   118,   119,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,    -1,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    24,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,   116,   117,   118,   119,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
      -1,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,    -1,   117,   118,   119,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,    -1,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,    -1,   117,   118,   119,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
      -1,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    77,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    -1,   112,   113,
     114,    -1,    -1,   117,   118,   119,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    77,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    92,    -1,    94,    95,    96,    -1,
      98,    99,   100,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    -1,   112,   113,   114,    -1,    -1,   117,
     118,   119,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    77,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      92,    -1,    94,    95,    96,    -1,    98,    99,   100,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,    -1,
     112,   113,   114,    -1,    -1,   117,   118,   119,    54,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      -1,    77,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    92,    -1,    94,    95,
      96,    -1,    98,    99,   100,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,    -1,   112,   113,   114,    -1,
      -1,   117,   118,   119,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    -1,    77,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,    -1,   112,   113,   114,    -1,    -1,   117,   118,   119,
      54,    21,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    92,    -1,
      94,    95,    96,    -1,    98,    99,   100,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,    77,   112,   113,
     114,    -1,    -1,   117,   118,   119,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    94,    95,    96,    -1,    98,    99,
     100,    -1,   102,   103,   104,   105,    -1,   107,   108,   109,
     110,    -1,   112,    -1,   114,    -1,    -1,   117,   118,   119
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   132,   133,     0,     1,     3,     4,     5,     6,     7,
      10,    11,    12,    15,    16,    17,    19,    20,    22,    25,
      26,    27,    28,    29,    30,    32,    33,    36,    37,    38,
      39,    40,    41,    42,    43,    45,    49,    50,    51,    56,
      58,    59,    60,    61,    62,    63,    65,    68,    72,    74,
      77,    92,    93,    94,    95,   100,   109,   111,   113,   114,
     116,   119,   122,   124,   126,   134,   135,   136,   137,   138,
     139,   141,   142,   144,   146,   147,   148,   149,   151,   152,
     155,   156,   157,   161,   164,   167,   168,   188,   191,   192,
     210,   211,   212,   213,   214,   215,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   231,   232,   233,   234,
     235,   136,   223,    73,   216,   217,   143,   144,   216,    10,
      28,    29,    30,    63,   122,   126,   164,   210,   214,   221,
     222,   223,   224,   226,   227,    65,   143,   223,   136,   144,
     144,     8,    65,   144,    48,    75,   150,   223,   223,   223,
     124,   144,   165,   124,   144,   193,   194,   136,   223,   223,
     223,   223,     7,   124,   116,   223,   223,    22,   139,   145,
     223,   223,    62,   124,   136,   223,    58,   144,   189,   115,
     184,   204,   223,   223,   223,   223,   223,   223,   223,   223,
     123,   134,   140,   204,    66,   101,   184,   205,   206,   223,
     204,   223,   230,    50,   136,   144,    14,    53,    67,   158,
      35,    52,   180,    18,    48,    55,    69,   116,   121,     9,
      13,    21,    54,    57,    77,    92,    94,    95,    96,    98,
      99,   100,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   112,   113,   114,   117,   118,   119,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,   120,   124,   126,    54,    57,   124,   136,   116,   122,
     139,   223,   223,   223,   204,    31,   216,   189,   116,   116,
      72,   122,   189,   144,   124,   145,    22,    31,   145,    22,
      31,   145,   217,    64,   139,   144,   184,   207,   208,   209,
     223,   136,   124,   175,    66,   124,   144,   195,   196,     1,
      96,   198,   199,    31,    97,   145,   207,   116,   122,   136,
     145,   124,   207,   204,    78,   190,   116,   144,    97,   116,
     145,   116,   123,   134,   123,   223,    97,   125,    97,   125,
      31,   127,   217,    76,    97,   127,     7,   122,   144,   169,
      55,   193,   193,   193,   193,   223,   223,   223,   223,   150,
     223,   150,   223,   223,   223,   223,   223,   223,   223,    23,
      65,   144,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   207,   207,   150,   223,   150,   223,    18,
      31,    34,    47,    48,    55,    65,   114,   178,   218,   219,
     235,    22,    31,    22,    31,    64,    31,   127,   150,   223,
     145,   116,   223,   144,   162,   163,   116,    31,   204,    30,
     223,   150,   223,    30,   223,   150,   223,   145,   136,   223,
      24,    76,    78,   125,    97,   176,   177,   178,   166,   196,
      97,   125,     1,   126,   200,   211,    76,    78,   197,   223,
     194,   125,   153,   207,   125,   122,   126,   200,   211,    97,
     184,   223,   125,   125,   205,   205,   150,   223,   136,   223,
     127,   223,   223,   123,   140,    96,   159,    48,    55,   171,
     179,   193,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   125,   127,    31,    55,   210,    97,   125,    54,    30,
     150,   223,    30,   150,   223,   150,   223,   216,   216,   116,
      78,    97,   123,   223,   125,   223,    22,   145,    22,   145,
     223,    22,   145,   217,    22,   145,   217,    24,    24,   136,
     223,   184,   223,   209,    97,   125,   124,   144,    18,    48,
      55,    65,   181,   125,   196,    96,   199,   204,   223,    44,
     223,    46,    70,   123,   154,   125,   153,   204,   189,   127,
     217,   127,   217,   136,    76,   123,   204,   122,   170,     9,
      13,    78,    79,    80,    81,    82,    83,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    98,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   114,
     117,   118,   119,   120,   121,   144,   172,   173,   116,   219,
     210,   223,    22,    22,   223,    22,    22,   127,   127,   145,
     145,   223,   163,   145,    64,    30,   223,    30,   223,    64,
      30,   223,   145,    30,   223,   145,   136,   223,   177,   196,
      96,   203,   199,   197,    31,   127,   136,   204,   123,   127,
      30,   136,   223,   127,    30,   136,   223,   127,   223,   160,
     181,   144,    99,   124,   174,   174,    64,    30,    30,    64,
      30,    30,    30,    30,   223,   223,   223,   223,   223,   223,
     125,    60,    63,   126,   184,   202,   211,   101,   186,   197,
      71,   187,   223,   200,   211,   145,   223,   136,   223,   136,
      27,    65,   123,   135,   147,   199,   144,   172,   173,   176,
     223,   223,   223,   223,   223,   223,    64,    64,    64,    64,
     203,   127,   204,   184,   185,   223,   223,   139,   146,   183,
     127,    64,    64,   147,   187,   174,   174,   125,    64,    64,
      64,    64,    64,    64,   223,   223,   223,   223,   186,   197,
     184,   201,   202,   211,    31,   127,   211,   223,   223,   116,
     182,   183,   223,   201,   202,   127,   201
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   131,   132,   133,   133,   134,   134,   135,   135,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   138,   139,   139,
     140,   140,   141,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   143,   143,
     144,   145,   145,   146,   146,   147,   147,   147,   147,   147,
     147,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   150,   151,   151,   151,   151,   152,
     153,   153,   154,   154,   155,   156,   157,   157,   158,   158,
     158,   159,   159,   160,   160,   160,   161,   162,   162,   162,
     163,   163,   165,   166,   164,   167,   167,   167,   167,   167,
     167,   169,   170,   168,   171,   171,   171,   171,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   175,   176,
     176,   176,   177,   177,   177,   177,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   179,   179,   179,   180,
     180,   181,   181,   181,   181,   181,   182,   182,   183,   183,
     184,   184,   185,   185,   186,   186,   187,   187,   188,   188,
     188,   189,   189,   190,   190,   190,   191,   191,   191,   191,
     191,   192,   192,   192,   193,   193,   194,   194,   194,   195,
     195,   195,   196,   196,   196,   197,   197,   197,   198,   198,
     199,   199,   199,   199,   200,   200,   200,   200,   201,   201,
     201,   202,   202,   202,   202,   202,   203,   203,   203,   203,
     203,   203,   204,   204,   204,   204,   205,   205,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   209,   209,   209,
     210,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   212,   212,   212,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   213,
     214,   215,   215,   215,   215,   215,   215,   215,   215,   216,
     216,   217,   218,   218,   219,   219,   220,   220,   221,   222,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   224,   224,   224,   224,   225,   225,
     226,   226,   226,   227,   227,   227,   228,   228,   228,   229,
     229,   229,   229,   229,   229,   229,   230,   230,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   232,   232,   232,   232,   232,   232,   233,   233,   233,
     233,   234,   234,   234,   234,   235,   235,   235,   235,   235,
     235,   235
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     2,     2,     3,     1,     4,     5,     1,     2,     3,
       1,     2,     3,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     1,
       1,     2,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     2,     5,     3,     6,     6,     4,     5,     5,     3,
       3,     6,     5,     6,     5,     6,     3,     4,     6,     7,
       6,     7,     4,     5,     4,     4,     3,     6,     5,     5,
       0,     2,     3,     2,     6,     7,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     3,     5,     1,     2,     3,
       1,     3,     0,     0,     8,     0,     1,     1,     2,     1,
       2,     0,     0,     9,     3,     3,     5,     5,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     3,     0,
       1,     3,     4,     4,     6,     6,     0,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     0,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     0,     1,     2,     2,     0,     2,     3,     4,
       4,     2,     4,     0,     2,     2,     4,     4,     4,     5,
       4,     0,     1,     1,     1,     3,     3,     4,     5,     1,
       1,     3,     1,     2,     3,     0,     2,     2,     0,     4,
       0,     2,     2,     1,     4,     4,     6,     1,     0,     1,
       1,     3,     4,     3,     4,     6,     0,     2,     2,     2,
       2,     2,     1,     1,     3,     3,     1,     1,     1,     3,
       3,     0,     1,     1,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     5,
       2,     2,     6,     6,     4,     9,     9,     7,     6,     6,
       4,     9,     9,     7,     4,     6,     6,     9,     9,     6,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       1,     4,     1,     3,     2,     3,     1,     3,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     3,     3,     3,     3,     4,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (&yylloc, context, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, context); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParserContext* context)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, context);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParserContext* context)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , context);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, context); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParserContext* context)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (context);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}



struct yypstate
  {
    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;
    /* Used to determine if this is the first time this instance has
       been used.  */
    int yynew;
  };

/* Initialize the parser data structure.  */
yypstate *
yypstate_new (void)
{
  yypstate *yyps;
  yyps = (yypstate *) malloc (sizeof *yyps);
  if (!yyps)
    return YY_NULLPTR;
  yyps->yynew = 1;
  return yyps;
}

void
yypstate_delete (yypstate *yyps)
{
#ifndef yyoverflow
  /* If the stack was reallocated but the parse did not complete, then the
     stack still needs to be freed.  */
  if (!yyps->yynew && yyps->yyss != yyps->yyssa)
    YYSTACK_FREE (yyps->yyss);
#endif
  free (yyps);
}

#define yynerrs yyps->yynerrs
#define yystate yyps->yystate
#define yyerrstatus yyps->yyerrstatus
#define yyssa yyps->yyssa
#define yyss yyps->yyss
#define yyssp yyps->yyssp
#define yyvsa yyps->yyvsa
#define yyvs yyps->yyvs
#define yyvsp yyps->yyvsp
#define yylsa yyps->yylsa
#define yyls yyps->yyls
#define yylsp yyps->yylsp
#define yyerror_range yyps->yyerror_range
#define yystacksize yyps->yystacksize


/*---------------.
| yypush_parse.  |
`---------------*/

int
yypush_parse (yypstate *yyps, int yypushed_char, YYSTYPE const *yypushed_val, YYLTYPE *yypushed_loc, ParserContext* context)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  if (!yyps->yynew)
    {
      yyn = yypact[yystate];
      goto yyread_pushed_token;
    }

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = *yypushed_loc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      if (!yyps->yynew)
        {
          YYDPRINTF ((stderr, "Return for a new token:\n"));
          yyresult = YYPUSH_MORE;
          goto yypushreturn;
        }
      yyps->yynew = 0;
yyread_pushed_token:
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yypushed_char;
      if (yypushed_val)
        yylval = *yypushed_val;
      if (yypushed_loc)
        yylloc = *yypushed_loc;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 400 "chapel.ypp" /* yacc.c:1661  */
    { yyblock = (yyval.pblockstmt); }
#line 4248 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 405 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt();                                  resetTempID(); }
#line 4254 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 406 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 4260 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 413 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 4266 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 418 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 4272 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 419 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 4278 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 435 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 4284 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 436 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 4290 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 437 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4296 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 438 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 4302 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 439 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 4308 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 440 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 4314 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 441 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_DELETE, (yyvsp[-1].pexpr)); }
#line 4320 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 442 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 4326 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 443 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 4332 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 444 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4338 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 445 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4344 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 446 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 4350 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 447 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 4356 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 448 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 4362 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 449 "chapel.ypp" /* yacc.c:1661  */
    { printf("syntax error"); clean_exit(1); }
#line 4368 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 454 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[-2].pch), new BlockStmt(), yyfilename, (yylsp[-3]).comment))); }
#line 4374 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 456 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[-3].pch), (yyvsp[-1].pblockstmt), yyfilename, (yylsp[-4]).comment))); }
#line 4380 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 460 "chapel.ypp" /* yacc.c:1661  */
    { (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4386 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 475 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 4392 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 476 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 4398 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 481 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 4404 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 482 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 4410 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 487 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].pcallexpr)); }
#line 4416 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 491 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "=");   }
#line 4422 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 492 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "+=");  }
#line 4428 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 493 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "-=");  }
#line 4434 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 494 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "*=");  }
#line 4440 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 495 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "/=");  }
#line 4446 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 496 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "%=");  }
#line 4452 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 497 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "**="); }
#line 4458 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 498 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "&=");  }
#line 4464 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 499 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "|=");  }
#line 4470 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 500 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "^=");  }
#line 4476 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 501 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), ">>="); }
#line 4482 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 502 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<<="); }
#line 4488 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 503 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 4494 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 504 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 4500 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 505 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 4506 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 509 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = NULL; }
#line 4512 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 514 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 4518 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 518 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4524 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 519 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4530 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 523 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, new SymExpr(gVoid)); }
#line 4536 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 524 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 4542 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 528 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 4548 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 538 "chapel.ypp" /* yacc.c:1661  */
    {
#ifdef HAVE_LLVM
      if (externC) {
        (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[0].pch)));
      } else {
        USR_FATAL(new BlockStmt(), "extern block syntax is turned off. Use --extern-c flag to turn on.");
      }
#else
      USR_FATAL(new BlockStmt(), "Chapel must be built with llvm in order to use the extern block syntax");
#endif
    }
#line 4564 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 552 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 4570 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 553 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4576 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 554 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4582 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 555 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 4588 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 556 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4594 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 557 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 4600 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 558 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false,  true); }
#line 4606 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 559 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 4612 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 560 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false,  true); }
#line 4618 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 561 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4624 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 562 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt)); }
#line 4630 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 563 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt)); }
#line 4636 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 564 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), true); }
#line 4642 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 565 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true); }
#line 4648 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 566 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt)); }
#line 4654 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 567 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt)); }
#line 4660 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 569 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4670 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 575 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4680 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 581 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true);
    }
#line 4690 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 587 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true);
    }
#line 4700 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 593 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4711 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 600 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4722 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 609 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("_build_tuple", (yyvsp[-1].pcallexpr)); }
#line 4728 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 613 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 4734 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 614 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4740 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 615 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 4746 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 616 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 4752 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 621 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 4758 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 625 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(); }
#line 4764 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 101:
#line 626 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 4770 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 631 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 4776 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 633 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 4782 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 638 "chapel.ypp" /* yacc.c:1661  */
    { USR_FATAL((yyvsp[-3].pcallexpr), "'type select' is no longer supported. Use 'select'"); }
#line 4788 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 645 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch), (yyvsp[-5].ptype), (yyvsp[-3].pcallexpr), (yyvsp[-1].pblockstmt), (yyvsp[-6].flag), (yylsp[-6]).comment)); }
#line 4794 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 649 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4800 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 650 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_EXTERN;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4806 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 654 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_CLASS);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4816 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 659 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_RECORD);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4826 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 664 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_UNION);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4836 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 672 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = NULL; }
#line 4842 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 673 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 4848 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 678 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 4854 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 680 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 4860 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 682 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 4866 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 687 "chapel.ypp" /* yacc.c:1661  */
    {
      EnumType* pdt = (yyvsp[-1].penumtype);
      TypeSymbol* pst = new TypeSymbol((yyvsp[-3].pch), pdt);
      (yyvsp[-1].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
#line 4877 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 697 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.penumtype) = new EnumType();
      (yyvsp[0].pdefexpr)->sym->type = (yyval.penumtype);
      (yyval.penumtype)->constants.insertAtTail((yyvsp[0].pdefexpr));
      (yyval.penumtype)->defaultValue = (yyvsp[0].pdefexpr)->sym;
      (yyval.penumtype)->doc = context->latestComment;
      context->latestComment = NULL;
    }
#line 4890 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 706 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.penumtype) = (yyvsp[-1].penumtype);
    }
#line 4898 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 710 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-2].penumtype)->constants.insertAtTail((yyvsp[0].pdefexpr));
      (yyvsp[0].pdefexpr)->sym->type = (yyvsp[-2].penumtype);
    }
#line 4907 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 717 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 4913 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 718 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 4919 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 723 "chapel.ypp" /* yacc.c:1661  */
    {
      captureTokens = 1;
      captureString[0] = '\0';
    }
#line 4928 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 728 "chapel.ypp" /* yacc.c:1661  */
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 4937 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 124:
#line 733 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-5].pfnsymbol)->retTag = (yyvsp[-3].retTag);
      if ((yyvsp[-3].retTag) == RET_REF)
        USR_FATAL("'ref' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[-3].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[-2].pexpr))
        (yyvsp[-5].pfnsymbol)->retExprType = new BlockStmt((yyvsp[-2].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[-1].pexpr))
        (yyvsp[-5].pfnsymbol)->where = new BlockStmt((yyvsp[-1].pexpr));
      (yyvsp[-5].pfnsymbol)->insertAtTail((yyvsp[0].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[-5].pfnsymbol)));
    }
#line 4957 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 753 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 4968 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 759 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 4980 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 766 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 4993 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 774 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol((yyvsp[0].pch));
                  (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5006 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 782 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5019 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 790 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol((yyvsp[0].pch));
                  (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5032 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 801 "chapel.ypp" /* yacc.c:1661  */
    {
      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString[0] = '\0';
    }
#line 5042 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 807 "chapel.ypp" /* yacc.c:1661  */
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 5053 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 814 "chapel.ypp" /* yacc.c:1661  */
    {
      FnSymbol* fn = (yyvsp[-5].pfnsymbol);

      fn->copyFlags((yyvsp[-8].pfnsymbol));
      // The user explicitly named this function (controls mangling).
      if (*(yyvsp[-8].pfnsymbol)->name)
        fn->cname = (yyvsp[-8].pfnsymbol)->name;

      if ((yyvsp[-7].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[-5].pfnsymbol), (yyvsp[-3].retTag), (yyvsp[-2].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), (yylsp[-8]).comment);
      context->latestComment = NULL;
    }
#line 5076 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 836 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 5084 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 840 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 5093 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 845 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pch));
    }
#line 5101 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 849 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pch));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 5110 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 857 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = astr("~", (yyvsp[0].pch)); }
#line 5116 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 858 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "&"; }
#line 5122 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 859 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "|"; }
#line 5128 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 142:
#line 860 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "^"; }
#line 5134 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 861 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "~"; }
#line 5140 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 862 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "=="; }
#line 5146 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 863 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "!="; }
#line 5152 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 864 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<="; }
#line 5158 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 147:
#line 865 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">="; }
#line 5164 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 866 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<"; }
#line 5170 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 867 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">"; }
#line 5176 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 868 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "+"; }
#line 5182 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 869 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "-"; }
#line 5188 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 870 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "*"; }
#line 5194 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 871 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "/"; }
#line 5200 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 872 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<<"; }
#line 5206 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 873 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">>"; }
#line 5212 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 874 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "%"; }
#line 5218 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 875 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "**"; }
#line 5224 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 876 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "!"; }
#line 5230 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 877 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "chpl_by"; }
#line 5236 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 878 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "#"; }
#line 5242 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 879 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "align"; }
#line 5248 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 880 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<=>"; }
#line 5254 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 881 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<~>"; }
#line 5260 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 164:
#line 885 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "="; }
#line 5266 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 886 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "+="; }
#line 5272 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 887 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "-="; }
#line 5278 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 888 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "*="; }
#line 5284 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 889 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "/="; }
#line 5290 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 890 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "%="; }
#line 5296 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 891 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "**="; }
#line 5302 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 892 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "&="; }
#line 5308 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 893 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "|="; }
#line 5314 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 894 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "^="; }
#line 5320 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 895 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">>="; }
#line 5326 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 896 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<<="; }
#line 5332 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 900 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 5338 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 901 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 5344 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 905 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 5350 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 909 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 5356 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 910 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 5362 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 911 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 5368 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 916 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 5374 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 918 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 5380 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 920 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 5386 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 922 "chapel.ypp" /* yacc.c:1661  */
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 5392 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 926 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_BLANK; }
#line 5398 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 927 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_IN; }
#line 5404 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 928 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_INOUT; }
#line 5410 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 929 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_OUT; }
#line 5416 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 930 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST; }
#line 5422 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 931 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST_IN; }
#line 5428 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 932 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST_REF; }
#line 5434 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 933 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_PARAM; }
#line 5440 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 934 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_REF; }
#line 5446 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 935 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_TYPE; }
#line 5452 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 939 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_BLANK; }
#line 5458 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 940 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_PARAM; }
#line 5464 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 941 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_REF;   }
#line 5470 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 945 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.procIter) = ProcIter_PROC; }
#line 5476 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 946 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.procIter) = ProcIter_ITER; }
#line 5482 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 950 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_VALUE; }
#line 5488 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 951 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_VALUE; }
#line 5494 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 952 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_REF; }
#line 5500 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 953 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_PARAM; }
#line 5506 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 954 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_TYPE; }
#line 5512 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 958 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = NULL; }
#line 5518 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 964 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 5524 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 210:
#line 969 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 5530 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 971 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
#line 5536 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 212:
#line 975 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
#line 5542 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 214:
#line 980 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5548 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 215:
#line 981 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[0].pdefexpr)->sym->addFlag(FLAG_PARAM); (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5554 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 985 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5560 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 217:
#line 986 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5566 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 218:
#line 991 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 5572 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 993 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 5578 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 220:
#line 995 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 5584 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 221:
#line 1000 "chapel.ypp" /* yacc.c:1661  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-1].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[0].pexpr));

      (yyval.pblockstmt) = buildChapelStmt(def);
    }
#line 5601 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 222:
#line 1013 "chapel.ypp" /* yacc.c:1661  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));

      var->addFlag(FLAG_TYPE_VARIABLE);

      var->doc               = context->latestComment;
      context->latestComment = NULL;

      DefExpr* def = new DefExpr(var, (yyvsp[-2].pexpr));

      (yyvsp[0].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pblockstmt));
    }
#line 5619 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 1029 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5625 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 224:
#line 1031 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5631 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 225:
#line 1033 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 5637 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1038 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_PARAM);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5648 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1045 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_CONST);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5659 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 228:
#line 1052 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_REF_VAR);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5670 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 229:
#line 1059 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-4].flag));
      flags.insert(FLAG_CONST);
      flags.insert(FLAG_REF_VAR);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-4]).comment);
    }
#line 5682 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1067 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5692 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 231:
#line 1075 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5698 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 232:
#line 1076 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_CONFIG;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5704 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 233:
#line 1077 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_EXTERN;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5710 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 235:
#line 1083 "chapel.ypp" /* yacc.c:1661  */
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 5719 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 236:
#line 1091 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 5725 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1093 "chapel.ypp" /* yacc.c:1661  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));
      var->addFlag(FLAG_ARRAY_ALIAS);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(var, (yyvsp[0].pexpr), (yyvsp[-2].pexpr)));
    }
#line 5735 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1099 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 5741 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 239:
#line 1104 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 5747 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 240:
#line 1106 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 5753 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1108 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 5759 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 242:
#line 1113 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 5765 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 243:
#line 1115 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 5771 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1117 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 5777 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1123 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5783 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 246:
#line 1124 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 5789 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1125 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5795 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 248:
#line 1129 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5801 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 249:
#line 1131 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 5807 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 250:
#line 1135 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5813 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1136 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5819 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 252:
#line 1137 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 5825 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 253:
#line 1138 "chapel.ypp" /* yacc.c:1661  */
    {printf("bad type specification"); }
#line 5831 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1159 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 5839 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1163 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 5847 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 256:
#line 1167 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pexpr)->copy()));
    }
#line 5859 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1174 "chapel.ypp" /* yacc.c:1661  */
    {printf("bad array type specification"); clean_exit(1); }
#line 5865 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1178 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5871 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1179 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5877 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1180 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5883 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1185 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 5889 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1187 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 5895 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1193 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 5901 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 264:
#line 1195 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 5907 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 265:
#line 1197 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 5913 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 266:
#line 1201 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5919 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1202 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5925 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 268:
#line 1203 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5931 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 269:
#line 1205 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr( "_singlevar"); }
#line 5937 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1206 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr( "_syncvar"); }
#line 5943 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1207 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5949 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1213 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 5955 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1214 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 5961 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1215 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 5967 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1216 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 5973 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1220 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 5979 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1221 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5985 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1222 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5991 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1226 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 5997 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1227 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6003 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1231 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 6009 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1236 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 6015 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1237 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6021 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1241 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pdefexpr)); }
#line 6027 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 1242 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 6033 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 1243 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedAliasActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 6039 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 288:
#line 1244 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 6045 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 290:
#line 1249 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 6051 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 296:
#line 1266 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 6057 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 297:
#line 1268 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 6063 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 298:
#line 1272 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 6069 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 299:
#line 1274 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 6075 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 300:
#line 1276 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 6081 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 301:
#line 1278 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 6087 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 302:
#line 1283 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6093 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 303:
#line 1285 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 6099 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 304:
#line 1287 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6105 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 305:
#line 1289 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6111 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 306:
#line 1291 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 6117 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 307:
#line 1293 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6123 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 308:
#line 1295 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6129 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 309:
#line 1297 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 6135 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 310:
#line 1299 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6141 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 311:
#line 1301 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6147 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 312:
#line 1303 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 6153 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 313:
#line 1305 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6159 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 314:
#line 1307 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 6170 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 315:
#line 1314 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 6180 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 316:
#line 1320 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 6190 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 317:
#line 1326 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 6200 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 318:
#line 1332 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 6210 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 319:
#line 1341 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(new DefExpr(buildIfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)))); }
#line 6216 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 320:
#line 1345 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new SymExpr(gNil); }
#line 6222 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 328:
#line 1361 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6228 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 329:
#line 1365 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = NULL; }
#line 6234 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 331:
#line 1370 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 6240 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 332:
#line 1375 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pIntentExpr).first, (yyvsp[0].pIntentExpr).second); }
#line 6246 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 333:
#line 1377 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pIntentExpr).first);
      (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pIntentExpr).second);
    }
#line 6255 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 334:
#line 1385 "chapel.ypp" /* yacc.c:1661  */
    {
      ArgSymbol* tiMark = tiMarkForIntent((yyvsp[-1].pt));
      if (!tiMark)
        USR_FATAL_CONT((yyvsp[0].pexpr), "Unsupported intent in with clause");
      (yyval.pIntentExpr).first = new SymExpr(tiMark);
      (yyval.pIntentExpr).second = (yyvsp[0].pexpr);
    }
#line 6267 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 335:
#line 1394 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pIntentExpr).first = (yyvsp[-2].pexpr), (yyval.pIntentExpr).second = (yyvsp[0].pexpr); }
#line 6273 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 337:
#line 1400 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6279 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 338:
#line 1405 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, (yyvsp[0].pexpr)); }
#line 6285 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 339:
#line 1410 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 6291 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 348:
#line 1426 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 6297 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 349:
#line 1428 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("_cast", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6303 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 350:
#line 1430 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_bounded_range", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6309 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 351:
#line 1432 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_partially_bounded_range", buildDotExpr("BoundedRangeType", "boundedLow"), (yyvsp[-1].pexpr)); }
#line 6315 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 352:
#line 1434 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_partially_bounded_range", buildDotExpr("BoundedRangeType", "boundedHigh"), (yyvsp[0].pexpr)); }
#line 6321 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 353:
#line 1436 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_unbounded_range", buildDotExpr("BoundedRangeType", "boundedNone")); }
#line 6327 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 360:
#line 1459 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 6333 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 361:
#line 1460 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 6339 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 362:
#line 1461 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 6345 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 363:
#line 1465 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 6351 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 364:
#line 1466 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 6357 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 365:
#line 1467 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), "_dom"); }
#line 6363 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 366:
#line 1475 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 6369 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 367:
#line 1476 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 6375 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 368:
#line 1477 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 6381 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 369:
#line 1481 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch));    }
#line 6387 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 370:
#line 1482 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 6393 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 371:
#line 1483 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 6399 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 372:
#line 1484 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 6405 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 373:
#line 1485 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 6411 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 374:
#line 1486 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 6417 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 375:
#line 1488 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 6425 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 376:
#line 1494 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6431 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 377:
#line 1495 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6437 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 378:
#line 1499 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6443 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 379:
#line 1500 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6449 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 380:
#line 1501 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6455 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 381:
#line 1502 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6461 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 382:
#line 1503 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6467 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 383:
#line 1504 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6473 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 384:
#line 1505 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6479 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 385:
#line 1506 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6485 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 386:
#line 1507 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6491 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 387:
#line 1508 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6497 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 388:
#line 1509 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6503 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 389:
#line 1510 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6509 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 390:
#line 1511 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6515 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 391:
#line 1512 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6521 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 392:
#line 1513 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6527 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 393:
#line 1514 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6533 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 394:
#line 1515 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6539 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 395:
#line 1516 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6545 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 396:
#line 1517 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6551 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 397:
#line 1518 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6557 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 398:
#line 1519 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6563 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 399:
#line 1520 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6569 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 400:
#line 1521 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6575 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 401:
#line 1525 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 6581 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 402:
#line 1526 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 6587 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 403:
#line 1527 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 6593 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 404:
#line 1528 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 6599 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 405:
#line 1529 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 6605 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 406:
#line 1530 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 6611 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 407:
#line 1534 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6617 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 408:
#line 1535 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6623 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 409:
#line 1536 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6629 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 410:
#line 1537 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6635 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 411:
#line 1541 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6641 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 412:
#line 1542 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6647 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 413:
#line 1543 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6653 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 414:
#line 1544 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6659 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 415:
#line 1549 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 6665 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 416:
#line 1550 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 6671 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 417:
#line 1551 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 6677 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 418:
#line 1552 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 6683 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 419:
#line 1553 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 6689 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 420:
#line 1554 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 6695 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 421:
#line 1555 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 6701 "bison-chapel.cpp" /* yacc.c:1661  */
    break;


#line 6705 "bison-chapel.cpp" /* yacc.c:1661  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, context, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, context, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc, context);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, context);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, context, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, context);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, context);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  yyps->yynew = 1;

yypushreturn:
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
