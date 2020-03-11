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
#line 3 "temp.y" /* yacc.c:339  */

#define YY_NO_UNPUT
#include <stdio.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include "y.tab.h"
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
  labelCount += 1;

  x += to_string(labelCount);
  return x;
}

string new_temp(){
  string x = "__temp__";
  tempCount += 1;

  x += to_string(tempCount);
  return x;
}


#line 107 "t.tab.c" /* yacc.c:339  */

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
   by #include "t.tab.h".  */
#ifndef YY_YY_T_TAB_H_INCLUDED
# define YY_YY_T_TAB_H_INCLUDED
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
    NUMBER = 258,
    IDENT = 259,
    FUNCTION = 260,
    BEGIN_PARAMS = 261,
    END_PARAMS = 262,
    BEGIN_LOCALS = 263,
    END_LOCALS = 264,
    BEGIN_BODY = 265,
    END_BODY = 266,
    INTEGER = 267,
    ARRAY = 268,
    OF = 269,
    IF = 270,
    THEN = 271,
    ENDIF = 272,
    ELSE = 273,
    WHILE = 274,
    DO = 275,
    FOR = 276,
    IN = 277,
    BEGINLOOP = 278,
    ENDLOOP = 279,
    CONTINUE = 280,
    READ = 281,
    WRITE = 282,
    AND = 283,
    OR = 284,
    NOT = 285,
    TRUE = 286,
    FALSE = 287,
    RETURN = 288,
    SUB = 289,
    ADD = 290,
    MULT = 291,
    DIV = 292,
    MOD = 293,
    EQ = 294,
    NEQ = 295,
    LT = 296,
    GT = 297,
    LTE = 298,
    GTE = 299,
    L_PAREN = 300,
    R_PAREN = 301,
    L_SQUARE_BRACKET = 302,
    R_SQUARE_BRACKET = 303,
    COLON = 304,
    SEMICOLON = 305,
    COMMA = 306,
    ASSIGN = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 44 "temp.y" /* yacc.c:355  */

  int int_val;
  char*	op_val;
  struct statement_semval {
	 char* code;
  } s;

  struct expression_semval {
	 char *code;
	 char *result_id;
  } e;

  struct comp_semval {
	 char *optr;
  } c;


#line 218 "t.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_T_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 235 "t.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   139,   139,   141,   146,   160,   161,   164,   173,   179,
     180,   195,   196,   197,   198,   199,   200,   201,   206,   216,
     223,   229,   230,   237,   238,   241,   253,   258,   263,   270,
     271,   274,   278,   282,   286,   290,   294,   300,   305,   316,
     329,   334,   345,   356,   369,   370,   371,   372,   373,   374,
     379,   393,   394,   397,   398,   401,   404,   414,   424,   430,
     439,   441
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENT", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "FOR", "IN", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ",
  "WRITE", "AND", "OR", "NOT", "TRUE", "FALSE", "RETURN", "SUB", "ADD",
  "MULT", "DIV", "MOD", "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "L_PAREN",
  "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "COLON", "SEMICOLON",
  "COMMA", "ASSIGN", "$accept", "program", "function", "declaration",
  "declarationloop", "statement", "statementloop", "bool_exp",
  "relation_and_exp", "relation_exp", "notloop", "comp", "expression",
  "multiplicative_expression", "term", "varloop", "var", "number",
  "expressionloop", "identifier", "identifierloop", YY_NULLPTR
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
     305,   306,   307
};
# endif

