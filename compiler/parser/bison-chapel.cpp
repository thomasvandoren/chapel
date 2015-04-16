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
#line 172 "chapel.ypp" /* yacc.c:355  */

  extern int yydebug;

  void yyerror(YYLTYPE*       ignored,
               ParserContext* context,
               const char*    str);

#line 386 "bison-chapel.cpp" /* yacc.c:355  */

#endif /* !YY_YY_INCLUDE_BISON_CHAPEL_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 392 "bison-chapel.cpp" /* yacc.c:358  */
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

#line 458 "bison-chapel.cpp" /* yacc.c:359  */

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
#define YYLAST   10780

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  105
/* YYNRULES -- Number of rules.  */
#define YYNRULES  420
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  796

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

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
     125,   126,   127,   128,   129
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
    1180,  1184,  1186,  1192,  1194,  1196,  1201,  1202,  1203,  1204,
    1205,  1206,  1212,  1213,  1214,  1215,  1219,  1220,  1221,  1225,
    1226,  1230,  1231,  1235,  1236,  1240,  1241,  1242,  1243,  1244,
    1248,  1259,  1260,  1261,  1262,  1263,  1264,  1266,  1268,  1270,
    1272,  1274,  1279,  1281,  1283,  1285,  1287,  1289,  1291,  1293,
    1295,  1297,  1299,  1301,  1303,  1310,  1316,  1322,  1328,  1337,
    1342,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,  1362,
    1363,  1367,  1371,  1373,  1381,  1391,  1395,  1396,  1401,  1406,
    1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1424,
    1426,  1428,  1430,  1432,  1437,  1438,  1439,  1440,  1451,  1452,
    1456,  1457,  1458,  1462,  1463,  1471,  1472,  1473,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1490,  1491,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,
    1508,  1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,
    1521,  1522,  1523,  1524,  1525,  1526,  1530,  1531,  1532,  1533,
    1537,  1538,  1539,  1540,  1545,  1546,  1547,  1548,  1549,  1550,
    1551
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
  "TCONST", "TCONTINUE", "TDELETE", "TDMAPPED", "TDO", "TELSE", "TENUM",
  "TEXPORT", "TEXTERN", "TFOR", "TFORALL", "TIF", "TIN", "TINDEX",
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384
};
# endif

#define YYPACT_NINF -680

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-680)))

