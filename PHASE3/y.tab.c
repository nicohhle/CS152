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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y" /* yacc.c:339  */

#define YY_NO_UNPUT
#include <stdio.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <stdbool.h>
#include "y.tab.h"
#include "t.tab.h"
#include "heading.h"

using namespace std;

void yyerror(const char* s);
int yylex(void);


extern int currLine;
extern int currPos;
extern char* yytext;
  
int labelCount = 0;
int tempCount = 0;
int paramCount = 0;

string new_label(){
  string x = "__label__";
  x += to_string(labelCount);
  labelCount += 1;
  return x;
}

string new_temp(){
  string x = "__temp__";
  x += to_string(tempCount);
  tempCount += 1;
  return x;
}


#line 107 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    FOR = 272,
    WHILE = 273,
    DO = 274,
    BEGINLOOP = 275,
    ENDLOOP = 276,
    CONTINUE = 277,
    READ = 278,
    WRITE = 279,
    AND = 280,
    OR = 281,
    NOT = 282,
    TRUE = 283,
    FALSE = 284,
    RETURN = 285,
    SUB = 286,
    ADD = 287,
    MULT = 288,
    DIV = 289,
    MOD = 290,
    EQ = 291,
    NEQ = 292,
    LT = 293,
    GT = 294,
    LTE = 295,
    GTE = 296,
    SEMICOLON = 297,
    COLON = 298,
    COMMA = 299,
    L_PAREN = 300,
    R_PAREN = 301,
    L_SQUARE_BRACKET = 302,
    R_SQUARE_BRACKET = 303,
    ASSIGN = 304,
    NUMBER = 305,
    IDENT = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 42 "mini_l.y" /* yacc.c:355  */

  int int_val;
  char*	op_val;
  
  struct statement_semval {
	 char *code;
	 char *result_id;
  } s;

  struct expression_semval {
	 char *code;
	 char *result_id;
	 char *arr_size;
	 char *arr_name;
	 bool is_array;
  } e;

  struct comp_semval {
	 char *optr;
  } c;


#line 222 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

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

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    80,    85,    89,    97,   103,   112,   117,
     126,   131,   138,   144,   171,   179,   183,   190,   206,   221,
     222,   246,   247,   249,   256,   263,   271,   279,   280,   286,
     291,   293,   298,   308,   313,   323,   333,   334,   336,   341,
     342,   343,   344,   346,   350,   354,   358,   362,   366,   371,
     376,   386,   397,   412,   422,   432,   443,   447,   452,   457,
     458,   459,   460,   472,   473,   479,   484,   488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "FOR", "WHILE", "DO",
  "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "AND", "OR", "NOT",
  "TRUE", "FALSE", "RETURN", "SUB", "ADD", "MULT", "DIV", "MOD", "EQ",
  "NEQ", "LT", "GT", "LTE", "GTE", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN",
  "NUMBER", "IDENT", "$accept", "prog_start", "progInner", "function",
  "ident", "funcInnerParams", "funcInnerLocals", "funcInnerTwo",
  "declaration", "decInner", "statement", "stateInnerOne", "stateInnerTwo",
  "bool_expr", "relation_and_expr", "relation_expr", "comp", "expression",
  "multiplicative_expr", "term", "termInnerOne", "var", YY_NULLPTR
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
     305,   306
};
# endif

