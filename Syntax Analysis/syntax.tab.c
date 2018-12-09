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
#line 2 "syntax.y" /* yacc.c:339  */

    #include "C++600_headers.h"
    #include "hashtbl.h"
    extern int yylex();
    extern int yyparse();
    extern FILE* yyin;

    /* Hashtable components */
    int scope = 0;
    HASHTBL *hashtbl;

#line 78 "syntax.tab.c" /* yacc.c:339  */

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
    T_ICONST = 258,
    T_FCONST = 259,
    T_CCONST = 260,
    T_SCONST = 261,
    T_EOF = 262,
    T_TYPEDEF = 263,
    T_CHAR = 264,
    T_INT = 265,
    T_FLOAT = 266,
    T_STRING = 267,
    T_CLASS = 268,
    T_PRIVATE = 269,
    T_PROTECTED = 270,
    T_PUBLIC = 271,
    T_VOID = 272,
    T_STATIC = 273,
    T_UNION = 274,
    T_ENUM = 275,
    T_LIST = 276,
    T_CONTINUE = 277,
    T_BREAK = 278,
    T_IF = 279,
    T_ELSE = 280,
    T_WHILE = 281,
    T_FOR = 282,
    T_SWITCH = 283,
    T_CASE = 284,
    T_DEFAULT = 285,
    T_RETURN = 286,
    T_LENGTH = 287,
    T_NEW = 288,
    T_CIN = 289,
    T_COUT = 290,
    T_MAIN = 291,
    T_THIS = 292,
    T_OROP = 293,
    T_ANDOP = 294,
    T_EQUOP = 295,
    T_RELOP = 296,
    T_ADDOP = 297,
    T_MULOP = 298,
    T_NOTOP = 299,
    T_INCDEC = 300,
    T_SIZEOP = 301,
    T_LPAREN = 302,
    T_RPAREN = 303,
    T_SEMI = 304,
    T_DOT = 305,
    T_COMMA = 306,
    T_ASSIGN = 307,
    T_COLON = 308,
    T_LBRACK = 309,
    T_RBRACK = 310,
    T_REFER = 311,
    T_LBRACE = 312,
    T_RBRACE = 313,
    T_METH = 314,
    T_INP = 315,
    T_OUT = 316,
    T_ID = 317,
    T_LISTFUNC = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "syntax.y" /* yacc.c:355  */

    int ival;
    double dval;
    char* strval;

