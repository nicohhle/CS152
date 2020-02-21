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
#line 2 "phase2.y" /* yacc.c:339  */
	
 #define YY_NO_UNPUT
 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern char *yytext;
/* extern FILE *yyin;*/

#line 77 "y.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
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
    BEGINLOOP = 277,
    ENDLOOP = 278,
    CONTINUE = 279,
    READ = 280,
    WRITE = 281,
    TRUE = 282,
    FALSE = 283,
    RETURN = 284,
    SEMICOLON = 285,
    COLON = 286,
    COMMA = 287,
    L_PAREN = 288,
    R_PAREN = 289,
    L_SQUARE_BRACKET = 290,
    R_SQUARE_BRACKET = 291,
    MULT = 292,
    DIV = 293,
    MOD = 294,
    SUB = 295,
    ADD = 296,
    LT = 297,
    LTE = 298,
    GT = 299,
    GTE = 300,
    EQ = 301,
    NEQ = 302,
    NOT = 303,
    AND = 304,
    OR = 305,
    ASSIGN = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 13 "phase2.y" /* yacc.c:355  */

  int num;
  char *ident;

#line 174 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 191 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   144

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  137

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
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    52,    55,    56,    59,    60,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      75,    76,    79,    80,    83,    84,    87,    88,    89,    90,
      93,    94,    97,    98,    99,   100,   101,   102,   105,   106,
     107,   110,   111,   112,   113,   116,   117,   118,   121,   122,
     123,   126,   127,   130,   131,   134,   137,   138,   139,   142,
     145,   146
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENT", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "FOR", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ",
  "WRITE", "TRUE", "FALSE", "RETURN", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "MULT",
  "DIV", "MOD", "SUB", "ADD", "LT", "LTE", "GT", "GTE", "EQ", "NEQ", "NOT",
  "AND", "OR", "ASSIGN", "$accept", "prog_start", "prog", "function",
  "declaration", "declarationloop", "statement", "statementloop",
  "bool_exp", "relation_and_exp", "relation_exp", "notloop", "comp",
  "expression", "multiplicative_expression", "term", "term_num", "varloop",
  "var", "number", "expressionloop", "identifier", "identifierloop", YY_NULLPTR
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

#define YYPACT_NINF -48

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-48)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       6,     0,    32,   -48,     6,   -48,     4,   -48,   -48,    53,
       0,    35,    11,    38,    41,     0,    70,     0,    13,   -48,
       0,   -48,   -48,    44,    72,    80,    74,   -48,    49,    94,
      75,    28,    28,    64,     0,   -48,     0,     0,    20,    58,
      81,    42,    60,    84,   -48,   -48,    28,    59,    89,    47,
      63,    20,    86,    94,    65,   -48,    90,   -48,    20,    18,
     -48,    34,     1,   -48,   -48,   -48,    12,    94,   -48,    20,
      20,   -48,    87,   -48,    94,    28,    28,    57,    94,   101,
      80,     0,    91,   -48,    20,    20,    20,    20,    20,    20,
     -48,   -48,    92,   -48,    24,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,    20,   103,   108,   100,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,    99,    98,   -48,   -48,    94,   -48,
     -48,    28,    28,    20,   -48,   117,   -48,   105,   -48,   -48,
       0,    85,    20,   115,    94,   116,   -48
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     2,     4,    59,     0,     1,     3,     0,
       9,     0,     0,    61,     0,     9,     0,     0,     0,     8,
       9,    60,     6,     0,     0,     0,     0,    55,     0,     0,
       0,    31,    31,     0,     0,    18,     0,     0,     0,     0,
       0,     0,    54,     0,    27,    28,    31,    31,     0,    23,
      25,     0,     0,     0,     0,    16,    51,    17,     0,     0,
      19,    38,    41,    46,    48,    49,    54,    21,     5,     0,
       0,     7,     0,    30,     0,    31,    31,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,    58,
      20,    10,     0,    29,     0,    22,    24,    34,    36,    35,
      37,    32,    33,     0,     0,     0,     0,    52,    50,    40,
      39,    42,    43,    44,    57,     0,    53,    11,     0,    26,
      13,    31,    31,    58,    47,     0,    14,     0,    56,    12,
       0,     0,     0,     0,     0,     0,    15
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -48,   -48,   134,   -48,   -48,   -12,   -48,   -47,   -31,    66,
     -48,    93,   -48,   -21,   -19,   -48,    82,   -35,   -24,   -18,
      21,    -1,   126
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    12,    39,    40,    48,    49,
      50,    51,   103,   114,    61,    62,    63,    55,    64,    65,
     115,    66,    14
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       6,    52,    57,    19,     5,    41,    79,    28,    24,    13,
      54,     1,    56,    56,    13,    72,    13,    60,    16,    13,
      90,    27,     5,    27,     5,    22,    23,    94,    42,    41,
      77,   104,     7,    42,     9,    42,    42,    82,    86,    87,
      88,   117,   118,    41,    95,    89,   107,    70,    91,    92,
      41,    58,    42,    58,    41,    44,    45,    56,    42,    10,
      59,    46,   106,   109,   110,    15,    42,   111,   112,   113,
      17,   125,    18,    42,    84,    85,    47,    42,    20,    25,
      42,    26,   119,    27,    29,    30,    53,   135,    67,    43,
     126,   127,    68,    69,    41,    70,    71,    75,     5,    97,
      98,    99,   100,   101,   102,    74,   131,    47,    78,    31,
      41,   133,    76,    32,    33,    34,    80,    42,    35,    36,
      37,    93,    81,    38,   105,   108,   120,   121,   116,    42,
     122,   123,   124,    42,   129,   130,   132,   134,     8,   136,
      73,    83,    96,    21,   128
};