#define YYTABLE_NINF -374

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -680,    67,  2228,  -680,  -680,  -680,  -680,  -680,  -680,  -680,
    3252,    15,   100,    15,  5878,    44,   100,  5878,  3252,   100,
     100,   590,  4927,  5878,  5878,   137,  -680,   100,  -680,    38,
    3252,  5878,  -680,  5878,  -680,  5878,  5878,   190,   149,  5104,
    5878,  5227,  5878,   140,   162,  3252,    69,  5305,  5878,  5878,
    -680,  -680,  5878,  -680,  -680,  6580,  5878,  5878,  -680,  5878,
    -680,  -680,  2514,  4729,  5305,  -680,  3129,  -680,  -680,   100,
    -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -680,    29,  -680,    73,   227,  -680,  -680,  -680,   240,
     197,  -680,  -680,  -680,   198,   220,   144,   249,   258, 10594,
     714,   232,   264,   265,  -680,  -680,  -680,  -680,  -680,  -680,
     146,  -680, 10594,   236,  3252,  -680,   270,  -680,   255,  5878,
    5878,  5878,  5878,  5878,  5305,  5305,   244,  -680,  -680,  -680,
    -680,  8148,   261,  -680,  -680,   100,   273,  8346,   323,   274,
    -680,  -680,   100,  -680,   100,   278,    39,  7158,  7092,  7290,
    5305,  3252,   294,    12,    74,   -12,  -680,  -680,   254,   329,
    7356,   254,  -680,  5305,  -680,  8412,  8016,  3252,  -680,  -680,
    7356, 10594,   313,  5305,  -680, 10594,  5305,   361,   333,   100,
    -680,    28, 10594,  7356,  8478,   408,  1623,   254,   408,   254,
    -680,  -680,  2637,    68,  -680,  5878,  -680,    71,    81, 10594,
      50,  8544,   -30,   438,  -680,   328,  -680,  -680,  -680,   100,
    -680,  -680,  -680,    14,    38,    38,    38,  -680,  5878,  5878,
    5878,  5878,  5404,  5404,  5878,  5878,  5878,  5878,  5878,  5878,
      66,  6580,  5878,  5878,  5878,  5878,  5878,  5878,  5878,  5878,
    5878,  5878,  5878,  5878,  5878,  5878,  5878,  5878,  5878,  5878,
    5878,  5878,  5878,  5878,  5878,  5878,  5878,  5878,  5878,  5878,
    5878,  5878,  5305,  5305,  5404,  5404,   509,  -680,  -680,  2760,
    -680,  8214,  8280,  8612,    32,  5404,    39,   335,  -680,  -680,
    5878,   100,   339,   427,  5305,  -680,  3375,  5404,  -680,  3498,
    5404,  -680,    39,  3252,   435,   325,  -680,   336,   363,  -680,
   10594,  -680,    52,  -680,  -680,    12,  -680,   367,   349,  -680,
    1908,   399,   398,  5878,    38,  -680,   356,  -680,  -680,  -680,
    -680,  5305,   358,    -2,  2033,   387,  -680,  -680,  5305,  -680,
    -680,  -680,  -680,  -680,  -680,   851,  4828,  -680,  5005,  -680,
    5404,  2391,   359,  5878,  5878,  -680,  -680,  2883,   394,   300,
      38,    85,    88,   167,   202,  8082, 10628, 10628,   225,  -680,
     225,  -680,   225,  2270,  1060,  1223,   799,   329,   408,  -680,
    -680,  1623,  6889,   225,  1416,  1416, 10628,  1416,  1416,   414,
     408,  6889, 10662,   414,   254,   254,   408,  8678,  8744,  8810,
    8876,  8942,  9008,  9074,  9140,  9206,  9272,  9338,  9404,  9470,
    9536,  9602,   366,   368,  -680,   225,  -680,   225,   129,  -680,
    -680,  -680,  -680,  -680,  -680,  -680,   100,    82,  -680,   443,
    5956,  5404,  6034,  5404,  5878,  5404,  6757,    15,  9668,  -680,
    -680,  9734,   421,    98,  -680,  -680,  5878,    83,  5878, 10594,
      41,  7422,  5878, 10594,    11,  7224,  -680,   479,  9800,  3252,
    5878,  5305,  -680,  5305,   166,  -680,    48,   275,   380,    12,
      59,  -680,  5305,  -680,   229,  5878,  5503,  -680, 10594,  -680,
    -680,     5,   389,  -680,  -680,  5305,  -680,   206,   100,  -680,
   10594,  -680,  -680,  -680,  -680,   -50,  6734,  -680, 10594,  3252,
   10594,  9866,  -680,  3006,  5305,   393,  -680,  -680,  -680,  6811,
     223,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -680,  -680,  -680,  -680,   509,  -680,   100,  5878,   495,
    9934,  5878,   502, 10000,   400,  6923,    39,    39,  -680,  5878,
     100,  -680,  7356,  -680,  7488,  3621,  -680,  3744,  -680,  7554,
    3867,  -680,    39,  3990,  -680,    39,  3252,  5878,  -680, 10594,
    -680, 10594,  -680,   699,  -680,    12,   430,  -680,  -680,  -680,
    -680,    47,  -680,  -680,  2033,   398,    56, 10594,  -680, 10594,
    3252,  5305,  -680,  -680,  -680,    19,    60,  -680,  4113,   402,
    4236,   407,  -680,  5878,  -680,   440,  -680,   275,  -680,  -680,
    -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -680,  -680,   100,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -680,  -680,  -680,   436,   418,   418,  -680,  -680,  -680,
   10066,  6112,  6190, 10132,  6268,  6346,  6424,  6502,  -680,  -680,
   10594,  -680,  -680,  3252,  5878, 10594,  5878, 10594,  3252,  5878,
   10594,  -680,  5878, 10594,  -680,  -680, 10594,  -680,   422,  5581,
     196,   480,  -680,  5404,  4359,  -680,    51,  -680,  4482,  5878,
    -680, 10594,  3252,  5878,  -680, 10594,  3252, 10594,   373,    23,
    -680,  6811,    52,  -680,  -680,  5878,  5878,  5878,  5878,  5878,
    5878,  5878,  5878,  9800,  7620,  7686,  9800,  7752,  7818,   430,
    5878,  5878,  4605,  -680,  -680,   192,  5305,  -680,  -680,  5878,
      24,  6957,  -680,   423,  -680,  7884,  -680,  7950,  -680,   690,
     100,  -680,   357,  -680,   480,  -680,   418,   418,   171, 10198,
   10264, 10330, 10396, 10462, 10528,  3252,  3252,  3252,  3252,   196,
    5680,    61,  -680,  -680, 10594, 10594,  -680,  -680,  -680,  6502,
    3252,  3252,  -680,    10,  -680,  -680,  -680,  5878,  5878,  5878,
    5878,  5878,  5878,  9800,  9800,  9800,  9800,  -680,  -680,  -680,
    -680,  -680,   391,  5404,  6658,   490,  9800,  9800,  -680,  -680,
    -680,  6991,  -680,  -680,  5779,  -680
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,    34,    60,   368,   369,   370,   371,
       0,   329,    58,   329,     0,   232,    58,     0,     0,     0,
     127,   233,     0,     0,     0,     0,   126,     0,   122,     0,
       0,     0,    37,     0,   320,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     416,   418,     0,   419,   420,   353,     0,     0,   417,   414,
      65,   415,     0,     0,     0,     4,     0,     5,     9,     0,
      10,    11,    13,   290,    19,    12,    14,    16,    15,    17,
      18,    67,     0,    68,   345,     0,    66,    69,    70,     0,
     354,   341,   342,   293,   291,     0,     0,   346,   347,     0,
     292,     0,   355,   356,   357,   340,   295,   294,   343,   344,
       0,    21,   300,     0,     0,   330,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,   345,   354,   291,   346,
     347,   329,   292,   355,   356,     0,     0,     0,     0,     0,
     128,    71,     0,   130,     0,     0,     0,     0,     0,     0,
     281,     0,     0,     0,     0,     0,   234,    28,   402,   338,
       0,   403,     7,   281,    63,     0,     0,     0,    62,    31,
       0,   296,     0,   281,    32,   301,     0,   223,     0,   211,
     273,     0,   272,     0,     0,   405,   352,   401,   404,   400,
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
      73,    33,    39,    41,   372,     0,     0,   365,     0,   367,
       0,     0,     0,     0,     0,   374,     8,     0,   111,   196,
       0,     0,     0,     0,     0,   328,   397,   396,   399,   407,
     406,   411,   410,   393,   390,   391,   392,   349,   380,   364,
     363,   350,   384,   395,   389,   387,   398,   388,   386,   378,
     383,   385,   394,   377,   381,   382,   379,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   409,   408,   413,   412,   190,   187,
     188,   189,   193,   194,   195,   414,     0,     0,   332,     0,
       0,     0,     0,     0,     0,     0,   373,   329,   329,    76,
     219,     0,   120,     0,   117,   220,     0,     0,     0,   304,
       0,     0,     0,   310,     0,     0,    87,    95,     0,     0,
       0,     0,   297,     0,     0,   180,     0,   201,     0,   243,
       0,   257,     0,   252,   341,     0,     0,   236,   339,   235,
     362,     0,     0,   298,   100,     0,   225,   341,     0,   275,
     274,   348,   366,   279,   280,     0,     0,    92,   314,     0,
     375,     0,    35,     0,     0,     0,   197,   198,   132,     0,
       0,   227,   226,   228,   230,    43,    50,    51,    52,    47,
      49,    56,    57,    45,    48,    46,    44,    54,    53,    55,
     360,   361,   191,   192,   334,   186,   331,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
     118,   116,     0,    94,     0,     0,    78,     0,    77,     0,
       0,    84,     0,     0,    82,     0,     0,     0,    98,   287,
     285,   286,   284,   186,   178,     0,   266,   202,   204,   203,
     205,     0,   241,   244,     0,   245,     0,   237,   246,   247,
       0,     0,    99,   101,   299,     0,     0,   222,     0,     0,
       0,     0,    93,     0,    36,   112,   113,   201,   161,   159,
     164,   171,   172,   173,   168,   170,   166,   169,   167,   165,
     175,   174,   140,   143,   141,   142,   153,   144,   157,   149,
     147,   160,   148,   146,   151,   156,   158,   145,   150,   154,
     155,   152,   162,   163,   138,   176,   176,   229,   333,   335,
       0,     0,     0,     0,     0,     0,     0,     0,    75,    74,
     121,   119,    81,     0,     0,   303,     0,   302,     0,     0,
     309,    85,     0,   308,    83,    97,   319,   181,     0,     0,
     245,   216,   238,     0,     0,   103,     0,   104,     0,     0,
      90,   316,     0,     0,    88,   315,     0,   376,   231,     0,
     139,     0,   179,   134,   135,     0,     0,     0,     0,     0,
       0,     0,     0,   307,     0,     0,   313,     0,     0,   266,
     269,   270,     0,   268,   271,   341,   212,   183,   182,     0,
       0,     0,   255,   341,   102,     0,    91,     0,    89,   233,
       0,   105,   231,   114,   216,   138,   176,   176,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   245,
     258,     0,   213,   215,   214,   217,   208,   209,   124,     0,
       0,     0,   115,     0,   136,   137,   177,     0,     0,     0,
       0,     0,     0,   306,   305,   312,   311,   185,   184,   260,
     261,   263,   341,     0,   373,   341,   318,   317,   206,   133,
     207,     0,   262,   264,   258,   265
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -680,  -680,  -680,    -1,  -139,  1630,  -680,  -680,  1082,   204,
    -680,  -680,   536,  1661,   889,  -613,  -559,  -680,  -680,    78,
    -680,  -680,    84,  -680,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -680,    17,   330,  -680,  -680,  -680,  -680,  -680,  -680,
    -680,  -130,  -127,  -616,  -680,  -133,     3,  -257,  -680,  -680,
     -23,  -680,  -194,   141,  -680,  -174,  -158,  -680,  -132,  -680,
    -680,  -680,  -157,   263,  -680,  -294,  -569,  -680,  -432,  -316,
    -479,  -679,  -128,   -28,    95,  -680,  -129,  -680,   126,   279,
    -308,  -680,  -680,   552,  -680,    -8,  -108,  -680,    62,  -680,
     703,   826,   -10,  1003,  -680,  1118,  1306,  -680,  -680,  -680,
    -680,  -680,  -680,  -680,  -239
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   191,    66,   447,    68,    69,    70,   192,
      71,    72,   116,    73,   169,    74,    75,    76,    77,   534,
      78,    79,   471,   583,    80,    81,    82,   209,   495,   688,
      83,   433,   434,   126,   152,   457,    85,    86,   349,   597,
     498,   635,   636,   693,   303,   454,   455,   456,   499,   212,
     571,   789,   758,   180,   753,   717,   720,    87,   178,   325,
      88,    89,   155,   156,   307,   308,   467,   311,   312,   463,
     780,   714,   670,   193,   197,   198,   297,   298,   299,   127,
      91,    92,    93,   128,    95,   114,   115,   417,   418,    96,
     129,   130,    99,   132,   101,   133,   134,   104,   105,   202,
     106,   107,   108,   109,   110
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     112,    65,   464,   277,   131,   118,   672,   137,   476,   416,
     282,   458,   147,   148,   149,     5,   477,     5,   313,   181,
     694,   158,   113,   159,   309,   160,   161,   419,   575,   165,
     166,   170,   171,   550,   316,   175,   200,   182,   183,   184,
     292,     5,   185,   206,   322,   186,   187,   188,   309,   189,
     580,     5,   182,   199,   201,  -186,   351,   352,   353,   354,
     309,   167,   425,   545,   580,    39,   344,     3,   350,     5,
     408,   781,     5,   167,   581,   309,   588,   304,  -250,    39,
     340,   207,   409,   113,   314,   410,   673,   113,   581,  -250,
     673,   783,   342,  -250,   328,   208,   345,   274,   411,   412,
     146,   718,  -250,     5,  -250,   793,   413,   757,   135,   112,
     271,   272,   273,   175,   182,   201,   414,  -250,   574,   474,
     764,   765,   113,   276,   328,   788,   176,   582,   328,   733,
     369,   269,   269,   402,   403,   305,  -250,   153,  -250,   671,
     300,   677,   574,   329,  -250,   269,   328,   328,   323,  -248,
     757,  -250,   328,   300,   574,  -250,   328,   328,   426,   522,
     269,   153,   269,   300,   328,   573,   182,   336,  -250,   310,
    -250,   565,   269,   762,  -250,  -186,   341,   338,   525,   328,
     778,   314,   674,   523,   314,   335,   678,   784,  -325,  -250,
     334,   333,   472,   500,   540,   337,  -359,   162,  -359,   264,
     501,   172,   265,   502,   196,   339,   526,   543,   355,   356,
     357,   358,   360,   362,   363,   364,   365,   366,   367,   368,
     541,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   300,   300,   405,   407,   437,   734,   213,  -251,
     150,   210,   563,   314,   218,   428,   464,   563,   416,  -267,
     431,   668,   163,   466,   182,   221,   439,   441,   211,   443,
     445,    90,   503,   448,  -251,   173,   419,   214,  -267,    90,
     564,   296,  -267,   567,   215,   766,   716,    90,   314,  -251,
     359,   361,  -224,   468,   296,   792,  -251,   222,   216,    90,
     223,   300,  -322,  -321,   296,   795,  -267,   504,   480,   314,
     228,  -224,   568,   230,    90,  -251,   199,   233,   199,   569,
     486,   488,    84,   490,   491,   217,   552,   555,   637,   570,
      84,    90,   404,   406,  -251,    90,   587,   496,    84,   228,
    -251,   229,   230,   427,   497,   262,   233,   263,   722,   266,
      84,   715,   722,   240,  -326,   440,   723,  -359,   444,  -359,
     723,  -106,   246,  -327,    15,    84,   269,   589,   591,  -324,
    -323,    19,    20,   729,  -358,   268,  -358,  -106,   278,    26,
      15,  -125,    84,    90,   280,   281,    84,    19,    20,   729,
     450,   284,   451,   296,   296,    26,   203,  -125,  -125,  -106,
     439,   530,   443,   533,   448,   535,   488,   302,   485,   536,
     537,   730,    37,  -106,  -125,  -106,   542,   230,   544,   221,
      90,   483,   549,   484,   576,   221,   321,   730,   324,  -106,
     559,   561,   782,   300,    84,   346,    90,   586,   326,   347,
     430,   785,   201,  -254,   435,   577,   579,   436,   449,   453,
     452,   222,   296,   459,   223,   201,   595,   222,  -259,   479,
     223,    90,    60,   460,   465,   466,   782,   196,  -254,   196,
     470,    84,   473,   478,   182,   489,   782,  -259,    60,   494,
     520,  -259,   333,  -254,   521,   731,   527,    84,   539,   529,
    -254,   532,   556,   228,   572,   225,   230,   226,   227,   228,
     233,   229,   230,   584,   596,  -259,   233,   641,   640,  -254,
    -256,   643,    84,   240,   644,   669,   646,   408,   682,   650,
     244,   245,   246,   686,   691,   655,   328,   657,  -254,   409,
     660,   692,   410,   663,  -254,  -256,   709,   666,    90,   732,
     719,   493,   136,   676,    94,   411,   412,   651,   585,   738,
    -256,   736,    94,   413,   737,    90,   667,  -256,    90,   790,
      94,   182,    90,   414,   689,   777,   763,   469,   681,   562,
     685,   749,    94,   687,     0,    50,  -256,   638,     0,     0,
       0,     0,   560,     5,   296,     0,     0,    94,   141,    84,
      51,     0,    53,    54,  -107,  -256,     0,     0,     0,     0,
       0,  -256,     0,     0,    94,     0,    84,     0,    94,    84,
      90,    58,   415,    84,  -129,     0,    90,    61,     0,     0,
       0,   655,   657,     0,   660,   663,   681,   685,     0,     0,
       0,  -129,  -107,   703,   704,     0,   705,     0,   706,   707,
       0,     0,   708,     0,   142,     0,  -107,     0,     0,     0,
       0,     0,     0,   721,   488,     0,    94,     0,   488,   725,
       0,    84,     0,   727,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,   751,   703,   739,   740,   706,   741,
     742,   743,   744,     5,     0,   524,     0,     0,     0,     0,
     171,   175,   201,    94,  -107,    97,   754,     0,     0,   755,
       0,     0,     0,    97,     0,     0,     0,   408,     0,    94,
       0,    97,     0,     0,  -129,     0,     0,     0,    90,   409,
       0,     0,   410,    97,     0,   773,   774,   775,   776,     0,
       0,  -129,  -107,     0,    94,   411,   412,     0,    97,   685,
     786,   787,     0,   413,   142,     0,  -107,   773,   774,   775,
     776,   786,   787,   414,     0,    97,     0,     0,    90,    97,
       0,     0,    90,   791,   488,     0,     0,     0,     0,    84,
       0,     0,     0,     0,   685,     0,     0,     0,     0,     0,
       0,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,     0,   639,     0,     0,     0,
     713,     0,     0,     0,     0,     0,     0,    97,     0,    84,
     221,    94,     0,    84,    90,     0,    90,     0,    98,    90,
       0,     0,    90,   261,  -336,    90,    98,  -358,    94,  -358,
       0,    94,     0,     0,    98,    94,     0,     0,     0,     0,
       0,     0,   222,     0,    97,   223,    98,   752,     0,    90,
     219,     0,     0,     0,   220,     0,     0,    90,     0,    90,
      97,    98,   221,     0,     0,    84,     0,    84,     0,     0,
      84,     0,     0,    84,     0,     0,    84,     0,    98,     0,
     225,   779,    98,    94,   228,    97,   229,   230,     0,    94,
       0,   233,     0,     0,   222,     0,     0,   223,   240,     0,
      84,     0,     0,     0,     0,   244,   245,   246,    84,     0,
      84,     0,     0,     0,     0,   779,     0,   224,     0,     0,
       0,     0,    90,     0,     0,   779,     0,    90,     0,     0,
      98,     0,   225,     0,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,    90,   241,   242,   243,    90,     0,   244,   245,   246,
       0,     0,    97,     0,     0,   481,     0,    98,     0,     0,
       0,     0,     0,    84,     0,     0,     0,     0,    84,    97,
       0,     0,    97,    98,     0,     0,    97,     0,     0,     0,
       0,    94,     0,     0,     0,   100,     0,     0,     0,     0,
       0,     0,    84,   100,     0,     0,    84,     0,    98,     0,
       0,   100,     0,     0,    90,    90,    90,    90,     0,     0,
       0,     0,     0,   100,     0,   285,   288,   291,     0,    90,
      90,    94,     0,     0,    97,    94,     0,     0,   100,   315,
      97,     0,     0,     0,     0,     0,     0,     0,     0,   320,
       0,     0,     0,     0,     0,   100,     0,     0,     0,   100,
       0,     0,   330,     0,     0,    84,    84,    84,    84,     0,
       0,   221,     0,     0,     0,     0,     0,     0,     0,     0,
      84,    84,     0,     0,     0,    98,     0,    94,     0,    94,
       0,     0,    94,     0,     0,    94,     0,     0,    94,     0,
       0,     0,    98,   222,     0,    98,   223,   100,     0,    98,
     102,     0,     0,   168,     0,     0,     0,     0,   102,     0,
       0,     0,    94,     0,     0,     0,   102,     0,     0,     0,
      94,     0,    94,     0,     0,     0,     0,     0,   102,     0,
       0,     0,    97,     0,   100,   228,     0,   229,   230,     0,
       0,     0,   233,   102,     0,   429,     0,    98,     0,   240,
     100,     0,     0,    98,     0,     0,   244,   245,   246,     0,
     102,   446,     0,     0,   102,     0,     0,     0,     0,     0,
       0,     0,    97,     0,     0,   100,    97,     0,     0,     0,
     270,     0,     0,     0,     0,    94,     0,     0,     0,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   168,
     168,   294,   102,     0,    94,     0,     0,     0,    94,     0,
       0,     0,   168,     0,   221,     0,     0,     0,    97,     0,
      97,     0,   168,    97,     0,     0,    97,     0,     0,    97,
       0,     0,     0,     0,     0,   168,     0,     0,     0,   102,
       0,     0,   100,     0,     0,    98,   222,     0,     0,   223,
       0,     0,     0,    97,     0,   102,     0,     0,     0,   100,
       0,    97,   100,    97,     0,     0,   100,    94,    94,    94,
      94,     0,     0,     0,     0,     0,     0,     0,   103,     0,
     102,     0,    94,    94,   225,    98,   103,   227,   228,    98,
     229,   230,     0,     0,   103,   233,     0,     0,     0,   546,
     548,     0,   240,   551,   554,     0,   103,     0,     0,   244,
     245,   246,     0,     0,   100,     0,     0,     0,     0,     0,
     100,   103,     0,     0,     0,     0,    97,     0,   168,     0,
       0,    97,     0,     0,     0,     0,     0,     0,   103,     0,
       0,    98,   103,    98,   168,     0,    98,     0,     0,    98,
       0,     0,    98,     0,     0,    97,     0,   102,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,    98,   102,     0,     0,
       0,   102,     0,     0,    98,     0,    98,     0,     0,     0,
     103,     0,     0,     0,     0,   648,   649,     0,     0,     0,
       0,   652,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   661,     0,     0,   664,     0,     0,     0,    97,    97,
      97,    97,   100,     0,     0,     0,     0,   103,     0,   102,
       0,     0,     0,    97,    97,   102,     0,     0,     0,   222,
       0,     0,   223,   103,     0,     0,     0,     0,     0,    98,
       0,     0,     0,     0,    98,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,   100,     0,   103,     0,
       0,     0,     0,     0,     0,     0,     0,   225,    98,   226,
     227,   228,    98,   229,   230,   231,     0,     0,   233,     0,
       0,     0,   168,   168,   239,   240,   168,   168,     0,   243,
       0,     0,   244,   245,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   100,     0,
     100,     0,     0,   100,     0,     0,   100,     0,     0,   100,
       0,     0,     0,     0,     0,   724,     0,   102,     0,     0,
       0,    98,    98,    98,    98,   103,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,    98,    98,     0,     0,
       0,   100,   103,   100,     0,   103,     0,     0,     0,   103,
       0,     0,     0,     0,     0,     0,     0,   102,     0,     0,
       0,   102,     0,     0,     0,     0,     0,     0,   168,   168,
       0,     0,     0,     0,   168,     0,   294,     0,     0,     0,
       0,   294,    67,     0,   168,     0,     0,   168,     0,     0,
     111,     0,     0,     0,   221,     0,     0,   103,   138,     0,
       0,     0,     0,   103,     0,     0,   100,     0,     0,     0,
     157,   100,     0,   102,     0,   102,     0,     0,   102,     0,
       0,   102,     0,   117,   102,   174,   222,   117,     0,   223,
     139,   140,   143,     0,     0,   100,     0,     0,   151,   100,
     154,     0,    67,     0,     0,     0,   204,     0,   102,     0,
       0,     0,     0,     0,     0,     0,   102,   177,   102,     0,
       0,     0,     0,     0,   225,     0,   226,   227,   228,     0,
     229,   230,     0,     0,     0,   233,     0,     0,     0,     0,
     205,   239,   240,     0,     0,     0,   243,     0,     0,   244,
     245,   246,     0,     0,   267,     0,     0,     0,   100,   100,
     100,   100,     0,     0,     0,   103,     0,     0,   168,     0,
       0,     0,     0,   100,   100,     0,     0,     0,     0,     0,
       0,   102,     0,     0,     0,     0,   102,     0,     0,     0,
       0,   301,     0,     0,     0,     0,   294,   294,     0,   294,
     294,     0,     0,     0,     0,   103,   177,   319,     0,   103,
     102,     0,   756,   177,   102,   283,     0,   294,     0,   294,
       0,   295,     0,     0,   306,     0,     0,     0,     0,     0,
       0,     0,    67,     0,   295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   295,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     0,   756,     0,     0,     0,     0,
       0,   103,     0,   103,     0,     0,   103,     0,     0,   103,
       0,     0,   103,   102,   102,   102,   102,     0,     0,     0,
     348,     0,     0,     0,   154,   154,   154,   154,   102,   102,
       0,     0,     0,     0,     0,     0,   103,     0,     0,     0,
       0,   370,     0,     0,   103,     0,   103,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
       0,     5,     6,     7,     8,     9,   319,     0,   119,   319,
       0,     0,     0,   295,   295,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   121,   122,     0,    25,
       0,     0,   432,     0,    28,    29,     0,    31,     0,    33,
      34,     0,     0,     0,     0,     0,    36,     0,    38,   103,
       0,     0,     0,     0,   103,     0,   306,    42,    43,    44,
     123,   487,     0,     0,     0,   154,     0,    67,     0,     0,
       0,     0,   295,     0,    50,     0,     0,     0,   103,     0,
       0,     0,   103,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,     0,
       0,   154,     0,     0,     0,     0,    56,     0,    57,     0,
      58,    59,     0,     0,     0,     0,    61,     0,     0,   124,
       0,    63,     0,   462,   461,     0,     5,     6,     7,     8,
       9,     0,     0,   119,     0,     0,     0,     0,     0,     0,
       0,   103,   103,   103,   103,     0,     0,     0,     0,     0,
     120,   121,   122,     0,    25,     0,   103,   103,     0,    28,
      29,     0,    31,     0,    33,    34,     0,     0,     0,   558,
       0,    36,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,   295,     0,     0,   566,     0,   592,
     306,     0,     0,    67,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,   177,
       0,    56,     0,    57,     0,    58,    59,     0,     0,     0,
       0,    61,     0,     0,   124,     0,    63,     0,   475,     0,
     634,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,   319,     0,     0,
     319,     0,     0,   319,     0,     0,   665,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   432,     0,     0,     0,     0,     0,     0,     0,     0,
     675,     0,     0,     0,     0,     0,     0,     0,   680,     0,
     684,     0,     0,     0,     0,     0,   306,     0,    -2,     4,
       0,     5,     6,     7,     8,     9,     0,     0,    10,    11,
      12,     0,  -106,    13,    14,    15,  -231,    16,    17,     0,
      18,     0,    19,    20,    21,    22,    23,    24,     0,    25,
      26,     0,  -125,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    35,     0,   690,  -231,    36,    37,    38,  -125,
    -106,     0,  -231,    39,     0,    40,    41,    42,    43,    44,
      45,   221,    46,     0,  -106,    47,  -231,     0,     0,    48,
       0,    49,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,   726,     0,     0,     0,   728,     0,     0,    51,
      52,    53,    54,   222,     0,     0,   223,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,    57,     0,
      58,    59,     0,    60,     0,     0,    61,     0,     0,    62,
       0,    63,   735,    64,     0,     0,     0,     0,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,     0,   237,   238,   239,   240,
       0,   241,     0,   243,     0,     0,   244,   245,   246,     0,
     143,   177,     4,     0,     5,     6,     7,     8,     9,     0,
    -373,    10,    11,    12,  -373,  -106,    13,    14,    15,  -231,
      16,    17,  -373,    18,  -373,    19,    20,    21,    22,    23,
      24,     0,    25,    26,     0,  -125,    27,    28,    29,    30,
      31,    32,    33,    34,     0,    35,     0,     0,  -231,    36,
       0,    38,  -125,  -106,  -373,  -231,    39,  -373,    40,    41,
      42,    43,    44,    45,     0,    46,     0,  -106,    47,  -231,
       0,     0,    48,     0,    49,     0,     0,  -373,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -373,    52,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,     0,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,    57,  -373,  -373,  -373,     0,    60,  -373,  -373,  -373,
       0,     0,    62,  -373,    63,     4,    64,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,     0,  -106,    13,
      14,    15,  -231,    16,    17,     0,    18,     0,    19,    20,
      21,    22,    23,    24,     0,    25,    26,     0,  -125,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    35,     0,
       0,  -231,    36,    37,    38,  -125,  -106,     0,  -231,    39,
       0,    40,    41,    42,    43,    44,    45,     0,    46,     0,
    -106,    47,  -231,     0,     0,    48,     0,    49,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,    57,     0,    58,    59,   179,    60,
       0,     0,    61,     0,     0,    62,   190,    63,     4,    64,
       5,     6,     7,     8,     9,     0,     0,    10,    11,    12,
       0,  -106,    13,    14,    15,  -231,    16,    17,     0,    18,
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
      17,     0,    18,     0,    19,    20,    21,    22,    23,    24,
       0,    25,    26,     0,  -125,    27,    28,    29,    30,    31,
      32,    33,    34,     0,    35,     0,     0,  -231,    36,    37,
      38,  -125,  -106,     0,  -231,    39,     0,    40,    41,    42,
      43,    44,    45,     0,    46,     0,  -106,    47,  -231,     0,
       0,    48,     0,    49,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
      57,     0,    58,    59,     0,    60,     0,     0,    61,     0,
       0,    62,   190,    63,     4,    64,     5,     6,     7,     8,
       9,     0,     0,    10,    11,    12,     0,  -106,    13,    14,
      15,  -231,    16,    17,     0,    18,     0,    19,    20,    21,
      22,    23,    24,     0,    25,    26,     0,  -125,    27,    28,
      29,    30,    31,    32,    33,    34,     0,    35,     0,     0,
    -231,    36,    37,    38,  -125,  -106,     0,  -231,    39,     0,
      40,    41,    42,    43,    44,    45,     0,    46,     0,  -106,
      47,  -231,     0,     0,    48,     0,    49,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,    57,     0,    58,    59,     0,    60,     0,
       0,    61,     0,     0,    62,   492,    63,     4,    64,     5,
       6,     7,     8,     9,     0,     0,    10,    11,    12,     0,
    -106,    13,    14,    15,  -231,    16,    17,     0,    18,     0,
      19,    20,    21,    22,    23,    24,     0,    25,    26,     0,
    -125,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      35,     0,     0,  -231,    36,    37,    38,  -125,  -106,     0,
    -231,    39,     0,    40,    41,    42,    43,    44,    45,     0,
      46,     0,  -106,    47,  -231,     0,     0,    48,     0,    49,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    57,     0,    58,    59,
       0,    60,     0,     0,    61,     0,     0,    62,   594,    63,
       4,    64,     5,     6,     7,     8,     9,     0,     0,    10,
      11,    12,     0,  -106,    13,    14,    15,  -231,    16,    17,
       0,    18,     0,    19,    20,    21,    22,    23,    24,     0,
      25,    26,     0,  -125,    27,    28,    29,    30,    31,    32,
      33,    34,     0,    35,     0,     0,  -231,    36,   203,    38,
    -125,  -106,     0,  -231,    39,     0,    40,    41,    42,    43,
      44,    45,     0,    46,     0,  -106,    47,  -231,     0,     0,
      48,     0,    49,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,    57,
       0,    58,    59,     0,    60,     0,     0,    61,     0,     0,
      62,     0,    63,     4,    64,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,     0,  -106,    13,    14,    15,
    -231,    16,    17,     0,    18,     0,    19,    20,    21,    22,
      23,    24,     0,    25,    26,     0,  -125,    27,    28,    29,
      30,    31,    32,    33,    34,     0,    35,     0,     0,  -231,
      36,     0,    38,  -125,  -106,     0,  -231,    39,     0,    40,
      41,    42,    43,    44,    45,     0,    46,     0,  -106,    47,
    -231,     0,     0,    48,     0,    49,     0,     0,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,    57,     0,    58,    59,     0,    60,     0,     0,
      61,     0,     0,    62,     0,    63,     4,    64,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,     0,  -106,
      13,    14,    15,  -231,    16,    17,     0,    18,     0,    19,
      20,    21,    22,    23,   438,     0,    25,    26,     0,  -125,
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
      18,     0,    19,    20,    21,    22,    23,   442,     0,    25,
      26,     0,  -125,    27,    28,    29,    30,    31,    32,    33,
      34,     0,    35,     0,     0,  -231,    36,     0,    38,  -125,
    -106,     0,  -231,    39,     0,    40,    41,    42,    43,    44,
      45,     0,    46,     0,  -106,    47,  -231,     0,     0,    48,
       0,    49,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,     0,     0,     0,    56,     0,    57,     0,
      58,    59,     0,    60,     0,     0,    61,     0,     0,    62,
       0,    63,     4,    64,     5,     6,     7,     8,     9,     0,
       0,    10,    11,    12,     0,  -106,    13,    14,    15,  -231,
      16,    17,     0,    18,     0,    19,    20,    21,    22,    23,
     654,     0,    25,    26,     0,  -125,    27,    28,    29,    30,
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
      14,    15,  -231,    16,    17,     0,    18,     0,    19,    20,
      21,    22,    23,   656,     0,    25,    26,     0,  -125,    27,
      28,    29,    30,    31,    32,    33,    34,     0,    35,     0,
       0,  -231,    36,     0,    38,  -125,  -106,     0,  -231,    39,
       0,    40,    41,    42,    43,    44,    45,     0,    46,     0,
    -106,    47,  -231,     0,     0,    48,     0,    49,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,    57,     0,    58,    59,     0,    60,
       0,     0,    61,     0,     0,    62,     0,    63,     4,    64,
       5,     6,     7,     8,     9,     0,     0,    10,    11,    12,
       0,  -106,    13,    14,    15,  -231,    16,    17,     0,    18,
       0,    19,    20,    21,    22,    23,   659,     0,    25,    26,
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
      17,     0,    18,     0,    19,    20,    21,    22,    23,   662,
       0,    25,    26,     0,  -125,    27,    28,    29,    30,    31,
      32,    33,    34,     0,    35,     0,     0,  -231,    36,     0,
      38,  -125,  -106,     0,  -231,    39,     0,    40,    41,    42,
      43,    44,    45,     0,    46,     0,  -106,    47,  -231,     0,
       0,    48,     0,    49,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,     0,     0,     0,    56,     0,
      57,     0,    58,    59,     0,    60,     0,     0,    61,     0,
       0,    62,     0,    63,     4,    64,     5,     6,     7,     8,
       9,     0,     0,    10,    11,    12,     0,  -106,    13,    14,
      15,  -231,    16,    17,     0,    18,     0,    19,    20,    21,
      22,    23,   679,     0,    25,    26,     0,  -125,    27,    28,
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
      19,    20,    21,    22,    23,   683,     0,    25,    26,     0,
    -125,    27,    28,    29,    30,    31,    32,    33,    34,     0,
      35,     0,     0,  -231,    36,     0,    38,  -125,  -106,     0,
    -231,    39,     0,    40,    41,    42,    43,    44,    45,     0,
      46,     0,  -106,    47,  -231,     0,     0,    48,     0,    49,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,     0,     0,     0,    56,     0,    57,     0,    58,    59,
       0,    60,     0,     0,    61,     0,     0,    62,     0,    63,
     461,    64,     5,     6,     7,     8,     9,     0,  -373,   119,
       0,     0,  -373,     0,     0,     0,     0,     0,     0,     0,
    -373,     0,     0,     0,     0,     0,   120,   121,   122,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,     0,     0,     0,     0,     0,    36,     0,    38,
       0,     0,  -373,     0,     0,  -373,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -249,  -373,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -373,    52,  -373,  -373,  -373,     0,  -373,  -373,  -373,     0,
    -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,  -373,    57,
    -373,  -373,  -373,     0,     0,  -373,  -373,  -373,     0,     0,
     124,     0,    63,   461,   475,     5,     6,     7,     8,     9,
       0,  -373,   119,     0,     0,  -373,     0,     0,     0,     0,
       0,     0,     0,  -373,     0,     0,     0,     0,     0,   120,
     121,   122,     0,    25,     0,     0,     0,     0,    28,    29,
       0,    31,     0,    33,    34,     0,     0,     0,     0,     0,
      36,     0,    38,     0,     0,  -373,     0,     0,  -373,     0,
       0,    42,    43,    44,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -373,    52,  -373,  -373,  -373,     0,  -373,
    -373,  -373,     0,  -373,  -373,  -373,  -373,  -373,  -373,  -373,
    -373,  -373,    57,  -373,  -373,  -373,     0,     0,  -373,  -373,
    -373,     0,     0,   124,     0,    63,     0,   475,     5,     6,
       7,     8,     9,     0,     0,   119,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,   121,   122,     0,    25,     0,     0,     0,
       0,    28,    29,     0,    31,     0,    33,    34,     0,     0,
       0,     0,     0,    36,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     0,     0,     0,
       0,     0,     0,    56,     0,    57,     0,    58,    59,   179,
       0,     0,     0,    61,     0,     0,   124,     0,    63,     0,
     125,   750,     5,     6,     7,     8,     9,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,   121,   122,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,     0,     0,     0,     0,     0,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,   194,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,   195,
       0,     5,     6,     7,     8,     9,     0,    56,   119,    57,
       0,    58,    59,   179,     0,     0,     0,    61,     0,     0,
     124,     0,    63,     0,   125,   120,   121,   122,     0,    25,
       0,     0,     0,     0,    28,    29,     0,    31,     0,    33,
      34,     0,     0,     0,     0,     0,    36,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,    44,
     123,     0,     0,   194,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,     0,
       5,     6,     7,     8,     9,     0,    56,   119,    57,     0,
      58,    59,   179,     0,     0,     0,    61,     0,     0,   124,
       0,    63,   482,   125,   120,   121,   122,     0,    25,     0,
       0,     0,     0,    28,    29,     0,    31,     0,    33,    34,
       0,     0,     0,     0,   144,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   145,     0,    50,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,   119,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,   120,   121,   122,    56,    25,    57,     0,    58,
      59,    28,    29,     0,    31,    61,    33,    34,   124,     0,
      63,     0,   125,    36,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,   123,     0,     0,
     194,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     5,     6,     7,
       8,     9,     0,    56,   119,    57,     0,    58,    59,   179,
       0,     0,     0,    61,     0,     0,   124,     0,    63,     0,
     125,   120,   121,   122,     0,    25,     0,     0,     0,     0,
      28,    29,     0,    31,     0,    33,    34,     0,     0,     0,
       0,     0,    36,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,     0,
       0,     0,    56,     0,    57,     0,    58,    59,     0,   164,
       0,     0,    61,     0,     0,   124,     0,    63,     0,   125,
       5,     6,     7,     8,     9,     0,     0,   119,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   167,
       0,     0,     0,     0,   120,   121,   122,     0,    25,     0,
       0,     0,     0,    28,    29,     0,    31,     0,    33,    34,
       0,     0,     0,     0,     0,    36,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,    44,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    50,     0,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,   119,     0,     0,    51,    52,
      53,    54,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,   120,   121,   122,    56,    25,    57,     0,    58,
      59,    28,    29,     0,    31,    61,    33,    34,    62,     0,
      63,     0,   125,    36,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,   123,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,    52,    53,    54,
       0,     0,     0,     0,    55,     0,     0,     5,     6,     7,
       8,     9,     0,    56,   119,    57,     0,    58,    59,   179,
       0,     0,     0,    61,     0,     0,   124,     0,    63,     0,
     125,   120,   121,   122,     0,    25,     0,     0,     0,     0,
      28,    29,     0,    31,     0,    33,    34,     0,     0,     0,
       0,     0,    36,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   145,     0,
      50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,     0,     5,     6,     7,     8,
       9,     0,    56,   119,    57,     0,    58,    59,     0,     0,
       0,     0,    61,     0,     0,   124,     0,    63,     0,   125,
     120,   121,   122,     0,    25,     0,     0,     0,     0,    28,
      29,     0,    31,     0,    33,    34,   578,     0,     0,     0,
       0,    36,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    43,    44,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,     0,     5,     6,     7,     8,     9,     0,
       0,   119,     0,     0,    51,    52,    53,    54,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,   120,   121,
     122,    56,    25,    57,     0,    58,    59,    28,    29,     0,
      31,    61,    33,    34,   124,     0,    63,     0,   125,    36,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
     710,    43,    44,   711,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,     0,     0,     0,     0,
      55,     0,     0,     5,     6,     7,     8,     9,     0,    56,
     119,    57,     0,    58,    59,   179,     0,     0,     0,    61,
       0,     0,   124,     0,    63,     0,   712,   120,   121,   122,
       0,    25,     0,     0,     0,     0,    28,    29,     0,    31,
       0,    33,    34,     0,     0,     0,     0,     0,    36,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,    44,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,     0,     5,     6,     7,     8,     9,     0,    56,   119,
      57,     0,    58,    59,   179,     0,     0,     0,    61,     0,
       0,   124,     0,    63,     0,   712,   120,   121,   702,     0,
      25,     0,     0,     0,     0,    28,    29,     0,    31,     0,
      33,    34,     0,     0,     0,     0,     0,    36,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    43,
      44,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,    52,    53,    54,     0,     0,     0,     0,    55,     0,
       0,     5,     6,     7,     8,     9,     0,    56,   119,    57,
       0,    58,    59,   179,     0,     0,     0,    61,     0,     0,
     124,     0,    63,     0,   125,   120,   121,   122,     0,    25,
       0,     0,     0,     0,    28,    29,     0,    31,     0,    33,
      34,     0,     0,     0,     0,     0,    36,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,    44,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,   119,     0,     0,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,   120,   121,   528,    56,    25,    57,     0,
      58,    59,    28,    29,     0,    31,    61,    33,    34,   124,
       0,    63,     0,   125,    36,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,   119,     0,     0,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,   120,   121,   531,    56,    25,    57,     0,    58,    59,
      28,    29,     0,    31,    61,    33,    34,   124,     0,    63,
       0,   125,    36,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,   119,     0,     0,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,   120,
     121,   696,    56,    25,    57,     0,    58,    59,    28,    29,
       0,    31,    61,    33,    34,   124,     0,    63,     0,   125,
      36,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
     119,     0,     0,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,   120,   121,   697,
      56,    25,    57,     0,    58,    59,    28,    29,     0,    31,
      61,    33,    34,   124,     0,    63,     0,   125,    36,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,    44,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   119,     0,
       0,    51,    52,    53,    54,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,   120,   121,   699,    56,    25,
      57,     0,    58,    59,    28,    29,     0,    31,    61,    33,
      34,   124,     0,    63,     0,   125,    36,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,    44,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,   119,     0,     0,    51,
      52,    53,    54,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,   120,   121,   700,    56,    25,    57,     0,
      58,    59,    28,    29,     0,    31,    61,    33,    34,   124,
       0,    63,     0,   125,    36,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44,   123,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,   119,     0,     0,    51,    52,    53,
      54,     0,     0,     0,     0,    55,     0,     0,     0,     0,
       0,   120,   121,   701,    56,    25,    57,     0,    58,    59,
      28,    29,     0,    31,    61,    33,    34,   124,     0,    63,
       0,   125,    36,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,   119,     0,     0,    51,    52,    53,    54,     0,
       0,     0,     0,    55,     0,     0,     0,     0,     0,   120,
     121,   702,    56,    25,    57,     0,    58,    59,    28,    29,
       0,    31,    61,    33,    34,   124,     0,    63,     0,   125,
      36,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
     119,     0,     0,    51,    52,    53,    54,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,   120,   121,   122,
      56,    25,    57,     0,    58,    59,    28,    29,     0,    31,
      61,    33,    34,   124,     0,    63,     0,   125,    36,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,    42,
      43,    44,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   119,     0,
       0,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   120,   121,   122,    56,    25,
      57,     0,     0,    59,    28,    29,     0,    31,    61,    33,
      34,   124,     0,    63,     0,   125,    36,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    42,    43,    44,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -258,     0,     0,     0,     0,
       0,     0,     0,   219,     0,     0,     0,   220,     0,     0,
      52,     0,     0,     0,  -258,   221,     0,     0,  -258,     0,
       5,     6,     7,     8,     9,     0,     0,   119,    57,     0,
       0,     0,   179,     0,     0,     0,     0,     0,     0,   124,
       0,    63,  -258,   712,   120,   121,   122,   222,    25,     0,
     223,     0,     0,    28,    29,     0,    31,     0,    33,    34,
       0,     0,     0,     0,     0,    36,   113,    38,     0,     0,
     224,     0,     0,     0,     5,     0,    42,    43,    44,   123,
     598,     0,     0,     0,   599,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,    52,
     244,   245,   246,     0,     0,     0,     0,     0,     0,     0,
     590,     0,     0,     0,     0,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      63,     0,   125,     0,     0,     0,     0,     0,   600,   601,
     602,   603,   604,   605,     0,     0,   606,   607,   608,   609,
     610,   611,   612,   613,   614,   615,     0,     0,   616,     0,
     221,     0,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,     0,   628,     0,     0,   629,   630,   631,
     632,   633,   219,     0,     0,     0,   220,     0,     0,     0,
       0,     0,   222,     0,   221,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,     0,     0,     0,
     220,     0,     0,     0,     0,     0,   222,     0,   221,   223,
     225,     0,   226,   227,   228,     0,   229,   230,   231,     0,
       0,   233,   234,   235,     0,   237,   238,   239,   240,   224,
     219,     0,   243,     0,   220,   244,   245,   246,     0,     0,
     222,     0,   221,   223,   225,     0,   226,   227,   228,     0,
     229,   230,   231,     0,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   224,   241,   242,   243,     0,     0,   244,
     245,   246,     0,     0,   222,     0,     0,   223,   225,   647,
     226,   227,   228,     0,   229,   230,   231,     0,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   224,   241,   242,
     243,     0,     0,   244,   245,   246,     0,     0,     0,     0,
       0,     0,   225,   759,   226,   227,   228,     0,   229,   230,
     231,     0,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   219,   241,   242,   243,   220,     0,   244,   245,   246,
       0,     0,     0,   221,   289,     0,     0,   794,     0,     0,
       0,     0,   290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   113,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
     286,     0,     0,   225,     0,   226,   227,   228,   287,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,     0,   244,   245,
     246,   222,     0,   269,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,   553,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,     0,   244,   245,   246,   222,     0,   269,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   113,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,   222,     0,   269,   223,     0,     0,     0,
       0,     0,     0,   293,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,   167,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,     0,   244,   245,   246,   222,
       0,   269,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,   547,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,     0,   244,   245,   246,   222,     0,   269,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,     0,   244,   245,
     246,   222,     0,   269,   223,     0,     0,     0,     0,     0,
       0,   653,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,     0,   244,   245,   246,   222,     0,   269,
     223,     0,     0,     0,     0,     0,     0,   658,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,   222,     0,   269,   223,     0,     0,     0,
       0,     0,     0,   745,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,     0,   244,   245,   246,   222,
       0,   269,   223,     0,     0,     0,     0,     0,     0,   746,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,     0,   244,   245,   246,   222,     0,   269,   223,     0,
       0,     0,     0,     0,     0,   747,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,     0,   244,   245,
     246,   222,     0,   269,   223,     0,     0,     0,     0,     0,
       0,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,     0,   244,   245,   246,   222,     0,   269,
     223,     0,     0,     0,     0,     0,     0,   760,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,   222,     0,   269,   223,     0,     0,     0,
       0,     0,     0,   761,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,     0,   244,   245,   246,   222,
       0,   269,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,     0,   244,   245,   246,   222,     0,   318,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,   275,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,     0,   244,   245,
     246,   222,  -337,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,   420,     0,     0,   225,
       0,   226,   227,   228,   421,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,     0,   244,   245,   246,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,   422,     0,     0,   225,     0,   226,   227,   228,
     423,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,   222,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,     0,   244,   245,   246,   222,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,   279,   244,   245,   246,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,   317,   244,   245,
     246,   222,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,   331,   244,   245,   246,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   343,
     224,   219,     0,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,     0,     0,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,   424,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,     0,   244,   245,
     246,   222,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,   505,   244,   245,   246,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,   506,
     244,   245,   246,   222,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,   507,   244,   245,   246,   222,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,   508,   244,   245,   246,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,   509,   244,   245,
     246,   222,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,   510,   244,   245,   246,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,   511,
     244,   245,   246,   222,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,   512,   244,   245,   246,   222,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,   513,   244,   245,   246,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,   514,   244,   245,
     246,   222,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,   515,   244,   245,   246,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,   516,
     244,   245,   246,   222,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,   517,   244,   245,   246,   222,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,   518,   244,   245,   246,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,   519,   244,   245,
     246,   222,     0,     0,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     113,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,     0,   244,   245,   246,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,   557,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,   538,
     244,   245,   246,   222,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,     0,   244,   245,   246,   222,
       0,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   593,   224,   219,     0,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,   642,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,     0,   244,   245,   246,     0,     0,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,   645,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,   222,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,     0,   244,   245,   246,   222,
       0,     0,   223,     0,     0,     0,     0,     0,     0,   695,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,     0,   244,   245,   246,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,   698,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,     0,   244,   245,
     246,   222,     0,     0,   223,     0,     0,     0,     0,     0,
       0,   767,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,     0,   244,   245,   246,   222,     0,     0,
     223,     0,     0,     0,     0,     0,     0,   768,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
     224,     0,     0,   220,     0,     0,     0,     0,     0,     0,
       0,   221,     0,     0,     0,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,   241,   242,   243,     0,     0,
     244,   245,   246,   222,     0,     0,   223,     0,     0,     0,
       0,     0,     0,   769,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   219,   224,     0,     0,   220,
       0,     0,     0,     0,     0,     0,     0,   221,     0,     0,
       0,   225,     0,   226,   227,   228,     0,   229,   230,   231,
       0,   232,   233,   234,   235,   236,   237,   238,   239,   240,
       0,   241,   242,   243,     0,     0,   244,   245,   246,   222,
       0,     0,   223,     0,     0,     0,     0,     0,     0,   770,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,   224,     0,     0,   220,     0,     0,     0,     0,
       0,     0,     0,   221,     0,     0,     0,   225,     0,   226,
     227,   228,     0,   229,   230,   231,     0,   232,   233,   234,
     235,   236,   237,   238,   239,   240,     0,   241,   242,   243,
       0,     0,   244,   245,   246,   222,     0,     0,   223,     0,
       0,     0,     0,     0,     0,   771,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   219,   224,     0,
       0,   220,     0,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,   236,   237,   238,
     239,   240,     0,   241,   242,   243,     0,     0,   244,   245,
     246,   222,     0,     0,   223,     0,     0,     0,     0,     0,
       0,   772,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,   224,     0,     0,   220,     0,     0,
       0,     0,     0,     0,     0,   221,     0,     0,     0,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,   241,
     242,   243,     0,     0,   244,   245,   246,   222,     0,   221,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   222,     0,   221,   223,   225,     0,   226,   227,   228,
       0,   229,   230,   231,     0,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   224,   241,   242,   243,     0,     0,
     244,   245,   246,     0,     0,   222,     0,     0,   223,   225,
       0,   226,   227,   228,     0,   229,   230,   231,     0,   232,
     233,   234,   235,     0,   237,   238,   239,   240,   224,   241,
     242,   243,     0,     0,   244,   245,   246,     0,     0,     0,
       0,     0,     0,   225,     0,   226,   227,   228,     0,   229,
     230,   231,     0,   232,   233,   234,   235,     0,   237,   238,
     239,   240,     0,   241,     0,   243,     0,     0,   244,   245,
     246
};