#line 188 "syntax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "syntax.tab.c" /* yacc.c:358  */

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   698

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  177
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  346

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    60,    61,    63,    64,    65,    66,    67,
      68,    70,    70,    73,    74,    76,    77,    78,    79,    80,
      82,    83,    85,    86,    88,    89,    91,    93,    95,    96,
      98,    99,   101,   102,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   124,   125,   126,   127,   128,   130,   131,
     133,   134,   136,   137,   139,   140,   141,   142,   144,   146,
     147,   149,   151,   153,   154,   156,   157,   159,   160,   161,
     162,   164,   165,   167,   168,   170,   172,   173,   175,   177,
     179,   181,   182,   184,   186,   188,   189,   191,   193,   195,
     196,   198,   199,   201,   203,   205,   207,   208,   210,   212,
     213,   215,   216,   217,   219,   220,   222,   224,   226,   227,
     229,   230,   232,   234,   235,   236,   237,   239,   240,   242,
     243,   245,   246,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   260,   262,   264,   265,   267,   269,
     271,   272,   274,   276,   277,   279,   280,   281,   282,   284,
     285,   287,   288,   289,   291,   292,   294,   296,   297,   299,
     300,   302,   304,   305,   307,   309,   311,   313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_ICONST", "T_FCONST", "T_CCONST",
  "T_SCONST", "T_EOF", "T_TYPEDEF", "T_CHAR", "T_INT", "T_FLOAT",
  "T_STRING", "T_CLASS", "T_PRIVATE", "T_PROTECTED", "T_PUBLIC", "T_VOID",
  "T_STATIC", "T_UNION", "T_ENUM", "T_LIST", "T_CONTINUE", "T_BREAK",
  "T_IF", "T_ELSE", "T_WHILE", "T_FOR", "T_SWITCH", "T_CASE", "T_DEFAULT",
  "T_RETURN", "T_LENGTH", "T_NEW", "T_CIN", "T_COUT", "T_MAIN", "T_THIS",
  "T_OROP", "T_ANDOP", "T_EQUOP", "T_RELOP", "T_ADDOP", "T_MULOP",
  "T_NOTOP", "T_INCDEC", "T_SIZEOP", "T_LPAREN", "T_RPAREN", "T_SEMI",
  "T_DOT", "T_COMMA", "T_ASSIGN", "T_COLON", "T_LBRACK", "T_RBRACK",
  "T_REFER", "T_LBRACE", "T_RBRACE", "T_METH", "T_INP", "T_OUT", "T_ID",
  "T_LISTFUNC", "$accept", "program", "global_declarations",
  "global_declaration", "typedef_declaration", "$@1", "typename",
  "standard_type", "listspec", "dims", "dim", "enum_declaration",
  "enum_body", "id_list", "initializer", "init_value", "expression",
  "variable", "general_expression", "assignment", "expression_list",
  "constant", "listexpression", "init_values", "class_declaration",
  "class_body", "parent", "members_methods", "access", "member_or_method",
  "member", "var_declaration", "variabledefs", "variabledef",
  "anonymous_union", "union_body", "fields", "field", "method",
  "short_func_declaration", "short_par_func_header", "func_header_start",
  "parameter_types", "pass_list_dims", "nopar_func_header",
  "union_declaration", "global_var_declaration", "init_variabledefs",
  "init_variabledef", "func_declaration", "full_func_declaration",
  "full_par_func_header", "class_func_header_start", "func_class",
  "parameter_list", "pass_variabledef", "nopar_class_func_header",
  "decl_statements", "declarations", "decltype", "statements", "statement",
  "expression_statement", "if_statement", "if_tail", "while_statement",
  "for_statement", "optexpr", "switch_statement", "switch_tail",
  "decl_cases", "casestatements", "casestatement", "single_casestatement",
  "return_statement", "io_statement", "in_list", "in_item", "out_list",
  "out_item", "comp_statement", "main_function", "main_header", YY_NULLPTR
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
     315,   316,   317,   318
};
# endif

#define YYPACT_NINF -287

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-287)))