#define YYPACT_NINF -37

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-37)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      16,    25,    31,    16,   -37,   -13,   -37,   -37,    33,    25,
      -4,    45,     5,    13,    25,    46,    25,    12,   -37,    25,
     -37,   -37,    17,    57,    71,    70,   -37,    36,   114,    73,
      78,    78,    62,    25,   -37,    25,    25,     2,    38,    79,
      37,    44,    81,    78,   -37,   -37,     8,    78,    84,    65,
     -37,    69,   117,    14,     6,   -37,   -37,   -31,    80,   114,
      50,   -37,    53,   -37,     2,   -37,   114,   -37,     2,     2,
     -37,   -37,     2,   -37,   -37,    59,   109,   114,    78,    78,
     -37,   -37,   -37,   -37,   -37,   -37,     2,     2,     2,     2,
       2,     2,     2,   114,    82,    71,    25,    67,   -37,   -37,
      68,    74,   -37,   -37,    51,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,    64,    76,    93,   100,    75,   -37,   -37,
     -37,   -37,   114,     2,   -37,   -37,    78,    78,   107,   -37,
     -37,    77,   -37,    25,    85,     2,   105,   114,   106,   -37
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,    59,     0,     1,     2,     0,     8,
       0,     0,    61,     0,     8,     0,     0,     0,     7,     8,
      60,     5,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,    54,     0,     0,    26,    27,     0,     0,     0,    22,
      30,    24,     0,    37,    40,    47,    48,    54,     0,     0,
       0,    15,    51,    16,     0,    18,    20,     4,     0,     0,
       6,    29,     0,    44,    45,     0,     0,     0,     0,     0,
      31,    32,    33,    34,    35,    36,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,    19,     9,
       0,     0,    28,    49,     0,    21,    23,    25,    39,    38,
      41,    42,    43,    57,     0,     0,     0,     0,    52,    53,
      46,    10,     0,    58,    50,    12,     0,     0,     0,    56,
      13,     0,    11,     0,     0,     0,     0,     0,     0,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -37,   128,   -37,   -37,     3,   -37,   -36,   -28,    63,   -37,
      95,   -37,    -9,   -18,   -37,   -35,   -26,   -20,    20,    -1,
     129
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,    10,    11,    38,    39,    48,    49,    50,
      51,    86,    52,    53,    54,    61,    55,    56,   114,    57,
      13
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,    63,    40,    58,    27,    26,     4,    60,    12,    62,
      62,    26,     4,    12,    92,    12,    69,    18,    12,    75,
      73,     1,    23,    94,    21,    22,    74,    41,    65,     4,
      98,     6,    41,    40,    41,    41,    46,     8,    76,     9,
      40,   104,    89,    90,    91,    41,    14,    64,    87,    88,
     105,    40,    15,    72,    19,    97,    16,   115,    41,    99,
     100,   118,    17,   101,    24,    41,    25,    40,   121,   122,
      62,   110,   111,   112,    26,   117,    41,   107,   108,   109,
      28,    26,     4,   113,    29,    59,   128,    42,    66,    68,
      67,    69,    41,    70,    78,    41,    40,    79,   130,   131,
      77,   138,    95,    93,    96,   102,   116,   134,    43,    44,
      45,    40,    46,   103,   113,   123,   119,   125,     4,   126,
     120,    41,   124,    47,   132,   127,   136,   133,   137,    30,
     139,     7,    41,    31,    32,    33,    41,   135,    71,    34,
      35,    36,   106,   129,     0,    20,     0,    37,    80,    81,
      82,    83,    84,    85,     0,   103,    80,    81,    82,    83,
      84,    85
};

