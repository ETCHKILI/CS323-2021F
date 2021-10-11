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
#line 1 "src/syntax.y" /* yacc.c:339  */

    #include "lex.yy.c"
    void yyerror(const char *s);
    #include "stdio.h"
    #include "stdlib.h"
    #include "string.h"
    
    struct tnode *head;

#line 76 "syntax.tab.c" /* yacc.c:339  */

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
   by #include "syntax.tab.h".  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ILLEGAL_TOKEN = 258,
    LOWER_ELSE = 259,
    ELSE = 260,
    TYPE = 261,
    STRUCT = 262,
    IF = 263,
    WHILE = 264,
    RETURN = 265,
    INT = 266,
    FLOAT = 267,
    CHAR = 268,
    ID = 269,
    ASSIGN = 270,
    OR = 271,
    AND = 272,
    LT = 273,
    LE = 274,
    GT = 275,
    GE = 276,
    NE = 277,
    EQ = 278,
    PLUS = 279,
    MINUS = 280,
    MUL = 281,
    DIV = 282,
    NOT = 283,
    LP = 284,
    RP = 285,
    LB = 286,
    RB = 287,
    DOT = 288,
    SEMI = 289,
    COMMA = 290,
    LC = 291,
    RC = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 12 "src/syntax.y" /* yacc.c:355  */

    struct tnode *nd;

#line 158 "syntax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 175 "syntax.tab.c" /* yacc.c:358  */

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

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
      35,    36,    37
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    49,    50,    54,    55,    56,    57,    58,
      62,    63,    64,    70,    71,    74,    75,    76,    81,    82,
      83,    86,    87,    88,    89,    92,    93,    94,    97,   102,
     105,   106,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   123,   124,   127,   128,   129,   132,   133,   134,
     137,   138,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   176,   177,   178
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ILLEGAL_TOKEN", "LOWER_ELSE", "ELSE",
  "TYPE", "STRUCT", "IF", "WHILE", "RETURN", "INT", "FLOAT", "CHAR", "ID",
  "ASSIGN", "OR", "AND", "LT", "LE", "GT", "GE", "NE", "EQ", "PLUS",
  "MINUS", "MUL", "DIV", "NOT", "LP", "RP", "LB", "RB", "DOT", "SEMI",
  "COMMA", "LC", "RC", "$accept", "Program", "ExtDefList", "ExtDef",
  "ExtDecList", "Specifier", "StructSpecifier", "VarDec", "FunDec",
  "VarList", "ParamDec", "CompSt", "StmtList", "Stmt", "DefList", "Def",
  "DecList", "Dec", "Exp", "Args", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292
};
# endif

#define YYPACT_NINF -58

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-58)))