#define YYPACT_NINF -83

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-83)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       5,   -29,    13,   -83,     5,   -83,     7,   -83,   -83,    21,
     -29,    18,    58,    22,    27,   -29,    59,   -29,    25,   -83,
     -29,   -83,   -83,    30,    61,    37,    33,    72,   -29,    38,
     109,   -83,    76,    85,   -29,    85,    64,   -83,   -29,   -29,
     -19,    43,    82,    51,    47,    89,    44,   -83,   -83,   -27,
      85,   -83,   -17,    86,    79,    83,   125,    15,     6,   -83,
      62,    90,   109,   -83,    71,   -83,   -19,   -83,   -19,   -83,
     109,   -19,   -83,   -83,   -83,    85,   125,   -19,   -83,   -83,
      73,   113,   -19,   109,    85,    85,   -83,   -83,   -83,   -83,
     -83,   -83,   -19,   -19,   -19,   -19,   -19,   -19,    70,   109,
      81,   104,   -29,    91,    92,   -83,   -83,    95,   -19,    97,
     -83,   -83,    94,    99,    36,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,    87,   126,   109,   128,   -83,   -83,   -83,
     -83,   -83,   -19,   -83,   -83,   109,    85,   -83,   -83,    85,
     -83,   140,   114,   -83,   -83,   -29,   118,   -19,   138,   109,
     147,   -83
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     2,     4,     6,     0,     1,     3,     0,
       8,    15,     0,     0,     0,     0,     0,     8,     0,    16,
      10,     7,    13,     0,     0,     0,     0,     0,    10,     0,
      12,     9,     0,     0,     0,     0,     0,    25,     0,     0,
       0,    66,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    57,    66,     0,    31,    33,     0,    49,    52,    56,
       0,     0,     0,    23,    29,    24,     0,    26,     0,     5,
      12,     0,    14,    40,    41,     0,     0,     0,    60,    59,
       0,     0,    65,     0,     0,     0,    43,    44,    45,    46,
      47,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    17,     0,     0,     0,
      38,    58,    64,     0,     0,    32,    34,    35,    51,    50,
      53,    54,    55,     0,     0,    28,     0,    30,    67,    42,
      39,    61,    65,    62,    18,     0,     0,    20,    27,     0,
      63,     0,     0,    21,    19,     0,     0,     0,     0,     0,
       0,    22
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,   -83,   165,   -83,    -1,   153,   143,   102,   -13,   158,
     -26,   -82,   -36,   -30,    93,   -83,    98,    10,   -38,   -83,
      45,   -28
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    52,    12,    24,    42,    13,    14,
     100,   101,    63,    53,    54,    55,    92,    56,    57,    58,
     113,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,   114,    44,    65,    43,    61,    60,    25,     1,    11,
      64,    64,    49,     7,    11,    25,    11,   124,    77,    11,
      80,    79,     5,    78,     5,    10,    66,    11,    82,    41,
      68,    51,     5,    41,    44,    22,    23,    41,    41,    95,
      96,    97,    44,   138,    43,   107,    93,    94,    41,     9,
      67,   134,   135,   141,   115,    44,    76,   120,   121,   122,
      81,    41,    15,    16,    17,    20,   127,   150,    27,    41,
      18,    44,    73,    74,    64,    49,   103,    26,   104,    28,
      30,   106,    41,    29,    62,    81,    32,   109,    45,    75,
      68,    69,   112,    70,    51,     5,    71,    44,    41,    72,
      83,    41,   117,   118,   119,    84,   142,    44,    85,   143,
      99,    98,    46,    47,    48,   102,    49,   146,   130,   110,
     123,    44,    33,   125,    41,   126,    34,    35,    36,   136,
      50,    37,    38,    39,    41,    51,     5,   111,   132,    40,
     128,   129,   112,   131,    41,   133,   139,   137,    41,    86,
      87,    88,    89,    90,    91,   144,   145,   148,   149,   111,
       5,    86,    87,    88,    89,    90,    91,   147,   151,     8,
      21,    31,   105,    19,   108,     0,     0,   140,   116
};