static const yytype_int16 yycheck[] =
{
      10,     2,   310,   135,    14,    13,   575,    17,   324,   266,
     142,   305,    22,    23,    24,     3,   324,     3,    30,    47,
     636,    31,    72,    33,     1,    35,    36,   266,   460,    39,
      40,    41,    42,    22,   163,    45,    64,    47,    48,    49,
     148,     3,    52,    14,   173,    55,    56,    57,     1,    59,
      45,     3,    62,    63,    64,     3,   213,   214,   215,   216,
       1,    22,    30,    22,    45,    55,    96,     0,    54,     3,
      18,   750,     3,    22,    69,     1,   126,    65,    55,    55,
      30,    52,    30,    72,    96,    33,    30,    72,    69,    30,
      30,    30,   200,    70,    96,    66,   126,   125,    46,    47,
      22,   670,    55,     3,    30,   784,    54,   720,    64,   119,
     120,   121,   122,   123,   124,   125,    64,    70,    95,   121,
     736,   737,    72,   131,    96,   115,    57,   122,    96,   688,
      64,   121,   121,   262,   263,   123,    77,   123,   115,   571,
     150,   122,    95,   115,   121,   121,    96,    96,   176,    75,
     763,    77,    96,   163,    95,    96,    96,    96,   126,    30,
     121,   123,   121,   173,    96,   459,   176,    96,   121,    95,
      96,   123,   121,   732,   115,   123,   126,    96,    96,    96,
     749,    96,   126,    54,    96,   195,   126,   126,   115,   115,
     122,   192,   321,   350,    96,   124,   123,     7,   125,    53,
     115,    61,    56,   115,    63,   124,   124,   124,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     122,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   284,   689,    18,    30,
     123,    34,    96,    96,   120,   275,   574,    96,   525,    77,
     280,   565,   123,    77,   284,    21,   286,   287,    51,   289,
     290,     2,   115,   293,    55,   123,   525,    47,    96,    10,
     124,   150,   100,    18,    54,   124,   100,    18,    96,    70,
     222,   223,    96,   313,   163,   784,    77,    53,    68,    30,
      56,   321,   115,   115,   173,   794,   124,   115,   328,    96,
      95,   115,    47,    98,    45,    96,   336,   102,   338,    54,
     340,   341,     2,   343,   344,   115,   444,   445,   115,    64,
      10,    62,   264,   265,   115,    66,   478,    47,    18,    95,
     121,    97,    98,   275,    54,   123,   102,   125,   674,   123,
      30,   669,   678,   109,   115,   287,   674,   123,   290,   125,
     678,    14,   118,   115,    17,    45,   121,   485,   486,   115,
     115,    24,    25,    26,   123,   115,   125,    14,   115,    32,
      17,    34,    62,   114,    71,   121,    66,    24,    25,    26,
      75,   123,    77,   262,   263,    32,    49,    34,    51,    52,
     420,   421,   422,   423,   424,   425,   426,   123,   340,   427,
     428,    64,    49,    66,    51,    52,   436,    98,   438,    21,
     151,   336,   442,   338,   462,    21,   123,    64,    77,    66,
     450,   451,   750,   453,   114,     7,   167,   475,   115,   121,
     115,   759,   462,    30,   115,   465,   466,    30,    23,    96,
     124,    53,   321,    96,    56,   475,   494,    53,    77,   328,
      56,   192,   115,   124,    75,    77,   784,   336,    55,   338,
     124,   151,   124,    96,   494,   126,   794,    96,   115,    95,
     124,   100,   493,    70,   126,   122,    53,   167,    77,   421,
      77,   423,    23,    95,   124,    91,    98,    93,    94,    95,
     102,    97,    98,   124,   121,   124,   102,    22,   528,    96,
      30,   531,   192,   109,    22,    95,   126,    18,   126,   539,
     116,   117,   118,   126,    98,   545,    96,   547,   115,    30,
     550,   123,    33,   553,   121,    55,   124,   557,   269,   688,
      70,   347,    16,   581,     2,    46,    47,   540,   474,   692,
      70,   691,    10,    54,   691,   286,   563,    77,   289,   763,
      18,   581,   293,    64,   597,   749,   734,   314,   588,   453,
     590,   709,    30,   593,    -1,    76,    96,   525,    -1,    -1,
      -1,    -1,   451,     3,   453,    -1,    -1,    45,     8,   269,
      91,    -1,    93,    94,    14,   115,    -1,    -1,    -1,    -1,
      -1,   121,    -1,    -1,    62,    -1,   286,    -1,    66,   289,
     341,   112,   113,   293,    34,    -1,   347,   118,    -1,    -1,
      -1,   641,   642,    -1,   644,   645,   646,   647,    -1,    -1,
      -1,    51,    52,   653,   654,    -1,   656,    -1,   658,   659,
      -1,    -1,   662,    -1,    64,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,   673,   674,    -1,   114,    -1,   678,   679,
      -1,   341,    -1,   683,    -1,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,   712,   695,   696,   697,   698,   699,
     700,   701,   702,     3,    -1,   416,    -1,    -1,    -1,    -1,
     710,   711,   712,   151,    14,     2,   716,    -1,    -1,   719,
      -1,    -1,    -1,    10,    -1,    -1,    -1,    18,    -1,   167,
      -1,    18,    -1,    -1,    34,    -1,    -1,    -1,   449,    30,
      -1,    -1,    33,    30,    -1,   745,   746,   747,   748,    -1,
      -1,    51,    52,    -1,   192,    46,    47,    -1,    45,   759,
     760,   761,    -1,    54,    64,    -1,    66,   767,   768,   769,
     770,   771,   772,    64,    -1,    62,    -1,    -1,   489,    66,
      -1,    -1,   493,   783,   784,    -1,    -1,    -1,    -1,   449,
      -1,    -1,    -1,    -1,   794,    -1,    -1,    -1,    -1,    -1,
      -1,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,   527,    -1,    -1,    -1,
     669,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   489,
      21,   269,    -1,   493,   545,    -1,   547,    -1,     2,   550,
      -1,    -1,   553,   119,   120,   556,    10,   123,   286,   125,
      -1,   289,    -1,    -1,    18,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,   151,    56,    30,   716,    -1,   580,
       9,    -1,    -1,    -1,    13,    -1,    -1,   588,    -1,   590,
     167,    45,    21,    -1,    -1,   545,    -1,   547,    -1,    -1,
     550,    -1,    -1,   553,    -1,    -1,   556,    -1,    62,    -1,
      91,   750,    66,   341,    95,   192,    97,    98,    -1,   347,
      -1,   102,    -1,    -1,    53,    -1,    -1,    56,   109,    -1,
     580,    -1,    -1,    -1,    -1,   116,   117,   118,   588,    -1,
     590,    -1,    -1,    -1,    -1,   784,    -1,    76,    -1,    -1,
      -1,    -1,   653,    -1,    -1,   794,    -1,   658,    -1,    -1,
     114,    -1,    91,    -1,    93,    94,    95,    -1,    97,    98,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   682,   111,   112,   113,   686,    -1,   116,   117,   118,
      -1,    -1,   269,    -1,    -1,   124,    -1,   151,    -1,    -1,
      -1,    -1,    -1,   653,    -1,    -1,    -1,    -1,   658,   286,
      -1,    -1,   289,   167,    -1,    -1,   293,    -1,    -1,    -1,
      -1,   449,    -1,    -1,    -1,     2,    -1,    -1,    -1,    -1,
      -1,    -1,   682,    10,    -1,    -1,   686,    -1,   192,    -1,
      -1,    18,    -1,    -1,   745,   746,   747,   748,    -1,    -1,
      -1,    -1,    -1,    30,    -1,   146,   147,   148,    -1,   760,
     761,   489,    -1,    -1,   341,   493,    -1,    -1,    45,   160,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   170,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      -1,    -1,   183,    -1,    -1,   745,   746,   747,   748,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     760,   761,    -1,    -1,    -1,   269,    -1,   545,    -1,   547,
      -1,    -1,   550,    -1,    -1,   553,    -1,    -1,   556,    -1,
      -1,    -1,   286,    53,    -1,   289,    56,   114,    -1,   293,
       2,    -1,    -1,    41,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    -1,   580,    -1,    -1,    -1,    18,    -1,    -1,    -1,
     588,    -1,   590,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,   449,    -1,   151,    95,    -1,    97,    98,    -1,
      -1,    -1,   102,    45,    -1,   276,    -1,   341,    -1,   109,
     167,    -1,    -1,   347,    -1,    -1,   116,   117,   118,    -1,
      62,   292,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   489,    -1,    -1,   192,   493,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,   653,    -1,    -1,    -1,    -1,
     658,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,   147,
     148,   149,   114,    -1,   682,    -1,    -1,    -1,   686,    -1,
      -1,    -1,   160,    -1,    21,    -1,    -1,    -1,   545,    -1,
     547,    -1,   170,   550,    -1,    -1,   553,    -1,    -1,   556,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,   151,
      -1,    -1,   269,    -1,    -1,   449,    53,    -1,    -1,    56,
      -1,    -1,    -1,   580,    -1,   167,    -1,    -1,    -1,   286,
      -1,   588,   289,   590,    -1,    -1,   293,   745,   746,   747,
     748,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     2,    -1,
     192,    -1,   760,   761,    91,   489,    10,    94,    95,   493,
      97,    98,    -1,    -1,    18,   102,    -1,    -1,    -1,   440,
     441,    -1,   109,   444,   445,    -1,    30,    -1,    -1,   116,
     117,   118,    -1,    -1,   341,    -1,    -1,    -1,    -1,    -1,
     347,    45,    -1,    -1,    -1,    -1,   653,    -1,   276,    -1,
      -1,   658,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,   545,    66,   547,   292,    -1,   550,    -1,    -1,   553,
      -1,    -1,   556,    -1,    -1,   682,    -1,   269,    -1,   686,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   286,    -1,   580,   289,    -1,    -1,
      -1,   293,    -1,    -1,   588,    -1,   590,    -1,    -1,    -1,
     114,    -1,    -1,    -1,    -1,   536,   537,    -1,    -1,    -1,
      -1,   542,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,   552,    -1,    -1,   555,    -1,    -1,    -1,   745,   746,
     747,   748,   449,    -1,    -1,    -1,    -1,   151,    -1,   341,
      -1,    -1,    -1,   760,   761,   347,    -1,    -1,    -1,    53,
      -1,    -1,    56,   167,    -1,    -1,    -1,    -1,    -1,   653,
      -1,    -1,    -1,    -1,   658,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   489,    -1,    -1,    -1,   493,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,   682,    93,
      94,    95,   686,    97,    98,    99,    -1,    -1,   102,    -1,
      -1,    -1,   440,   441,   108,   109,   444,   445,    -1,   113,
      -1,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   545,    -1,
     547,    -1,    -1,   550,    -1,    -1,   553,    -1,    -1,   556,
      -1,    -1,    -1,    -1,    -1,   676,    -1,   449,    -1,    -1,
      -1,   745,   746,   747,   748,   269,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   580,    -1,    -1,   760,   761,    -1,    -1,
      -1,   588,   286,   590,    -1,   289,    -1,    -1,    -1,   293,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,
      -1,   493,    -1,    -1,    -1,    -1,    -1,    -1,   536,   537,
      -1,    -1,    -1,    -1,   542,    -1,   544,    -1,    -1,    -1,
      -1,   549,     2,    -1,   552,    -1,    -1,   555,    -1,    -1,
      10,    -1,    -1,    -1,    21,    -1,    -1,   341,    18,    -1,
      -1,    -1,    -1,   347,    -1,    -1,   653,    -1,    -1,    -1,
      30,   658,    -1,   545,    -1,   547,    -1,    -1,   550,    -1,
      -1,   553,    -1,    12,   556,    45,    53,    16,    -1,    56,
      19,    20,    21,    -1,    -1,   682,    -1,    -1,    27,   686,
      29,    -1,    62,    -1,    -1,    -1,    66,    -1,   580,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   588,    46,   590,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    -1,    -1,    -1,   102,    -1,    -1,    -1,    -1,
      69,   108,   109,    -1,    -1,    -1,   113,    -1,    -1,   116,
     117,   118,    -1,    -1,   114,    -1,    -1,    -1,   745,   746,
     747,   748,    -1,    -1,    -1,   449,    -1,    -1,   676,    -1,
      -1,    -1,    -1,   760,   761,    -1,    -1,    -1,    -1,    -1,
      -1,   653,    -1,    -1,    -1,    -1,   658,    -1,    -1,    -1,
      -1,   151,    -1,    -1,    -1,    -1,   704,   705,    -1,   707,
     708,    -1,    -1,    -1,    -1,   489,   135,   167,    -1,   493,
     682,    -1,   720,   142,   686,   144,    -1,   725,    -1,   727,
      -1,   150,    -1,    -1,   153,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,   163,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,
     179,    -1,    -1,    -1,    -1,   763,    -1,    -1,    -1,    -1,
      -1,   545,    -1,   547,    -1,    -1,   550,    -1,    -1,   553,
      -1,    -1,   556,   745,   746,   747,   748,    -1,    -1,    -1,
     209,    -1,    -1,    -1,   213,   214,   215,   216,   760,   761,
      -1,    -1,    -1,    -1,    -1,    -1,   580,    -1,    -1,    -1,
      -1,   230,    -1,    -1,   588,    -1,   590,    -1,    -1,   269,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     7,   286,    -1,    10,   289,
      -1,    -1,    -1,   262,   263,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,    31,
      -1,    -1,   281,    -1,    36,    37,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,   653,
      -1,    -1,    -1,    -1,   658,    -1,   305,    59,    60,    61,
      62,   341,    -1,    -1,    -1,   314,    -1,   347,    -1,    -1,
      -1,    -1,   321,    -1,    76,    -1,    -1,    -1,   682,    -1,
      -1,    -1,   686,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,   350,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,
     112,   113,    -1,    -1,    -1,    -1,   118,    -1,    -1,   121,
      -1,   123,    -1,   125,     1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   745,   746,   747,   748,    -1,    -1,    -1,    -1,    -1,
      27,    28,    29,    -1,    31,    -1,   760,   761,    -1,    36,
      37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,   449,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,   453,    -1,    -1,   456,    -1,   489,
     459,    -1,    -1,   493,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,   478,
      -1,   108,    -1,   110,    -1,   112,   113,    -1,    -1,    -1,
      -1,   118,    -1,    -1,   121,    -1,   123,    -1,   125,    -1,
     499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   545,    -1,   547,    -1,    -1,
     550,    -1,    -1,   553,    -1,    -1,   556,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   540,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     580,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   588,    -1,
     590,    -1,    -1,    -1,    -1,    -1,   565,    -1,     0,     1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    -1,   613,    47,    48,    49,    50,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    21,    64,    -1,    66,    67,    68,    -1,    -1,    71,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   682,    -1,    -1,    -1,   686,    -1,    -1,    91,
      92,    93,    94,    53,    -1,    -1,    56,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,
     112,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,
      -1,   123,   691,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,    -1,   106,   107,   108,   109,
      -1,   111,    -1,   113,    -1,    -1,   116,   117,   118,    -1,
     729,   730,     1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    -1,    -1,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    -1,    66,    67,    68,
      -1,    -1,    71,    -1,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,   115,   116,   117,   118,
      -1,    -1,   121,   122,   123,     1,   125,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    -1,    -1,    71,    -1,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,   110,    -1,   112,   113,   114,   115,
      -1,    -1,   118,    -1,    -1,   121,   122,   123,     1,   125,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,    -1,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,   112,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,
     123,     1,   125,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    71,    -1,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     110,    -1,   112,   113,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,   122,   123,     1,   125,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    64,    -1,    66,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,    -1,   112,   113,    -1,   115,    -1,
      -1,   118,    -1,    -1,   121,   122,   123,     1,   125,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    -1,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   110,    -1,   112,   113,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
       1,   125,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    -1,    24,    25,    26,    27,    28,    29,    -1,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    44,    -1,    -1,    47,    48,    49,    50,
      51,    52,    -1,    54,    55,    -1,    57,    58,    59,    60,
      61,    62,    -1,    64,    -1,    66,    67,    68,    -1,    -1,
      71,    -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,
      -1,   112,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,
     121,    -1,   123,     1,   125,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    -1,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    -1,    -1,    47,
      48,    -1,    50,    51,    52,    -1,    54,    55,    -1,    57,
      58,    59,    60,    61,    62,    -1,    64,    -1,    66,    67,
      68,    -1,    -1,    71,    -1,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,   110,    -1,   112,   113,    -1,   115,    -1,    -1,
     118,    -1,    -1,   121,    -1,   123,     1,   125,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    -1,    24,
      25,    26,    27,    28,    29,    -1,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,    54,
      55,    -1,    57,    58,    59,    60,    61,    62,    -1,    64,
      -1,    66,    67,    68,    -1,    -1,    71,    -1,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,    -1,   112,   113,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,     1,
     125,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    -1,    24,    25,    26,    27,    28,    29,    -1,    31,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    -1,    -1,    47,    48,    -1,    50,    51,
      52,    -1,    54,    55,    -1,    57,    58,    59,    60,    61,
      62,    -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,
     112,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,
      -1,   123,     1,   125,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    -1,    24,    25,    26,    27,    28,
      29,    -1,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    -1,    -1,    47,    48,
      -1,    50,    51,    52,    -1,    54,    55,    -1,    57,    58,
      59,    60,    61,    62,    -1,    64,    -1,    66,    67,    68,
      -1,    -1,    71,    -1,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   110,    -1,   112,   113,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,    -1,   123,     1,   125,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    -1,    24,    25,
      26,    27,    28,    29,    -1,    31,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    44,    -1,
      -1,    47,    48,    -1,    50,    51,    52,    -1,    54,    55,
      -1,    57,    58,    59,    60,    61,    62,    -1,    64,    -1,
      66,    67,    68,    -1,    -1,    71,    -1,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,   110,    -1,   112,   113,    -1,   115,
      -1,    -1,   118,    -1,    -1,   121,    -1,   123,     1,   125,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      -1,    24,    25,    26,    27,    28,    29,    -1,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    -1,    -1,    47,    48,    -1,    50,    51,    52,
      -1,    54,    55,    -1,    57,    58,    59,    60,    61,    62,
      -1,    64,    -1,    66,    67,    68,    -1,    -1,    71,    -1,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,   112,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,    -1,
     123,     1,   125,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    -1,    24,    25,    26,    27,    28,    29,
      -1,    31,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    44,    -1,    -1,    47,    48,    -1,
      50,    51,    52,    -1,    54,    55,    -1,    57,    58,    59,
      60,    61,    62,    -1,    64,    -1,    66,    67,    68,    -1,
      -1,    71,    -1,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     110,    -1,   112,   113,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,    -1,   123,     1,   125,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    -1,    24,    25,    26,
      27,    28,    29,    -1,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    -1,    -1,
      47,    48,    -1,    50,    51,    52,    -1,    54,    55,    -1,
      57,    58,    59,    60,    61,    62,    -1,    64,    -1,    66,
      67,    68,    -1,    -1,    71,    -1,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,    -1,   112,   113,    -1,   115,    -1,
      -1,   118,    -1,    -1,   121,    -1,   123,     1,   125,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    -1,
      24,    25,    26,    27,    28,    29,    -1,    31,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      44,    -1,    -1,    47,    48,    -1,    50,    51,    52,    -1,
      54,    55,    -1,    57,    58,    59,    60,    61,    62,    -1,
      64,    -1,    66,    67,    68,    -1,    -1,    71,    -1,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   110,    -1,   112,   113,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,
       1,   125,     3,     4,     5,     6,     7,    -1,     9,    10,
      -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    53,    -1,    -1,    56,    -1,    -1,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    95,    -1,    97,    98,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,   116,   117,   118,    -1,    -1,
     121,    -1,   123,     1,   125,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,    37,
      -1,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,    -1,
      48,    -1,    50,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,   116,   117,
     118,    -1,    -1,   121,    -1,   123,    -1,   125,     3,     4,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    -1,    31,    -1,    -1,    -1,
      -1,    36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,    -1,   112,   113,   114,
      -1,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,    -1,
     125,   126,     3,     4,     5,     6,     7,    -1,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,   100,
      -1,     3,     4,     5,     6,     7,    -1,   108,    10,   110,
      -1,   112,   113,   114,    -1,    -1,    -1,   118,    -1,    -1,
     121,    -1,   123,    -1,   125,    27,    28,    29,    -1,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   108,    10,   110,    -1,
     112,   113,   114,    -1,    -1,    -1,   118,    -1,    -1,   121,
      -1,   123,   124,   125,    27,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,   108,    31,   110,    -1,   112,
     113,    36,    37,    -1,    39,   118,    41,    42,   121,    -1,
     123,    -1,   125,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,     3,     4,     5,
       6,     7,    -1,   108,    10,   110,    -1,   112,   113,   114,
      -1,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,    -1,
     125,    27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,   110,    -1,   112,   113,    -1,   115,
      -1,    -1,   118,    -1,    -1,   121,    -1,   123,    -1,   125,
       3,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    27,    28,    29,    -1,    31,    -1,
      -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,   108,    31,   110,    -1,   112,
     113,    36,    37,    -1,    39,   118,    41,    42,   121,    -1,
     123,    -1,   125,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,     3,     4,     5,
       6,     7,    -1,   108,    10,   110,    -1,   112,   113,   114,
      -1,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,    -1,
     125,    27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    -1,    41,    42,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,     3,     4,     5,     6,
       7,    -1,   108,    10,   110,    -1,   112,   113,    -1,    -1,
      -1,    -1,   118,    -1,    -1,   121,    -1,   123,    -1,   125,
      27,    28,    29,    -1,    31,    -1,    -1,    -1,    -1,    36,
      37,    -1,    39,    -1,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    27,    28,
      29,   108,    31,   110,    -1,   112,   113,    36,    37,    -1,
      39,   118,    41,    42,   121,    -1,   123,    -1,   125,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,     3,     4,     5,     6,     7,    -1,   108,
      10,   110,    -1,   112,   113,   114,    -1,    -1,    -1,   118,
      -1,    -1,   121,    -1,   123,    -1,   125,    27,    28,    29,
      -1,    31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,
      -1,    41,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,     3,     4,     5,     6,     7,    -1,   108,    10,
     110,    -1,   112,   113,   114,    -1,    -1,    -1,   118,    -1,
      -1,   121,    -1,   123,    -1,   125,    27,    28,    29,    -1,
      31,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,
      -1,     3,     4,     5,     6,     7,    -1,   108,    10,   110,
      -1,   112,   113,   114,    -1,    -1,    -1,   118,    -1,    -1,
     121,    -1,   123,    -1,   125,    27,    28,    29,    -1,    31,
      -1,    -1,    -1,    -1,    36,    37,    -1,    39,    -1,    41,
      42,    -1,    -1,    -1,    -1,    -1,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,   108,    31,   110,    -1,
     112,   113,    36,    37,    -1,    39,   118,    41,    42,   121,
      -1,   123,    -1,   125,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,   108,    31,   110,    -1,   112,   113,
      36,    37,    -1,    39,   118,    41,    42,   121,    -1,   123,
      -1,   125,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,   108,    31,   110,    -1,   112,   113,    36,    37,
      -1,    39,   118,    41,    42,   121,    -1,   123,    -1,   125,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
     108,    31,   110,    -1,   112,   113,    36,    37,    -1,    39,
     118,    41,    42,   121,    -1,   123,    -1,   125,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,   108,    31,
     110,    -1,   112,   113,    36,    37,    -1,    39,   118,    41,
      42,   121,    -1,   123,    -1,   125,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    27,    28,    29,   108,    31,   110,    -1,
     112,   113,    36,    37,    -1,    39,   118,    41,    42,   121,
      -1,   123,    -1,   125,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    27,    28,    29,   108,    31,   110,    -1,   112,   113,
      36,    37,    -1,    39,   118,    41,    42,   121,    -1,   123,
      -1,   125,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,   108,    31,   110,    -1,   112,   113,    36,    37,
      -1,    39,   118,    41,    42,   121,    -1,   123,    -1,   125,
      48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,
     108,    31,   110,    -1,   112,   113,    36,    37,    -1,    39,
     118,    41,    42,   121,    -1,   123,    -1,   125,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    28,    29,   108,    31,
     110,    -1,    -1,   113,    36,    37,    -1,    39,   118,    41,
      42,   121,    -1,   123,    -1,   125,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    13,    -1,    -1,
      92,    -1,    -1,    -1,    96,    21,    -1,    -1,   100,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,   110,    -1,
      -1,    -1,   114,    -1,    -1,    -1,    -1,    -1,    -1,   121,
      -1,   123,   124,   125,    27,    28,    29,    53,    31,    -1,
      56,    -1,    -1,    36,    37,    -1,    39,    -1,    41,    42,
      -1,    -1,    -1,    -1,    -1,    48,    72,    50,    -1,    -1,
      76,    -1,    -1,    -1,     3,    -1,    59,    60,    61,    62,
       9,    -1,    -1,    -1,    13,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    92,
     116,   117,   118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,    -1,   125,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,    80,    81,    82,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    97,    -1,
      21,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    -1,   113,    -1,    -1,   116,   117,   118,
     119,   120,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    21,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    53,    -1,    21,    56,
      91,    -1,    93,    94,    95,    -1,    97,    98,    99,    -1,
      -1,   102,   103,   104,    -1,   106,   107,   108,   109,    76,
       9,    -1,   113,    -1,    13,   116,   117,   118,    -1,    -1,
      53,    -1,    21,    56,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    76,   111,   112,   113,    -1,    -1,   116,
     117,   118,    -1,    -1,    53,    -1,    -1,    56,    91,   126,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    76,   111,   112,
     113,    -1,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    91,   126,    93,    94,    95,    -1,    97,    98,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,     9,   111,   112,   113,    13,    -1,   116,   117,   118,
      -1,    -1,    -1,    21,    22,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    91,    -1,    93,    94,    95,    30,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    53,    -1,   121,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    53,    -1,   121,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    -1,
     116,   117,   118,    53,    -1,   121,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,    -1,   116,   117,   118,    53,
      -1,   121,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,    -1,   116,   117,   118,    53,    -1,   121,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    53,    -1,   121,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    53,    -1,   121,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    -1,
     116,   117,   118,    53,    -1,   121,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,    -1,   116,   117,   118,    53,
      -1,   121,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,    -1,   116,   117,   118,    53,    -1,   121,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    53,    -1,   121,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    53,    -1,   121,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    -1,
     116,   117,   118,    53,    -1,   121,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,    -1,   116,   117,   118,    53,
      -1,   121,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,    -1,   116,   117,   118,    53,    -1,   121,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    30,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    53,   120,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    91,
      -1,    93,    94,    95,    30,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    91,    -1,    93,    94,    95,
      30,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    -1,
     116,   117,   118,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,    -1,   116,   117,   118,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,   115,   116,   117,   118,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    -1,
     116,   117,   118,    -1,    -1,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,   115,   116,   117,   118,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,   115,
     116,   117,   118,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,   115,   116,   117,   118,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,   115,   116,   117,   118,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,   115,
     116,   117,   118,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,   115,   116,   117,   118,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,   115,   116,   117,   118,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,   115,
     116,   117,   118,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,   115,   116,   117,   118,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,   115,   116,   117,   118,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    23,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,   115,
     116,   117,   118,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,    -1,   116,   117,   118,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    76,     9,    -1,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,    -1,   116,   117,   118,    -1,    -1,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    -1,
     116,   117,   118,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,    -1,   116,   117,   118,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,    -1,   116,   117,   118,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    53,    -1,    -1,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      76,    -1,    -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    -1,   111,   112,   113,    -1,    -1,
     116,   117,   118,    53,    -1,    -1,    56,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     9,    76,    -1,    -1,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
      -1,   111,   112,   113,    -1,    -1,   116,   117,   118,    53,
      -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    76,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    91,    -1,    93,
      94,    95,    -1,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,    -1,   111,   112,   113,
      -1,    -1,   116,   117,   118,    53,    -1,    -1,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    76,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    53,    -1,    -1,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    76,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    53,    -1,    21,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    21,    56,    91,    -1,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,    76,   111,   112,   113,    -1,    -1,
     116,   117,   118,    -1,    -1,    53,    -1,    -1,    56,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,    -1,   106,   107,   108,   109,    76,   111,
     112,   113,    -1,    -1,   116,   117,   118,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,    -1,   113,    -1,    -1,   116,   117,
     118
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   131,   132,     0,     1,     3,     4,     5,     6,     7,
      10,    11,    12,    15,    16,    17,    19,    20,    22,    24,
      25,    26,    27,    28,    29,    31,    32,    35,    36,    37,
      38,    39,    40,    41,    42,    44,    48,    49,    50,    55,
      57,    58,    59,    60,    61,    62,    64,    67,    71,    73,
      76,    91,    92,    93,    94,    99,   108,   110,   112,   113,
     115,   118,   121,   123,   125,   133,   134,   135,   136,   137,
     138,   140,   141,   143,   145,   146,   147,   148,   150,   151,
     154,   155,   156,   160,   163,   166,   167,   187,   190,   191,
     209,   210,   211,   212,   213,   214,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   230,   231,   232,   233,
     234,   135,   222,    72,   215,   216,   142,   143,   215,    10,
      27,    28,    29,    62,   121,   125,   163,   209,   213,   220,
     221,   222,   223,   225,   226,    64,   142,   222,   135,   143,
     143,     8,    64,   143,    47,    74,   149,   222,   222,   222,
     123,   143,   164,   123,   143,   192,   193,   135,   222,   222,
     222,   222,     7,   123,   115,   222,   222,    22,   138,   144,
     222,   222,    61,   123,   135,   222,    57,   143,   188,   114,
     183,   203,   222,   222,   222,   222,   222,   222,   222,   222,
     122,   133,   139,   203,    65,   100,   183,   204,   205,   222,
     203,   222,   229,    49,   135,   143,    14,    52,    66,   157,
      34,    51,   179,    18,    47,    54,    68,   115,   120,     9,
      13,    21,    53,    56,    76,    91,    93,    94,    95,    97,
      98,    99,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   111,   112,   113,   116,   117,   118,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   119,   123,   125,    53,    56,   123,   135,   115,   121,
     138,   222,   222,   222,   203,    30,   215,   188,   115,   115,
      71,   121,   188,   143,   123,   144,    22,    30,   144,    22,
      30,   144,   216,    63,   138,   143,   183,   206,   207,   208,
     222,   135,   123,   174,    65,   123,   143,   194,   195,     1,
      95,   197,   198,    30,    96,   144,   206,   115,   121,   135,
     144,   123,   206,   203,    77,   189,   115,   143,    96,   115,
     144,   115,   122,   133,   122,   222,    96,   124,    96,   124,
      30,   126,   216,    75,    96,   126,     7,   121,   143,   168,
      54,   192,   192,   192,   192,   222,   222,   222,   222,   149,
     222,   149,   222,   222,   222,   222,   222,   222,   222,    64,
     143,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   206,   206,   149,   222,   149,   222,    18,    30,
      33,    46,    47,    54,    64,   113,   177,   217,   218,   234,
      22,    30,    22,    30,    63,    30,   126,   149,   222,   144,
     115,   222,   143,   161,   162,   115,    30,   203,    29,   222,
     149,   222,    29,   222,   149,   222,   144,   135,   222,    23,
      75,    77,   124,    96,   175,   176,   177,   165,   195,    96,
     124,     1,   125,   199,   210,    75,    77,   196,   222,   193,
     124,   152,   206,   124,   121,   125,   199,   210,    96,   183,
     222,   124,   124,   204,   204,   149,   222,   135,   222,   126,
     222,   222,   122,   139,    95,   158,    47,    54,   170,   178,
     192,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     124,   126,    30,    54,   209,    96,   124,    53,    29,   149,
     222,    29,   149,   222,   149,   222,   215,   215,   115,    77,
      96,   122,   222,   124,   222,    22,   144,    22,   144,   222,
      22,   144,   216,    22,   144,   216,    23,    23,   135,   222,
     183,   222,   208,    96,   124,   123,   143,    18,    47,    54,
      64,   180,   124,   195,    95,   198,   203,   222,    43,   222,
      45,    69,   122,   153,   124,   152,   203,   188,   126,   216,
     126,   216,   135,    75,   122,   203,   121,   169,     9,    13,
      77,    78,    79,    80,    81,    82,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    97,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   113,   116,
     117,   118,   119,   120,   143,   171,   172,   115,   218,   209,
     222,    22,    22,   222,    22,    22,   126,   126,   144,   144,
     222,   162,   144,    63,    29,   222,    29,   222,    63,    29,
     222,   144,    29,   222,   144,   135,   222,   176,   195,    95,
     202,   198,   196,    30,   126,   135,   203,   122,   126,    29,
     135,   222,   126,    29,   135,   222,   126,   222,   159,   180,
     143,    98,   123,   173,   173,    63,    29,    29,    63,    29,
      29,    29,    29,   222,   222,   222,   222,   222,   222,   124,
      59,    62,   125,   183,   201,   210,   100,   185,   196,    70,
     186,   222,   199,   210,   144,   222,   135,   222,   135,    26,
      64,   122,   134,   146,   198,   143,   171,   172,   175,   222,
     222,   222,   222,   222,   222,    63,    63,    63,    63,   202,
     126,   203,   183,   184,   222,   222,   138,   145,   182,   126,
      63,    63,   146,   186,   173,   173,   124,    63,    63,    63,
      63,    63,    63,   222,   222,   222,   222,   185,   196,   183,
     200,   201,   210,    30,   126,   210,   222,   222,   115,   181,
     182,   222,   200,   201,   126,   200
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   136,   136,   137,   138,   138,
     139,   139,   140,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   142,   142,
     143,   144,   144,   145,   145,   146,   146,   146,   146,   146,
     146,   147,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   149,   150,   150,   150,   150,   151,
     152,   152,   153,   153,   154,   155,   156,   156,   157,   157,
     157,   158,   158,   159,   159,   159,   160,   161,   161,   161,
     162,   162,   164,   165,   163,   166,   166,   166,   166,   166,
     166,   168,   169,   167,   170,   170,   170,   170,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   173,   173,   174,   175,
     175,   175,   176,   176,   176,   176,   177,   177,   177,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   178,   179,
     179,   180,   180,   180,   180,   180,   181,   181,   182,   182,
     183,   183,   184,   184,   185,   185,   186,   186,   187,   187,
     187,   188,   188,   189,   189,   189,   190,   190,   190,   190,
     190,   191,   191,   191,   192,   192,   193,   193,   193,   194,
     194,   194,   195,   195,   195,   196,   196,   196,   197,   197,
     198,   198,   198,   198,   199,   199,   199,   199,   200,   200,
     200,   201,   201,   201,   201,   201,   202,   202,   202,   202,
     202,   202,   203,   203,   203,   203,   204,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   208,   208,   208,
     209,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   212,
     213,   214,   214,   214,   214,   214,   214,   214,   214,   215,
     215,   216,   217,   217,   218,   218,   219,   219,   220,   221,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   223,   223,   223,   223,   224,   224,
     225,   225,   225,   226,   226,   227,   227,   227,   228,   228,
     228,   228,   228,   228,   228,   229,   229,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     231,   231,   231,   231,   231,   231,   232,   232,   232,   232,
     233,   233,   233,   233,   234,   234,   234,   234,   234,   234,
     234
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
       4,     4,     4,     3,     3,     3,     4,     3,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1
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
#line 4274 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 405 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt();                                  resetTempID(); }
#line 4280 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 406 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); context->generatedStmt = (yyvsp[-1].pblockstmt); resetTempID(); }
#line 4286 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 413 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[-1].vpch), (yyvsp[0].pblockstmt) ); }
#line 4292 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 418 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[0].pch))); }
#line 4298 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 419 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].vpch)->add(astr((yyvsp[0].pch))); }
#line 4304 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 435 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 4310 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 436 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[0].pblockstmt)); }
#line 4316 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 437 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4322 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 438 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[-1].pch)); }
#line 4328 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 439 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt));  }
#line 4334 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 440 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[-1].pch)); }
#line 4340 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 441 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_DELETE, (yyvsp[-1].pexpr)); }
#line 4346 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 442 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[-1].pch), (yyvsp[0].pblockstmt)); }
#line 4352 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 443 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[0].pblockstmt)); }
#line 4358 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 444 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4364 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 445 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4370 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 446 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[0].pblockstmt)); }
#line 4376 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 447 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[0].pblockstmt)); }
#line 4382 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 448 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[-1].pexpr)); }
#line 4388 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 449 "chapel.ypp" /* yacc.c:1661  */
    { printf("syntax error"); clean_exit(1); }
#line 4394 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 454 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[-2].pch), new BlockStmt(), yyfilename, (yylsp[-3]).comment))); }
#line 4400 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 456 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[-3].pch), (yyvsp[-1].pblockstmt), yyfilename, (yylsp[-4]).comment))); }
#line 4406 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 460 "chapel.ypp" /* yacc.c:1661  */
    { (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4412 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 475 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 4418 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 476 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt);              }
#line 4424 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 481 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 4430 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 482 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->appendChapelStmt((yyvsp[0].pblockstmt)); }
#line 4436 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 487 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[-1].pcallexpr)); }
#line 4442 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 491 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "=");   }
#line 4448 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 492 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "+=");  }
#line 4454 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 493 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "-=");  }
#line 4460 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 494 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "*=");  }
#line 4466 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 495 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "/=");  }
#line 4472 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 496 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "%=");  }
#line 4478 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 497 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "**="); }
#line 4484 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 498 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "&=");  }
#line 4490 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 499 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "|=");  }
#line 4496 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 500 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "^=");  }
#line 4502 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 501 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), ">>="); }
#line 4508 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 502 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<<="); }
#line 4514 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 503 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), "<=>"); }
#line 4520 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 504 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));    }
#line 4526 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 505 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[-3].pexpr), (yyvsp[-1].pexpr));     }
#line 4532 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 509 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = NULL; }
#line 4538 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 514 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = (yyvsp[0].pch); }
#line 4544 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 518 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4550 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 519 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[0].pblockstmt); }
#line 4556 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 523 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, new SymExpr(gVoid)); }
#line 4562 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 524 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[-1].pexpr)); }
#line 4568 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 528 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
#line 4574 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 4590 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 552 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = DoWhileStmt::build((yyvsp[-1].pexpr), (yyvsp[-3].pblockstmt)); }
#line 4596 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 553 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = WhileDoStmt::build((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4602 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 554 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4608 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 555 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt), true); }
#line 4614 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 556 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr), (yyvsp[0].pblockstmt)); }
#line 4620 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 557 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 4626 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 558 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(  (yyvsp[-3].pexpr), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false,  true); }
#line 4632 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 559 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false, false); }
#line 4638 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 560 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ForLoop::buildForLoop(NULL, (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt), false,  true); }
#line 4644 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 561 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[-3].pch), (yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4650 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 562 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt)); }
#line 4656 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 563 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt)); }
#line 4662 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 564 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-3].pexpr), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt), true); }
#line 4668 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 565 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt), true); }
#line 4674 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 566 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-1].pexpr), NULL, (yyvsp[0].pblockstmt)); }
#line 4680 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 567 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-2].pexpr), (yyvsp[-1].pcallexpr),   (yyvsp[0].pblockstmt)); }
#line 4686 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 569 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4696 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 575 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4706 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 581 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), NULL, new BlockStmt((yyvsp[0].pblockstmt)), true);
    }