#define YYTABLE_NINF -159

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -287,    57,   258,  -287,   241,  -287,  -287,  -287,  -287,   -22,
    -287,     4,    36,    46,  -287,  -287,  -287,    87,  -287,  -287,
    -287,  -287,   152,   144,    64,  -287,  -287,  -287,  -287,   147,
     161,   165,  -287,   186,    87,   156,   191,   198,   170,  -287,
     235,   166,   -32,  -287,  -287,    16,  -287,   337,   337,   131,
     337,   337,   245,   259,   281,   276,   241,   288,   300,   295,
     318,    20,   305,    26,  -287,  -287,    87,  -287,    18,    81,
     190,  -287,  -287,  -287,  -287,  -287,   336,   343,   346,   356,
     357,   358,   560,   362,   366,   354,   359,  -287,   635,   635,
     143,   635,   153,  -287,   580,   337,   375,   252,   142,    69,
    -287,  -287,  -287,   339,   384,   272,   431,  -287,  -287,  -287,
    -287,  -287,  -287,  -287,  -287,  -287,   365,  -287,    21,   212,
     367,   369,  -287,  -287,  -287,   130,    87,  -287,   214,  -287,
    -287,   166,   109,  -287,  -287,  -287,   370,  -287,    26,  -287,
     252,   127,   377,   378,  -287,   381,   378,  -287,  -287,  -287,
    -287,   241,  -287,   241,  -287,  -287,   635,   635,   560,   635,
     393,   383,   635,   635,   143,   635,   402,  -287,   128,  -287,
     398,   213,   393,   395,   390,   635,   635,   635,   635,   635,
     635,   635,  -287,   580,   389,   635,   635,  -287,   635,  -287,
     272,   431,     3,    87,  -287,  -287,   381,  -287,  -287,  -287,
    -287,   399,   403,   407,   221,    90,   205,  -287,  -287,  -287,
    -287,   405,  -287,    35,  -287,  -287,   115,  -287,  -287,  -287,
     370,    40,    21,   248,   274,   412,   287,  -287,   325,   327,
     128,    56,  -287,   393,     1,  -287,  -287,  -287,  -287,  -287,
     329,   307,   187,   315,   112,   402,  -287,   421,  -287,  -287,
     160,  -287,    87,   347,    65,  -287,  -287,  -287,  -287,    90,
     191,    87,  -287,  -287,  -287,  -287,  -287,  -287,   423,   422,
    -287,    87,   166,   417,  -287,    26,  -287,  -287,  -287,  -287,
    -287,   525,   525,   560,    24,  -287,  -287,  -287,   143,  -287,
     635,  -287,  -287,  -287,   350,  -287,  -287,  -287,   425,   424,
      16,  -287,  -287,  -287,  -287,   454,  -287,   438,   348,   184,
    -287,  -287,  -287,  -287,  -287,  -287,   442,    40,   525,  -287,
     615,   437,   348,   439,   244,   241,   433,   139,  -287,  -287,
     447,   478,   444,   525,   241,   139,  -287,  -287,   525,  -287,
    -287,   282,   431,  -287,   431,  -287
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,     0,    15,    16,    17,    18,     0,
      19,     0,     0,     0,    14,     3,     5,    21,    13,     6,
       7,   109,     0,     0,     0,     8,     9,    10,   110,     0,
       0,     0,     2,     0,    21,    74,     0,     0,     0,    20,
       0,    31,     0,   107,    95,     0,    96,   130,   130,     0,
     130,   130,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,     0,   130,   108,   105,    21,   103,    21,     0,
       0,    65,    66,    64,    67,   129,     0,     0,     0,     0,
       0,     0,   130,     0,     0,     0,     0,    57,   130,   130,
     130,   130,   130,   143,    63,   130,     0,    61,    45,     0,
      59,    49,    52,     0,   130,     0,   125,   132,   133,   134,
     135,   136,   137,   138,   139,   140,     0,   122,    21,     0,
       0,     0,    11,    73,    71,    80,    21,    93,     0,    92,
     104,    31,     0,    26,   177,   117,    88,   116,   130,    30,
      32,    45,     0,     0,   106,   101,    23,   120,   100,   119,
      97,     0,   115,     0,   141,   142,   130,   130,   130,   130,
     150,     0,   130,   130,   130,   130,    41,    40,    43,    42,
       0,     0,    62,     0,     0,   130,   130,   130,   130,   130,
     130,   130,    44,    63,     0,   130,   130,   144,   130,   113,
       0,   123,    56,    21,   131,   111,     0,   114,   112,   176,
      23,     0,     0,     0,    80,     0,     0,    87,    90,    91,
      29,     0,    27,     0,    22,    70,     0,    56,    23,   121,
     102,    21,    21,     0,     0,     0,     0,   166,     0,     0,
     171,     0,   170,   174,     0,   173,    51,    50,    68,   175,
       0,    34,    35,    36,    37,    38,    39,     0,    54,    60,
       0,    58,    21,     0,     0,    77,    78,    79,    72,     0,
       0,    21,    76,    81,    83,    84,    82,    94,     0,     0,
      85,    21,    31,     0,    25,   130,    33,   101,    23,    99,
     118,   130,   130,   130,     0,    47,    48,   167,   130,   168,
     130,    55,    46,    53,     0,   128,    12,    75,     0,     0,
       0,    86,    28,    24,    69,   147,   148,     0,     0,   130,
     152,   154,   169,   172,   127,    89,    23,    21,   130,   145,
     130,     0,     0,     0,   130,     0,     0,   157,   160,   146,
       0,   130,     0,   130,     0,   155,   153,   159,   130,   165,
     164,   130,   163,   149,   162,   161
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -287,  -287,  -287,  -287,  -287,  -287,    -2,   406,   -16,  -131,
    -287,  -287,  -287,  -287,  -119,  -125,   -43,   -54,   -71,   314,
     320,  -211,  -287,  -287,  -287,  -287,  -287,  -287,   304,   255,
    -287,  -183,  -177,   -12,  -287,   256,  -287,   391,  -287,   515,
    -287,   516,  -287,   312,   519,  -287,  -287,  -287,   460,  -287,
    -287,  -287,  -287,  -287,   485,   316,  -287,    80,   227,   -44,
     -94,   -98,  -287,  -287,  -287,  -287,  -287,  -144,  -287,  -287,
    -287,   215,  -286,   206,  -287,  -287,  -287,   254,  -287,   250,
    -287,  -287,  -287
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    15,    16,   200,   126,    18,   143,   136,
     214,    19,    59,   132,    64,   139,    97,    98,    99,   100,
     173,   101,   102,   216,    20,    54,    55,   204,   205,   262,
     263,   127,   206,   207,   265,    57,   128,   129,   266,   267,
      22,   268,    69,   148,   269,    25,    26,    42,    43,    27,
      28,    29,    30,    62,    70,   149,    31,   103,   104,   142,
     106,   107,   108,   109,   319,   110,   111,   161,   112,   310,
     326,   327,   328,   311,   113,   114,   231,   232,   234,   235,
     115,    32,    33
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    40,    34,   105,   105,    41,   105,   105,   194,   141,
     191,   160,   210,   215,   225,   220,   253,    65,    52,    66,
     140,   171,   264,   172,   -14,     5,     6,     7,     8,    71,
      72,    73,    74,    10,   141,   141,   168,   141,   273,    39,
      35,   337,    39,    68,    75,   166,   167,   118,   169,   337,
     289,   105,   146,   308,    41,   345,   147,     3,    83,    84,
     190,    39,   290,    87,    67,   -14,    36,   -98,    88,   254,
      89,    90,    91,    92,   145,   294,   264,   196,    14,   135,
      94,   309,    38,   138,   141,   223,   224,   160,   226,    96,
     274,   228,   229,   194,   233,   140,   277,   321,    37,     5,
       6,     7,     8,   193,   240,   287,   147,    10,    39,   260,
     230,   332,   172,    46,   296,   250,   288,   251,   187,   213,
     188,    47,   141,   141,   141,   141,   141,   141,   116,   150,
     120,   121,   151,   241,   242,   243,   244,   245,   246,   307,
       5,     6,     7,     8,   201,   202,   203,   220,    10,   221,
     304,   222,    14,   302,   180,   181,    71,    72,    73,    74,
     211,    75,     5,     6,     7,     8,   275,   212,   322,   323,
      10,    75,   182,   276,   183,   174,   330,   184,   184,   117,
      87,   186,   186,   305,   306,    83,    84,   182,   252,   183,
      87,    45,   184,    14,   185,    88,   186,    89,    90,    91,
      92,    44,    75,   261,    48,   278,    96,    94,    49,    53,
     147,   188,   160,   322,   323,   293,    96,    60,    63,   233,
     329,   141,    50,     5,     6,     7,     8,   178,   179,   180,
     181,    10,   140,   339,   230,   201,   202,   203,   152,   342,
     343,   153,  -158,    51,   194,   299,   194,   344,    56,   160,
       5,     6,     7,     8,   270,    58,   271,   261,    10,   301,
     197,   237,    75,   153,   188,   325,     4,     5,     6,     7,
       8,     9,   208,   322,   323,    10,    14,    11,    12,   258,
     334,     5,     6,     7,     8,    71,    72,    73,    74,    10,
     176,   177,   178,   179,   180,   181,   281,    61,   317,   188,
      75,   278,  -156,    14,    76,    77,    78,   122,    79,    80,
      81,   322,   323,    82,    83,    84,    85,    86,    13,    87,
      14,   123,   282,   193,    88,   188,    89,    90,    91,    92,
     124,    93,   252,   125,   192,   284,    94,   130,   188,    95,
      71,    72,    73,    74,   133,    96,   177,   178,   179,   180,
     181,    71,    72,    73,    74,    75,   179,   180,   181,    76,
      77,    78,   131,    79,    80,    81,   134,   137,    82,    83,
      84,    85,    86,   285,    87,   286,   188,   291,   188,    88,
     188,    89,    90,    91,    92,   154,    93,    71,    72,    73,
      74,    94,   155,   156,    95,  -126,   295,   189,   271,   314,
      96,   271,    75,   157,   158,   159,    76,    77,    78,   162,
      79,    80,    81,   163,   164,    82,    83,    84,    85,    86,
     165,    87,   175,   195,   213,   198,    88,   199,    89,    90,
      91,    92,   227,    93,    71,    72,    73,    74,    94,   217,
     218,    95,  -124,   219,   188,   181,   236,    96,   239,    75,
     238,   248,   255,    76,    77,    78,   256,    79,    80,    81,
     257,   283,    82,    83,    84,    85,    86,   272,    87,   292,
     300,    46,   303,    88,   315,    89,    90,    91,    92,   318,
      93,    71,    72,    73,    74,    94,   316,   320,    95,   -98,
     331,   336,   333,  -130,    96,   338,    75,   341,   170,   249,
      76,    77,    78,   247,    79,    80,    81,   308,   259,    82,
      83,    84,    85,    86,   297,    87,   298,    21,    23,   209,
      88,    24,    89,    90,    91,    92,   144,    93,    71,    72,
      73,    74,    94,   279,   119,    95,   324,   340,   280,   335,
     313,    96,   312,    75,     0,     0,     0,    76,    77,    78,
       0,    79,    80,    81,     0,     0,    82,    83,    84,    85,
      86,     0,    87,    71,    72,    73,    74,    88,     0,    89,
      90,    91,    92,     0,    93,     0,     0,     0,    75,    94,
       0,     0,    95,    71,    72,    73,    74,     0,    96,     0,
       0,     0,    83,    84,     0,     0,     0,    87,    75,     0,
       0,     0,    88,     0,    89,    90,    91,    92,     0,  -151,
       0,     0,    83,    84,    94,     0,     0,    87,    71,    72,
      73,    74,    88,    96,    89,    90,    91,    92,     0,     0,
       0,     0,     0,    75,    94,     0,     0,     0,    71,    72,
      73,    74,  -130,    96,     0,     0,     0,    83,    84,     0,
       0,     0,    87,    75,     0,     0,     0,    88,     0,    89,
      90,    91,    92,  -151,     0,     0,     0,    83,    84,    94,
       0,     0,    87,     0,     0,     0,     0,    88,    96,    89,
      90,    91,    92,     0,     0,     0,     0,     0,     0,    94,
       0,     0,     0,     0,     0,     0,     0,     0,    96
};