static const yytype_int16 yycheck[] =
{
       1,    83,    30,    39,    30,    35,    34,    20,     3,    10,
      38,    39,    31,     0,    15,    28,    17,    99,    45,    20,
      50,    49,    51,    50,    51,     4,    45,    28,    45,    30,
      47,    50,    51,    34,    62,    10,    11,    38,    39,    33,
      34,    35,    70,   125,    70,    75,    31,    32,    49,    42,
      40,    15,    16,   135,    84,    83,    46,    95,    96,    97,
      50,    62,    44,     5,    42,     6,   102,   149,     7,    70,
      43,    99,    28,    29,   102,    31,    66,    47,    68,    42,
       8,    71,    83,    50,    20,    75,    48,    77,    12,    45,
      47,     9,    82,    42,    50,    51,    49,   125,    99,    10,
      14,   102,    92,    93,    94,    26,   136,   135,    25,   139,
      20,    49,    27,    28,    29,    44,    31,   145,   108,    46,
      50,   149,    13,    42,   125,    21,    17,    18,    19,    42,
      45,    22,    23,    24,   135,    50,    51,    46,    44,    30,
      48,    46,   132,    46,   145,    46,    18,    21,   149,    36,
      37,    38,    39,    40,    41,    15,    42,   147,    20,    46,
      51,    36,    37,    38,    39,    40,    41,    49,    21,     4,
      17,    28,    70,    15,    76,    -1,    -1,   132,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    53,    54,    55,    51,    56,     0,    54,    42,
       4,    56,    57,    60,    61,    44,     5,    42,    43,    61,
       6,    57,    10,    11,    58,    60,    47,     7,    42,    50,
       8,    58,    48,    13,    17,    18,    19,    22,    23,    24,
      30,    56,    59,    62,    73,    12,    27,    28,    29,    31,
      45,    50,    56,    65,    66,    67,    69,    70,    71,    73,
      73,    65,    20,    64,    73,    64,    45,    69,    47,     9,
      42,    49,    10,    28,    29,    45,    69,    45,    50,    73,
      65,    69,    45,    14,    26,    25,    36,    37,    38,    39,
      40,    41,    68,    31,    32,    33,    34,    35,    49,    20,
      62,    63,    44,    69,    69,    59,    69,    65,    68,    69,
      46,    46,    69,    72,    63,    65,    66,    69,    69,    69,
      70,    70,    70,    50,    63,    42,    21,    64,    48,    46,
      69,    46,    44,    46,    15,    16,    42,    21,    63,    18,
      72,    63,    65,    65,    15,    42,    73,    49,    69,    20,
      63,    21
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    70,    70,    70,    70,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    72,    73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,    12,     1,     3,     0,     3,
       0,     3,     0,     3,     8,     1,     3,     3,     5,     7,
       5,     6,    13,     2,     2,     1,     2,     3,     2,     1,
       3,     1,     3,     1,     3,     3,     1,     1,     3,     4,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     3,     3,     3,     1,     1,     3,     2,
       2,     4,     4,     3,     1,     0,     1,     4
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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

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
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 76 "mini_l.y" /* yacc.c:1646  */
    {
                  cout << (yyvsp[0].s).code;
                }
#line 1427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 80 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  oss << (yyvsp[-1].s).code << (yyvsp[0].s).code;
                  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 85 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.s).code = "";
                }
#line 1445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 90 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  oss << "func " << (yyvsp[-10].e).result_id << endl;
                  oss << (yyvsp[-7].s).code << (yyvsp[-4].s).code << (yyvsp[-1].s).code;
                  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 98 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.e).code = "";
                  (yyval.e).result_id = (yyvsp[0].op_val);
                }
#line 1465 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 104 "mini_l.y" /* yacc.c:1646  */
    {
                      ostringstream oss;
                      oss << (yyvsp[-2].e).code;
                      oss << "= " << (yyvsp[-2].e).result_id << ", $" << paramCount << endl;
                      (yyval.s).code = strdup(oss.str().c_str());
                      paramCount++;
                    }
#line 1477 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 112 "mini_l.y" /* yacc.c:1646  */
    {
					  (yyval.s).code = "";
					  (yyval.s).result_id = "";
                    }
#line 1486 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 118 "mini_l.y" /* yacc.c:1646  */
    {
                      ostringstream oss;
                      oss << (yyvsp[-2].e).code;
                      oss << (yyvsp[0].s).code;
                      (yyval.s).code = strdup(oss.str().c_str());
                      
                    }