static const yytype_int16 yycheck[] =
{
       1,    36,    28,    31,    24,     3,     4,    33,     9,    35,
      36,     3,     4,    14,    45,    16,    47,    14,    19,    47,
      46,     5,    19,    59,    12,    13,    46,    28,    37,     4,
      66,     0,    33,    59,    35,    36,    34,    50,    47,     6,
      66,    77,    36,    37,    38,    46,    50,    45,    34,    35,
      78,    77,     7,    45,     8,    64,    51,    93,    59,    68,
      69,    96,    49,    72,    47,    66,     9,    93,    17,    18,
      96,    89,    90,    91,     3,    95,    77,    86,    87,    88,
      10,     3,     4,    92,    48,    23,   122,    14,    50,    52,
      11,    47,    93,    12,    29,    96,   122,    28,   126,   127,
      16,   137,    52,    23,    51,    46,    24,   133,    30,    31,
      32,   137,    34,    46,   123,    51,    48,    24,     4,    19,
      46,   122,    46,    45,    17,    50,   135,    50,    23,    15,
      24,     3,   133,    19,    20,    21,   137,    52,    43,    25,
      26,    27,    79,   123,    -1,    16,    -1,    33,    39,    40,
      41,    42,    43,    44,    -1,    46,    39,    40,    41,    42,
      43,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    54,    55,     4,    72,     0,    54,    50,     6,
      56,    57,    72,    73,    50,     7,    51,    49,    57,     8,
      73,    12,    13,    57,    47,     9,     3,    70,    10,    48,
      15,    19,    20,    21,    25,    26,    27,    33,    58,    59,
      69,    72,    14,    30,    31,    32,    34,    45,    60,    61,
      62,    63,    65,    66,    67,    69,    70,    72,    60,    23,
      69,    68,    69,    68,    45,    65,    50,    11,    52,    47,
      12,    63,    45,    69,    70,    60,    65,    16,    29,    28,
      39,    40,    41,    42,    43,    44,    64,    34,    35,    36,
      37,    38,    45,    23,    59,    52,    51,    65,    59,    65,
      65,    65,    46,    46,    59,    60,    61,    65,    65,    65,
      66,    66,    66,    65,    71,    59,    24,    70,    68,    48,
      46,    17,    18,    51,    46,    24,    19,    50,    59,    71,
      60,    60,    17,    50,    69,    52,    65,    23,    59,    24
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    56,    56,    57,    57,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    59,
      59,    60,    60,    61,    61,    62,    62,    62,    62,    63,
      63,    64,    64,    64,    64,    64,    64,    65,    65,    65,
      66,    66,    66,    66,    67,    67,    67,    67,    67,    67,
      67,    68,    68,    69,    69,    70,    71,    71,    71,    72,
      73,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,    12,     3,     8,     3,     0,     3,
       5,     7,     5,     6,    13,     2,     2,     1,     2,     3,
       2,     3,     1,     3,     1,     3,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     3,     2,     2,     4,     1,     1,     3,
       4,     1,     3,     4,     1,     1,     3,     1,     0,     1,
       3,     1
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
#line 139 "temp.y" /* yacc.c:1646  */
    { printf("program -> function program\n"); }
#line 1413 "t.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 141 "temp.y" /* yacc.c:1646  */
    {
            (yyval.s).code = "";
          }
#line 1421 "t.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 147 "temp.y" /* yacc.c:1646  */
    {
              ostringstream oss;
              oss << (yyvsp[-10].e).code << (yyvsp[-7].e).code; 

              oss << "func " << (yyvsp[-10].e).result_id << endl;
              oss << (yyvsp[-4].e).code << (yyvsp[-1].s).code;

              oss << "endfunc" << endl;

              cout << oss.str();
            }
#line 1437 "t.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 160 "temp.y" /* yacc.c:1646  */
    { printf("declaration -> identifierloop COLON INTEGER\n"); }
#line 1443 "t.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 161 "temp.y" /* yacc.c:1646  */
    { printf("declaration -> identifierloop COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n"); }
#line 1449 "t.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 165 "temp.y" /* yacc.c:1646  */
    { 
                    ostringstream oss;
                    oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                    
                    (yyval.e).code = strdup(oss.str().c_str());
                    (yyval.e).result_id = "";
                  }
#line 1461 "t.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 173 "temp.y" /* yacc.c:1646  */
    { 
              (yyval.e).code = "";
              (yyval.e).result_id = "";
            }
#line 1470 "t.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 179 "temp.y" /* yacc.c:1646  */
    { printf("statement -> var ASSIGN expression\n"); }
#line 1476 "t.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 181 "temp.y" /* yacc.c:1646  */
    {
              string x = new_label();
              string y = new_label();
              ostringstream oss;

              oss << (yyvsp[-3].e).code;
              oss << "?:= " << x << ", " << (yyvsp[-3].e).result_id << endl;
              oss << ":= y" << endl;
              oss << ": " << x << endl;
              oss << (yyvsp[-1].s).code;
              oss << ": " << y << endl;

              (yyval.s).code = strdup(oss.str().c_str());
            }
#line 1495 "t.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 195 "temp.y" /* yacc.c:1646  */
    { printf("statement -> IF bool_exp THEN statementloop ELSE statementloop ENDIF\n"); }
#line 1501 "t.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 196 "temp.y" /* yacc.c:1646  */
    { printf("statement -> WHILE bool_exp BEGINLOOP statementloop ENDLOOP\n"); }
#line 1507 "t.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 197 "temp.y" /* yacc.c:1646  */
    { printf("statement -> DO BEGINLOOP statementloop ENDLOOP WHILE bool_exp\n"); }
#line 1513 "t.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "temp.y" /* yacc.c:1646  */
    { printf("statement -> FOR var ASSIGN number SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statementloop ENDLOOP\n"); }
#line 1519 "t.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 199 "temp.y" /* yacc.c:1646  */
    { printf("statement -> READ varloop\n"); }
#line 1525 "t.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 200 "temp.y" /* yacc.c:1646  */
    { printf("statement -> WRITE varloop\n"); }
#line 1531 "t.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 202 "temp.y" /* yacc.c:1646  */
    {
              // std::string x = "continue\n";
              (yyval.s).code = "continue\n"; // "strdup(x.c_str())";
            }
#line 1540 "t.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 207 "temp.y" /* yacc.c:1646  */
    { 
              ostringstream oss;
              oss << (yyvsp[0].e).code;
              oss << "ret " << (yyvsp[0].e).result_id << endl;

              (yyval.s).code = strdup(oss.str().c_str());
            }
#line 1552 "t.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 217 "temp.y" /* yacc.c:1646  */
    { 
                  ostringstream oss;
                  oss << (yyvsp[-2].s).code << (yyvsp[0].s).code;

                  (yyval.s).code = strdup(oss.str().c_str());
                }
#line 1563 "t.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 224 "temp.y" /* yacc.c:1646  */
    { 
              (yyval.s).code = (yyvsp[-1].s).code;
            }
#line 1571 "t.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 229 "temp.y" /* yacc.c:1646  */
    { printf("bool_exp -> relation_and_exp OR bool_exp\n"); }
#line 1577 "t.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 231 "temp.y" /* yacc.c:1646  */
    {
              (yyval.e).code = (yyvsp[0].e).code;
              (yyval.e).result_id = (yyvsp[0].e).result_id;
            }
#line 1586 "t.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 237 "temp.y" /* yacc.c:1646  */
    { printf("relation_and_exp -> notloop AND relation_and_exp\n"); }
#line 1592 "t.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 238 "temp.y" /* yacc.c:1646  */
    { printf("relation_and_exp -> notloop\n"); }
#line 1598 "t.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 242 "temp.y" /* yacc.c:1646  */
    {
                  ostringstream oss;
                  std::string x = new_temp();

                  oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                  oss << ". " << x << endl;
                  oss << (yyvsp[-1].c).optr << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;

                  (yyval.e).code = strdup(oss.str().c_str());
                  (yyval.e).result_id = strdup(x.c_str());
                }
#line 1614 "t.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 254 "temp.y" /* yacc.c:1646  */
    {
                  (yyval.e).code = "";
                  (yyval.e).result_id = "1";
                }
#line 1623 "t.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 259 "temp.y" /* yacc.c:1646  */
    {
                  (yyval.e).code = "";
                  (yyval.e).result_id = "0";
                }
#line 1632 "t.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 264 "temp.y" /* yacc.c:1646  */
    { 
                  (yyval.e).code = (yyvsp[-1].e).code;
                  (yyval.e).result_id = (yyvsp[-1].e).result_id;
                }
#line 1641 "t.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 270 "temp.y" /* yacc.c:1646  */
    { printf("notloop -> NOT notloop\n"); }
#line 1647 "t.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 271 "temp.y" /* yacc.c:1646  */
    { printf("notloop -> relation_exp\n"); }
#line 1653 "t.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 275 "temp.y" /* yacc.c:1646  */
    {
              (yyval.c).optr = "==";
            }
#line 1661 "t.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 279 "temp.y" /* yacc.c:1646  */
    {
              (yyval.c).optr = "!=";
            }
#line 1669 "t.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 283 "temp.y" /* yacc.c:1646  */
    {
              (yyval.c).optr = "<";
            }
#line 1677 "t.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 287 "temp.y" /* yacc.c:1646  */
    {
              (yyval.c).optr = ">";
            }
#line 1685 "t.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 291 "temp.y" /* yacc.c:1646  */
    {
              (yyval.c).optr = "<=";
            }
#line 1693 "t.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 295 "temp.y" /* yacc.c:1646  */
    {
              (yyval.c).optr = ">=";
            }
#line 1701 "t.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 301 "temp.y" /* yacc.c:1646  */
    {
              (yyval.e).code = (yyvsp[0].e).code;
              (yyval.e).result_id = (yyvsp[0].e).result_id;
            }
#line 1710 "t.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 306 "temp.y" /* yacc.c:1646  */
    {
              ostringstream oss;
              std::string x = new_temp();

              oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
              oss << ". " << x << endl;
              oss << "+ " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;

              (yyval.e).code = strdup(oss.str().c_str());
            }
#line 1725 "t.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 317 "temp.y" /* yacc.c:1646  */
    {
              ostringstream oss;
              std::string x = new_temp();

              oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
              oss << ". " << x << endl;
              oss << "- " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;

              (yyval.e).code = strdup(oss.str().c_str());
            }
#line 1740 "t.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 330 "temp.y" /* yacc.c:1646  */
    {
                              (yyval.e).code = (yyvsp[0].e).code;
                              (yyval.e).result_id = (yyvsp[0].e).result_id;
                            }
#line 1749 "t.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 335 "temp.y" /* yacc.c:1646  */
    {
                              ostringstream oss;
                              std::string x = new_temp();

                              oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                              oss << ". " << x << endl;
                              oss << "* " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;

                              (yyval.e).code = strdup(oss.str().c_str());
                            }
#line 1764 "t.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 346 "temp.y" /* yacc.c:1646  */
    {
                              ostringstream oss;
                              std::string x = new_temp();

                              oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                              oss << ". " << x << endl;
                              oss << "/ " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;

                              (yyval.e).code = strdup(oss.str().c_str());
                            }
#line 1779 "t.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 357 "temp.y" /* yacc.c:1646  */
    {
                              ostringstream oss;
                              std::string x = new_temp();

                              oss << (yyvsp[-2].e).code << (yyvsp[0].e).code;
                              oss << ". " << x << endl;
                              oss << "% " << x << ", " << (yyvsp[-2].e).result_id << ", " << (yyvsp[0].e).result_id << endl;

                              (yyval.e).code = strdup(oss.str().c_str());
                            }
#line 1794 "t.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 369 "temp.y" /* yacc.c:1646  */
    { printf("term -> SUB var\n"); }
#line 1800 "t.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 370 "temp.y" /* yacc.c:1646  */
    { printf("term -> SUB number\n"); }
#line 1806 "t.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 371 "temp.y" /* yacc.c:1646  */
    { printf("term -> SUB L_PAREN expression R_PAREN\n"); }
#line 1812 "t.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 372 "temp.y" /* yacc.c:1646  */
    { printf("term -> var\n"); }
#line 1818 "t.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 373 "temp.y" /* yacc.c:1646  */
    { printf("term -> number\n"); }
#line 1824 "t.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 375 "temp.y" /* yacc.c:1646  */
    {
          (yyval.e).code = (yyvsp[-1].e).code;
          (yyval.e).result_id = (yyvsp[-1].e).result_id;
        }
#line 1833 "t.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 380 "temp.y" /* yacc.c:1646  */
    {
          ostringstream oss;
          std::string x = new_temp();

          // no $1.code -- we are not taking in anything
          oss << (yyvsp[-1].e).code;
          oss << ". " << x << endl;
          oss << "call " << (yyvsp[-3].e).result_id << ", " << x << endl;

          (yyval.e).code = strdup(oss.str().c_str());
        }
#line 1849 "t.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 393 "temp.y" /* yacc.c:1646  */
    { printf("varloop -> var\n"); }
#line 1855 "t.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 394 "temp.y" /* yacc.c:1646  */
    { printf("varloop -> var COMMA varloop\n"); }
#line 1861 "t.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 397 "temp.y" /* yacc.c:1646  */
    { printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n"); }
#line 1867 "t.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 398 "temp.y" /* yacc.c:1646  */
    { printf("var -> identifier\n"); }
#line 1873 "t.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 401 "temp.y" /* yacc.c:1646  */
    { printf("number -> NUMBER %d\n", yylval.int_val); }
#line 1879 "t.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 405 "temp.y" /* yacc.c:1646  */
    {
                    ostringstream oss;
                    oss << (yyvsp[-2].e).code;
                    oss << "param " << (yyvsp[-2].e).result_id << endl;
                    oss << (yyvsp[0].e).code;

                    (yyval.e).code = strdup(oss.str().c_str());
                    (yyval.e).result_id = "";
                  }
#line 1893 "t.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 415 "temp.y" /* yacc.c:1646  */
    {
                    ostringstream oss;
                    oss << (yyvsp[0].e).code;
                    oss << "param " << (yyvsp[0].e).result_id << endl;

                    (yyval.e).code = strdup(oss.str().c_str());
                    (yyval.e).result_id = "";
                  }
#line 1906 "t.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 424 "temp.y" /* yacc.c:1646  */
    {
                    (yyval.e).code = "";
                    (yyval.e).result_id = "";
                  }
#line 1915 "t.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 431 "temp.y" /* yacc.c:1646  */
    { 
              ostringstream oss;
              oss << (yyvsp[0].op_val) << endl;
              (yyval.e).code = strdup(oss.str().c_str());
              (yyval.e).result_id = (yyvsp[0].op_val);
            }
#line 1926 "t.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 440 "temp.y" /* yacc.c:1646  */
    { printf("identifierloop -> identifier COMMA identifierloop\n"); }
#line 1932 "t.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 442 "temp.y" /* yacc.c:1646  */
    { 
                    (yyval.e).code = "";
                    (yyval.e).result_id = (yyvsp[0].e).result_id;
                  }
#line 1941 "t.tab.c" /* yacc.c:1646  */
    break;


#line 1945 "t.tab.c" /* yacc.c:1646  */
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
#line 448 "temp.y" /* yacc.c:1906  */


void yyerror(const char* s) {
   printf("ERROR: %s at symbol \"%s\" on line %d, col %d\n", s, yytext, currLine, currPos);
}