static const yytype_uint8 yycheck[] =
{
       1,    32,    37,    15,     4,    29,    53,    25,    20,    10,
      34,     5,    36,    37,    15,    46,    17,    38,     7,    20,
      67,     3,     4,     3,     4,    12,    13,    74,    29,    53,
      51,    78,     0,    34,    30,    36,    37,    58,    37,    38,
      39,    17,    18,    67,    75,    33,    81,    35,    69,    70,
      74,    33,    53,    33,    78,    27,    28,    81,    59,     6,
      40,    33,    80,    84,    85,    30,    67,    86,    87,    88,
      32,   118,    31,    74,    40,    41,    48,    78,     8,    35,
      81,     9,   103,     3,    10,    36,    22,   134,    30,    14,
     121,   122,    11,    51,   118,    35,    12,    50,     4,    42,
      43,    44,    45,    46,    47,    16,   130,    48,    22,    15,
     134,   132,    49,    19,    20,    21,    51,   118,    24,    25,
      26,    34,    32,    29,    23,    34,    23,    19,    36,   130,
      30,    32,    34,   134,    17,    30,    51,    22,     4,    23,
      47,    59,    76,    17,   123
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    53,    54,    55,     4,    73,     0,    54,    30,
       6,    56,    57,    73,    74,    30,     7,    32,    31,    57,
       8,    74,    12,    13,    57,    35,     9,     3,    71,    10,
      36,    15,    19,    20,    21,    24,    25,    26,    29,    58,
      59,    70,    73,    14,    27,    28,    33,    48,    60,    61,
      62,    63,    60,    22,    70,    69,    70,    69,    33,    40,
      65,    66,    67,    68,    70,    71,    73,    30,    11,    51,
      35,    12,    60,    63,    16,    50,    49,    65,    22,    59,
      51,    32,    65,    68,    40,    41,    37,    38,    39,    33,
      59,    65,    65,    34,    59,    60,    61,    42,    43,    44,
      45,    46,    47,    64,    59,    23,    71,    69,    34,    65,
      65,    66,    66,    66,    65,    72,    36,    17,    18,    65,
      23,    19,    30,    32,    34,    59,    60,    60,    72,    17,
      30,    70,    51,    65,    22,    59,    23
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    56,    57,    57,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      59,    59,    60,    60,    61,    61,    62,    62,    62,    62,
      63,    63,    64,    64,    64,    64,    64,    64,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    71,    72,    72,    72,    73,
      74,    74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,    12,     3,     8,     3,     0,
       3,     5,     7,     5,     6,    13,     2,     2,     1,     2,
       3,     2,     3,     1,     3,     1,     4,     1,     1,     3,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     3,     2,     1,     4,     1,     1,
       3,     1,     3,     4,     1,     1,     3,     1,     0,     1,
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
#line 45 "phase2.y" /* yacc.c:1646  */
    { printf("prog_start -> prog\n"); }
#line 1365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 48 "phase2.y" /* yacc.c:1646  */
    { printf("prog -> function prog\n"); }
#line 1371 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 49 "phase2.y" /* yacc.c:1646  */
    { printf("prog -> epsilon\n"); }
#line 1377 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 52 "phase2.y" /* yacc.c:1646  */
    { printf("function -> FUNCTION identifier SEMICOLON BEGIN_PARAMS declarationloop END_PARAMS BEGIN_LOCALS declarationloop END_LOCALS BEGIN_BODY statementloop END_BODY\n"); }
#line 1383 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "phase2.y" /* yacc.c:1646  */
    { printf("declaration -> identifierloop COLON INTEGER\n"); }
#line 1389 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "phase2.y" /* yacc.c:1646  */
    { printf("declaration -> identifierloop COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n"); }
#line 1395 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 59 "phase2.y" /* yacc.c:1646  */
    { printf("declarationloop -> declaration SEMICOLON declarationloop\n"); }
#line 1401 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 60 "phase2.y" /* yacc.c:1646  */
    { printf("declarationloop -> epsilon\n"); }
#line 1407 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 63 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> var ASSIGN expression\n"); }
#line 1413 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 64 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> IF bool_exp THEN statementloop ENDIF\n"); }
#line 1419 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 65 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> IF bool_exp THEN statementloop ELSE statementloop ENDIF\n"); }
#line 1425 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 66 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> WHILE bool_exp BEGINLOOP statementloop ENDLOOP\n"); }
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 67 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> DO BEGINLOOP statementloop ENDLOOP WHILE bool_exp\n"); }
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 68 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> FOR var ASSIGN number SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statementloop ENDLOOP\n"); }
#line 1443 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 69 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> READ varloop\n"); }
#line 1449 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 70 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> WRITE varloop\n"); }
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 71 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> CONTINUE\n"); }
#line 1461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 72 "phase2.y" /* yacc.c:1646  */
    { printf("statement -> RETURN expression\n"); }
#line 1467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 75 "phase2.y" /* yacc.c:1646  */
    { printf("statementloop -> statement SEMICOLON statementloop\n"); }
#line 1473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 76 "phase2.y" /* yacc.c:1646  */
    { printf("statementloop -> statement SEMICOLON\n"); }
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 79 "phase2.y" /* yacc.c:1646  */
    { printf("bool_exp -> relation_and_exp OR bool_exp\n"); }
#line 1485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 80 "phase2.y" /* yacc.c:1646  */
    { printf("bool_exp -> relation_and_exp\n"); }
#line 1491 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 83 "phase2.y" /* yacc.c:1646  */
    { printf("relation_and_exp -> relation_exp AND relation_exp\n"); }
#line 1497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 84 "phase2.y" /* yacc.c:1646  */
    { printf("relation_and_exp -> relation_exp\n"); }
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 87 "phase2.y" /* yacc.c:1646  */
    { printf("relation_exp -> notloop expression comp expression\n"); }
#line 1509 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 88 "phase2.y" /* yacc.c:1646  */
    { printf("relation_exp -> TRUE"); }
#line 1515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 89 "phase2.y" /* yacc.c:1646  */
    { printf("relation_exp -> FALSE"); }
#line 1521 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 90 "phase2.y" /* yacc.c:1646  */
    { printf("relation_exp -> L_PAREN bool_exp R_PAREN\n"); }
#line 1527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 93 "phase2.y" /* yacc.c:1646  */
    { printf("notloop -> NOT notloop\n"); }
#line 1533 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 94 "phase2.y" /* yacc.c:1646  */
    { printf("notloop -> epsilon\n"); }
#line 1539 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 97 "phase2.y" /* yacc.c:1646  */
    { printf("comp -> EQ\n"); }
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 98 "phase2.y" /* yacc.c:1646  */
    { printf("comp -> NEQ\n"); }
#line 1551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 99 "phase2.y" /* yacc.c:1646  */
    { printf("comp -> LT\n"); }
#line 1557 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 100 "phase2.y" /* yacc.c:1646  */
    { printf("comp -> GT\n"); }
#line 1563 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 101 "phase2.y" /* yacc.c:1646  */
    { printf("comp -> LTE\n"); }
#line 1569 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 102 "phase2.y" /* yacc.c:1646  */
    { printf("comp -> GTE\n"); }
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 105 "phase2.y" /* yacc.c:1646  */
    { printf("expression -> multiplicative_expression\n"); }
#line 1581 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 106 "phase2.y" /* yacc.c:1646  */
    { printf("expression -> multiplicative_expression ADD expression\n"); }
#line 1587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "phase2.y" /* yacc.c:1646  */
    { printf("expression -> multiplicative_expression SUB expression\n"); }
#line 1593 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 110 "phase2.y" /* yacc.c:1646  */
    { printf("multiplicative_expression -> term\n"); }
#line 1599 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 111 "phase2.y" /* yacc.c:1646  */
    {("multiplicative_expression -> term MULT multiplicative_expression\n"); }
#line 1605 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 112 "phase2.y" /* yacc.c:1646  */
    {("multiplicative_expression -> term DIV multiplicative_expression\n"); }
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 113 "phase2.y" /* yacc.c:1646  */
    {("multiplicative_expression -> term MOD multiplicative_expression\n"); }
#line 1617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 116 "phase2.y" /* yacc.c:1646  */
    { printf("term -> SUB term_num\n"); }
#line 1623 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 117 "phase2.y" /* yacc.c:1646  */
    { printf("term -> term_num\n"); }
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 118 "phase2.y" /* yacc.c:1646  */
    { printf("term -> identifier L_PAREN expressionloop R_PAREN\n"); }
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 121 "phase2.y" /* yacc.c:1646  */
    { printf("term_num -> var\n"); }
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 122 "phase2.y" /* yacc.c:1646  */
    { printf("term_num -> number\n"); }
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 123 "phase2.y" /* yacc.c:1646  */
    { printf("term_num -> L_PAREN expression R_PAREN\n"); }
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 126 "phase2.y" /* yacc.c:1646  */
    { printf("varloop -> var\n"); }
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 127 "phase2.y" /* yacc.c:1646  */
    { printf("varloop -> var COMMA varloop\n"); }
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 130 "phase2.y" /* yacc.c:1646  */
    { printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n"); }
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 131 "phase2.y" /* yacc.c:1646  */
    { printf("var -> identifier\n"); }
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 134 "phase2.y" /* yacc.c:1646  */
    { printf("number -> NUMBER %d\n", yylval.num); }
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 137 "phase2.y" /* yacc.c:1646  */
    { printf("expressionloop-> expression COMMA expressionloop\n"); }
#line 1689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 138 "phase2.y" /* yacc.c:1646  */
    { printf("expressionloop -> expression"); }
#line 1695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 139 "phase2.y" /* yacc.c:1646  */
    { printf("expressionloop -> epsilon"); }
#line 1701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 142 "phase2.y" /* yacc.c:1646  */
    { printf("identifier -> IDENT %s\n", yylval.ident); }
#line 1707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "phase2.y" /* yacc.c:1646  */
    { printf("identifierloop -> identifier COMMA identifierloop\n"); }
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 146 "phase2.y" /* yacc.c:1646  */
    { printf("identifierloop -> identifier\n"); }
#line 1719 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1723 "y.tab.c" /* yacc.c:1646  */
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
#line 149 "phase2.y" /* yacc.c:1906  */
  

void yyerror(const char *msg) {

  printf("%s: parsing error at line: %d, column: %d\nUnpexpected symbol %s encountered.\n", msg, currLine, currPos, yytext);

  exit(1);
  //  printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}