#line 1498 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 126 "mini_l.y" /* yacc.c:1646  */
    {
                      (yyval.s).code = "";
                      (yyval.s).result_id = "";
                    }
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 132 "mini_l.y" /* yacc.c:1646  */
    {
				  ostringstream oss;
				  oss << (yyvsp[-2].s).code << (yyvsp[0].s).code;
                  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 138 "mini_l.y" /* yacc.c:1646  */
    {
				  ostringstream oss;
				  oss << "endfunc" << endl << endl;
				  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 145 "mini_l.y" /* yacc.c:1646  */
    {
				  if (strchr((yyvsp[-2].e).result_id, '#') == NULL){
				    ostringstream oss;
				    oss << ". " << (yyvsp[-2].e).result_id << endl;
				    (yyval.e).code = strdup(oss.str().c_str());
				    (yyval.e).result_id = (yyvsp[-2].e).result_id;
				  }
				  else {
				    char curr = (yyvsp[-2].e).result_id[0];
				    int count = 0;
				    ostringstream oss;
				    while (count < strlen((yyvsp[-2].e).result_id)){
					  ostringstream lss;
					  curr = (yyvsp[-2].e).result_id[count];

					  while ((curr != '#') && count < strlen((yyvsp[-2].e).result_id)){
					    lss << curr;
					    count += 1;
					    curr = (yyvsp[-2].e).result_id[count];
					  }
					  oss << ". " << lss.str().c_str() << endl;
					  count += 1;
					}
					(yyval.e).code = strdup(oss.str().c_str());
				  }
                }
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 172 "mini_l.y" /* yacc.c:1646  */
    {
				  ostringstream oss;
				  oss << ".[] " << (yyvsp[-7].e).result_id << ", " << (yyvsp[-3].int_val) << endl;
				  (yyval.e).arr_size = strdup(to_string((yyvsp[-3].int_val)).c_str());
 				  (yyval.e).code = strdup(oss.str().c_str());
				}
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 180 "mini_l.y" /* yacc.c:1646  */
    {
				  
                }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 184 "mini_l.y" /* yacc.c:1646  */
    {
				  ostringstream oss; 
				  oss << (yyvsp[-2].e).result_id << "#" << (yyvsp[0].e).result_id;
				  (yyval.e).result_id = strdup(oss.str().c_str());
				}
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 191 "mini_l.y" /* yacc.c:1646  */
    {
				  if ((yyvsp[-2].e).is_array){
				    ostringstream oss;
				    oss << (yyvsp[-2].e).code;
				    oss << (yyvsp[0].e).code;
				    oss << "[]= " << (yyvsp[-2].e).arr_name << ", " <<  (yyvsp[-2].e).result_id << ", " 	<< (yyvsp[0].e).result_id << endl;
				    (yyval.s).code = strdup(oss.str().c_str());
				  }
				  else {
				    ostringstream oss;
                    oss << (yyvsp[0].e).code;
				    oss << "= " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
				    (yyval.s).code = strdup(oss.str().c_str());
				  }
                }
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "mini_l.y" /* yacc.c:1646  */
    {
                  string l = new_label();
                  string m = new_label();
                  ostringstream oss;

                  oss << (yyvsp[-3].e).code;
                  oss << "?:= " << l << ", " << (yyvsp[-3].e).result_id << endl;
                  oss << ":= " << m << endl;
                  oss << ": " << l << endl;
                  oss << (yyvsp[-1].s).code;
                  oss << ": " << m << endl;

                  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 221 "mini_l.y" /* yacc.c:1646  */
    {printf("statement . IF bool_exp THEN stateInnerOne ELSE stateInnerOne ENDIF \n");}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 223 "mini_l.y" /* yacc.c:1646  */
    {
				  string l = new_label();
				  string m = new_label();
				  string n = new_label();
				  
				  ostringstream oss;
				  oss << ": " << n << endl;
				  oss << (yyvsp[-3].e).code;
				  oss << "?:= " << l << ", " << (yyvsp[-3].e).result_id << endl;
				  oss << ":= " << m << endl;
				  oss << ": " << l << endl;
				  oss << (yyvsp[-1].s).code;
				  oss << ":= " << n << endl;
				  oss << ": " << m << endl;
				  
				  string x = new_temp();
				  oss << ". " << x << endl;
				  oss << "= " << x << ", " << (yyvsp[-1].s).result_id << endl;
				  
				  (yyval.s).code = strdup(oss.str().c_str());
                  (yyval.s).result_id = strdup(x.c_str());
				  
				}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 246 "mini_l.y" /* yacc.c:1646  */
    {printf("statement . DO BEGINLOOP stateInnerOne ENDLOOP WHILE bool_expr \n");}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 248 "mini_l.y" /* yacc.c:1646  */
    {}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 250 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  oss << ".< " << (yyvsp[0].s).result_id << endl;
                  (yyval.s).code = strdup(oss.str().c_str());
                  (yyval.s).result_id = (yyvsp[0].s).result_id;
                }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 257 "mini_l.y" /* yacc.c:1646  */
    {
				  ostringstream oss;
				  oss << ".> " << (yyvsp[0].s).result_id << endl;
				  (yyval.s).code = strdup(oss.str().c_str());
				  (yyval.s).result_id = (yyvsp[0].s).result_id;
				}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 264 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  string x = new_label();
                  oss << ":= x" << endl;
                  oss << ": " << x << endl;
                  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 272 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  oss << (yyvsp[0].e).code;
                  oss << "ret " << (yyvsp[0].e).result_id << endl;
                  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 279 "mini_l.y" /* yacc.c:1646  */
    {printf("stateInnerOne . statement SEMICOLON stateInnerOne \n");}
#line 1723 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 281 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.s).code = (yyvsp[-1].s).code;
				  (yyval.s).result_id = (yyvsp[-1].s).result_id;
				}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 287 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.s).code = (yyvsp[0].e).code;
				  (yyval.s).result_id = (yyvsp[0].e).result_id;
				}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 291 "mini_l.y" /* yacc.c:1646  */
    {printf("stateInnerTwo . var COMMA stateInnerTwo \n");}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 294 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.e).code = (yyvsp[0].e).code;
                  (yyval.e).result_id = (yyvsp[0].e).result_id;
                }
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 299 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                  string x = new_temp();
                  oss << "|| " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id;
                  (yyval.e).code = strdup(oss.str().c_str());
                  (yyval.e).result_id = strdup(x.c_str());
                }