#line 4716 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 587 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-5].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-3].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[-5].pcallexpr)->get(1)->remove(), (yyvsp[-3].pexpr), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)), true);
    }
#line 4726 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 593 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), NULL, new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4737 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 600 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-3].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-3].pcallexpr)), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[-3].pcallexpr)->get(1)->remove(), (yyvsp[-2].pcallexpr),   new BlockStmt((yyvsp[0].pblockstmt)));
    }
#line 4748 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 609 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("_build_tuple", (yyvsp[-1].pcallexpr)); }
#line 4754 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 613 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-2].pexpr), (yyvsp[0].pblockstmt)); }
#line 4760 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 614 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-1].pexpr), (yyvsp[0].pblockstmt)); }
#line 4766 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 615 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-4].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 4772 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 616 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[-3].pexpr), (yyvsp[-2].pblockstmt), (yyvsp[0].pblockstmt)); }
#line 4778 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 621 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[-3].pexpr), (yyvsp[-1].pblockstmt))); }
#line 4784 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 625 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(); }
#line 4790 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 101:
#line 626 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pexpr)); }
#line 4796 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 631 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[-1].pcallexpr)), (yyvsp[0].pblockstmt)); }
#line 4802 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 633 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[0].pblockstmt)); }
#line 4808 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 638 "chapel.ypp" /* yacc.c:1661  */
    { USR_FATAL((yyvsp[-3].pcallexpr), "'type select' is no longer supported. Use 'select'"); }
