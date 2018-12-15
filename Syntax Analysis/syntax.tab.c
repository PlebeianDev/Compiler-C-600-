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

    //#include "C++600_headers.h"
    #include "hashtbl.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #define STR_BUF	256
    
    extern int yylex();
    extern char *yytext;
    extern FILE* yyin;

    extern int linecount, tokencount, errorcount;
    extern char buffer[STR_BUF], *buffer_ptr;

    /* Hashtable components */
    
    int scope = 0;
    int error_distinction = 0;
    HASHTBL *hashtbl;


#line 90 "syntax.tab.c" /* yacc.c:339  */

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
    T_LISTFUNC = 318,
    LOWER_THAN_ELSE = 319
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 29 "syntax.y" /* yacc.c:355  */
union YYSTYPE
{
#line 29 "syntax.y" /* yacc.c:355  */

    int ival;
    double dval;
    char* strval;

#line 201 "syntax.tab.c" /* yacc.c:355  */
};
#line 29 "syntax.y" /* yacc.c:355  */
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "syntax.tab.c" /* yacc.c:358  */

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
#define YYLAST   706

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  99
/* YYNRULES -- Number of rules.  */
#define YYNRULES  202
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  378

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    79,    80,    82,    83,    84,    85,    86,
      87,    89,    89,    92,    93,    95,    96,    97,    98,    99,
     101,   102,   104,   105,   107,   108,   110,   111,   110,   114,
     116,   117,   117,   120,   121,   123,   124,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   146,   147,   148,   149,
     150,   152,   153,   155,   156,   158,   159,   161,   162,   163,
     164,   166,   168,   169,   171,   171,   175,   177,   178,   180,
     181,   183,   184,   185,   186,   188,   189,   191,   192,   194,
     196,   197,   199,   201,   202,   201,   205,   207,   208,   210,
     212,   214,   215,   217,   219,   221,   222,   224,   225,   227,
     229,   229,   233,   235,   236,   238,   240,   241,   243,   244,
     245,   247,   248,   250,   252,   254,   255,   257,   258,   260,
     262,   263,   264,   265,   267,   268,   270,   271,   273,   274,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   288,   290,   291,   290,   294,   294,   296,   298,   298,
     301,   301,   304,   305,   307,   307,   310,   311,   312,   313,
     315,   316,   317,   318,   320,   321,   323,   324,   324,   326,
     326,   329,   330,   330,   333,   334,   336,   337,   338,   339,
     341,   342,   344,   346,   347,   349,   351,   353,   355,   356,
     358,   359,   360
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
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
  "T_LISTFUNC", "LOWER_THAN_ELSE", "$accept", "program",
  "global_declarations", "global_declaration", "typedef_declaration",
  "$@1", "typename", "standard_type", "listspec", "dims", "dim",
  "enum_declaration", "$@2", "$@3", "enum_body", "id_list", "$@4",
  "initializer", "init_value", "expression", "variable",
  "general_expression", "assignment", "expression_list", "constant",
  "listexpression", "init_values", "class_declaration", "$@5",
  "class_body", "parent", "members_methods", "access", "member_or_method",
  "member", "var_declaration", "variabledefs", "variabledef",
  "anonymous_union", "$@6", "$@7", "union_body", "fields", "field",
  "method", "short_func_declaration", "short_par_func_header",
  "func_header_start", "parameter_types", "pass_list_dims",
  "nopar_func_header", "union_declaration", "$@8",
  "global_var_declaration", "init_variabledefs", "init_variabledef",
  "func_declaration", "full_func_declaration", "full_par_func_header",
  "class_func_header_start", "func_class", "parameter_list",
  "pass_variabledef", "nopar_class_func_header", "decl_statements",
  "declarations", "decltype", "statements", "statement",
  "expression_statement", "if_statement", "$@9", "$@10", "if_tail", "$@11",
  "while_statement", "$@12", "for_statement", "$@13", "optexpr",
  "switch_statement", "$@14", "switch_tail", "decl_cases",
  "casestatements", "casestatement", "$@15", "$@16",
  "single_casestatement", "$@17", "return_statement", "io_statement",
  "in_list", "in_item", "out_list", "out_item", "comp_statement",
  "main_function", "main_header", YY_NULLPTR
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
     315,   316,   317,   318,   319
};
# endif