#line 1769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 309 "mini_l.y" /* yacc.c:1646  */
    {
                      (yyval.e).code = (yyvsp[0].e).code;
                      (yyval.e).result_id = (yyvsp[0].e).result_id;
                    }
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 314 "mini_l.y" /* yacc.c:1646  */
    {
                      ostringstream oss;
                      oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                      string x = new_temp();
                      oss << "&& " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
                      (yyval.e).code = strdup(oss.str().c_str());
                      (yyval.e).result_id = strdup(x.c_str());
                    }
#line 1791 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 324 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  string x = new_temp();
				  oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                  oss << ". " << x << endl;
                  oss << (yyvsp[-1].c).optr << " " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
                  (yyval.e).code = strdup(oss.str().c_str());
                  (yyval.e).result_id = strdup(x.c_str());
                }
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 333 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr . TRUE \n");}
#line 1811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 334 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr . FALSE \n");}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 337 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.e).code = (yyvsp[-1].e).code;
				  (yyval.e).result_id = (yyvsp[-1].e).result_id;
				}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 341 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr . NOT expression comp expression \n");}
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 342 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr . NOT TRUE \n");}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 343 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr . NOT FALSE \n");}
#line 1844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 344 "mini_l.y" /* yacc.c:1646  */
    {printf("relation_expr . NOT L_PAREN bool_expr R_PAREN \n");}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 347 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.c).optr = "==";
                }
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 351 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.c).optr = "!=";
                }
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 355 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.c).optr = "<";
                }