static const yytype_int16 yycheck[] =
{
       2,    17,     4,    47,    48,    17,    50,    51,   106,    63,
     104,    82,   131,   138,   158,   146,   193,    49,    34,    51,
      63,    92,   205,    94,    21,     9,    10,    11,    12,     3,
       4,     5,     6,    17,    88,    89,    90,    91,     3,    21,
      62,   327,    21,    45,    18,    88,    89,    49,    91,   335,
      49,    95,    68,    29,    66,   341,    68,     0,    32,    33,
     104,    21,    61,    37,    48,    62,    62,    47,    42,   200,
      44,    45,    46,    47,    56,   252,   259,    56,    62,    59,
      54,    57,    36,    57,   138,   156,   157,   158,   159,    63,
      55,   162,   163,   191,   165,   138,    56,   308,    62,     9,
      10,    11,    12,   105,   175,    49,   118,    17,    21,    19,
     164,   322,   183,    49,    49,   186,    60,   188,    49,    54,
      51,    57,   176,   177,   178,   179,   180,   181,    48,    48,
      50,    51,    51,   176,   177,   178,   179,   180,   181,   283,
       9,    10,    11,    12,    14,    15,    16,   278,    17,   151,
     275,   153,    62,   272,    42,    43,     3,     4,     5,     6,
      51,    18,     9,    10,    11,    12,    51,    58,    29,    30,
      17,    18,    45,    58,    47,    95,   320,    50,    50,    48,
      37,    54,    54,   281,   282,    32,    33,    45,   190,    47,
      37,    47,    50,    62,    52,    42,    54,    44,    45,    46,
      47,    49,    18,   205,    57,   221,    63,    54,    47,    53,
     222,    51,   283,    29,    30,    55,    63,    47,    52,   290,
     318,   275,    57,     9,    10,    11,    12,    40,    41,    42,
      43,    17,   275,   331,   288,    14,    15,    16,    48,   333,
     338,    51,    58,    57,   342,   261,   344,   341,    57,   320,
       9,    10,    11,    12,    49,    57,    51,   259,    17,   271,
      48,    48,    18,    51,    51,   309,     8,     9,    10,    11,
      12,    13,    58,    29,    30,    17,    62,    19,    20,    58,
     324,     9,    10,    11,    12,     3,     4,     5,     6,    17,
      38,    39,    40,    41,    42,    43,    48,    62,   300,    51,
      18,   317,    58,    62,    22,    23,    24,    62,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    60,    37,
      62,    62,    48,   325,    42,    51,    44,    45,    46,    47,
      49,    49,   334,    57,    62,    48,    54,    49,    51,    57,
       3,     4,     5,     6,    49,    63,    39,    40,    41,    42,
      43,     3,     4,     5,     6,    18,    41,    42,    43,    22,
      23,    24,    62,    26,    27,    28,    48,    62,    31,    32,
      33,    34,    35,    48,    37,    48,    51,    48,    51,    42,
      51,    44,    45,    46,    47,    49,    49,     3,     4,     5,
       6,    54,    49,    47,    57,    58,    49,    58,    51,    49,
      63,    51,    18,    47,    47,    47,    22,    23,    24,    47,
      26,    27,    28,    47,    60,    31,    32,    33,    34,    35,
      61,    37,    47,    58,    54,    58,    42,    58,    44,    45,
      46,    47,    49,    49,     3,     4,     5,     6,    54,    62,
      62,    57,    58,    62,    51,    43,    48,    63,    58,    18,
      55,    62,    53,    22,    23,    24,    53,    26,    27,    28,
      53,    49,    31,    32,    33,    34,    35,    62,    37,    48,
      47,    49,    55,    42,    49,    44,    45,    46,    47,    25,
      49,     3,     4,     5,     6,    54,    62,    49,    57,    47,
      53,    58,    53,    62,    63,    48,    18,    53,    92,   185,
      22,    23,    24,   183,    26,    27,    28,    29,   204,    31,
      32,    33,    34,    35,   259,    37,   260,     2,     2,   128,
      42,     2,    44,    45,    46,    47,    66,    49,     3,     4,
       5,     6,    54,   221,    49,    57,   309,   331,   222,   324,
     290,    63,   288,    18,    -1,    -1,    -1,    22,    23,    24,
      -1,    26,    27,    28,    -1,    -1,    31,    32,    33,    34,
      35,    -1,    37,     3,     4,     5,     6,    42,    -1,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    18,    54,
      -1,    -1,    57,     3,     4,     5,     6,    -1,    63,    -1,
      -1,    -1,    32,    33,    -1,    -1,    -1,    37,    18,    -1,
      -1,    -1,    42,    -1,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    32,    33,    54,    -1,    -1,    37,     3,     4,
       5,     6,    42,    63,    44,    45,    46,    47,    -1,    -1,
      -1,    -1,    -1,    18,    54,    -1,    -1,    -1,     3,     4,
       5,     6,    62,    63,    -1,    -1,    -1,    32,    33,    -1,
      -1,    -1,    37,    18,    -1,    -1,    -1,    42,    -1,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    32,    33,    54,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    63,    44,
      45,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    65,    66,     0,     8,     9,    10,    11,    12,    13,
      17,    19,    20,    60,    62,    67,    68,    70,    71,    75,
      88,   103,   104,   105,   108,   109,   110,   113,   114,   115,
     116,   120,   145,   146,    70,    62,    62,    62,    36,    21,
      72,    97,   111,   112,    49,    47,    49,    57,    57,    47,
      57,    57,    72,    53,    89,    90,    57,    99,    57,    76,
      47,    62,   117,    52,    78,    49,    51,    48,    70,   106,
     118,     3,     4,     5,     6,    18,    22,    23,    24,    26,
      27,    28,    31,    32,    33,    34,    35,    37,    42,    44,
      45,    46,    47,    49,    54,    57,    63,    80,    81,    82,
      83,    85,    86,   121,   122,   123,   124,   125,   126,   127,
     129,   130,   132,   138,   139,   144,   121,    48,    70,   118,
     121,   121,    62,    62,    49,    57,    70,    95,   100,   101,
      49,    62,    77,    49,    48,    59,    73,    62,    57,    79,
      80,    81,   123,    72,   112,    56,    72,    97,   107,   119,
      48,    51,    48,    51,    49,    49,    47,    47,    47,    47,
      82,   131,    47,    47,    60,    61,    80,    80,    81,    80,
      71,    82,    82,    84,   121,    47,    38,    39,    40,    41,
      42,    43,    45,    47,    50,    52,    54,    49,    51,    58,
     123,   124,    62,    70,   125,    58,    56,    48,    58,    58,
      69,    14,    15,    16,    91,    92,    96,    97,    58,   101,
      78,    51,    58,    54,    74,    79,    87,    62,    62,    62,
      73,    70,    70,    82,    82,   131,    82,    49,    82,    82,
      81,   140,   141,    82,   142,   143,    48,    48,    55,    58,
      82,    80,    80,    80,    80,    80,    80,    84,    62,    83,
      82,    82,    70,    96,    73,    53,    53,    53,    58,    92,
      19,    70,    93,    94,    95,    98,   102,   103,   105,   108,
      49,    51,    62,     3,    55,    51,    58,    56,    72,   107,
     119,    48,    48,    49,    48,    48,    48,    49,    60,    49,
      61,    48,    48,    55,    96,    49,    49,    93,    99,    72,
      47,    97,    78,    55,    79,   125,   125,   131,    29,    57,
     133,   137,   141,   143,    49,    49,    62,    70,    25,   128,
      49,    85,    29,    30,   122,   123,   134,   135,   136,   125,
     131,    53,    85,    53,   123,   135,    58,   136,    48,   125,
     137,    53,   124,   125,   124,   136
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    66,    66,    67,    67,    67,    67,    67,
      67,    69,    68,    70,    70,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    74,    75,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    81,    81,    82,    82,
      83,    83,    84,    84,    85,    85,    85,    85,    86,    87,
      87,    88,    89,    90,    90,    91,    91,    92,    92,    92,
      92,    93,    93,    94,    94,    95,    96,    96,    97,    98,
      99,   100,   100,   101,   102,   103,   103,   104,   105,   106,
     106,   107,   107,   108,   109,   110,   111,   111,   112,   113,
     113,   114,   114,   114,   115,   115,   116,   117,   118,   118,
     119,   119,   120,   121,   121,   121,   121,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   126,   127,   128,   128,   129,   130,
     131,   131,   132,   133,   133,   134,   134,   134,   134,   135,
     135,   136,   136,   136,   137,   137,   138,   139,   139,   140,
     140,   141,   142,   142,   143,   144,   145,   146
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     3,     2,     4,     3,     4,     2,
       2,     0,     1,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     1,     4,     4,     4,     1,
       3,     3,     1,     4,     3,     4,     2,     1,     3,     1,
       3,     1,     1,     0,     1,     1,     1,     1,     3,     3,
       1,     4,     4,     2,     0,     3,     2,     2,     2,     2,
       0,     1,     1,     1,     1,     3,     3,     1,     3,     3,
       3,     2,     1,     1,     1,     2,     2,     4,     3,     4,
       2,     1,     2,     3,     4,     3,     3,     1,     2,     1,
       1,     4,     4,     4,     4,     4,     4,     2,     4,     2,
       1,     2,     3,     2,     1,     1,     0,     5,     4,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     6,     2,     0,     5,     9,
       1,     0,     5,     3,     1,     2,     1,     1,     0,     2,
       1,     4,     4,     3,     4,     4,     3,     4,     4,     3,
       1,     1,     3,     1,     1,     3,     4,     4
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
        case 4:
#line 61 "syntax.y" /* yacc.c:1646  */
    {}
#line 1618 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 70 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); scope++;}
#line 1624 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 71 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1630 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 83 "syntax.y" /* yacc.c:1646  */
    {}
#line 1636 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 86 "syntax.y" /* yacc.c:1646  */
    {}
#line 1642 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "syntax.y" /* yacc.c:1646  */
    {}
#line 1648 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 137 "syntax.y" /* yacc.c:1646  */
    {}
#line 1654 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 154 "syntax.y" /* yacc.c:1646  */
    {}
#line 1660 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 162 "syntax.y" /* yacc.c:1646  */
    {}
#line 1666 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 237 "syntax.y" /* yacc.c:1646  */
    {}
#line 1672 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 243 "syntax.y" /* yacc.c:1646  */
    {}
#line 1678 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 265 "syntax.y" /* yacc.c:1646  */
    {}
#line 1684 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 272 "syntax.y" /* yacc.c:1646  */
    {}
#line 1690 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 282 "syntax.y" /* yacc.c:1646  */
    {}
#line 1696 "syntax.tab.c" /* yacc.c:1646  */
    break;


#line 1700 "syntax.tab.c" /* yacc.c:1646  */
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
#line 316 "syntax.y" /* yacc.c:1906  */


/*-----     USER FUNCTIONS    -----*/

void yyerror (char *s, int error_distinction){
    errorcount++;
    if(error_distinction == 1){// an unrecognizable character.
		printf("Error in l.%d | Token #%d \033[1;31m %s: %s\n \033[0m \n", linecount, tokencount+errorcount, yytext, s);
    }else if(error_distinction == 0){// unacceptable characters in strings.
		*buffer_ptr = '\0';   // terminate the error causing string so you can print it.
        printf("Error in l.%d | Token #%d \033[1;31m \"%s\": %s\n \033[0m \n", linecount, tokencount+errorcount, buffer, s);
	}
    else{// premature end for comments; mainly for multiline comments;
        printf("Error in l.%d |\033[1;31m %s \033[0m \n", linecount, s);
    }
    /* if(MAX_ERRORS <= 0) return; */
    if(errorcount == 5){
        printf("Reached maximum number of errors! Exiting Analyzer\n");
        exit(-1); // terminate the whole analyzing process;
    }
}

int main(int argc, char *args[]){
  if(argc > 1){
      yyin = fopen(args[1], "r");
  }
  else{
      yyin = stdin;
  }

  /* while(yylex() != T_EOF){}
  printf("Read %d Lines\n", linecount);
  printf("Recognized %d Lectical Units\n", tokencount); */

  do {
      yyparse();
  } while(!feof(yyin));

  return 0;
  /* old part of yyerror  if(errorcount <= 5){
        em[errorcount-1].form = strdup(print_expr);
        em[errorcount-1].current_line = linecount;
        em[errorcount-1].message = strdup(s);
        em[errorcount-1].current_tokencount = tokencount+errorcount;
        em[errorcount-1].current_token = strdup(yytext);
        if(flag == 1)
          yyless(yyleng-1);
      }
      else if(errorcount > 5){
        printf("\n-----------------------------------------------\n");
        for(i = 0; i < errorcount; i++){
          printf(em[i].form, em[i].current_line, em[i].current_tokencount, em[i].message, em[i].current_token);
        }
        yyterminate();
      } */

}
