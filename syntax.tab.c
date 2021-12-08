/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "syntax.y"


    #include <stdio.h>
    #include <stdlib.h>
    #include "hashtbl.h"
    
    extern FILE *yyin;
    extern int  yylex();
    extern void yyerror(const char *err);
    void false_end_check(void);
    void end_of_declarations_check(void);

    HASHTBL *hashtbl;
    int scope = 0;

    int begin_count = 0;
    int end_count = 0;
    int declarations_end = 0;


#line 91 "syntax.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    T_EOF = 0,
    T_PROGRAM = 258,
    T_CONST = 259,
    T_TYPE = 260,
    T_COUPLE = 261,
    T_ARRAY = 262,
    T_OF = 263,
    T_VAR = 264,
    T_FORWARD = 265,
    T_FUNCTION = 266,
    T_PROCEDURE = 267,
    T_INTEGER = 268,
    T_REAL = 269,
    T_BOOLEAN = 270,
    T_CHAR = 271,
    T_STRING = 272,
    T_BEGIN = 273,
    T_END = 274,
    T_IF = 275,
    T_THEN = 276,
    T_ELSE = 277,
    T_CASE = 278,
    T_OTHERWISE = 279,
    T_WHILE = 280,
    T_DO = 281,
    T_FOR = 282,
    T_DOWNTO = 283,
    T_TO = 284,
    T_READ = 285,
    T_WRITE = 286,
    T_LENGTH = 287,
    T_RELOP = 288,
    T_ADDOP = 289,
    T_OROP = 290,
    T_MULDIVANDOP = 291,
    T_NOTOP = 292,
    T_PAIROP = 293,
    T_LPAREN = 294,
    T_RPAREN = 295,
    T_SEMI = 296,
    T_DOTDOT = 297,
    T_DOT = 298,
    T_COMMA = 299,
    T_ASSIGN = 300,
    T_EQU = 301,
    T_COLON = 302,
    T_LBRACK = 303,
    T_RBRACK = 304,
    T_ID = 305,
    T_ICONST = 306,
    T_BCONST = 307,
    T_CCONST = 308,
    T_SCONST = 309,
    T_RCONST = 310,
    NO_ELSE = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "syntax.y"

    int     intval;
    double  doubleval;
    int     boolval;
    char    charval;
    char    *stringval;

#line 209 "syntax.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  117
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  233