#define YYTABLE_NINF -43

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-43)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,   -58,   -12,     8,   -58,   136,    61,   -58,    40,   -58,
     -58,   -58,   -18,   -58,    22,    86,    55,    12,    47,   -58,
     -58,   -58,    54,    80,    97,    60,   -58,    80,    80,    13,
      60,   -58,   -58,    80,    50,    20,    15,   -58,   -58,   116,
      72,    68,    64,    24,   -58,   -58,   -58,    87,   -58,   -58,
     136,   130,   -58,   -58,   -58,     0,   109,   399,   -58,   -58,
     -58,   111,   399,   399,   399,   -58,   110,   116,   290,   399,
     -58,    80,   147,   -58,   -58,   -58,   -58,   399,   399,   399,
      89,   392,   153,   106,   172,   -58,   -58,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   135,   -58,   340,   -58,   -58,   315,   203,   234,
     -58,   -58,   -58,   -58,   143,    51,   -58,   -58,   365,   435,
     452,   468,   183,   183,   183,   183,   183,   183,   153,   153,
     106,   106,   265,   -58,   116,   116,   116,   116,   116,   420,
     399,   399,   149,   -58,   -58,   -58,   -58,   -58,   -58,   146,
     -58,   -58,   153,   -58,   -58,   116,   -58
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,    13,     0,     0,     2,     3,     0,    14,    16,     1,
       4,     9,    18,     6,     0,    10,     0,     0,     0,     8,
       5,    18,     0,     0,     0,     0,     7,     0,     0,     0,
       0,    24,    22,     0,     0,    27,     0,    11,    12,    30,
      50,     0,    47,     0,    17,    15,    43,    28,    23,    21,
       0,     0,    20,    19,    81,     0,     0,     0,    77,    78,
      79,    76,     0,     0,     0,    33,     0,    30,     0,     0,
      46,     0,     0,    45,    44,    25,    26,     0,     0,     0,
       0,     0,    67,    68,     0,    29,    31,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    51,    48,    49,     0,     0,     0,
      39,    34,    72,    71,    83,     0,    66,    65,    80,    52,
      54,    53,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     0,    75,     0,     0,     0,     0,     0,    81,
       0,     0,     0,    70,    69,    74,    73,    41,    40,    35,
      38,    37,    62,    82,    84,     0,    36
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -58,   -58,   176,   -58,    78,    10,   -58,   393,   -58,    29,
     -58,   161,   115,    -2,   -21,   -58,   -25,   -58,   -57,   -55
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    14,    28,     7,    40,    16,    34,
      35,    65,    66,    67,    29,    30,    41,    42,    68,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    77,     8,    43,    39,    82,    83,    84,     9,    46,
       6,    18,   104,    27,    44,     6,    52,    72,     1,     2,
     107,   108,   109,    19,   114,    73,     1,     2,    33,    78,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    33,   105,    53,    31,   -42,
      45,    48,   143,     1,     2,    50,    20,   114,    74,   142,
      33,    27,    11,   -42,    51,    36,     1,     2,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,    12,    17,    32,    21,    75,
      49,   144,   118,   152,   114,   -42,   153,    69,   -42,   -42,
     110,    25,    87,    24,    21,    13,   -42,   -42,    38,    71,
      21,    37,    70,    22,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,    22,    22,    54,
     101,    23,   102,   111,    55,    56,    57,    58,    59,    60,
      61,    76,   147,   148,   149,   150,   151,   101,    79,   102,
      81,    62,     1,     2,    63,    64,   139,    85,   106,   133,
     154,   155,    25,   156,    58,    59,    60,    61,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,   140,    99,
     100,    63,    64,   116,   101,    87,   102,    26,   141,    99,
     100,    10,    86,     0,   101,     0,   102,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,     0,   117,   101,   135,   102,    87,    97,    98,    99,
     100,     0,     0,     0,   101,     0,   102,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,     0,     0,   136,   101,   137,   102,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     0,     0,   138,   101,   145,   102,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    87,     0,     0,   101,   146,   102,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    87,     0,
       0,   101,     0,   102,   103,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    87,     0,   134,   101,     0,   102,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   -43,     0,
       0,   101,     0,   102,     0,     0,     0,     0,     0,     0,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   112,     0,    54,   101,     0,   102,    15,
       0,     0,    54,    58,    59,    60,    61,     0,    15,     0,
      58,    59,    60,    61,     0,     0,    15,    62,     0,     0,
      63,    64,   113,   -43,    62,     0,    47,    63,    64,     0,
       0,    58,    59,    60,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,    63,    64,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     0,     0,     0,   101,     0,   102,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       0,     0,     0,   101,     0,   102,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,     0,   101,
       0,   102
};