#line 4814 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 645 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[-4].pch), (yyvsp[-5].ptype), (yyvsp[-3].pcallexpr), (yyvsp[-1].pblockstmt), (yyvsp[-6].flag), (yylsp[-6]).comment)); }
#line 4820 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 649 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4826 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 650 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_EXTERN;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 4832 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 654 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_CLASS);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4842 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 659 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_RECORD);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4852 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 664 "chapel.ypp" /* yacc.c:1661  */
    {
             (yyval.ptype)                     = new AggregateType(AGGREGATE_UNION);
             (yyloc).comment             = context->latestComment;
             context->latestComment = NULL;
           }
#line 4862 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 672 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = NULL; }
#line 4868 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 673 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = (yyvsp[0].pcallexpr); }
#line 4874 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 678 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt(); }
#line 4880 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 680 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-1].pblockstmt)->insertAtTail((yyvsp[0].pblockstmt)); }
#line 4886 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 682 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[-1].vpch), (yyvsp[0].pblockstmt))); }
#line 4892 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 687 "chapel.ypp" /* yacc.c:1661  */
    {
      EnumType* pdt = (yyvsp[-1].penumtype);
      TypeSymbol* pst = new TypeSymbol((yyvsp[-3].pch), pdt);
      (yyvsp[-1].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
#line 4903 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 4916 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 706 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.penumtype) = (yyvsp[-1].penumtype);
    }
#line 4924 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 710 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-2].penumtype)->constants.insertAtTail((yyvsp[0].pdefexpr));
      (yyvsp[0].pdefexpr)->sym->type = (yyvsp[-2].penumtype);
    }