#define YYUNDEFTOK  2
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   108,   108,   111,   112,   113,   114,   117,   120,   121,
     122,   123,   124,   127,   128,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   151,   152,   153,   156,   157,   160,   161,
     162,   163,   164,   167,   168,   171,   172,   175,   176,   177,
     180,   181,   184,   185,   188,   189,   190,   191,   192,   195,
     195,   198,   199,   202,   202,   202,   202,   202,   205,   206,
     209,   210,   213,   214,   217,   218,   221,   222,   225,   226,
     227,   230,   231,   234,   235,   238,   238,   241,   241,   244,
     245,   248,   249,   250,   251,   252,   253,   254,   255,   258,
     259,   262,   265,   266,   269,   272,   275,   276,   279,   280,
     283,   284,   287,   288,   291,   294,   295,   298
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"EOF\"", "error", "$undefined", "\"program\"", "\"const\"",
  "\"type\"", "\"coyple\"", "\"array\"", "\"of\"", "\"var\"",
  "\"froward\"", "\"function\"", "\"procedure\"", "\"integer\"",
  "\"real\"", "\"boolean\"", "\"char\"", "\"string\"", "\"begin\"",
  "\"end\"", "\"if\"", "\"then\"", "\"else\"", "\"case\"", "\"otherwise\"",
  "\"while\"", "\"do\"", "\"for\"", "\"downto\"", "\"to\"", "\"read\"",
  "\"write\"", "\"length\"", "\"> >= < <= <>\"", "\"+ -\"", "\"orop\"",
  "\"* / DIV MOD AND\"", "\"notop\"", "\"HEAD TAIL\"", "\"(\"", "\")\"",
  "\";\"", "\"..\"", "\".\"", "\",\"", "\":=\"", "\"=\"", "\":\"", "\"[\"",
  "\"]\"", "\"id\"", "\"iconst\"", "\"bconst\"", "\"cconst\"",
  "\"sconst\"", "\"rconst\"", "NO_ELSE", "$accept", "program", "header",
  "declarations", "constdefs", "constant_defs", "expression", "variable",
  "expressions", "constant", "typedefs", "type_defs", "type_def", "dims",
  "limits", "limit", "sign", "typename", "standard_type", "vardefs",
  "variable_defs", "identifiers", "subprograms", "subprogram",
  "sub_header", "formal_parameters", "parameter_list", "pass",
  "comp_statement", "$@1", "statements", "statement", "assignment",
  "if_statement", "if_tail", "while_statement", "for_statement",
  "iter_space", "subprogram_call", "io_statement", "read_list",
  "read_item", "write_list", "write_item", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF (-142)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-109)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      45,   -38,     7,    58,    74,    60,    73,    13,  -142,    69,
      69,   119,  -142,   128,  -142,  -142,  -142,  -142,   102,   100,
      23,   109,    87,   113,   150,    92,   114,  -142,   114,  -142,
     123,   124,  -142,   141,   159,   169,   171,   178,   179,  -142,
      92,   189,    92,    92,    92,    92,   193,  -142,  -142,  -142,
    -142,  -142,   214,   182,  -142,   188,    57,   196,   107,  -142,
      26,  -142,    56,   186,  -142,   202,   -18,   191,    92,   208,
    -142,  -142,   120,    92,    92,    92,    92,    92,    92,    92,
      92,   236,   204,  -142,    92,    92,   203,   215,   216,     6,
      39,  -142,    -9,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,   248,   209,   211,  -142,  -142,  -142,  -142,   217,
     207,   218,   179,   212,   163,  -142,    92,   206,  -142,  -142,
      92,   214,    28,    76,   208,    31,  -142,   175,    12,   214,
    -142,    33,   179,   163,   168,   172,   220,   213,    92,    92,
      92,    92,  -142,   107,    87,   163,   -11,  -142,   138,  -142,
      56,    50,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,   151,  -142,   135,  -142,    92,  -142,  -142,  -142,   236,
     148,  -142,   107,   107,    92,  -142,   182,    63,  -142,   214,
      95,  -142,   118,   214,   214,  -142,  -142,  -142,   224,   -33,
    -142,   225,  -142,  -142,   163,  -142,  -142,  -142,   214,   179,
     163,   246,  -142,   187,   243,  -142,   213,  -142,    92,  -142,
     -11,   262,   138,  -142,   152,  -142,   107,  -142,    92,    92,
     107,  -142,  -142,  -142,   163,  -142,   163,  -142,   214,   214,
    -142,  -142,  -142
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,    75,    44,     4,     5,     6,     3,     0,     0,
       0,     0,     0,     0,    69,     0,     9,    11,     8,    10,
       0,     0,    87,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,    33,    38,    40,    41,
      42,    39,    14,    23,    26,     0,    80,    82,    98,    74,
       0,     2,    60,    43,    73,     0,     0,     0,     0,    20,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,     0,    79,     0,     0,     0,     0,     0,    33,
       0,    97,     0,    90,    91,    92,    93,    94,    95,    96,
      76,    75,     0,     0,    59,    58,    56,    55,    46,     0,
       0,     0,    68,     0,     0,    29,     0,     0,    30,    28,
       0,    37,     0,    15,    18,    17,    19,    16,     0,    13,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,    98,     0,     0,    60,    57,    60,    54,
      60,     0,    72,    63,    64,    65,    66,    67,    62,    71,
      61,     0,    25,     0,    24,     0,    35,    34,    81,    86,
       0,    78,    98,    98,     0,    33,   114,     0,   113,   117,
       0,   116,     0,   100,    99,    89,    77,    48,    53,     0,
      51,     0,    49,    45,     0,    32,    31,    27,    36,     0,
       0,   103,   104,     0,     0,   110,     0,   111,     0,   109,
      60,     0,    60,    70,     0,    84,    98,   101,     0,     0,
      98,   112,   115,    50,     0,    52,     0,   102,   107,   106,
     105,    47,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,  -142,  -142,   219,  -142,   261,   -25,   -55,   -73,  -142,
    -142,  -142,   122,  -142,    64,  -141,  -142,  -124,  -142,  -142,
    -142,  -110,   174,  -142,  -142,   221,  -142,   104,   -21,  -142,
    -142,  -139,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,    70,  -142,    72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    12,    13,    19,   121,    53,   122,    54,
      24,    37,   108,   189,   190,   109,   110,   159,   160,    39,
      65,    66,    22,    33,    34,    82,   131,   132,    91,    58,
      92,    93,    94,    95,   217,    96,    97,   204,    98,    99,
     177,   178,   180,   181
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      52,    35,   151,    90,   185,   191,   128,   192,     6,   171,
     142,   210,     5,   166,    16,    67,   211,    69,    70,    71,
      72,   187,   170,   104,    27,  -108,   113,     9,  -108,   114,
      10,   -12,   143,   201,   202,   -12,   100,   -12,   -12,   188,
     140,   106,   107,   117,   -12,   139,     1,  -108,     2,   123,
     124,   125,   126,   127,    17,   129,   165,     7,     8,   134,
     135,   167,   102,   103,    28,    75,   182,    77,   164,   191,
     213,   225,   165,   168,   169,     9,   215,   227,    10,   -12,
      11,   230,   176,   -12,   141,   -12,   -12,    79,    90,   214,
     104,   161,   -12,    40,   113,   163,    81,   194,    30,    31,
     231,    14,   232,   205,   -82,    32,   105,   206,   106,   107,
      75,    76,    77,   179,    15,   183,   184,    90,    90,    18,
      21,   118,    78,   186,    41,    32,    42,    84,    11,    43,
      44,    45,    85,    23,    86,   207,   196,    87,    88,   208,
     198,    26,    46,    47,    48,    49,    50,    51,    25,   203,
      29,   176,   195,    74,    75,    76,    77,    89,   209,    38,
     119,    90,   165,    36,    55,    90,    78,   120,    74,    75,
      76,    77,   104,    56,    57,   197,   153,   154,   155,   156,
     157,    78,    59,   179,    74,    75,    76,    77,   105,   172,
     106,   107,   113,   228,   229,   200,   113,    78,   173,   226,
      60,    74,    75,    76,    77,    74,    75,    76,    77,    75,
      76,    77,    61,   158,    78,   218,   219,    62,    78,    63,
      74,    75,    76,    77,    74,    75,    76,    77,    68,    64,
      79,   115,    73,    78,    80,    81,   111,    78,   116,    74,
      75,    76,    77,   112,    77,   130,   162,    74,    75,    76,
      77,   133,    78,   136,   137,   138,   145,   146,   149,   148,
      78,   147,   152,   175,   150,   174,   -58,   212,   216,   220,
     224,    20,   193,   199,   223,   144,   221,     0,    83,   101,
     222
};