static const yytype_int16 yycheck[] =
{
      57,     1,    14,    28,    25,    62,    63,    64,     0,    30,
       0,    29,    69,     1,     1,     5,     1,    42,     6,     7,
      77,    78,    79,     1,    81,     1,     6,     7,    18,    29,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    35,    71,    32,     1,    37,
      37,     1,     1,     6,     7,    35,    34,   114,    34,   114,
      50,     1,     1,     3,    35,    11,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    14,    36,    30,    14,    50,
      30,    30,   139,   140,   141,    25,   141,    15,    28,    29,
       1,    36,     3,    15,    14,    34,    36,    37,     1,    35,
      14,    23,    34,    31,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    31,    31,     3,
      31,    35,    33,    34,     8,     9,    10,    11,    12,    13,
      14,     1,   134,   135,   136,   137,   138,    31,    29,    33,
      29,    25,     6,     7,    28,    29,     3,    37,     1,    14,
       1,     5,    36,   155,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     1,    31,     3,    33,    16,    35,    26,
      27,     5,    67,    -1,    31,    -1,    33,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    30,    31,     1,    33,     3,    24,    25,    26,
      27,    -1,    -1,    -1,    31,    -1,    33,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,    31,     1,    33,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    30,    31,     1,    33,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     3,    -1,    -1,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     3,    -1,
      -1,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     3,    -1,    30,    31,    -1,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,     3,    -1,
      -1,    31,    -1,    33,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     1,    -1,     3,    31,    -1,    33,     6,
      -1,    -1,     3,    11,    12,    13,    14,    -1,    15,    -1,
      11,    12,    13,    14,    -1,    -1,    23,    25,    -1,    -1,
      28,    29,    30,     3,    25,    -1,    33,    28,    29,    -1,
      -1,    11,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    29,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    -1,    33,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    -1,    33,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      -1,    33
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    39,    40,    41,    43,    44,    14,     0,
      40,     1,    14,    34,    42,    45,    46,    36,    29,     1,
      34,    14,    31,    35,    42,    36,    49,     1,    43,    52,
      53,     1,    30,    43,    47,    48,    11,    42,     1,    52,
      45,    54,    55,    54,     1,    37,    52,    45,     1,    30,
      35,    47,     1,    32,     3,     8,     9,    10,    11,    12,
      13,    14,    25,    28,    29,    49,    50,    51,    56,    15,
      34,    35,    54,     1,    34,    47,     1,     1,    29,    29,
      56,    29,    56,    56,    56,    37,    50,     3,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    31,    33,    34,    56,    54,     1,    56,    56,    56,
       1,    34,     1,    30,    56,    57,     1,    30,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    14,    30,     1,    30,     1,    30,     3,
      25,    35,    57,     1,    30,     1,    32,    51,    51,    51,
      51,    51,    56,    57,     1,     5,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    39,    40,    40,    41,    41,    41,    41,    41,
      42,    42,    42,    43,    43,    44,    44,    44,    45,    45,
      45,    46,    46,    46,    46,    47,    47,    47,    48,    49,
      50,    50,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    52,    52,    53,    53,    53,    54,    54,    54,
      55,    55,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    57,    57,    57
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     3,     2,     3,     3,     2,
       1,     3,     3,     1,     1,     5,     2,     5,     1,     4,
       4,     4,     3,     4,     3,     3,     3,     1,     2,     4,
       0,     2,     2,     1,     3,     5,     7,     5,     5,     3,
       5,     5,     0,     2,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     4,
       4,     3,     3,     4,     4,     3,     1,     1,     1,     1,
       3,     1,     3,     1,     3
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
#line 45 "src/syntax.y" /* yacc.c:1646  */
    {head=new_tnode("Program",1,(yyvsp[0].nd)); (yyval.nd)=head;}
#line 1424 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 49 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ExtDef",0,-1);}
#line 1430 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 50 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ExtDefList",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1436 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ExtDef",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1442 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 55 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ExtDef",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1448 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 56 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ExtDef",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1454 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 57 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing Semi"); }
#line 1460 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 58 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing Semi"); }
#line 1466 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 62 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ExtDecList",1,(yyvsp[0].nd));}
#line 1472 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 63 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ExtDecList",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1478 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 64 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing Comma"); }
#line 1484 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 70 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Specifier",1,(yyvsp[0].nd));}
#line 1490 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 71 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Specifier",1,(yyvsp[0].nd));}
#line 1496 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 74 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("StructSpecifier",5,(yyvsp[-4].nd),(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1502 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 75 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("StructSpecifier",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1508 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 76 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing RC"); }
#line 1514 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 81 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("VarDec",1,(yyvsp[0].nd));}
#line 1520 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 82 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("VarDec",4,(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1526 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 83 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing RB"); }
#line 1532 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 86 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("FunDec",4,(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1538 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 87 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("FunDec",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1544 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 88 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing RP"); }
#line 1550 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 89 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing RP"); }
#line 1556 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 92 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("VarList",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1562 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 93 "src/syntax.y" /* yacc.c:1646  */
    { myerror(1, yylineno, "Missing Comma"); }
#line 1568 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 94 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("VarList",1,(yyvsp[0].nd));}
#line 1574 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 97 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("ParamDec",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1580 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 102 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("CompSt",4,(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1586 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 105 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("StmtList",0,-1);}
#line 1592 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 106 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("StmtList",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1598 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 109 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Stmt",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1604 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 110 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Stmt",1,(yyvsp[0].nd));}
#line 1610 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 111 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Stmt",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1616 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 112 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Stmt",5,(yyvsp[-4].nd),(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1622 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 113 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Stmt",7,(yyvsp[-6].nd),(yyvsp[-5].nd),(yyvsp[-4].nd),(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1628 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 114 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Stmt",5,(yyvsp[-4].nd),(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1634 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 115 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing RP");}
#line 1640 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 116 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing SEMI");}
#line 1646 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 117 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing RP");}
#line 1652 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 118 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing LP");}
#line 1658 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 123 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("DefList",0,-1);}
#line 1664 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 124 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("DefList",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1670 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 127 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Def",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1676 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 128 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing SEMI");}
#line 1682 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 129 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing Specifier");}
#line 1688 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 132 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("DecList",1,(yyvsp[0].nd));}
#line 1694 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 133 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("DecList",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1700 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 134 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing Comma");}
#line 1706 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 137 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Dec",1,(yyvsp[0].nd));}
#line 1712 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 138 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Dec",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1718 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 144 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1724 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 145 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1730 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 146 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1736 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 147 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1742 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 148 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1748 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 149 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1754 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 150 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1760 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 151 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1766 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 152 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1772 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 153 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1778 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 154 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1784 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 155 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1790 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 156 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1796 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 157 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1802 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 158 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing RP");}
#line 1808 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 159 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1814 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 160 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",2,(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1820 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 161 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",4,(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1826 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 162 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing RP");}
#line 1832 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 163 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1838 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 164 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing RP");}
#line 1844 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 165 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",4,(yyvsp[-3].nd),(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1850 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 166 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing RB");}
#line 1856 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 167 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1862 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 168 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",1,(yyvsp[0].nd));}
#line 1868 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 169 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",1,(yyvsp[0].nd));}
#line 1874 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 170 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",1,(yyvsp[0].nd));}
#line 1880 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 171 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",1,(yyvsp[0].nd));}
#line 1886 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 172 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",2,(yyvsp[-2].nd),(yyvsp[-1].nd));}
#line 1892 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 173 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Exp",1,(yyvsp[0].nd));}
#line 1898 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 176 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Args",3,(yyvsp[-2].nd),(yyvsp[-1].nd),(yyvsp[0].nd));}
#line 1904 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 177 "src/syntax.y" /* yacc.c:1646  */
    {(yyval.nd)=new_tnode("Args",1,(yyvsp[0].nd));}
#line 1910 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 178 "src/syntax.y" /* yacc.c:1646  */
    {myerror(1,yylineno,"Missing Comma");}
#line 1916 "syntax.tab.c" /* yacc.c:1646  */
    break;


#line 1920 "syntax.tab.c" /* yacc.c:1646  */
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
#line 181 "src/syntax.y" /* yacc.c:1906  */


void yyerror(const char *s){
    printf("%s\n",s);
}

void myerror(int type, int line, const char *msg){
    error_occur = 1;
    FILE *fp = fopen(ofname, "a+");
    if (type == 0) {
        fprintf(fp, "Error type A at Line %d: %s\n", line, msg);
    }
    if (type == 1) {
        fprintf(fp, "Error type B at Line %d: %s\n", line, msg);
    }
    fclose(fp);
}

/* @TODO: print the parse tree */


int main(int argc, char **argv)
{
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        exit(-1);
    }
    else if(!(yyin = fopen(argv[1], "r"))) {
        perror(argv[1]);
        exit(-1);
    }

    /* get the output-file name */
    strcpy(ofname, argv[1]);
    char *dot = strrchr(ofname, '.');
    strcpy(dot, ".out");
    FILE *fp = fopen(ofname, "w");
    fclose(fp);

    yyparse();

    if(!error_occur){
        print_parsetree(head,0);
    }
    return 0;
}