#define YYPACT_NINF -261

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-261)))

#define YYTABLE_NINF -174

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -261,    49,    16,  -261,   424,   329,  -261,  -261,  -261,  -261,
      -7,  -261,    39,    88,   377,    44,  -261,  -261,  -261,    65,
    -261,  -261,  -261,  -261,   125,   124,    53,  -261,  -261,  -261,
    -261,   185,   202,   205,  -261,   214,  -261,  -261,  -261,  -261,
    -261,   234,   239,   216,   232,   246,   255,   228,   256,   259,
     217,   250,  -261,   643,   643,   115,   643,   152,  -261,   228,
     424,   265,   625,   162,   174,  -261,  -261,  -261,   266,   330,
     426,   471,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,
    -261,    65,  -261,  -261,  -261,   331,    18,  -261,   280,   291,
     298,  -261,  -261,   118,  -261,   424,   424,   191,   424,   424,
    -261,  -261,  -261,  -261,  -261,  -261,   299,   293,    13,   643,
     643,   115,   643,   317,   198,  -261,   168,  -261,   311,    56,
     299,   315,   308,   643,   643,   643,   643,   643,   643,   643,
    -261,   228,   323,   643,   643,  -261,   643,  -261,   426,   471,
      50,    65,  -261,   324,   336,   340,   349,  -261,   325,    19,
     100,   351,   553,  -261,  -261,    65,  -261,     0,   144,   169,
     344,   357,  -261,     2,   190,   358,   359,   643,   643,   588,
     643,  -261,  -261,  -261,   199,   206,   168,    17,  -261,   299,
       8,  -261,  -261,  -261,  -261,  -261,   208,   287,   226,   254,
     194,   317,  -261,   350,  -261,  -261,   122,  -261,    65,   356,
     320,  -261,  -261,   363,   371,   375,   329,   384,   379,  -261,
    -261,  -261,  -261,  -261,   353,  -261,   553,  -261,   625,  -261,
     382,   356,  -261,  -261,  -261,  -261,   329,  -261,   329,  -261,
    -261,   382,  -261,  -261,  -261,   230,   236,   390,   241,  -261,
    -261,  -261,  -261,   115,  -261,  -261,   643,  -261,  -261,  -261,
     341,  -261,  -261,    65,  -261,  -261,  -261,    24,    65,  -261,
     218,  -261,  -261,  -261,   114,   396,    27,  -261,  -261,   117,
    -261,   353,    25,     2,   518,   518,   588,    15,  -261,  -261,
    -261,  -261,   134,   400,   401,   407,   123,   306,   345,  -261,
    -261,   291,   387,  -261,  -261,   408,  -261,   553,  -261,  -261,
    -261,  -261,  -261,  -261,  -261,   413,   161,   316,    30,  -261,
    -261,  -261,  -261,  -261,  -261,  -261,   306,  -261,    65,  -261,
    -261,  -261,  -261,  -261,  -261,   417,   416,  -261,  -261,   291,
    -261,  -261,   442,   608,   316,   419,   102,   329,   421,   157,
    -261,   427,     5,  -261,   340,   422,   118,  -261,  -261,  -261,
     435,   432,  -261,   329,   157,  -261,  -261,   457,  -261,  -261,
    -261,   443,    25,   518,   518,   157,   518,  -261,   518,   447,
    -261,  -261,  -261,   518,   471,  -261,  -261,   471
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,     0,     0,     1,   137,     0,    15,    16,    17,    18,
       0,    19,     0,     0,   137,     0,    14,     3,     5,    21,
      13,     6,     7,   116,     0,     0,     0,     8,     9,    10,
     117,     0,     0,     0,     2,     0,    68,    69,    67,    70,
     136,     0,     0,     0,     0,     0,     0,   163,     0,     0,
       0,     0,    60,   137,   137,   137,   137,   137,   150,    66,
     137,     0,    64,    48,     0,    62,    52,    55,     0,   137,
       0,   132,   139,   140,   141,   142,   143,   144,   145,   146,
     147,    21,    74,   110,    26,     0,     0,    20,     0,    34,
       0,   114,   101,     0,   102,   137,   137,     0,   137,   137,
     148,   149,   152,   158,   160,   164,   162,     0,     0,   137,
     137,   137,   137,    44,    48,    43,    46,    45,     0,     0,
      65,     0,     0,   137,   137,   137,   137,   137,   137,   137,
      47,    66,     0,   137,   137,   151,   137,   198,     0,   130,
      59,    21,   138,     0,    78,     0,     0,   199,     0,     0,
      23,     0,   137,   115,   112,    21,   109,    21,     0,     0,
       0,     0,   129,    21,     0,     0,     0,   137,   137,   137,
     137,    59,   185,   184,     0,     0,   192,     0,   191,   195,
       0,   194,    54,    53,    71,   196,     0,    37,    38,    39,
      40,    41,    42,     0,    57,    63,     0,    61,    21,     0,
       0,    91,    11,     0,     0,     0,     0,     0,     0,    27,
     201,   202,   200,   124,    92,   123,   137,    33,    35,   113,
     107,    23,   127,   106,   126,   103,     0,   122,     0,   120,
     118,     0,   121,   119,   197,     0,     0,     0,     0,    50,
      51,   187,   186,   137,   189,   188,   137,    58,    49,    56,
       0,    23,   135,    21,    23,    77,    75,    84,    21,    99,
       0,    98,   111,    31,     0,     0,     0,    22,    73,     0,
     128,   108,    21,    21,   137,   137,   137,     0,   190,   193,
     134,    90,     0,     0,     0,     0,    84,     0,     0,    96,
      97,    34,     0,    29,    28,     0,    25,   137,    36,   107,
      23,   105,   125,   153,   159,     0,   137,     0,   137,   165,
     169,    12,    81,    82,    83,    76,     0,    93,    21,    80,
      85,    87,    88,    86,   100,     0,     0,    89,    32,    34,
      24,    72,   157,   137,     0,     0,   137,     0,     0,   172,
     175,     0,     0,    79,     0,     0,     0,    30,   155,   154,
       0,     0,   179,     0,   170,   167,   174,   182,   168,   166,
      94,    23,    21,   137,   137,   177,   137,   181,   137,     0,
     156,   161,   176,   137,   180,   183,    95,   178
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -261,  -261,  -261,  -261,  -261,  -261,    -2,   434,   -17,  -217,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,  -250,  -203,   -11,
      -3,   -25,   367,   361,  -260,  -261,  -261,  -261,  -261,  -261,
    -261,  -261,   215,   193,  -261,  -182,  -130,    -9,  -261,  -261,
    -261,   163,  -261,   251,  -261,   508,  -261,   510,  -261,   242,
     517,  -261,  -261,  -261,  -261,   372,  -261,  -261,  -261,  -261,
    -261,   429,   257,  -261,    -6,  -155,     1,   -68,   -64,  -261,
    -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -261,  -157,
    -261,  -261,  -261,   221,   195,  -172,  -261,  -261,   175,  -261,
    -261,  -261,  -261,   292,  -261,   297,  -261,  -261,  -261
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    17,    18,   254,   141,    20,   199,   214,
     267,    21,   146,   265,   209,   264,   291,   153,   217,    62,
      63,    64,    65,   121,    66,    67,   269,    22,   144,   204,
     205,   286,   287,   319,   320,   259,   288,   201,   322,   344,
     369,   207,   260,   261,   323,   324,    24,   325,   158,   223,
     326,    27,   145,    28,    90,    91,    29,    30,    31,    32,
     151,   159,   224,    33,    68,    69,   107,    71,    72,    73,
      74,   167,   332,   349,   363,    75,   168,    76,   169,   108,
      77,   170,   309,   338,   339,   340,   373,   366,   310,   368,
      78,    79,   177,   178,   180,   181,    80,    34,    35
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      19,   139,    88,    81,   271,    70,   358,   142,    85,   244,
      89,   200,   237,   268,   172,    70,   306,     4,   241,   148,
     211,    87,   106,    87,     5,     6,     7,     8,     9,    10,
     295,  -173,   119,    11,   120,    12,    13,   282,   283,   284,
     285,   328,   113,   115,   307,   117,    87,   341,    40,     3,
     114,   114,   116,   114,   122,    82,   220,   245,   231,   334,
     335,    70,   173,   359,   143,   149,   242,   212,   250,   246,
     138,   -14,   308,    14,   351,   142,    15,   243,    16,   347,
      86,   299,   296,   271,   174,   175,    87,   179,  -173,   160,
     161,   157,   165,   166,   331,   163,    70,    70,   186,    70,
      70,    83,    94,  -171,   183,   321,   120,   136,   176,   196,
      95,   197,   -14,   187,   188,   189,   190,   191,   192,   305,
      40,   114,   114,   114,   114,   114,   114,     6,     7,     8,
       9,   334,   335,    40,   321,    11,   198,   283,   284,   285,
     221,   218,   235,   236,   106,   238,    89,  -104,   222,   114,
      84,   336,    52,   336,   222,    36,    37,    38,    39,   213,
    -171,     6,     7,     8,     9,   292,   156,   356,   297,    11,
      40,    93,   293,   136,    92,   298,   350,   249,    61,    40,
      16,   315,   356,   311,    48,    49,   334,   335,   266,    52,
     334,   335,   225,   372,    53,   226,    54,    55,    56,    57,
       6,     7,     8,     9,   258,   218,    59,   130,    11,   131,
     303,   304,   132,   114,   133,    61,   134,   227,   132,  -173,
     228,   179,   134,   135,   272,   136,   273,     6,     7,     8,
       9,    36,    37,    38,    39,    11,   128,   129,   232,   162,
     176,   228,    96,   130,   281,   131,    40,   239,   132,    97,
     136,   106,   134,    16,   240,   300,   247,   136,   258,   136,
      48,    49,    98,   102,   222,    52,   126,   127,   128,   129,
      53,    99,    54,    55,    56,    57,   289,   111,   274,   103,
      16,   136,    59,   100,   275,   318,   218,   136,   101,   277,
    -137,    61,   136,   104,   114,   127,   128,   129,   374,   370,
     371,   345,   105,   109,   375,   377,   110,   337,   106,   337,
     142,   112,   123,   142,   318,     6,     7,     8,     9,    36,
      37,    38,    39,    11,   137,   317,   125,   126,   127,   128,
     129,  -131,   147,    36,    37,    38,    39,   353,     6,     7,
       8,     9,   150,   152,   362,   300,    11,   154,    40,   155,
     136,   198,    41,    42,    43,   171,    44,    45,    46,   182,
     129,    47,    48,    49,    50,    51,   185,    52,    16,   252,
     184,   253,    53,   210,    54,    55,    56,    57,  -133,    58,
      36,    37,    38,    39,    59,   194,   202,    60,  -131,   203,
     280,    16,   253,    61,   327,    40,   253,   206,   248,    41,
      42,    43,   229,    44,    45,    46,   208,   266,    47,    48,
      49,    50,    51,   215,    52,   230,   233,   234,   251,    53,
     256,    54,    55,    56,    57,   255,    58,    36,    37,    38,
      39,    59,   257,   262,    60,     6,     7,     8,     9,   276,
      61,   263,    40,    11,   270,   294,    41,    42,    43,   329,
      44,    45,    46,   312,   313,    47,    48,    49,    50,    51,
     314,    52,   333,   330,   346,    94,    53,   348,    54,    55,
      56,    57,   352,    58,    36,    37,    38,    39,    59,   355,
     357,    60,  -133,   364,   361,   365,   307,    61,   140,    40,
    -104,   118,   193,    41,    42,    43,   376,    44,    45,    46,
     195,   316,    47,    48,    49,    50,    51,   360,    52,   343,
      23,   290,    25,    53,   301,    54,    55,    56,    57,    26,
      58,    36,    37,    38,    39,    59,   164,   219,    60,   342,
     302,   354,   367,  -137,    61,   278,    40,     0,     0,     0,
      41,    42,    43,   279,    44,    45,    46,     0,     0,    47,
      48,    49,    50,    51,     0,    52,    36,    37,    38,    39,
      53,     0,    54,    55,    56,    57,     0,    58,     0,     0,
       0,    40,    59,     0,     0,    60,     0,     0,     0,     0,
       0,    61,     0,     0,     0,    48,    49,     0,     0,     0,
      52,    36,    37,    38,    39,    53,     0,    54,    55,    56,
      57,     0,     0,     0,     0,     0,    40,    59,     0,     0,
     216,    36,    37,    38,    39,     0,    61,     0,     0,     0,
      48,    49,     0,     0,     0,    52,    40,     0,     0,     0,
      53,     0,    54,    55,    56,    57,     0,  -163,     0,     0,
      48,    49,    59,     0,     0,    52,    36,    37,    38,    39,
      53,    61,    54,    55,    56,    57,  -163,     0,     0,     0,
       0,    40,    59,   124,   125,   126,   127,   128,   129,     0,
       0,    61,     0,     0,     0,    48,    49,     0,     0,     0,
      52,     0,     0,     0,     0,    53,     0,    54,    55,    56,
      57,     0,     0,     0,     0,     0,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,    61
};