#line 4933 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 717 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[0].pch))); }
#line 4939 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 718 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr)); }
#line 4945 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 723 "chapel.ypp" /* yacc.c:1661  */
    {
      captureTokens = 1;
      captureString[0] = '\0';
    }
#line 4954 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 728 "chapel.ypp" /* yacc.c:1661  */
    {
      captureTokens = 0;
      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 4963 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 4983 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 753 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 4994 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 759 "chapel.ypp" /* yacc.c:1661  */
    {
                  (yyval.pfnsymbol) = new FnSymbol("");
                  (yyval.pfnsymbol)->addFlag(FLAG_INLINE);

                  (yyloc).comment             = context->latestComment;
                  context->latestComment = NULL;
                }
#line 5006 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5019 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5032 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5045 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5058 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 801 "chapel.ypp" /* yacc.c:1661  */
    {
      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString[0] = '\0';
    }
#line 5068 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 807 "chapel.ypp" /* yacc.c:1661  */
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[0].pfnsymbol)->userString = astr(captureString);
    }
#line 5079 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5102 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 836 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
    }
#line 5110 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 840 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-2].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 5119 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 845 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pch));
    }
#line 5127 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 849 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[0].pfnsymbol), (yyvsp[-1].pch), (yyvsp[-4].pt), (yyvsp[-3].pch));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
#line 5136 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 857 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = astr("~", (yyvsp[0].pch)); }
#line 5142 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 858 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "&"; }
#line 5148 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 859 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "|"; }
#line 5154 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 142:
#line 860 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "^"; }
#line 5160 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 861 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "~"; }
#line 5166 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 862 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "=="; }
#line 5172 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 863 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "!="; }
#line 5178 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 864 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<="; }
#line 5184 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 147:
#line 865 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">="; }
#line 5190 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 866 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<"; }
#line 5196 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 867 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">"; }
#line 5202 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 868 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "+"; }
#line 5208 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 869 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "-"; }
#line 5214 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 870 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "*"; }
#line 5220 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 871 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "/"; }
#line 5226 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 872 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<<"; }
#line 5232 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 873 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">>"; }
#line 5238 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 874 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "%"; }
#line 5244 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 875 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "**"; }
#line 5250 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 876 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "!"; }
#line 5256 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 877 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "chpl_by"; }
#line 5262 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 878 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "#"; }
#line 5268 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 879 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "align"; }
#line 5274 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 880 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<=>"; }
#line 5280 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 881 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<~>"; }
#line 5286 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 164:
#line 885 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "="; }
#line 5292 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 886 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "+="; }
#line 5298 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 887 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "-="; }
#line 5304 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 888 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "*="; }
#line 5310 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 889 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "/="; }
#line 5316 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 890 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "%="; }
#line 5322 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 891 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "**="; }
#line 5328 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 892 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "&="; }
#line 5334 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 893 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "|="; }
#line 5340 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 894 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "^="; }
#line 5346 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 895 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = ">>="; }
#line 5352 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 896 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pch) = "<<="; }
#line 5358 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 900 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
#line 5364 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 901 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 5370 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 905 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = (yyvsp[-1].pfnsymbol); }
#line 5376 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 909 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
#line 5382 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 910 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[0].pdefexpr)); }
#line 5388 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 911 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[-2].pfnsymbol), (yyvsp[0].pdefexpr)); }
#line 5394 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 916 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), (yyvsp[0].pexpr), NULL); }
#line 5400 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 183:
#line 918 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[-3].pt), (yyvsp[-2].pch), (yyvsp[-1].pexpr), NULL, (yyvsp[0].pexpr)); }
#line 5406 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 920 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[-5].pt), (yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 5412 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 922 "chapel.ypp" /* yacc.c:1661  */
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
#line 5418 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 186:
#line 926 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_BLANK; }
#line 5424 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 927 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_IN; }
#line 5430 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 928 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_INOUT; }
#line 5436 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 929 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_OUT; }
#line 5442 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 930 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST; }
#line 5448 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 931 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST_IN; }
#line 5454 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 932 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_CONST_REF; }
#line 5460 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 933 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_PARAM; }
#line 5466 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 934 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_REF; }
#line 5472 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 935 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_TYPE; }
#line 5478 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 939 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_BLANK; }
#line 5484 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 940 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_PARAM; }
#line 5490 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 941 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pt) = INTENT_REF;   }
#line 5496 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 945 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.procIter) = ProcIter_PROC; }
#line 5502 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 946 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.procIter) = ProcIter_ITER; }
#line 5508 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 950 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_VALUE; }
#line 5514 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 951 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_VALUE; }
#line 5520 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 952 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_REF; }
#line 5526 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 953 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_PARAM; }
#line 5532 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 954 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.retTag) = RET_TYPE; }
#line 5538 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 958 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = NULL; }
#line 5544 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 964 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[0].pblockstmt)); }
#line 5550 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 210:
#line 969 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 5556 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 971 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
#line 5562 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 212:
#line 975 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
#line 5568 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 214:
#line 980 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5574 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 215:
#line 981 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[0].pdefexpr)->sym->addFlag(FLAG_PARAM); (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5580 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 985 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5586 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 217:
#line 986 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5592 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 218:
#line 991 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = (yyvsp[-1].pblockstmt); }
#line 5598 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 993 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[-1].pblockstmt)); }
#line 5604 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 220:
#line 995 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[-1].pblockstmt)); }
#line 5610 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5627 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5645 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 1029 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5651 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 224:
#line 1031 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5657 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 225:
#line 1033 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[0].pcallexpr)); }
#line 5663 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1038 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_PARAM);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5674 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1045 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_CONST);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5685 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 228:
#line 1052 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      flags.insert(FLAG_REF_VAR);
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5696 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5708 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1067 "chapel.ypp" /* yacc.c:1661  */
    {
      std::set<Flag> flags;
      flags.insert((yyvsp[-3].flag));
      (yyval.pblockstmt) = buildVarDecls((yyvsp[-1].pblockstmt), flags, (yylsp[-3]).comment);
    }