static const yytype_int16 yycheck[] =
{
      25,    22,   112,    58,   143,   146,    79,   148,     1,   133,
      19,    44,    50,     1,     1,    40,    49,    42,    43,    44,
      45,   145,   132,    34,     1,    19,    44,     1,    22,    47,
       4,     5,    41,   172,   173,     9,    10,    11,    12,    50,
       1,    52,    53,    68,    18,    39,     1,    41,     3,    74,
      75,    76,    77,    78,    41,    80,    44,    50,     0,    84,
      85,    49,     6,     7,    41,    34,   139,    36,    40,   210,
     194,   212,    44,    40,    41,     1,   200,   216,     4,     5,
      54,   220,   137,     9,    45,    11,    12,    48,   143,   199,
      34,   116,    18,     1,    44,   120,    39,    47,    11,    12,
     224,    41,   226,    40,    47,    18,    50,    44,    52,    53,
      34,    35,    36,   138,    41,   140,   141,   172,   173,    50,
       1,     1,    46,   144,    32,    18,    34,    20,    54,    37,
      38,    39,    25,     5,    27,    40,     1,    30,    31,    44,
     165,    41,    50,    51,    52,    53,    54,    55,    46,   174,
      41,   206,     1,    33,    34,    35,    36,    50,    40,     9,
      40,   216,    44,    50,    50,   220,    46,    47,    33,    34,
      35,    36,    34,    50,    50,    40,    13,    14,    15,    16,
      17,    46,    41,   208,    33,    34,    35,    36,    50,    21,
      52,    53,    44,   218,   219,    47,    44,    46,    26,    47,
      41,    33,    34,    35,    36,    33,    34,    35,    36,    34,
      35,    36,    43,    50,    46,    28,    29,    46,    46,    41,
      33,    34,    35,    36,    33,    34,    35,    36,    39,    50,
      48,    40,    39,    46,    46,    39,    50,    46,    47,    33,
      34,    35,    36,    41,    36,     9,    40,    33,    34,    35,
      36,    47,    46,    50,    39,    39,     8,    48,    51,    42,
      46,    50,    50,    50,    46,    45,    42,    42,    22,    26,
       8,    10,   150,   169,   210,   101,   206,    -1,    57,    60,
     208
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,     3,    58,    59,    50,     1,    50,     0,     1,
       4,    54,    60,    61,    41,    41,     1,    41,    50,    62,
      62,     1,    79,     5,    67,    46,    41,     1,    41,    41,
      11,    12,    18,    80,    81,    85,    50,    68,     9,    76,
       1,    32,    34,    37,    38,    39,    50,    51,    52,    53,
      54,    55,    63,    64,    66,    50,    50,    50,    86,    41,
      41,    43,    46,    41,    50,    77,    78,    63,    39,    63,
      63,    63,    63,    39,    33,    34,    35,    36,    46,    48,
      46,    39,    82,    82,    20,    25,    27,    30,    31,    50,
      64,    85,    87,    88,    89,    90,    92,    93,    95,    96,
      10,    60,     6,     7,    34,    50,    52,    53,    69,    72,
      73,    50,    41,    44,    47,    40,    47,    63,     1,    40,
      47,    63,    65,    63,    63,    63,    63,    63,    65,    63,
       9,    83,    84,    47,    63,    63,    50,    39,    39,    39,
       1,    45,    19,    41,    79,     8,    48,    50,    42,    51,
      46,    78,    50,    13,    14,    15,    16,    17,    50,    74,
      75,    63,    40,    63,    40,    44,     1,    49,    40,    41,
      78,    74,    21,    26,    45,    50,    64,    97,    98,    63,
      99,   100,    65,    63,    63,    88,    85,    74,    50,    70,
      71,    72,    72,    69,    47,     1,     1,    40,    63,    84,
      47,    88,    88,    63,    94,    40,    44,    40,    44,    40,
      44,    49,    42,    74,    78,    74,    22,    91,    28,    29,
      26,    98,   100,    71,     8,    72,    47,    88,    63,    63,
      88,    74,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    57,    58,    59,    59,    59,    59,    60,    61,    61,
      61,    61,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    67,    67,    68,    68,    69,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    75,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      81,    82,    82,    83,    83,    84,    84,    86,    85,    87,
      87,    88,    88,    88,    88,    88,    88,    88,    88,    89,
      89,    90,    91,    91,    92,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    99,    99,   100
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     0,     5,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     1,     4,     4,     1,     5,     3,     3,
       3,     5,     5,     1,     4,     4,     3,     1,     1,     1,
       1,     1,     1,     3,     0,     5,     3,     6,     3,     3,
       3,     1,     3,     1,     2,     1,     1,     2,     1,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     3,     0,
       5,     3,     3,     1,     3,     0,     3,     5,     5,     3,
       2,     3,     0,     6,     4,     1,     0,     0,     4,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       3,     5,     2,     0,     4,     6,     3,     3,     1,     4,
       4,     4,     3,     1,     1,     3,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 3:
#line 111 "syntax.y"
                                             { hashtbl_insert(hashtbl, (yyvsp[-1].stringval) ,NULL,scope); }
#line 1566 "syntax.tab.c"
    break;

  case 4:
#line 112 "syntax.y"
                                             { hashtbl_insert(hashtbl, (yyvsp[-1].stringval) ,NULL,scope); yyerror("Wrong program declaration"); yyerrok ; }
#line 1572 "syntax.tab.c"
    break;

  case 5:
#line 113 "syntax.y"
                                             { yyerror("Wrong program declaration"); yyerrok ; }
#line 1578 "syntax.tab.c"
    break;

  case 6:
#line 114 "syntax.y"
                                             { hashtbl_insert(hashtbl, (yyvsp[-1].stringval) ,NULL,scope); yyerror("Wrong program declaration"); yyerrok ; }
#line 1584 "syntax.tab.c"
    break;

  case 11:
#line 123 "syntax.y"
                                                        { yyerror("Forgot semicolon"); yyerrok ; }
#line 1590 "syntax.tab.c"
    break;

  case 12:
#line 124 "syntax.y"
                                                        { }
#line 1596 "syntax.tab.c"
    break;

  case 13:
#line 127 "syntax.y"
                                                                { hashtbl_insert(hashtbl, (yyvsp[-2].stringval) ,NULL,scope); }
#line 1602 "syntax.tab.c"
    break;

  case 14:
#line 128 "syntax.y"
                                                                { hashtbl_insert(hashtbl, (yyvsp[-2].stringval) ,NULL,scope); }
#line 1608 "syntax.tab.c"
    break;

  case 24:
#line 140 "syntax.y"
                                                                        { hashtbl_insert(hashtbl, (yyvsp[-3].stringval) ,NULL,scope); }
#line 1614 "syntax.tab.c"
    break;

  case 29:
#line 145 "syntax.y"
                                                                        { yyerror("Forgot opening parenthesis"); yyerrok ; }
#line 1620 "syntax.tab.c"
    break;

  case 30:
#line 146 "syntax.y"
                                                                        { yyerror("Forgot closing parenthesis"); yyerrok ; }
#line 1626 "syntax.tab.c"
    break;

  case 31:
#line 147 "syntax.y"
                                                                        { yyerror("Forgot closing parenthesis"); yyerrok ; }
#line 1632 "syntax.tab.c"
    break;

  case 32:
#line 148 "syntax.y"
                                                                        { yyerror("Forgot opening parenthesis"); yyerrok ; }
#line 1638 "syntax.tab.c"
    break;

  case 33:
#line 151 "syntax.y"
                                                                { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1644 "syntax.tab.c"
    break;

  case 35:
#line 153 "syntax.y"
                                                                { yyerror("Missing closing bracket"); yyerrok ; }
#line 1650 "syntax.tab.c"
    break;

  case 44:
#line 168 "syntax.y"
                                { }
#line 1656 "syntax.tab.c"
    break;

  case 45:
#line 171 "syntax.y"
                                                                { hashtbl_insert(hashtbl, (yyvsp[-2].stringval) ,NULL,scope); }
#line 1662 "syntax.tab.c"
    break;

  case 46:
#line 172 "syntax.y"
                                                                { hashtbl_insert(hashtbl, (yyvsp[-2].stringval) ,NULL,scope); }
#line 1668 "syntax.tab.c"
    break;

  case 53:
#line 185 "syntax.y"
                                            { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1674 "syntax.tab.c"
    break;

  case 57:
#line 191 "syntax.y"
                                            { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1680 "syntax.tab.c"
    break;

  case 58:
#line 192 "syntax.y"
                                            { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1686 "syntax.tab.c"
    break;

  case 60:
#line 195 "syntax.y"
                                            { }
#line 1692 "syntax.tab.c"
    break;

  case 62:
#line 199 "syntax.y"
                                            { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1698 "syntax.tab.c"
    break;

  case 69:
#line 206 "syntax.y"
                                { }
#line 1704 "syntax.tab.c"
    break;

  case 72:
#line 213 "syntax.y"
                                             { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1710 "syntax.tab.c"
    break;

  case 73:
#line 214 "syntax.y"
                                             { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1716 "syntax.tab.c"
    break;

  case 75:
#line 218 "syntax.y"
                                { }
#line 1722 "syntax.tab.c"
    break;

  case 78:
#line 225 "syntax.y"
                                                                            { end_of_declarations_check(); hashtbl_insert(hashtbl, (yyvsp[-3].stringval) ,NULL,scope); }
#line 1728 "syntax.tab.c"
    break;

  case 79:
#line 226 "syntax.y"
                                                                            { declarations_end =1; scope += 1; hashtbl_insert(hashtbl, (yyvsp[-1].stringval) ,NULL,scope); }
#line 1734 "syntax.tab.c"
    break;

  case 80:
#line 227 "syntax.y"
                                                                            { end_of_declarations_check(); hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1740 "syntax.tab.c"
    break;

  case 82:
#line 231 "syntax.y"
                                { }
#line 1746 "syntax.tab.c"
    break;

  case 86:
#line 238 "syntax.y"
                                    { }
#line 1752 "syntax.tab.c"
    break;

  case 87:
#line 241 "syntax.y"
                            { begin_count++; }
#line 1758 "syntax.tab.c"
    break;

  case 88:
#line 241 "syntax.y"
                                                                { end_count++; false_end_check(); }
#line 1764 "syntax.tab.c"
    break;

  case 98:
#line 255 "syntax.y"
                                { }
#line 1770 "syntax.tab.c"
    break;

  case 100:
#line 259 "syntax.y"
                                                    { yyerror("Wrong assignment"); yyerrok ; }
#line 1776 "syntax.tab.c"
    break;

  case 103:
#line 266 "syntax.y"
                             { }
#line 1782 "syntax.tab.c"
    break;

  case 105:
#line 272 "syntax.y"
                                                                    { hashtbl_insert(hashtbl, (yyvsp[-4].stringval) ,NULL,scope); }
#line 1788 "syntax.tab.c"
    break;

  case 108:
#line 279 "syntax.y"
                                                                    { hashtbl_insert(hashtbl, (yyvsp[0].stringval) ,NULL,scope); }
#line 1794 "syntax.tab.c"
    break;

  case 109:
#line 280 "syntax.y"
                                                                    { hashtbl_insert(hashtbl, (yyvsp[-3].stringval) ,NULL,scope); }
#line 1800 "syntax.tab.c"
    break;


#line 1804 "syntax.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 302 "syntax.y"


int main(int argc,char *argv[]) {

    int token;

    if(!(hashtbl = hashtbl_create(50,NULL))){
        printf("eEror failed to intialize hashtabl");
        exit(EXIT_FAILURE);
    }

    if(argc > 1){
        yyin = fopen(argv[1],"r");
        if(yyin == NULL){
            perror ("Error opening file");
            return -1;
        }
    }

    yyparse();

    fclose(yyin);
    hashtbl_destroy(hashtbl);

    return 0;

}

void false_end_check(void){

    /*
        An sunantisei perissotera begin apo end meiwnei to begin kata 1 kai
        psaxnei to kurio swma ths function/procedure to opoio einai to end = 1
    */

    if (begin_count == end_count){
        hashtbl_get(hashtbl,scope); 
        scope -= 1; 
        begin_count =0 ; 
        end_count = 0 ;
    }else{
        begin_count--; 
        end_count = 0;
    }
    return;
}

void end_of_declarations_check(void){
    /*
        Meta th dhlwsh toy prwtoy procedure teleiwnei to kommati ths dhlwshs synarthsewn
        ara de xreiazetai na kanoume kati me to token forward
    */
    if (declarations_end){
        scope++;
    }else{
        return;
    }
}