static const yytype_int16 yycheck[] =
{
       2,    69,    19,     5,   221,     4,     1,    71,    14,     1,
      19,   141,   169,   216,     1,    14,     1,     1,     1,     1,
       1,    21,    47,    21,     8,     9,    10,    11,    12,    13,
       3,     1,    57,    17,    59,    19,    20,   254,    14,    15,
      16,   291,    53,    54,    29,    56,    21,   307,    18,     0,
      53,    54,    55,    56,    60,    62,    56,    49,    56,    29,
      30,    60,    49,    58,    81,    47,    49,    48,   198,    61,
      69,    21,    57,    57,   334,   139,    60,    60,    62,   329,
      36,    56,    55,   300,   109,   110,    21,   112,    58,    95,
      96,    93,    98,    99,   297,    97,    95,    96,   123,    98,
      99,    62,    49,     1,    48,   287,   131,    51,   111,   134,
      57,   136,    62,   124,   125,   126,   127,   128,   129,   276,
      18,   124,   125,   126,   127,   128,   129,     9,    10,    11,
      12,    29,    30,    18,   316,    17,   138,    14,    15,    16,
     157,   152,   167,   168,   169,   170,   155,    47,   157,   152,
      62,   306,    37,   308,   163,     3,     4,     5,     6,    59,
      58,     9,    10,    11,    12,    51,    48,   339,    51,    17,
      18,    47,    58,    51,    49,    58,   333,    55,    63,    18,
      62,    58,   354,    49,    32,    33,    29,    30,    54,    37,
      29,    30,    48,   365,    42,    51,    44,    45,    46,    47,
       9,    10,    11,    12,   206,   216,    54,    45,    17,    47,
     274,   275,    50,   216,    52,    63,    54,    48,    50,    58,
      51,   246,    54,    49,   226,    51,   228,     9,    10,    11,
      12,     3,     4,     5,     6,    17,    42,    43,    48,    48,
     243,    51,    57,    45,   253,    47,    18,    48,    50,    47,
      51,   276,    54,    62,    48,   272,    48,    51,   260,    51,
      32,    33,    57,    47,   273,    37,    40,    41,    42,    43,
      42,    57,    44,    45,    46,    47,    58,    60,    48,    47,
      62,    51,    54,    49,    48,   287,   297,    51,    49,    48,
      62,    63,    51,    47,   297,    41,    42,    43,   366,   363,
     364,   318,    47,    47,   368,   373,    47,   306,   333,   308,
     374,    61,    47,   377,   316,     9,    10,    11,    12,     3,
       4,     5,     6,    17,    58,    19,    39,    40,    41,    42,
      43,     1,     1,     3,     4,     5,     6,   336,     9,    10,
      11,    12,    62,    52,   346,   362,    17,    49,    18,    51,
      51,   353,    22,    23,    24,    62,    26,    27,    28,    48,
      43,    31,    32,    33,    34,    35,    58,    37,    62,    49,
      55,    51,    42,    48,    44,    45,    46,    47,     1,    49,
       3,     4,     5,     6,    54,    62,    62,    57,    58,    53,
      49,    62,    51,    63,    49,    18,    51,    57,    48,    22,
      23,    24,    58,    26,    27,    28,    57,    54,    31,    32,
      33,    34,    35,    62,    37,    58,    58,    58,    62,    42,
      49,    44,    45,    46,    47,    62,    49,     3,     4,     5,
       6,    54,    57,    49,    57,     9,    10,    11,    12,    49,
      63,    62,    18,    17,    62,    49,    22,    23,    24,    62,
      26,    27,    28,    53,    53,    31,    32,    33,    34,    35,
      53,    37,    49,    55,    47,    49,    42,    25,    44,    45,
      46,    47,    53,    49,     3,     4,     5,     6,    54,    58,
      53,    57,    58,    48,    62,    53,    29,    63,    62,    18,
      47,    57,   131,    22,    23,    24,    49,    26,    27,    28,
     133,   286,    31,    32,    33,    34,    35,   344,    37,   316,
       2,   260,     2,    42,   272,    44,    45,    46,    47,     2,
      49,     3,     4,     5,     6,    54,    97,   155,    57,   308,
     273,   336,   357,    62,    63,   243,    18,    -1,    -1,    -1,
      22,    23,    24,   246,    26,    27,    28,    -1,    -1,    31,
      32,    33,    34,    35,    -1,    37,     3,     4,     5,     6,
      42,    -1,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    18,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    63,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,     3,     4,     5,     6,    42,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    18,    54,    -1,    -1,
      57,     3,     4,     5,     6,    -1,    63,    -1,    -1,    -1,
      32,    33,    -1,    -1,    -1,    37,    18,    -1,    -1,    -1,
      42,    -1,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      32,    33,    54,    -1,    -1,    37,     3,     4,     5,     6,
      42,    63,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    18,    54,    38,    39,    40,    41,    42,    43,    -1,
      -1,    63,    -1,    -1,    -1,    32,    33,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    42,    -1,    44,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    63
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    66,    67,     0,     1,     8,     9,    10,    11,    12,
      13,    17,    19,    20,    57,    60,    62,    68,    69,    71,
      72,    76,    92,   110,   111,   112,   115,   116,   118,   121,
     122,   123,   124,   128,   162,   163,     3,     4,     5,     6,
      18,    22,    23,    24,    26,    27,    28,    31,    32,    33,
      34,    35,    37,    42,    44,    45,    46,    47,    49,    54,
      57,    63,    84,    85,    86,    87,    89,    90,   129,   130,
     131,   132,   133,   134,   135,   140,   142,   145,   155,   156,
     161,    71,    62,    62,    62,   129,    36,    21,    73,   102,
     119,   120,    49,    47,    49,    57,    57,    47,    57,    57,
      49,    49,    47,    47,    47,    47,    86,   131,   144,    47,
      47,    60,    61,    84,    85,    84,    85,    84,    72,    86,
      86,    88,   129,    47,    38,    39,    40,    41,    42,    43,
      45,    47,    50,    52,    54,    49,    51,    58,   131,   132,
      62,    71,   133,    73,    93,   117,    77,     1,     1,    47,
      62,   125,    52,    82,    49,    51,    48,    71,   113,   126,
     129,   129,    48,    71,   126,   129,   129,   136,   141,   143,
     146,    62,     1,    49,    86,    86,    85,   157,   158,    86,
     159,   160,    48,    48,    55,    58,    86,    84,    84,    84,
      84,    84,    84,    88,    62,    87,    86,    86,    71,    73,
     101,   102,    62,    53,    94,    95,    57,   106,    57,    79,
      48,     1,    48,    59,    74,    62,    57,    83,    84,   120,
      56,    73,   102,   114,   127,    48,    51,    48,    51,    58,
      58,    56,    48,    58,    58,    86,    86,   144,    86,    48,
      48,     1,    49,    60,     1,    49,    61,    48,    48,    55,
     101,    62,    49,    51,    70,    62,    49,    57,    71,   100,
     107,   108,    49,    62,    80,    78,    54,    75,    83,    91,
      62,    74,    71,    71,    48,    48,    49,    48,   158,   160,
      49,   102,    74,    14,    15,    16,    96,    97,   101,    58,
     108,    81,    51,    58,    49,     3,    55,    51,    58,    56,
      73,   114,   127,   133,   133,   144,     1,    29,    57,   147,
     153,    49,    53,    53,    53,    58,    97,    19,    71,    98,
      99,   100,   103,   109,   110,   112,   115,    49,    82,    62,
      55,    83,   137,    49,    29,    30,   130,   131,   148,   149,
     150,    89,   148,    98,   104,    73,    47,    82,    25,   138,
     144,    89,    53,   131,   149,    58,   150,    53,     1,    58,
     106,    62,    71,   139,    48,    53,   152,   153,   154,   105,
     133,   133,   150,   151,   132,   133,    49,   132
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    68,    68,
      68,    70,    69,    71,    71,    72,    72,    72,    72,    72,
      73,    73,    74,    74,    75,    75,    77,    78,    76,    79,
      80,    81,    80,    82,    82,    83,    83,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    85,    85,    85,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    89,
      89,    90,    91,    91,    93,    92,    94,    95,    95,    96,
      96,    97,    97,    97,    97,    98,    98,    99,    99,   100,
     101,   101,   102,   104,   105,   103,   106,   107,   107,   108,
     109,   110,   110,   111,   112,   113,   113,   114,   114,   115,
     117,   116,   118,   119,   119,   120,   121,   121,   122,   122,
     122,   123,   123,   124,   125,   126,   126,   127,   127,   128,
     129,   129,   129,   129,   130,   130,   131,   131,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   136,   137,   135,   139,   138,   138,   141,   140,
     143,   142,   144,   144,   146,   145,   147,   147,   147,   147,
     148,   148,   148,   148,   149,   149,   150,   151,   150,   152,
     150,   153,   154,   153,   155,   155,   156,   156,   156,   156,
     157,   157,   158,   159,   159,   160,   161,   162,   162,   162,
     163,   163,   163
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     1,     1,     1,     1,     1,
       1,     0,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     3,     2,     0,     0,     6,     3,
       4,     0,     3,     2,     0,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     2,     2,     2,     1,     4,
       4,     4,     1,     3,     3,     1,     4,     3,     4,     2,
       1,     3,     1,     3,     1,     1,     0,     1,     1,     1,
       1,     3,     3,     1,     0,     5,     4,     2,     0,     3,
       2,     2,     2,     2,     0,     1,     1,     1,     1,     3,
       3,     1,     3,     0,     0,     5,     3,     2,     1,     1,
       1,     2,     2,     4,     3,     4,     2,     1,     2,     3,
       0,     5,     3,     3,     1,     2,     1,     1,     4,     4,
       4,     4,     4,     4,     2,     4,     2,     1,     2,     3,
       2,     1,     1,     0,     5,     4,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     2,     0,     0,     8,     0,     3,     0,     0,     6,
       0,    10,     1,     0,     0,     6,     3,     3,     3,     1,
       2,     1,     1,     0,     2,     1,     4,     0,     5,     0,
       4,     4,     0,     5,     3,     3,     4,     4,     4,     4,
       3,     1,     1,     3,     1,     1,     3,     4,     3,     3,
       4,     4,     4
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
#line 80 "syntax.y" /* yacc.c:1646  */
    {}
#line 1657 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 89 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); scope++;}
#line 1663 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 90 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1669 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 93 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1675 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 102 "syntax.y" /* yacc.c:1646  */
    {}
#line 1681 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 105 "syntax.y" /* yacc.c:1646  */
    {}
#line 1687 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 110 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); scope++;}
#line 1693 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 111 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope);scope--;}
#line 1699 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 116 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 1705 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 117 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1711 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "syntax.y" /* yacc.c:1646  */
    {}
#line 1717 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 147 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1723 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 149 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1729 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 159 "syntax.y" /* yacc.c:1646  */
    {}
#line 1735 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 171 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); scope++;}
#line 1741 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 173 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1747 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 177 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1753 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 178 "syntax.y" /* yacc.c:1646  */
    {}
#line 1759 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 186 "syntax.y" /* yacc.c:1646  */
    {}
#line 1765 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 199 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 1771 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 201 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1777 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 202 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1783 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 214 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1789 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 215 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1795 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 219 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); scope++;}
#line 1801 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 229 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); scope++;}
#line 1807 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 231 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1813 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 243 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1819 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 244 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1825 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 245 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1831 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 250 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope); scope++;}
#line 1837 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 252 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[-1].strval), NULL, scope);}
#line 1843 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 258 "syntax.y" /* yacc.c:1646  */
    {hashtbl_insert(hashtbl, (yyvsp[0].strval), NULL, scope);}
#line 1849 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 265 "syntax.y" /* yacc.c:1646  */
    {}
#line 1855 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 271 "syntax.y" /* yacc.c:1646  */
    {}
#line 1861 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 290 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1867 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 291 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1873 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 294 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1879 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 295 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1885 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 296 "syntax.y" /* yacc.c:1646  */
    {}
#line 1891 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 298 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1897 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 299 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1903 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 301 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1909 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 302 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1915 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 305 "syntax.y" /* yacc.c:1646  */
    {}
#line 1921 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 307 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1927 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 308 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1933 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 311 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing {"); yyerrok;}
#line 1939 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 312 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing }"); yyerrok;}
#line 1945 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 318 "syntax.y" /* yacc.c:1646  */
    {}
#line 1951 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 324 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1957 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 325 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1963 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 326 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1969 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 327 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1975 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 330 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 1981 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 331 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 1987 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 334 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing ;"); yyerrok;}
#line 1993 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 337 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing ;"); yyerrok;}
#line 1999 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 339 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing ;"); yyerrok;}
#line 2005 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 354 "syntax.y" /* yacc.c:1646  */
    {hashtbl_get(hashtbl, scope); scope--;}
#line 2011 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 355 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing {"); yyerrok;}
#line 2017 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 356 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing }"); yyerrok;}
#line 2023 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 358 "syntax.y" /* yacc.c:1646  */
    {scope++;}
#line 2029 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 359 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing ("); yyerrok;}
#line 2035 "syntax.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 360 "syntax.y" /* yacc.c:1646  */
    {error_distinction = 2; yyerror("Missing )"); yyerrok;}
#line 2041 "syntax.tab.c" /* yacc.c:1646  */
    break;


#line 2045 "syntax.tab.c" /* yacc.c:1646  */
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
#line 363 "syntax.y" /* yacc.c:1906  */


/*-----     USER FUNCTIONS    -----*/

void yyerror (char *s){
    errorcount++;
    if(error_distinction == 1){// an unrecognizable character.
		printf("Error in l.%d | Token #%d \033[1;31m %s: %s\n \033[0m \n", linecount, tokencount+errorcount, yytext, s);
        error_distinction = 0;
    }else if(error_distinction == 0){// unacceptable characters in strings.
		*buffer_ptr = '\0';   // terminate the error causing string so you can print it.
        printf("Error in l.%d | Token #%d \033[1;31m \"%s\": %s\n \033[0m \n", linecount, tokencount+errorcount, buffer, s);
	}
    else{// premature end for comments; mainly for multiline comments;
        printf("Error in l.%d |\033[1;31m %s \033[0m \n", linecount, s);
        error_distinction = 0;
    }
    /* if(MAX_ERRORS <= 0) return; */
    if(errorcount == 5){
        printf("Reached maximum number of errors! Exiting Analyzer\n");
        exit(-1); // terminate the whole analyzing process;
    }
}

int main(int argc, char *args[]){

    hashtbl = hashtbl_create(10, NULL);
    if(!hashtbl){
        printf("Error creating hashtable!\n"); 
        exit(EXIT_FAILURE);
    }

    if(argc > 1){
      yyin = fopen(args[1], "r");
      if(yyin == NULL){
          printf("Error opening file !\n");
          return -1;
      }
    }
    else{
      yyin = stdin;
    }

    do {
      yyparse();
    } while(!feof(yyin));

    hashtbl_get(hashtbl, scope); //scope 0 hashtbl
    hashtbl_destroy(hashtbl); //free the mem of hashtbl

    return 0;
}