#line 5718 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 231:
#line 1075 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5724 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 232:
#line 1076 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_CONFIG;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5730 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 233:
#line 1077 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.flag) = FLAG_EXTERN;  (yyloc).comment = context->latestComment; context->latestComment = NULL; }
#line 5736 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 235:
#line 1083 "chapel.ypp" /* yacc.c:1661  */
    {
      for_alist(expr, (yyvsp[0].pblockstmt)->body)
        (yyvsp[-2].pblockstmt)->insertAtTail(expr->remove());
    }
#line 5745 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 236:
#line 1091 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[-2].pch)), (yyvsp[0].pexpr), (yyvsp[-1].pexpr))); }
#line 5751 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1093 "chapel.ypp" /* yacc.c:1661  */
    {
      VarSymbol* var = new VarSymbol((yyvsp[-3].pch));
      var->addFlag(FLAG_ARRAY_ALIAS);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(var, (yyvsp[0].pexpr), (yyvsp[-2].pexpr)));
    }
#line 5761 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1099 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[-3].pblockstmt), (yyvsp[-1].pexpr), (yyvsp[0].pexpr)); }
#line 5767 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 239:
#line 1104 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
#line 5773 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 240:
#line 1106 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[0].pch))); }
#line 5779 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1108 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[-1].pblockstmt); }
#line 5785 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 242:
#line 1113 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[0].pexpr)); }
#line 5791 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 243:
#line 1115 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[-1].pexpr)); }
#line 5797 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1117 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pblockstmt) = ((yyvsp[0].pblockstmt)->insertAtHead((yyvsp[-2].pexpr)), (yyvsp[0].pblockstmt)); }
#line 5803 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1123 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5809 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 246:
#line 1124 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new SymExpr(gNoInit); }
#line 5815 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1125 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5821 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 248:
#line 1129 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5827 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 249:
#line 1131 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__ensureDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 5833 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 250:
#line 1135 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5839 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1136 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5845 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 252:
#line 1137 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pcallexpr); }
#line 5851 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 253:
#line 1138 "chapel.ypp" /* yacc.c:1661  */
    {printf("bad type specification"); }