#line 1874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 359 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.c).optr = ">";
                }
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 363 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.c).optr = "<=";
                }
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 367 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.c).optr = ">=";
                }
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 372 "mini_l.y" /* yacc.c:1646  */
    {                  
                  (yyval.e).result_id = (yyvsp[0].e).result_id;
                  (yyval.e).code = (yyvsp[0].e).code;
                }
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 377 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "+ " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
                  (yyval.e).code = strdup(oss.str().c_str());
                  (yyval.e).result_id = strdup(x.c_str());
                }
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 387 "mini_l.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "- " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
                  (yyval.e).code = strdup(oss.str().c_str());
                  (yyval.e).result_id = strdup(x.c_str());
                }
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 398 "mini_l.y" /* yacc.c:1646  */
    {	
						if (strlen((yyvsp[0].e).code) > 0){
						  (yyval.e).code = (yyvsp[0].e).code;
						  (yyval.e).result_id = (yyvsp[0].e).result_id;
						}	 
						else {
						  ostringstream oss;
						  string x = new_temp();
						  oss << ". " << x << endl;
						  oss << "= " << x << ", " << (yyvsp[0].e).result_id << endl;
						  (yyval.e).code = strdup(oss.str().c_str());
						  (yyval.e).result_id = strdup(x.c_str());
						}
                      }
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 413 "mini_l.y" /* yacc.c:1646  */
    {
                        ostringstream oss;
                        oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                        string x = new_temp();
                        oss << ". " << x << endl;
                        oss << "* " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
                        (yyval.e).code = strdup(oss.str().c_str());
                        (yyval.e).result_id = strdup(x.c_str());
                      }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 423 "mini_l.y" /* yacc.c:1646  */
    {
                        ostringstream oss;
                        string x = new_temp();
                        oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                        oss << ". " << x << endl;
                        oss << "/ " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
                        (yyval.e).code = strdup(oss.str().c_str());
                        (yyval.e).result_id = strdup(x.c_str()); 
                      }
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 433 "mini_l.y" /* yacc.c:1646  */
    {
                        ostringstream oss;
                        oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                        string x = new_temp();
                        oss << ". " << x << endl;
                        oss << "% " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;
                        (yyval.e).code = strdup(oss.str().c_str());
                        (yyval.e).result_id = strdup(x.c_str());
                      }
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 444 "mini_l.y" /* yacc.c:1646  */
    {
                  (yyval.e).result_id = (yyvsp[0].e).result_id;
                }
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 448 "mini_l.y" /* yacc.c:1646  */
    {
			      (yyval.e).code = "";		 	
                  (yyval.e).result_id = strdup(to_string((yyvsp[0].int_val)).c_str());
                }
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 453 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.e).code = (yyvsp[-1].e).code;
				  (yyval.e).result_id = (yyvsp[-1].e).result_id;
				}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 457 "mini_l.y" /* yacc.c:1646  */
    {printf("term . SUB var \n");}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 458 "mini_l.y" /* yacc.c:1646  */
    {printf("term . SUB NUMBER \n");}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 459 "mini_l.y" /* yacc.c:1646  */
    {printf("term . SUB L_PAREN expression R_PAREN \n");}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 461 "mini_l.y" /* yacc.c:1646  */
    {
				  ostringstream oss;
				  oss << (yyvsp[-1].e).code;
				  string x = new_temp();
				  oss << "param " << (yyvsp[-1].e).result_id << endl;
				  oss << ". " << x << endl;
				  oss << "call " << (yyvsp[-3].e).result_id << ", " << x << endl;
				  (yyval.e).code = strdup(oss.str().c_str());
				  (yyval.e).result_id = strdup(x.c_str());		  
				}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 472 "mini_l.y" /* yacc.c:1646  */
    {printf("termInnerOne . expression COMMA termInnerOne \n");}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 474 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.e).code = (yyvsp[0].e).code;
                  (yyval.e).result_id = (yyvsp[0].e).result_id;
				}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 479 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.e).code = "";
				  (yyval.e).result_id = "";
				}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 485 "mini_l.y" /* yacc.c:1646  */
    { 
                  (yyval.e).result_id = (yyvsp[0].e).result_id;
                }
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 489 "mini_l.y" /* yacc.c:1646  */
    {
				  (yyval.e).arr_name = (yyvsp[-3].e).result_id;
				  (yyval.e).result_id = (yyvsp[-1].e).result_id;
				  (yyval.e).is_array = TRUE;
				  (yyval.e).code = (yyvsp[-1].e).code;
                }
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2102 "y.tab.c" /* yacc.c:1646  */
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
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



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
                      yytoken, &yylval);
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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 496 "mini_l.y" /* yacc.c:1906  */


void yyerror(const char* s) {
   printf("ERROR: %s at symbol \"%s\" on line %d, col %d\n", s, yytext, currLine, currPos);
}