#line 5857 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1159 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr));
    }
#line 5865 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1163 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pcallexpr));
    }
#line 5873 "bison-chapel.cpp" /* yacc.c:1661  */
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
#line 5885 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1174 "chapel.ypp" /* yacc.c:1661  */
    {printf("bad array type specification"); clean_exit(1); }
#line 5891 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1178 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5897 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1179 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5903 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1180 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5909 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1185 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 5915 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1187 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 5921 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1193 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[0].pexpr)); }
#line 5927 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 264:
#line 1195 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pcallexpr), (yyvsp[0].pexpr)); }
#line 5933 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 265:
#line 1197 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[-2].pexpr), (yyvsp[0].pexpr), (yyvsp[-4].pcallexpr)); }
#line 5939 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 266:
#line 1201 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = NULL; }
#line 5945 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1202 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5951 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 268:
#line 1203 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 5957 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 269:
#line 1204 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr( "_singlevar"); }
#line 5963 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1205 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr( "_syncvar"); }
#line 5969 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1206 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 5975 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1212 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 5981 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1213 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pdefexpr)); }
#line 5987 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1214 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 5993 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1215 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pdefexpr)); }
#line 5999 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1219 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
#line 6005 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1220 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pexpr); }
#line 6011 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1221 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 6017 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1225 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6023 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1226 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6029 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1230 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
#line 6035 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1235 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pexpr)); }
#line 6041 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1236 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6047 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1240 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pdefexpr)); }
#line 6053 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 1241 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 6059 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 1242 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildNamedAliasActual((yyvsp[-2].pch), (yyvsp[0].pexpr)); }
#line 6065 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 288:
#line 1243 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[0].pdefexpr); }
#line 6071 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 290:
#line 1248 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[0].pch)); }
#line 6077 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 296:
#line 1265 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[0].pexpr)); }
#line 6083 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 297:
#line 1267 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[-1].pcallexpr)); }
#line 6089 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 298:
#line 1269 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[-1].pcallexpr)); }
#line 6095 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 299:
#line 1271 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[-1].pcallexpr)); }
#line 6101 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 300:
#line 1273 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[0].pexpr)); }
#line 6107 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 301:
#line 1275 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[0].pexpr)); }
#line 6113 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 302:
#line 1280 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6119 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 303:
#line 1282 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 6125 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 304:
#line 1284 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6131 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 305:
#line 1286 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6137 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 306:
#line 1288 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 6143 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 307:
#line 1290 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6149 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 308:
#line 1292 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6155 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 309:
#line 1294 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true); }
#line 6161 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 310:
#line 1296 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6167 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 311:
#line 1298 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6173 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 312:
#line 1300 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pexpr), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true); }
#line 6179 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 313:
#line 1302 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6185 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 314:
#line 1304 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-2].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[-2].pcallexpr)), (yyvsp[0].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[-2].pcallexpr)->get(1)->remove(), (yyvsp[0].pexpr), NULL, true);
    }
#line 6196 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 315:
#line 1311 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, true);
    }
#line 6206 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 316:
#line 1317 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-4].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-2].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-4].pcallexpr)->get(1)->remove(), (yyvsp[-2].pexpr), (yyvsp[0].pexpr), NULL, false, true);
    }
#line 6216 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 317:
#line 1323 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr));
    }
#line 6226 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 318:
#line 1329 "chapel.ypp" /* yacc.c:1661  */
    {
      if ((yyvsp[-7].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[-5].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[-7].pcallexpr)->get(1)->remove(), (yyvsp[-5].pexpr), (yyvsp[0].pexpr), (yyvsp[-2].pexpr), false, true);
    }
#line 6236 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 319:
#line 1338 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(new DefExpr(buildIfExpr((yyvsp[-4].pexpr), (yyvsp[-2].pexpr), (yyvsp[0].pexpr)))); }
#line 6242 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 320:
#line 1342 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new SymExpr(gNil); }
#line 6248 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 328:
#line 1358 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6254 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 329:
#line 1362 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = NULL; }
#line 6260 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 331:
#line 1367 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = (yyvsp[-1].pcallexpr); }
#line 6266 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 332:
#line 1372 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[0].pIntentExpr).first, (yyvsp[0].pIntentExpr).second); }
#line 6272 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 333:
#line 1374 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pIntentExpr).first);
      (yyvsp[-2].pcallexpr)->insertAtTail((yyvsp[0].pIntentExpr).second);
    }
#line 6281 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 334:
#line 1382 "chapel.ypp" /* yacc.c:1661  */
    {
      ArgSymbol* tiMark = tiMarkForIntent((yyvsp[-1].pt));
      if (!tiMark)
        USR_FATAL_CONT((yyvsp[0].pexpr), "Unsupported intent in with clause");
      (yyval.pIntentExpr).first = new SymExpr(tiMark);
      (yyval.pIntentExpr).second = (yyvsp[0].pexpr);
    }
#line 6293 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 335:
#line 1391 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pIntentExpr).first = (yyvsp[-2].pexpr), (yyval.pIntentExpr).second = (yyvsp[0].pexpr); }
#line 6299 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 337:
#line 1397 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6305 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 338:
#line 1402 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, (yyvsp[0].pexpr)); }
#line 6311 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 339:
#line 1407 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildLetExpr((yyvsp[-2].pblockstmt), (yyvsp[0].pexpr)); }
#line 6317 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 348:
#line 1423 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[-1].pexpr)); }
#line 6323 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 349:
#line 1425 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("_cast", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6329 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 350:
#line 1427 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_bounded_range", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6335 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 351:
#line 1429 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_partially_bounded_range", buildDotExpr("BoundedRangeType", "boundedLow"), (yyvsp[-1].pexpr)); }
#line 6341 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 352:
#line 1431 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_partially_bounded_range", buildDotExpr("BoundedRangeType", "boundedHigh"), (yyvsp[0].pexpr)); }
#line 6347 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 353:
#line 1433 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_build_unbounded_range", buildDotExpr("BoundedRangeType", "boundedNone")); }
#line 6353 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 360:
#line 1456 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 6359 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 361:
#line 1457 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[-3].pexpr), (yyvsp[-1].pcallexpr)); }
#line 6365 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 362:
#line 1458 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[-1].pcallexpr)); }
#line 6371 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 363:
#line 1462 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildDotExpr((yyvsp[-2].pexpr), (yyvsp[0].pch)); }
#line 6377 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 364:
#line 1463 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[-2].pexpr)); }
#line 6383 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 365:
#line 1471 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = (yyvsp[-1].pexpr); }
#line 6389 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 366:
#line 1472 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildOneTuple((yyvsp[-2].pexpr)); }
#line 6395 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 367:
#line 1473 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildTuple((yyvsp[-1].pcallexpr)); }
#line 6401 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 368:
#line 1477 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildIntLiteral((yyvsp[0].pch));    }
#line 6407 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 369:
#line 1478 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildRealLiteral((yyvsp[0].pch));   }
#line 6413 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 370:
#line 1479 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildImagLiteral((yyvsp[0].pch));   }
#line 6419 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 371:
#line 1480 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildStringLiteral((yyvsp[0].pch)); }
#line 6425 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 372:
#line 1481 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[-1].pcallexpr)); }
#line 6431 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 373:
#line 1482 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr",  (yyvsp[-1].pcallexpr)); }
#line 6437 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 374:
#line 1484 "chapel.ypp" /* yacc.c:1661  */
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[-1].pcallexpr));
    }
#line 6445 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 375:
#line 1490 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6451 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 376:
#line 1491 "chapel.ypp" /* yacc.c:1661  */
    { (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[-2].pexpr)); (yyvsp[-4].pcallexpr)->insertAtTail((yyvsp[0].pexpr)); }
#line 6457 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 377:
#line 1495 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6463 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 378:
#line 1496 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6469 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 379:
#line 1497 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6475 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 380:
#line 1498 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6481 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 381:
#line 1499 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6487 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 382:
#line 1500 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6493 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 383:
#line 1501 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6499 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 384:
#line 1502 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6505 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 385:
#line 1503 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6511 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 386:
#line 1504 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6517 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 387:
#line 1505 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6523 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 388:
#line 1506 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6529 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 389:
#line 1507 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6535 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 390:
#line 1508 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6541 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 391:
#line 1509 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6547 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 392:
#line 1510 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6553 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 393:
#line 1511 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("&&", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6559 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 394:
#line 1512 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("||", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6565 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 395:
#line 1513 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6571 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 396:
#line 1514 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl_by", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6577 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 397:
#line 1515 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("align", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6583 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 398:
#line 1516 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6589 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 399:
#line 1517 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[0].pexpr), (yyvsp[-2].pexpr)); }
#line 6595 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 400:
#line 1521 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[0].pexpr)); }
#line 6601 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 401:
#line 1522 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[0].pexpr)); }
#line 6607 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 402:
#line 1523 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '-'); }
#line 6613 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 403:
#line 1524 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[0].pexpr), '+'); }
#line 6619 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 404:
#line 1525 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[0].pexpr)); }
#line 6625 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 405:
#line 1526 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[0].pexpr)); }
#line 6631 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 406:
#line 1530 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6637 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 407:
#line 1531 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6643 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 408:
#line 1532 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6649 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 409:
#line 1533 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildReduceExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6655 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 410:
#line 1537 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6661 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 411:
#line 1538 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6667 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 412:
#line 1539 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr)); }
#line 6673 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 413:
#line 1540 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = buildScanExpr((yyvsp[-2].pexpr), (yyvsp[0].pexpr), true); }
#line 6679 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 414:
#line 1545 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
#line 6685 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 415:
#line 1546 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
#line 6691 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 416:
#line 1547 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
#line 6697 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 417:
#line 1548 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
#line 6703 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 418:
#line 1549 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
#line 6709 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 419:
#line 1550 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
#line 6715 "bison-chapel.cpp" /* yacc.c:1661  */
    break;

  case 420:
#line 1551 "chapel.ypp" /* yacc.c:1661  */
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
#line 6721 "bison-chapel.cpp" /* yacc.c:1661  */
    break;


#line 6725 "bison-chapel.cpp" /* yacc.c:1661  */
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
