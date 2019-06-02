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
#line 1 "B053040014.y" /* yacc.c:339  */

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#define YYERROR_VERBOSE
	#define YYDEBUG 1

	/*使用的外部變數*/
	extern int yylex();
	void yyerror(const char *str);
	extern unsigned int lineCount, charCount,yyleng;
	extern char* yytext;
	
	//Symbol table的部份
	typedef struct symbol_nodes{
		char* id;
		int wall;
		struct symbol_nodes* next;
	}s;
	s* top;
	void init();
	void push(char*,int);
	s* get_top();
	void pop();
	char* add_function_id(const char*);

	int find(const char*);			//For variable declaration & method declaration
	int find_to_end(const char*);		//For Class type check
	int invo_find_to_end(const char*);	//Foe variable invocation & method invocation

	void output();

#line 99 "y.tab.c" /* yacc.c:339  */

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
    A = 258,
    ABSTRACT = 259,
    B = 260,
    BACKSLASH = 261,
    BEQ = 262,
    BIGGER = 263,
    BINARY_AND = 264,
    BINARY_OR = 265,
    BREAK = 266,
    BOOLEAN = 267,
    BYTE = 268,
    C = 269,
    CASE = 270,
    CATCH = 271,
    CARET = 272,
    CARET_EQUAL = 273,
    CHAR = 274,
    CLASS = 275,
    COLON = 276,
    COMMA = 277,
    CONST = 278,
    CONTINUE = 279,
    D = 280,
    DEFAULT = 281,
    DEVIDE = 282,
    DEVIDE_EQUAL = 283,
    DO = 284,
    DOT = 285,
    DOUBLE = 286,
    DOUBLE_QUOTATION = 287,
    E = 288,
    EIGHT_NINE = 289,
    ELSE = 290,
    EQUAL = 291,
    EQUAL_EQUAL = 292,
    EXTENDS = 293,
    F = 294,
    FALSE = 295,
    FINAL = 296,
    FINALLY = 297,
    FLOAT = 298,
    FOR = 299,
    GOTO = 300,
    IF = 301,
    IMPLEMENTS = 302,
    IMPORT = 303,
    INSTANCEOF = 304,
    INT = 305,
    INTERFACE = 306,
    KEYWORDS = 307,
    LBB = 308,
    LEQ = 309,
    LL = 310,
    LL_EQUAL = 311,
    LMB = 312,
    LONG = 313,
    LONG_INDICATOR = 314,
    LSB = 315,
    MINUS = 316,
    MINUS_EQUAL = 317,
    MINUS_MINUS = 318,
    MODULO = 319,
    MODULO_EQUAL = 320,
    MULTIPLY = 321,
    MULTIPLY_EQUAL = 322,
    NATIVE = 323,
    NEGATION = 324,
    NEW = 325,
    NOT = 326,
    NOT_EQUAL = 327,
    Null = 328,
    ONE_TO_SEVEN = 329,
    PACKAGE = 330,
    PLUS = 331,
    PLUS_EQUAL = 332,
    PLUS_PLUS = 333,
    PRINT = 334,
    PRIVATE = 335,
    PROTECTED = 336,
    PUBLIC = 337,
    RBB = 338,
    RETURN = 339,
    RMB = 340,
    RR = 341,
    RR_EQUAL = 342,
    RRR = 343,
    RRR_EQUAL = 344,
    RSB = 345,
    SEMICOLON = 346,
    SHORT = 347,
    SINGLE_QUOTATION = 348,
    SMALLER = 349,
    STATIC = 350,
    STRING = 351,
    SUPER = 352,
    SWITCH = 353,
    SYNCHRONIZED = 354,
    THIS = 355,
    THROW = 356,
    THROWS = 357,
    TRANSIENT = 358,
    TRUE = 359,
    TRY = 360,
    UNIARY_AND = 361,
    UNIARY_AND_EQUAL = 362,
    UNIARY_OR = 363,
    UNIARY_OR_EQUAL = 364,
    VALID_STRING_CHARACTER = 365,
    VOID = 366,
    VOLATILE = 367,
    WHILE = 368,
    X = 369,
    ZERO = 370,
    ID = 371,
    LOWER_B = 372,
    LOWER_F = 373,
    LOWER_N = 374,
    LOWER_T = 375,
    LOWER_R = 376
  };
#endif
/* Tokens.  */
#define A 258
#define ABSTRACT 259
#define B 260
#define BACKSLASH 261
#define BEQ 262
#define BIGGER 263
#define BINARY_AND 264
#define BINARY_OR 265
#define BREAK 266
#define BOOLEAN 267
#define BYTE 268
#define C 269
#define CASE 270
#define CATCH 271
#define CARET 272
#define CARET_EQUAL 273
#define CHAR 274
#define CLASS 275
#define COLON 276
#define COMMA 277
#define CONST 278
#define CONTINUE 279
#define D 280
#define DEFAULT 281
#define DEVIDE 282
#define DEVIDE_EQUAL 283
#define DO 284
#define DOT 285
#define DOUBLE 286
#define DOUBLE_QUOTATION 287
#define E 288
#define EIGHT_NINE 289
#define ELSE 290
#define EQUAL 291
#define EQUAL_EQUAL 292
#define EXTENDS 293
#define F 294
#define FALSE 295
#define FINAL 296
#define FINALLY 297
#define FLOAT 298
#define FOR 299
#define GOTO 300
#define IF 301
#define IMPLEMENTS 302
#define IMPORT 303
#define INSTANCEOF 304
#define INT 305
#define INTERFACE 306
#define KEYWORDS 307
#define LBB 308
#define LEQ 309
#define LL 310
#define LL_EQUAL 311
#define LMB 312
#define LONG 313
#define LONG_INDICATOR 314
#define LSB 315
#define MINUS 316
#define MINUS_EQUAL 317
#define MINUS_MINUS 318
#define MODULO 319
#define MODULO_EQUAL 320
#define MULTIPLY 321
#define MULTIPLY_EQUAL 322
#define NATIVE 323
#define NEGATION 324
#define NEW 325
#define NOT 326
#define NOT_EQUAL 327
#define Null 328
#define ONE_TO_SEVEN 329
#define PACKAGE 330
#define PLUS 331
#define PLUS_EQUAL 332
#define PLUS_PLUS 333
#define PRINT 334
#define PRIVATE 335
#define PROTECTED 336
#define PUBLIC 337
#define RBB 338
#define RETURN 339
#define RMB 340
#define RR 341
#define RR_EQUAL 342
#define RRR 343
#define RRR_EQUAL 344
#define RSB 345
#define SEMICOLON 346
#define SHORT 347
#define SINGLE_QUOTATION 348
#define SMALLER 349
#define STATIC 350
#define STRING 351
#define SUPER 352
#define SWITCH 353
#define SYNCHRONIZED 354
#define THIS 355
#define THROW 356
#define THROWS 357
#define TRANSIENT 358
#define TRUE 359
#define TRY 360
#define UNIARY_AND 361
#define UNIARY_AND_EQUAL 362
#define UNIARY_OR 363
#define UNIARY_OR_EQUAL 364
#define VALID_STRING_CHARACTER 365
#define VOID 366
#define VOLATILE 367
#define WHILE 368
#define X 369
#define ZERO 370
#define ID 371
#define LOWER_B 372
#define LOWER_F 373
#define LOWER_N 374
#define LOWER_T 375
#define LOWER_R 376

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 34 "B053040014.y" /* yacc.c:355  */

	char* name;

#line 385 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 402 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   12763

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  122
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  303
/* YYNRULES -- Number of rules.  */
#define YYNRULES  619
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  972

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   376

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
     115,   116,   117,   118,   119,   120,   121
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    42,    46,    47,    47,    48,    49,
      50,    51,    52,    52,    53,    53,    53,    54,    54,    55,
      55,    56,    56,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    62,    63,    64,    64,    65,    66,
      67,    68,    69,    69,    70,    70,    71,    74,    75,    76,
      77,    78,    79,    80,    80,    80,    81,    82,    83,    83,
      84,    85,    86,    86,    87,    88,    89,    90,    91,    91,
      94,    95,    96,    96,    97,    97,    97,    97,    97,    97,
      97,    98,    98,    99,   100,   101,   102,   102,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   118,   119,
     119,   120,   122,   123,   124,   124,   125,   125,   126,   127,
     128,   129,   129,   130,   131,   131,   131,   132,   133,   134,
     135,   136,   136,   137,   138,   138,   139,   139,   142,   142,
     143,   143,   144,   144,   145,   145,   145,   145,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   150,   151,   155,
     155,   156,   156,   157,   157,   158,   159,   160,   161,   161,
     161,   162,   162,   163,   164,   164,   165,   165,   166,   166,
     167,   167,   167,   168,   168,   168,   169,   169,   169,   170,
     171,   171,   172,   172,   173,   174,   174,   175,   175,   176,
     176,   177,   178,   179,   180,   181,   183,   184,   185,   186,
     187,   188,   188,   189,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   209,   210,   211,   212,   213,
     213,   214,   214,   215,   216,   217,   218,   218,   219,   219,
     220,   221,   224,   225,   226,   226,   227,   228,   228,   228,
     229,   229,   229,   229,   229,   229,   230,   230,   230,   230,
     230,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   265,   266,   266,
     267,   268,   269,   270,   270,   271,   271,   272,   273,   274,
     274,   275,   275,   276,   277,   278,   279,   280,   281,   282,
     282,   283,   283,   284,   284,   284,   285,   285,   286,   286,
     287,   287,   288,   288,   289,   290,   291,   292,   293,   293,
     294,   295,   295,   296,   296,   299,   299,   300,   300,   301,
     302,   302,   303,   303,   304,   305,   305,   305,   306,   306,
     306,   307,   307,   307,   308,   308,   309,   309,   310,   310,
     311,   312,   312,   312,   313,   313,   314,   314,   315,   315,
     316,   317,   317,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   319,   319,   320,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   330,   331,
     331,   331,   332,   332,   333,   334,   335,   336,   337,   337,
     338,   338,   339,   339,   340,   340,   341,   341,   342,   342,
     342,   342,   343,   343,   343,   344,   345,   351,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     358,   358,   358,   361,   361,   362,   362,   363,   364,   364,
     365,   365,   366,   367,   367,   368,   369,   370,   371,   372,
     373,   373,   374,   374,   375,   375,   376,   376,   377,   378,
     378,   379,   379,   380,   380,   381,   382,   382,   383,   383,
     384,   384,   385,   386,   386,   387,   387,   388,   389,   389,
     390,   390,   391,   391,   392,   392,   393,   393,   394,   394,
     395,   395,   396,   397,   398,   399,   399,   400,   401,   402,
     403,   404,   404,   405,   405,   406,   406,   407,   408,   408,
     409,   409,   410,   411,   411,   412,   413,   413,   414,   415,
     415,   416,   417,   418,   419,   420,   421,   421,   422,   422,
     423,   424,   424,   425,   426,   427,   428,   429,   430,   430,
     431,   432,   433,   434,   434,   435,   436,   437,   438,   439,
     440,   449,   450,   451,   451,   452,   453,   454,   455,   456,
     456,   457,   457,   458,   459,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   468,   469,   470,   471,   471,
     472,   473,   473,   474,   475,   476,   477,   477,   478,   479
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "A", "ABSTRACT", "B", "BACKSLASH", "BEQ",
  "BIGGER", "BINARY_AND", "BINARY_OR", "BREAK", "BOOLEAN", "BYTE", "C",
  "CASE", "CATCH", "CARET", "CARET_EQUAL", "CHAR", "CLASS", "COLON",
  "COMMA", "CONST", "CONTINUE", "D", "DEFAULT", "DEVIDE", "DEVIDE_EQUAL",
  "DO", "DOT", "DOUBLE", "DOUBLE_QUOTATION", "E", "EIGHT_NINE", "ELSE",
  "EQUAL", "EQUAL_EQUAL", "EXTENDS", "F", "FALSE", "FINAL", "FINALLY",
  "FLOAT", "FOR", "GOTO", "IF", "IMPLEMENTS", "IMPORT", "INSTANCEOF",
  "INT", "INTERFACE", "KEYWORDS", "LBB", "LEQ", "LL", "LL_EQUAL", "LMB",
  "LONG", "LONG_INDICATOR", "LSB", "MINUS", "MINUS_EQUAL", "MINUS_MINUS",
  "MODULO", "MODULO_EQUAL", "MULTIPLY", "MULTIPLY_EQUAL", "NATIVE",
  "NEGATION", "NEW", "NOT", "NOT_EQUAL", "Null", "ONE_TO_SEVEN", "PACKAGE",
  "PLUS", "PLUS_EQUAL", "PLUS_PLUS", "PRINT", "PRIVATE", "PROTECTED",
  "PUBLIC", "RBB", "RETURN", "RMB", "RR", "RR_EQUAL", "RRR", "RRR_EQUAL",
  "RSB", "SEMICOLON", "SHORT", "SINGLE_QUOTATION", "SMALLER", "STATIC",
  "STRING", "SUPER", "SWITCH", "SYNCHRONIZED", "THIS", "THROW", "THROWS",
  "TRANSIENT", "TRUE", "TRY", "UNIARY_AND", "UNIARY_AND_EQUAL",
  "UNIARY_OR", "UNIARY_OR_EQUAL", "VALID_STRING_CHARACTER", "VOID",
  "VOLATILE", "WHILE", "X", "ZERO", "ID", "LOWER_B", "LOWER_F", "LOWER_N",
  "LOWER_T", "LOWER_R", "$accept", "goal", "compilation_unit",
  "package_declaration", "import_declarations", "import_declaration",
  "single_type_import_declaration", "type_import_on_demand_declaration",
  "type_declarations", "type_declaration", "class_declaration", "$@1",
  "$@2", "$@3", "$@4", "$@5", "$@6", "class_modifiers", "class_modifier",
  "super", "interfaces", "interface_type_list", "class_body",
  "class_body_declarations", "class_body_declaration",
  "class_member_declaration", "static_initializer",
  "constructor_declaration", "constructor_modifiers",
  "constructor_modifier", "constructor_declarator",
  "formal_parameter_list", "formal_parameter", "throws", "class_type_list",
  "constructor_body", "explicit_constructor_invocation",
  "field_declaration", "field_modifiers", "field_modifier",
  "variable_declarators", "variable_declarator", "variable_declarator_id",
  "method_declaration", "method_header", "method_modifiers",
  "method_modifier", "method_declarator", "method_body",
  "interface_declaration", "interface_modifiers", "interface_modifier",
  "extends_interfaces", "interface_body", "interface_member_declarations",
  "interface_member_declaration", "constant_declaration",
  "constant_modifiers", "abstract_method_declaration",
  "abstract_method_modifiers", "abstract_method_modifier",
  "array_initializer", "variable_initializers", "variable_initializer",
  "type", "primitive_type", "numeric_type", "integral_type",
  "floating_point_type", "reference_type", "class_or_interface_type",
  "class_type", "interface_type", "array_type", "block",
  "block_statements", "block_statement",
  "local_variable_declaration_statement", "local_variable_declaration",
  "statement", "statement_no_short_if",
  "statement_without_trailing_substatement", "empty_statement",
  "labeled_statement", "$@7", "labeled_statement_no_short_if", "$@8",
  "expression_statement", "statement_expression", "if_then_statement",
  "if_then_else_statement", "if_then_else_statement_no_short_if",
  "switch_statement", "switch_block", "switch_block_statement_groups",
  "switch_block_statement_group", "switch_labels", "switch_label",
  "while_statement", "while_statement_no_short_if", "do_statement",
  "for_statement", "for_statement_no_short_if", "for_init", "for_update",
  "statement_expression_list", "break_statement", "$@9",
  "continue_statement", "$@10", "return_statement", "throws_statement",
  "synchronized_statement", "try_statement", "catches", "catch_clause",
  "finally", "constant_expression", "expression", "assignment_expression",
  "assignment", "left_hand_side", "assignment_operator",
  "conditional_expression", "conditional_or_expression",
  "conditional_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "predecrement_expression", "preincrement_expression",
  "unary_expression_not_plus_minus", "postdecrement_expression",
  "postincrement_expression", "postfix_expression", "method_invocation",
  "field_access", "primary", "primary_no_new_array",
  "class_instance_creation_expression", "argument_list",
  "array_creation_expression", "dim_exprs", "dim_expr", "dims",
  "array_access", "package_name", "type_name", "simple_type_name",
  "expression_name", "method_name", "ambiguous_name", "literal",
  "integer_literal", "decimal_integer_literal", "hex_integer_literal",
  "octal_integer_literal", "integer_type_suffix", "decimal_numeral",
  "digits", "digit", "non_zero_digit", "hex_numeral", "hex_digits",
  "hex_digit", "octal_numeral", "octal_digit", "floating_point_literal",
  "exponent_part", "exponent_indicator", "signed_integer", "sign",
  "float_type_suffix", "boolean_literal", "character_literal",
  "single_character", "string_literal", "string_characters",
  "string_character",
  "input_character_except_SINGLE_QUOTATION_and_BACKSLASH",
  "input_character_except_DOUBLE_QUOTATION_and_BACKSLASH",
  "escape_sequence", "escape_character", "null_literal", "identifier",
  "other_IDs", "As", "ABSTRACTs", "Bs", "BACKSLASHs", "BEQs", "BIGGERs",
  "BINARY_ANDs", "BINARY_ORs", "BOOLEANs", "BREAKs", "BYTEs", "Cs",
  "CARETs", "CARET_EQUALs", "CASEs", "CATCHs", "CHARs", "CLASSs", "COLONs",
  "COMMAs", "CONTINUEs", "Ds", "DEFAULTs", "DEVIDEs", "DEVIDE_EQUALs",
  "DOs", "DOTs", "DOUBLEs", "DOUBLE_QUOTATIONs", "Es", "EIGHT_NINEs",
  "ELSEs", "EQUALs", "EQUAL_EQUALs", "EXTENDSs", "Fs", "FALSEs", "FINALs",
  "FINALLYs", "FLOATs", "FORs", "IDs", "IFs", "IMPLEMENTSs", "IMPORTs",
  "INSTANCEOFs", "INTs", "INTERFACEs", "LBBs", "LEQs", "LLs", "LL_EQUALs",
  "LMBs", "LONGs", "LONG_INDICATORs", "LOWER_Bs", "LOWER_Fs", "LOWER_Ns",
  "LOWER_Rs", "LOWER_Ts", "LSBs", "MINUSs", "MINUS_EQUALs", "MINUS_MINUSs",
  "MODULOs", "MODULO_EQUALs", "MULTIPLYs", "MULTIPLY_EQUALs", "NEGATIONs",
  "NEWs", "NOTs", "NOT_EQUALs", "Nulls", "ONE_TO_SEVENs", "PACKAGEs",
  "PLUSs", "PLUS_EQUALs", "PLUS_PLUSs", "PUBLICs", "RBBs", "RETURNs",
  "RMBs", "RRs", "RR_EQUALs", "RRRs", "RRR_EQUALs", "RSBs", "SEMICOLONs",
  "SHORTs", "SINGLE_QUOTATIONs", "SMALLERs", "STATICs", "STRINGs",
  "SUPERs", "SWITCHs", "SYNCHRONIZEDs", "THISs", "THROWs", "THROWSs",
  "TRUEs", "TRYs", "UNIARY_ANDs", "UNIARY_AND_EQUALs", "UNIARY_ORs",
  "UNIARY_OR_EQUALs", "VALID_STRING_CHARACTERs", "VOIDs", "WHILEs", "Xs",
  "ZEROs", YY_NULLPTR
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
     375,   376
};
# endif

#define YYPACT_NINF -862

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-862)))

#define YYTABLE_NINF -598

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1249,   666,    25,  -862,  -862,  -862,    50,  -862,   244,  -862,
     329,   809,  -862,  -862,   780,  -862,  -862,   589,  -862,  -862,
   11814, 11814,  -862,  -862,  -862,  -862,  -862,  1109,  -862,  -862,
    -862, 11814,  -862,  -862,  -862,  -862,  -862, 11814,   671,  -862,
    -862,  -862,  -862, 11814,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,   626,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,   232,
    -862,   666,  -862,   870,   114,   145,   279,   646,   373,   373,
      77,   229,    61,  -862, 11814,  -862,  -862,  1374,  -862,  -862,
     373,    77,   229,  -862,  -862,   542, 11814,   229, 11814,  -862,
    -862,  -862, 10508,  -862,  -862,    77, 11814,  -862,   145,   533,
     229,  -862,    77,   206,  -862,  -862, 11814,   364,  -862,   114,
    -862,    77,  -862,  -862,  -862,  -862,  -862,  -862,  -862,   147,
    -862,  -862,  -862,  -862,   593,  1753, 12292,  -862,     6,  -862,
    -862,  -862, 11814,  -862, 10387,  -862,  -862,  -862,  -862,   764,
    -862,   110,  -862, 10629,  -862,  -862,    74, 11487,  -862, 11671,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
     213,    82,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
      77,  -862,  -862,   675,  -862,  -862,    77,  -862,  -862,  -862,
    -862,  -862,   582,  -862,  -862, 11656,  -862, 11366,  -862,  -862,
    -862,    80,  -862, 11814,  -862,   301,   213,  1092,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,   110,  -862,   690,  -862,    74,
    -862,  8474,  -862, 11814,   186,   276,   296,   338,  -862,  -862,
   11671,   690,  -862,  -862,  8474,  -862, 11814, 11683,   754,  -862,
      68,  -862,  1440,   361,   946,   124,  -862,  -862, 11535,  -862,
    -862, 11814,  -862,   215,  -862,  -862, 11683,  1549,  -862,  -862,
   11683,  -862, 11814,  -862,  -862, 11535,    74,  -862,  -862, 12163,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  8595, 11671,  -862,   332,  8111,  -862,   145,  -862,
    -862,  -862,  -862,  -862,   145,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,   673,  -862,
    -862,   230,   481,   379,   716,   993,  5933,  4723,   762,  -862,
    1012,  3876,   213,   114,  -862,  -862,  -862,  -862,  -862,  3997,
     356,  -862,  4118,  4239,  4360,  -862,  -862,  -862,  -862,  -862,
     937, 11814, 11814, 10024,    63,   260,  1365,  -862,   401,   413,
   11118, 11118, 11656,  -862,  1684, 11118,  -862, 11118,  -862,    94,
     209,   434,   486,   497, 11118,  -862,    77,   510,  3755,   523,
    -862,    68,  -862,   332,  -862,   456,  -862,   423,   411,   430,
   11830, 11814,  -862,   411,  -862, 10726,   124,  -862,  -862,  -862,
    -862,   751,  -862,   436,  -862, 11683,  -862,  -862,  -862,    79,
      79,   436,  -862,  -862, 12386,   332,   447,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862, 11118,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
   11804,  -862, 11118, 11118, 10824, 11814,  -862,  -862,  -862,  -862,
     899,  -862,  -862,  4844,   426,    63,  -862,  -862,  -862,  -862,
    -862,  4481,  -862,   509,  -862,  -862,  -862,  -862,    93,  -862,
    -862,    57,   221,   102,   197,  -862,  -862,   407,  -862,  -862,
    -862,   217,  -862,  -862, 10266, 11118,  1026,  -862,  -862,  -862,
    -862,    84,  -862,  -862,  -862,  9926,  9684,  9442,  9200,  8958,
    8716,  7748,  6538,  6659,  6054,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  6175,  -862,  -862,  -862, 10145, 11118, 11118, 11118,
   11118,  -862,  -862,  -862,  4965,   399,   399,   667,  -862,   145,
     487,   112,  -862,   112,   115,  -862,  -862, 11804, 11118, 11118,
   11118, 11118,   145,   686, 11118,  -862,  -862,   624, 11814,  -862,
    -862,  -862,  -862,  -862,  1854,  -862,  -862,  -862, 10726,  -862,
   12273, 11656,  -862,   659,   145,   145,  -862,  -862,  -862,   213,
    -862,   124,   124,  2617,  -862,   436,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,    63,  -862,  -862,   102,  -862,
    -862, 10024,   145,   145,  -862,   529,   552,  5086,   372,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862, 12653,
    -862,  -862,   145,   463,  2550, 10922,    84,  -862,  -862,  -862,
      93, 11118,  -862,  -862, 11118,  -862,  -862, 11118,  -862,  -862,
   11118,  -862,  -862, 11118,  -862,  -862,  -862, 11118, 11118,  1186,
    -862,  -862,  -862,  -862,  -862, 11118, 11118, 11656, 11118, 11118,
    -862,  -862,  -862,  -862, 11118, 11118, 11118, 11118, 11118,  -862,
    -862,  -862,  -862, 11118, 11118, 11118,   399,   312,   440,   498,
    -862,  -862,  -862,  -862,  5207,  -862, 11118,  5328, 10824,  -862,
    -862,  -862,  -862,  -862,  -862,   213,  -862,   436,    84,    84,
     436,  -862,  -862,  -862,  7627,  -862,   536,    84,  4602,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,   109,  -862,  -862,  -862,  -862, 10824,  -862,  -862,
   11118,  -862,  5449,  5570,  -862,  -862,  -862, 11118,  -862, 10922,
   11314,  2077,   145, 11216, 10024, 11118,  9805,  9563,  9321,  9079,
    8837,  7869,  7990,  6780,  6901,   494,  7022,  7143,  7264,  7385,
    7506,  6296,  6417,  -862,  -862,  -862, 11118,  1201,  -862,  5691,
   11020,   124,  5812,   436,  -862, 10824,  -862,    77,    77,  -862,
     541,  -862,  -862,  -862,    77, 11656, 10024,  -862,   968, 10726,
    -862,   436,  -862,  -862,  -862,    84,   145, 11216, 12056,  -862,
     555, 11216, 11951,    84,   450, 10024,  -862,   409,   564,  -862,
    -862,  -862,  -862,   221,   579,   599,   622,  -862,  -862,  1026,
    -862,   124,  -862,  -862,  -862,   436,  -862,  -862,   572,  -862,
    -862,    84,  -862,  -862,  -862,   145, 11216,    84, 10024,    84,
   10024, 10024,  -862,  -862,  -862, 10024,    93, 10266, 11118, 11118,
    -862,  -862,   621,  -862,  -862,   572,  -862,  8353,  -862, 11118,
      93,    77,  -862,    84, 10024, 10024,  -862, 10024,  -862,  -862,
    -862, 10024,   145, 10922,    84,    84,  -862,  8232, 12578,  -862,
    -862,    93,  -862,  -862,  -862, 10024,  -862,  -862,  -862,  -862,
    -862,   620,   640,   661,   663, 10922,   145, 11216, 10024, 10024,
   12482,  -862,  -862,  -862, 10266, 11118, 11118,   145, 11216, 11216,
      84, 10024,   409,  -862,   145, 10922,    84,    84, 11216,    84,
   10024,    84, 10024, 10024,  -862, 10024, 10922,   145, 11216, 10024,
   10024,    84, 10024, 10024,  -862, 10024,  -862,  -862,  -862,   145,
   11216, 11216,    84, 10024,   409, 10024,  -862,  -862,  -862, 11216,
      84, 10024,    84, 10024, 10024, 10024,  -862,    84, 10024, 10024,
   10024, 10024
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   490,    32,   489,    33,   575,    31,   591,     0,     2,
       0,     0,    12,    14,     0,    29,    15,     0,   112,   115,
       0,     0,   114,    16,     1,   534,   533,     0,     6,     8,
       9,     0,    13,   490,    32,    31,    30,     0,   539,   465,
     538,   579,   113,     0,   464,   463,   467,   479,   496,   510,
     512,   522,   573,   618,   619,   529,   551,   552,   553,   555,
     554,    23,   447,   448,   449,   450,   451,   452,   462,   453,
     446,   455,   456,   457,   459,   458,   461,   454,   460,     0,
     355,   490,     7,     0,     0,     0,   357,    17,     0,     0,
       0,     0,   506,   505,     0,     5,   506,     0,   592,    10,
       0,     0,     0,   521,   520,     0,     0,     0,     0,   541,
     540,    26,     0,   532,   531,     0,     0,   356,     0,   358,
       0,    20,     0,   494,   493,   111,     0,     0,   116,     0,
     157,     0,    34,   156,   103,   476,   478,   488,   507,    78,
     527,   537,   548,   106,    55,    54,    53,   593,    77,   598,
     105,    79,     0,    80,     0,    39,    41,    42,    43,     0,
      51,     0,    45,     0,    72,    44,     0,     0,    97,     0,
     138,   140,   142,   143,   139,   152,   154,   155,   153,   156,
       0,   357,   141,   144,   148,   151,   150,   146,   147,   145,
       0,   149,    28,     0,    36,    11,     0,    22,   117,   466,
     524,   597,     0,   119,   121,     0,   122,     0,   129,   132,
     126,   124,   125,     0,    24,     0,     0,   464,   580,    40,
      38,    55,    54,    53,    52,     0,   359,   541,   604,     0,
      49,     0,    67,     0,    76,    75,    74,    77,    73,    98,
       0,   541,    88,   109,     0,   110,     0,     0,    83,   546,
       0,    81,     0,     0,     0,     0,   557,   556,     0,    46,
     494,     0,    18,   466,   120,   118,     0,   464,   615,   130,
       0,   131,     0,   605,    92,     0,     0,    47,    50,   464,
     477,   495,   503,   508,   523,   528,   530,   561,   568,   572,
     578,   363,   582,   594,   599,   600,   601,   602,   603,   606,
     607,   616,     0,     0,   178,     0,     0,   163,     0,   164,
     167,   179,   168,   180,     0,   169,   170,   181,   171,   182,
     172,   183,   184,   185,   187,   186,   188,   195,     0,   198,
     196,   199,   197,     0,   200,   337,     0,     0,   201,   332,
     339,     0,     0,     0,   333,   365,   371,   372,   373,     0,
       0,   384,     0,     0,     0,   366,   367,   368,   369,   370,
     357,     0,     0,     0,     0,     0,   389,   423,     0,     0,
       0,     0,     0,   445,   388,     0,    66,     0,   189,     0,
       0,     0,     0,   334,     0,   422,     0,     0,     0,     0,
      62,     0,    86,     0,   160,     0,   334,     0,   464,     0,
     592,     0,    71,   517,   516,     0,     0,    91,   584,   583,
     158,   464,   589,     0,    58,     0,    57,    37,   123,     0,
       0,     0,   108,    48,   464,     0,     0,   581,    65,   162,
     165,   194,   483,   482,   502,   545,   560,   564,   566,   577,
     586,   588,   610,   613,     0,   270,   262,   260,   266,   265,
     263,   261,   264,   267,   268,   269,   271,   562,   317,   318,
       0,   547,     0,     0,     0,     0,   550,   549,   374,   380,
     506,   385,   387,     0,     0,     0,   415,   389,   388,   386,
     513,     0,   376,   550,   378,   405,   407,   406,     0,   239,
     241,     0,   360,     0,   469,   468,   614,     0,   428,   430,
     431,     0,   435,   434,     0,     0,   464,   558,   567,   570,
     576,     0,   253,   255,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   316,   300,   307,   306,   310,
     322,   321,     0,   338,   336,   360,     0,     0,     0,     0,
       0,   311,   337,   339,     0,     0,     0,     0,   312,     0,
     469,     0,   426,     0,     0,   433,   432,     0,     0,     0,
       0,     0,     0,     0,     0,   574,   404,     0,     0,    70,
     159,    90,    89,    82,   464,   137,    85,   136,     0,    87,
     494,     0,    56,     0,     0,     0,   107,    64,   256,     0,
     329,     0,     0,   464,   342,     0,   326,   361,   497,   410,
     419,   420,   421,   559,   414,     0,   418,   417,     0,   492,
     491,     0,     0,     0,   617,     0,   513,     0,   509,   429,
     427,   509,   443,   438,   439,   440,   441,   442,   444,   464,
     235,   237,     0,     0,   357,     0,     0,   590,   335,   475,
       0,     0,   474,   473,     0,   612,   611,     0,   481,   480,
       0,   609,   608,     0,   519,   518,   571,     0,     0,   471,
     470,   472,   535,   542,   596,     0,     0,     0,     0,     0,
     544,   543,   585,   587,     0,     0,     0,     0,     0,   501,
     500,   563,   565,     0,     0,     0,     0,     0,     0,   360,
     309,   314,   315,   308,     0,   348,     0,     0,     0,   243,
     595,   424,   425,   469,   437,     0,   330,     0,     0,     0,
       0,   244,   487,   486,     0,   248,     0,     0,     0,   391,
     396,   397,   398,   399,   400,   395,   401,   402,   403,   394,
     393,    63,     0,   134,    59,   127,   128,     0,   354,   353,
       0,   323,     0,     0,   191,   240,   242,     0,   409,     0,
       0,   464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   292,     0,     0,     0,     0,
       0,     0,     0,   302,   303,   301,     0,     0,   349,     0,
       0,     0,     0,     0,   341,     0,    69,     0,     0,    68,
     526,   525,   249,   247,     0,     0,     0,   392,   494,     0,
     133,     0,   327,   343,   408,     0,     0,     0,   557,   238,
     360,     0,   557,     0,     0,     0,   203,     0,   167,   174,
     175,   176,   177,   360,     0,     0,     0,   273,   304,   464,
     305,     0,   351,   350,   340,     0,   328,   206,     0,   245,
     251,     0,   215,   135,   324,     0,     0,     0,     0,     0,
       0,     0,   225,   515,   514,     0,     0,     0,     0,     0,
     352,   325,   485,   484,   498,     0,   208,     0,   211,     0,
       0,     0,   217,     0,     0,     0,   221,     0,   224,   223,
     204,     0,     0,     0,     0,     0,   209,     0,   464,   210,
     212,     0,   252,   214,   250,     0,   220,   219,   222,   193,
     173,   360,     0,     0,     0,     0,     0,     0,     0,     0,
     464,   207,   213,   218,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   216,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   233,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   229,     0,   232,   231,   205,     0,
       0,     0,     0,     0,     0,     0,   228,   227,   230,     0,
       0,     0,     0,     0,     0,     0,   226,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -862,  -862,  -862,  -862,  -862,   699,  -862,  -862,   717,    55,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,   733,   677,
     348,  -862,   547,  -862,   612,  -862,  -862,  -862,  -862,   627,
     629,   521,  -574,   130,  -862,   539,  -862,  -862,  -862,   636,
    -175,  -221,   368,  -862,  -862,  -862,   649,   129,  -862,  -862,
    -862,   799,  -862,  -862,  -862,   615,  -862,  -862,  -862,  -862,
     617,  -862,  -862,  -556,  -100,  -329,  -862,  -862,  -862,  -483,
     461,   -93,   -64,  -862,  -157,   530,  -862,  -862,  -498,   670,
    -361,  1898,  -862,  -862,  -862,  -862,  -862,  -862,  -485,  -862,
    -862,  -862,  -862,  -862,  -862,   -43,   -24,  -583,  -862,  -862,
    -862,  -862,  -862,  -785,  -440,  -494,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,   120,  -862,  -862,  2709,   405,
    2706,  -862,  -862,    88,  -862,   207,   208,   204,   210,   203,
    -239,    86,   132,   -59,  -862,   -31,  1048,  1271,    81,  1422,
    1573,  1796,  2043,  1379,  -862,  -862,  2194,  -521,  -862,   313,
    -161,   166,  2860,   404,   -27,  -862,  3002,  -404,  -862,  -862,
    -862,  -862,  -862,  -862,   383,  -862,  -334,  -348,  -314,  -862,
    -862,   146,  -862,   477,  -862,  -442,  -862,  -862,  -862,  -557,
    -862,  -862,  -862,  -862,  -862,   369,  -862,  -862,   314,  -351,
    -862,   -20,  -862,  -535,   415,  -528,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -523,  -862,  -862,  -862,  -862,  -862,
     858,  -616,  -102,  -862,  -465,  -862,  -862,  -862,  -862,   -11,
    -862,  -333,  -336,  1266,  -861,   545,  -862,   788,  -448,  -862,
    -862,  -862,  -862,  2367,  -862,  2773,  -862,  -862,  -862,  -862,
    -862,   -74,  -862,  -862,  -862,  -217,  -862,  -862,  -518,  -444,
    -862,  -862,  -862,   216,  -453,  -862,  -313,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,   151,  -862,  -419,  -862,
    -307,   508,  -197,  -862,  -393,  -862,  -862,  -862,  -862,  2510,
      71,  -862,  -205,  -862,   158,  -862,   655,  -862,  -862,   664,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,   513,  -862,
     774,   514,  1095
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    27,    28,    29,    30,    11,    12,
      13,   100,   101,   102,    89,    90,    91,    14,    15,   107,
     115,   193,   111,   154,   155,   156,   157,   158,   159,   160,
     161,   413,   414,   229,   389,   230,   302,   162,   163,   164,
     250,   251,   252,   165,   166,   167,   168,   215,   242,    16,
      17,    18,   105,   125,   202,   203,   204,   205,   206,   207,
     208,   575,   732,   576,   303,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   304,   889,   306,   307,   308,   309,
     923,   310,   311,   312,   488,   819,   856,   313,   314,   315,
     316,   820,   317,   837,   865,   866,   867,   868,   318,   821,
     319,   320,   822,   632,   813,   814,   321,   612,   322,   613,
     323,   324,   325,   326,   714,   715,   793,   891,   594,   512,
     327,   328,   444,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   335,   336,   337,   534,   595,   339,   694,
     695,   779,   340,   129,   179,   180,   341,   342,   343,   344,
     345,   346,   347,   348,   468,   349,   350,   351,   352,   353,
     718,   719,   354,   485,   355,   473,   474,   604,   605,   599,
     356,   357,   551,   358,   497,   498,   552,   499,   553,   500,
     359,   535,    62,    63,    19,    64,   501,   665,   666,   644,
     641,   182,   361,   183,    65,   650,   445,   869,   716,   184,
      20,   611,   740,   362,    66,   870,   683,   446,   363,   364,
     185,   365,    67,   366,   855,   405,   657,   108,    69,   367,
     210,   794,   186,   368,    70,   369,   116,    31,   667,   187,
      43,   244,   668,   674,   448,   255,   188,   469,    71,    72,
      73,    74,    75,   536,   537,   449,   371,   684,   450,   685,
     451,   538,   372,   539,   658,   373,   374,    21,   540,   452,
     375,    22,   220,   377,   410,   675,   453,   676,   454,   416,
     378,   189,   379,   669,   190,   191,   395,   381,   382,   396,
     384,   233,   385,   386,   653,   455,   647,   456,   503,   272,
     387,    77,   388
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    80,   471,   126,    85,   265,   630,   734,   600,   243,
     633,    86,   169,   579,   476,   132,   112,    87,   481,   631,
     458,   606,   733,    88,   755,   601,   459,   112,   554,   602,
     493,   127,   720,   259,   376,   406,   472,   707,   472,   721,
     710,   112,   128,   545,   722,   418,   555,   394,   112,   727,
     472,   617,   194,   688,   169,   607,   589,   112,   614,  -597,
     748,   935,   198,   240,   480,   391,    32,   247,    94,   400,
     677,    23,   882,    97,   117,   241,  -465,   119,   109,   130,
     273,   133,    23,  -355,  -131,   637,    86,   231,    86,   130,
     124,   261,   181,   965,   609,   550,    86,    50,    23,   130,
     495,  -579,   723,   616,   678,   266,    86,   270,   428,  -592,
     798,   227,  -355,   700,   610,    96,   703,  -102,   213,   726,
     462,   495,   112,   728,   463,   408,   283,   110,   426,   924,
     110,   124,   216,   471,   181,    49,    50,    52,    32,   226,
     390,   608,  -359,    86,    93,   471,    98,    86,   401,   254,
      95,   231,   600,   705,    23,   231,    99,   476,   415,     7,
     502,   472,  -131,   110,   620,     7,   743,   472,   628,   601,
     301,    76,    76,   602,   412,   415,    52,   783,    54,   472,
     573,   228,    76,   720,   765,    86,   804,    86,    76,   195,
     721,  -131,   218,   119,    76,   722,   570,   417,   738,   739,
     727,     7,   231,   554,   496,   293,   133,   687,  -436,   409,
    -541,   360,   228,    86,   256,  -581,   801,    54,   621,   458,
     392,   841,  -190,   622,   360,   459,   216,   216,   587,   563,
     113,   724,   232,    92,   130,  -581,     7,   245,    86,   557,
     881,    86,  -190,   843,    24,    76,   392,  -541,    76,   283,
     216,  -364,   216,   723,   893,    86,  -581,    76,  -104,    76,
     471,   494,    93,    76,   835,   809,   495,    76,   631,   558,
     726,   742,   476,   257,   728,   912,   114,    76,   600,   547,
    -355,  -362,   360,   392,   890,   212,   360,   568,  -541,   401,
    -595,   472,   502,  -322,   472,   601,   232,  -101,   253,   602,
     232,  -541,   273,    76,   890,    76,  -581,  -595,  -322,  -355,
      76,   581,  -202,   637,    76,   677,   677,   677,    76,   581,
      76,   402,   631,     7,   401,   460,   631,   463,   696,   696,
      25,   578,   465,   427,   623,   624,   625,   626,   627,   475,
     541,   489,   490,   492,   548,   274,   701,   232,   702,   678,
     678,   678,    86,   293,   -96,   276,    76,   470,    76,   630,
     212,   631,   273,   633,    76,   199,   406,   847,    39,  -138,
     496,   849,   631,  -469,   103,   397,   399,    26,  -469,   430,
     457,   392,   724,   407,    76,   431,    93,  -100,   833,    49,
      50,    76,   -96,   817,   471,   392,   258,    76,    76,   419,
     461,   420,   412,   228,  -469,   200,   873,   -99,   618,    76,
     853,   104,    76,   495,   -95,   218,   630,    76,   761,   762,
     633,    76,   631,    76,   273,    79,    76,   603,   472,   631,
      52,   273,   275,   631,   631,    84,   686,   580,   860,   283,
     590,   637,   287,   631,   854,   597,    41,   370,   260,  -102,
     122,   260,   -95,   631,    76,   131,   249,   290,   124,   201,
     370,   504,   569,   228,   260,   631,   631,   920,   196,   124,
     275,    54,   124,   505,   631,   731,   -94,   780,   929,   931,
     780,   415,  -595,   -93,   634,   124,   557,   507,   941,  -469,
    -469,  -469,  -469,  -469,   559,  -139,  -547,  -139,   952,  -355,
     293,   478,   510,   478,   578,   486,   690,   691,   692,   693,
     960,   962,    76,    76,   -94,   478,   689,   496,   370,   967,
     899,   -93,   370,    76,   260,   228,   412,   571,  -355,   572,
     412,   750,   228,   778,  -356,   800,   778,   706,  -166,   486,
    -236,   133,   209,   123,  -321,   124,   560,   922,    86,   584,
     585,  -139,    76,  -511,  -234,  -357,  -202,   561,   464,  -321,
     934,    86,   831,  -356,   124,   831,    76,   686,  -574,   944,
     564,   946,   947,   862,   948,   635,   -61,  -202,   954,   370,
    -509,   956,   957,   263,   958,  -364,    39,   863,  -357,   747,
      38,   492,   934,    39,   966,   110,   795,   -76,   864,  -173,
     944,  -487,   946,   947,   948,   -76,   -76,   956,   957,   958,
     966,    76,   -76,  -511,   -61,  -362,    76,   209,   771,   772,
     699,  -192,   209,   200,   -76,    44,   478,    45,  -511,    46,
     799,   839,   478,   711,   -76,   211,   -76,   840,    47,   857,
      40,  -192,  -499,   -76,   478,  -202,  -202,    86,   121,    48,
    -364,   -76,   773,   774,   775,   735,   736,    49,    50,   858,
     461,   -76,   192,    51,    41,   218,  -592,  -466,   256,   197,
    -466,    41,  -466,   -27,   432,  -466,   260,   201,   214,   -25,
    -362,   -60,   859,   745,   746,   -76,  -592,   712,   -76,   -76,
     911,   433,   -76,   -21,  -592,   415,   -76,   124,    52,   -19,
     914,   434,   713,   749,  -101,   -76,   753,  -592,    76,   404,
     211,  -202,   750,   838,   894,   271,   249,  -466,   729,    76,
     370,   915,  -466,   916,  -154,   578,    82,   257,   -35,   435,
     810,  -592,    76,   810,   823,   436,   482,   484,   437,    54,
     438,    56,    57,   262,    83,   828,  -338,    36,  -466,   -60,
     439,   763,   764,  -466,   766,   767,   478,  -592,  -592,   478,
     440,   305,   441,   698,   277,    44,   219,    45,   278,    46,
    -592,  -592,  -592,  -338,   393,    86,   492,   120,    47,  -338,
     442,    33,   443,   583,    34,  -592,   224,   810,   225,    48,
    -464,   810,  -336,  -592,  -338,   492,   421,    49,    50,   238,
       3,  -592,  -592,    51,  -590,   737,   768,   769,   770,    -4,
       1,  -464,   239,     2,  -464,   423,    42,   264,    76,  -336,
     807,     4,   886,   811,   269,  -336,   810,   370,   492,     3,
     492,   492,   425,   546,   792,   492,   429,   634,    52,  -547,
    -336,   887,  -590,   827,   221,   222,   223,   360,   756,   588,
       4,   758,   757,  -590,   492,   492,   760,   492,   830,   697,
     759,   901,    35,   782,   797,   566,   619,   360,   704,   729,
      -3,     1,    37,   447,     2,   492,   106,   846,    53,    54,
      55,    56,    57,    58,    59,    60,   380,   810,   823,   823,
       3,     6,   556,   478,   634,   383,     0,     0,   810,   810,
       7,   823,   567,     0,     0,     0,     0,     0,   810,     0,
     823,     4,   823,   823,     0,   823,   872,     0,   810,   901,
     901,   785,   823,   823,     0,   823,     0,     0,   883,  -513,
     810,   810,  -513,   901,     0,   823,     0,     0,  -190,   810,
       0,   901,     0,   901,   901,   901,    76,   256,   901,   901,
     901,   901,     6,   905,   907,  -360,     0,     0,  -190,     0,
    -511,     7,     0,     0,     0,  -360,   370,  -355,   -86,   370,
     370,     0,  -581,  -360,     0,  -511,   918,   919,     0,     0,
       0,     0,   -86,     0,     0,   925,     0,     0,   928,     0,
    -581,     0,     0,  -360,  -258,   936,   938,  -362,     0,  -360,
    -360,     0,  -360,   -86,  -360,     0,   257,   950,   951,  -581,
       0,  -258,   370,  -259,  -360,  -360,     0,     0,     0,     0,
     959,  -258,     0,   370,  -360,     0,  -360,   370,  -202,  -258,
    -259,   370,  -509,   491,     0,     0,     0,   -86,  -557,  -557,
    -259,     0,     0,     0,  -360,  -557,  -360,     0,  -259,  -258,
    -581,  -581,     0,     0,     0,  -258,     0,  -557,  -258,  -581,
    -258,     0,   370,  -581,   370,     0,   370,   370,  -259,  -557,
    -258,   370,     0,   370,  -259,     0,  -557,  -259,     0,  -259,
    -258,     0,  -258,   370,  -557,  -513,     0,     0,     0,  -259,
     370,   370,  -581,   370,     0,     0,  -581,   370,     0,  -259,
    -258,  -259,  -258,   370,     0,     0,     0,     0,     0,     0,
      81,   370,  -581,     2,     0,    78,    78,     0,  -557,  -259,
       0,  -259,  -557,   370,   370,   370,    78,     0,     0,     3,
     370,     0,    78,  -581,   370,   370,  -509,   370,    78,     0,
       0,     0,     0,     0,   370,     0,   370,     0,   370,   370,
       4,   370,     0,     0,   370,   370,   370,    26,   370,   370,
       0,   370,     0,     0,     0,     0,   370,   370,     0,   370,
       0,   370,     0,     0,  -581,   370,     0,   370,     0,   370,
     370,   370,     0,  -581,   370,   370,   370,   370,     0,    78,
       0,     6,    78,     0,     0,     0,     0,     0,  -536,  -536,
       7,    78,   829,    78,    45,  -536,    46,    78,     0,     0,
       0,    78,     0,     0,     0,    47,     0,  -536,     0,     0,
       0,    78,     0,     0,     0,     0,    48,     0,     0,  -536,
       0,    93,     0,   283,    49,    50,  -536,     0,     0,     0,
      51,   284,     0,     0,  -536,     0,     0,    78,     0,    78,
       1,     0,     0,     2,    78,     0,     0,     0,    78,     0,
       0,   257,    78,     0,    78,   615,     0,     0,     0,     3,
     508,   288,   509,     0,   289,    52,     0,     0,  -536,   329,
     291,   744,  -536,     0,     0,     0,    68,    68,     0,     0,
       4,     0,   329,     0,   293,     0,     0,    68,   294,     0,
      78,   297,    78,    68,     0,   299,     0,     0,    78,    68,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    59,    60,     0,     5,     0,     0,     0,    78,     0,
       0,     6,     0,     0,     0,    78,     0,     0,     0,     0,
       7,    78,    78,     0,     0,     0,     0,     0,     0,     0,
     329,     0,     0,    78,   329,     0,    78,     0,     0,     0,
      68,    78,     0,    68,     0,    78,     0,    78,     0,     0,
      78,     0,    68,     0,    68,    44,     0,    45,    68,    46,
       0,     0,    68,  -462,     0,     0,     0,     0,    47,     0,
       0,     0,    68,  -462,     0,     0,     0,     0,    78,    48,
       0,  -462,     0,     0,     0,     0,     0,    49,    50,     0,
       0,   329,     0,    51,     0,     0,     0,     0,    68,     0,
      68,  -462,     0,     0,   816,    68,     0,  -462,     0,    68,
    -462,     0,  -462,    68,     0,    68,     0,     0,     0,     0,
     118,   403,  -462,     0,   -84,   479,     0,   479,    52,   487,
       0,     0,  -462,     0,  -462,     0,    78,    78,     0,   479,
       0,     0,   -84,     0,     0,     0,   842,    78,     0,     0,
       0,    68,  -462,    68,  -462,     0,   404,     0,     0,    68,
       0,   -84,     0,   487,     0,   852,     0,     0,    53,    54,
      55,    56,    57,    58,    59,    60,    78,   249,     0,    68,
       0,     0,   330,     0,     0,     0,    68,     0,     0,     0,
      78,     0,    68,    68,     0,   330,     0,     0,   876,     0,
     878,   879,   -84,   -84,    68,   880,     0,    68,   826,     0,
       0,   -84,    68,     0,     0,   -84,    68,     0,    68,     0,
       0,    68,     0,     0,   896,   897,     0,   898,     0,     0,
       0,     0,   329,  -466,     0,    78,     0,     0,     0,     0,
      78,  -466,  -466,     0,     0,   913,     0,     0,  -466,    68,
     479,     0,     0,   330,     0,     0,   479,   330,   816,   842,
    -466,     0,     0,     0,     0,     0,     0,     0,   479,     0,
       0,   852,  -466,     0,     0,     0,     0,     0,     0,  -466,
     876,     0,   878,   879,     0,   880,     0,  -466,     0,     0,
       0,     0,   896,   897,     0,   898,   477,     0,   477,     0,
       0,     0,     0,     0,     0,   913,     0,    68,    68,     0,
     477,  -466,     0,     0,   330,     0,     0,     0,    68,     0,
       0,  -466,     0,     0,     0,  -466,     0,     0,     0,     0,
       0,     0,    78,   331,     0,   904,     0,     0,     0,   329,
    -466,     0,   730,    78,     0,     0,   331,    68,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,     0,     0,
       0,    68,   826,   826,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   826,     0,     0,     0,     0,
     479,     0,  -461,   479,   826,     0,   826,   826,     0,   826,
       0,     0,  -461,   904,   904,     0,   826,   826,     0,   826,
    -461,     0,     0,     0,   331,     0,    68,   904,   331,   826,
       0,    68,     0,     0,     0,   904,     0,   904,   904,   904,
    -461,   477,   904,   904,   904,   904,  -461,   477,     0,  -461,
     542,  -461,     0,     0,   542,     0,     0,   -75,     0,   477,
       0,  -461,    78,     0,     0,   -75,   -75,     0,     0,     0,
       0,  -461,   -75,  -461,     0,   330,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,   331,     0,     0,     0,     0,
       0,  -461,     0,  -461,   -75,     0,   -75,     0,   329,     0,
       0,   329,   329,   -75,   332,     0,     0,     0,     0,     0,
       0,   -75,     0,   730,     0,     0,     0,   332,     0,     0,
       0,   -75,     0,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   725,    68,     0,     0,   479,     0,     0,
       0,     0,     0,     0,   329,   -75,     0,    68,   -75,   -75,
       0,     0,   -75,     0,     0,   329,   -75,     0,     0,   329,
    -509,     0,     0,   329,  -100,   -75,  -557,  -557,     0,     0,
       0,   477,     0,  -557,   477,   332,     0,     0,     0,   332,
       0,     0,   330,     0,     0,  -557,     0,     0,     0,     0,
      78,     0,     0,     0,   329,     0,   329,  -557,   329,   329,
       0,     0,     0,   329,  -557,   329,     0,  -541,     0,     0,
       0,     0,  -557,  -513,     0,   329,   542,   542,   542,   542,
       0,     0,   329,   329,     0,   329,   331,     0,     0,   329,
       0,     0,     0,    68,     0,   329,   332,     0,     0,     0,
       0,     0,     0,   329,     0,     0,  -557,     0,     0,     0,
    -557,     0,     0,     0,     0,   329,   329,   329,     0,     0,
       0,     0,   329,     0,  -509,     0,   329,   329,     0,   329,
       0,     0,     0,     0,     0,     0,   329,     0,   329,     0,
     329,   329,     0,   329,   725,     0,   329,   329,   329,     0,
     329,   329,     0,   329,     0,     0,     0,     0,   329,   329,
       0,   329,     0,   329,     0,     0,     0,   329,   477,   329,
       0,   329,   329,   329,     0,     0,   329,   329,   329,   329,
     542,   330,     0,   542,   330,   330,   542,   333,     0,   542,
       0,     0,   542,   331,     0,     0,   542,   542,     0,     0,
     333,     0,     0,     0,   542,   542,     0,   542,   542,     0,
       0,     0,     0,   542,   542,   542,   542,   542,     0,     0,
       0,    68,   542,   542,   542,     0,     0,   330,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   332,   330,     0,
       0,     0,   330,  -509,     0,     0,   330,     0,     0,  -557,
    -557,     0,     0,     0,     0,     0,  -557,     0,   333,     0,
       0,     0,   333,     0,     0,     0,     0,     0,  -557,     0,
       0,     0,     0,     0,     0,     0,     0,   330,     0,   330,
    -557,   330,   330,     0,     0,     0,   330,  -557,   330,     0,
       0,     0,     0,     0,   542,  -557,  -513,     0,   330,     0,
       0,     0,     0,     0,     0,   330,   330,     0,   330,     0,
       0,     0,   330,     0,     0,   542,   542,     0,   330,   333,
       0,     0,     0,     0,     0,     0,   330,  -592,     0,  -557,
       0,     0,   331,  -557,     0,   331,   331,     0,   330,   330,
     330,     0,     0,     0,   332,   330,     0,  -509,     0,   330,
     330,     0,   330,     0,     0,     0,     0,     0,     0,   330,
       0,   330,     0,   330,   330,     0,   330,     0,     0,   330,
     330,   330,     0,   330,   330,     0,   330,     0,   331,     0,
       0,   330,   330,     0,   330,     0,   330,     0,     0,   331,
     330,     0,   330,   331,   330,   330,   330,   331,     0,   330,
     330,   330,   330,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   331,     0,
     331,     0,   331,   331,   334,     0,     0,   331,     0,   331,
       0,     0,     0,     0,     0,     0,     0,   334,     0,   331,
       0,     0,     0,     0,     0,     0,   331,   331,     0,   331,
     333,     0,     0,   331,     0,     0,     0,     0,     0,   331,
       0,     0,     0,     0,     0,     0,     0,   331,     0,     0,
       0,     0,     0,   332,     0,     0,   332,   332,     0,   331,
     331,   331,     0,     0,     0,     0,   331,     0,     0,     0,
     331,   331,     0,   331,     0,   334,     0,     0,     0,   334,
     331,     0,   331,     0,   331,   331,     0,   331,     0,     0,
     331,   331,   331,     0,   331,   331,     0,   331,     0,   332,
       0,     0,   331,   331,     0,   331,     0,   331,     0,     0,
     332,   331,     0,   331,   332,   331,   331,   331,   332,     0,
     331,   331,   331,   331,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   334,   333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   332,
       0,   332,     0,   332,   332,   338,     0,     0,   332,     0,
     332,     0,     0,     0,     0,     0,     0,     0,   338,     0,
     332,     0,     0,     0,     0,     0,     0,   332,   332,     0,
     332,     0,     0,     0,   332,     0,     0,     0,     0,     0,
     332,     0,     0,     0,     0,     0,     0,     0,   332,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     332,   332,   332,     0,     0,     0,     0,   332,     0,     0,
       0,   332,   332,     0,   332,     0,   338,     0,     0,     0,
     338,   332,     0,   332,     0,   332,   332,     0,   332,     0,
       0,   332,   332,   332,     0,   332,   332,     0,   332,     0,
       0,     0,     0,   332,   332,     0,   332,     0,   332,     0,
       0,     0,   332,     0,   332,     0,   332,   332,   332,     0,
       0,   332,   332,   332,   332,     0,   333,   334,     0,   333,
     333,  -202,     0,     0,     0,     0,     0,   338,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -360,     0,
       0,     0,  -202,     0,     0,     0,     0,     0,  -360,     0,
    -355,     0,     0,     0,     0,     0,  -360,     0,     0,     0,
       0,     0,   333,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   333,     0,     0,  -360,   333,     0,     0,
    -362,   333,  -360,  -360,     0,  -360,     0,  -360,     0,     0,
       0,  -590,     0,  -509,     0,     0,     0,  -360,  -360,  -557,
    -557,     0,     0,     0,     0,     0,  -557,  -360,  -590,  -360,
       0,  -202,   333,     0,   333,     0,   333,   333,  -557,     0,
       0,   333,   818,   333,   334,     0,     0,  -360,  -590,  -360,
    -557,     0,     0,   333,     0,     0,     0,  -557,     0,     0,
     333,   333,     0,   333,     0,  -557,  -513,   333,     0,     0,
       0,     0,     0,   333,     0,     0,     0,     0,     0,     0,
       0,   333,     0,     0,     0,     0,     0,     0,   338,  -590,
    -590,     0,  -590,   333,   333,   333,     0,     0,  -590,  -557,
     333,     0,  -590,  -557,   333,   333,     0,   333,     0,     0,
       0,     0,     0,     0,   333,     0,   333,  -509,   333,   333,
       0,   333,     0,     0,   333,   333,   333,     0,   333,   333,
       0,   333,     0,     0,     0,     0,   333,   333,     0,   333,
       0,   333,     0,     0,     0,   333,     0,   333,     0,   333,
     333,   333,     0,     0,   333,   333,   333,   333,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   900,
       0,     0,     0,     0,     0,   422,     0,     0,     0,     0,
       0,     0,     0,   334,     0,     0,   334,   334,     0,     0,
       0,     0,     0,     0,     0,   338,   818,   818,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   818,
       0,     0,     0,     0,     0,     0,     0,     0,   818,     0,
     818,   818,     0,   818,     0,     0,     0,   900,   900,   334,
     818,   818,     0,   818,     0,     0,     0,     0,     0,     0,
     334,   900,     0,   818,   334,     0,     0,     0,   334,   900,
       0,   900,   900,   900,     0,     0,   900,   900,   900,   900,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   334,
       0,   334,     0,   334,   334,     0,     0,     0,   334,     0,
     334,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     334,     0,     0,     0,     0,     0,     0,   334,   334,     0,
     334,     0,     0,   582,   334,     0,     0,     0,     0,     0,
     334,   586,     0,     0,     0,     0,     0,     0,   334,     0,
       0,     0,     0,     0,   338,     0,     0,   338,   338,     0,
     334,   334,   334,     0,     0,     0,     0,   334,     0,     0,
       0,   334,   334,     0,   334,     0,     0,     0,     0,     0,
       0,   334,     0,   334,   596,   334,   334,     0,   334,     0,
       0,   334,   334,   334,     0,   334,   334,     0,   334,     0,
     338,     0,     0,   334,   334,     0,   334,     0,   334,     0,
       0,   338,   334,     0,   334,   338,   334,   334,   334,   338,
       0,   334,   334,   334,   334,     0,     0,     0,     0,     0,
       0,   638,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     338,     0,   338,     0,   338,   338,     0,     0,     0,   338,
       0,   338,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   338,     0,     0,     0,     0,     0,     0,   338,   338,
       0,   338,     0,     0,     0,   338,   513,     0,     0,   511,
       0,   338,     0,   513,     0,     0,   549,     0,     0,   338,
     513,     0,     0,   562,     0,     0,     0,     0,     0,     0,
       0,   338,   338,   338,     0,   741,     0,     0,   338,     0,
       0,   513,   338,   338,   577,   338,     0,     0,     0,     0,
       0,   824,   338,     0,   338,     0,   338,   338,     0,   338,
       0,     0,   338,   338,   338,     0,   338,   338,     0,   338,
       0,     0,     0,     0,   338,   338,   754,   338,     0,   338,
     513,     0,     0,   338,     0,   338,     0,   338,   338,   338,
       0,     0,   338,   338,   338,   338,     0,     0,   513,   513,
     513,   591,   592,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   776,   777,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   784,     0,
       0,   513,     0,     0,   636,     0,     0,   786,   787,   788,
     789,   513,     0,     0,   640,     0,     0,   796,     0,     0,
       0,   543,     0,     0,     0,   543,     0,     0,     0,     0,
       0,     0,   513,     0,     0,   511,     0,   802,   902,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   815,   513,   513,   513,   513,   708,   709,
     513,     0,     0,   717,     0,   824,   824,     0,     0,     0,
       0,     0,     0,     0,   513,     0,     0,   577,   824,     0,
       0,     0,     0,   834,     0,   836,     0,   824,     0,   824,
     824,     0,   824,     0,     0,     0,   902,   902,     0,   824,
     824,   844,   824,     0,     0,   845,     0,   848,     0,     0,
     902,   850,   824,   851,     0,     0,     0,     0,   902,     0,
     902,   902,   902,     0,     0,   902,   902,   902,   902,     0,
       0,   513,     0,     0,   752,   861,     0,     0,     0,     0,
       0,   871,     0,     0,     0,     0,   874,   875,     0,   877,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   544,     0,     0,     0,   544,     0,     0,
       0,     0,     0,   895,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   908,   909,     0,   543,   543,   543,
     543,     0,   513,     0,   513,   781,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   921,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   930,   932,
     933,     0,     0,     0,     0,     0,   939,   940,   942,   943,
       0,   945,     0,   513,     0,     0,   513,     0,   953,   803,
       0,   955,     0,   513,     0,   513,   805,     0,   806,     0,
     961,   963,   964,     0,     0,     0,     0,     0,     0,   968,
     969,     0,   970,     0,     0,     0,     0,   971,     0,     0,
       0,     0,     0,     0,     0,     0,   513,     0,     0,   781,
       0,   513,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   543,     0,     0,   543,   513,     0,   543,   577,     0,
     543,     0,     0,   543,     0,     0,     0,   543,   543,     0,
       0,     0,     0,     0,     0,   543,   543,   825,   543,   543,
       0,     0,     0,     0,   543,   543,   543,   543,   543,   544,
     544,   544,   544,   543,   543,   543,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   513,   513,     0,   884,   885,     0,
       0,     0,     0,     0,     0,   513,     0,     0,   892,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   513,
       0,     0,   906,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   513,     0,     0,   917,   543,     0,     0,     0,     0,
       0,   513,   513,     0,   926,   927,     0,     0,     0,     0,
       0,   513,     0,     0,   937,     0,   543,   543,     0,     0,
       0,     0,   513,   544,     0,   949,   544,     0,     0,   544,
       0,     0,   544,     0,   903,   544,     0,     0,     0,   544,
     544,     0,     0,     0,     0,     0,     0,   544,   544,     0,
     544,   544,     0,     0,     0,     0,   544,   544,   544,   544,
     544,   825,   825,     0,     0,   544,   544,   544,     0,     0,
       0,     0,     0,     0,   825,     0,     0,     0,     0,     0,
       0,     0,     0,   825,     0,   825,   825,     0,   825,     0,
       0,     0,   903,   903,     0,   825,   825,     0,   825,     0,
       0,     0,     0,     0,     0,     0,   903,     0,   825,     0,
       0,     0,     0,     0,   903,     0,   903,   903,   903,     0,
       0,   903,   903,   903,   903,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   565,   544,  -381,  -381,
    -381,     0,  -381,  -381,  -381,  -381,     0,     0,     0,  -381,
       0,     0,  -381,  -460,     0,     0,  -381,  -381,   544,   544,
    -381,     0,  -381,  -460,     0,  -381,     0,  -381,  -381,  -381,
       0,  -460,  -381,     0,  -381,  -381,  -381,     0,     0,     0,
       0,     0,     0,     0,  -381,     0,     0,     0,     0,  -381,
    -381,  -460,  -381,     0,  -381,  -381,  -381,  -460,  -381,  -381,
    -460,  -381,  -460,     0,  -381,  -381,  -381,  -381,  -381,    52,
       0,  -381,  -460,  -381,  -381,     0,     0,  -381,  -381,     0,
    -381,  -381,  -460,  -381,  -460,  -381,  -381,     0,  -381,  -381,
    -381,     0,  -381,     0,     0,  -381,     0,     0,     0,  -381,
       0,  -381,  -460,  -381,  -460,     0,     0,     0,     0,    53,
      54,  -381,  -381,  -381,  -381,  -381,  -381,   461,     0,  -320,
    -320,  -320,     0,  -320,  -320,  -320,  -320,     0,     0,     0,
    -320,     0,     0,  -320,  -257,     0,     0,  -320,  -320,     0,
       0,  -320,     0,  -320,  -257,     0,  -320,     0,  -320,  -320,
    -320,     0,  -257,  -320,     0,  -320,  -320,  -320,     0,     0,
       0,     0,     0,     0,     0,  -320,     0,     0,     0,     0,
    -320,  -320,  -257,   249,     0,     0,  -320,  -320,  -257,  -320,
    -320,  -257,  -320,  -257,     0,  -320,  -320,  -320,  -320,  -320,
    -320,     0,  -320,  -257,  -320,  -320,     0,     0,  -320,  -320,
       0,  -320,  -320,  -257,  -320,  -257,  -320,  -320,     0,  -320,
    -320,  -320,     0,  -320,     0,     0,  -320,     0,     0,     0,
    -320,     0,  -320,  -257,  -320,  -257,     0,     0,     0,     0,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,  -320,   466,     0,
    -375,  -375,  -375,     0,  -375,  -375,  -375,  -375,     0,     0,
       0,  -375,     0,     0,  -375,     0,     0,     0,  -375,  -375,
       0,     0,  -375,     0,  -375,     0,     0,  -375,     0,  -375,
    -375,  -375,     0,     0,  -375,     0,  -375,  -375,  -375,     0,
       0,     0,     0,     0,     0,     0,  -375,     0,     0,     0,
       0,  -375,  -375,     0,  -375,     0,   467,  -375,  -375,     0,
    -375,  -375,     0,  -375,     0,     0,  -375,  -375,  -375,  -375,
    -375,  -375,     0,  -375,     0,  -375,  -375,     0,     0,  -375,
    -375,     0,  -375,  -375,     0,  -375,     0,  -375,  -375,     0,
    -375,  -375,  -375,     0,  -375,     0,     0,  -375,     0,     0,
       0,  -375,     0,  -375,     0,  -375,     0,     0,     0,     0,
       0,  -375,  -375,  -375,  -375,  -375,  -375,  -375,  -375,   480,
       0,  -383,  -383,  -383,     0,  -383,  -383,  -383,  -383,     0,
       0,     0,  -383,     0,     0,  -383,     0,     0,     0,  -383,
    -383,     0,     0,  -383,     0,  -383,     0,     0,  -383,     0,
    -383,  -383,    50,     0,     0,  -383,     0,  -383,  -383,  -383,
       0,     0,     0,     0,     0,     0,     0,  -383,     0,     0,
       0,     0,  -383,  -383,     0,  -383,     0,  -383,  -383,  -383,
       0,  -383,  -383,     0,  -383,     0,     0,  -383,  -383,  -383,
    -383,  -383,    52,     0,  -383,     0,  -383,  -383,     0,     0,
    -383,  -383,     0,  -383,  -383,     0,  -383,     0,  -383,  -383,
       0,  -383,  -383,  -383,     0,  -383,     0,     0,  -383,     0,
       0,     0,  -383,     0,  -383,     0,  -383,     0,     0,     0,
       0,     0,  -383,    54,  -383,  -383,  -383,  -383,  -383,  -383,
     466,     0,  -377,  -377,  -377,     0,  -377,  -377,  -377,  -377,
       0,     0,     0,  -377,     0,     0,  -377,     0,     0,     0,
    -377,  -377,     0,     0,  -377,     0,  -377,     0,     0,  -377,
       0,  -377,  -377,  -377,     0,     0,  -377,     0,  -377,  -377,
    -377,     0,     0,     0,     0,     0,     0,     0,  -377,     0,
       0,     0,     0,  -377,  -377,     0,  -377,     0,   467,  -377,
    -377,     0,  -377,  -377,     0,  -377,     0,     0,  -377,  -377,
    -377,  -377,  -377,  -377,     0,  -377,     0,  -377,  -377,     0,
       0,  -377,  -377,     0,  -377,  -377,     0,  -377,     0,  -377,
    -377,     0,  -377,  -377,  -377,     0,  -377,     0,     0,  -377,
       0,     0,     0,  -377,     0,  -377,     0,  -377,     0,     0,
       0,     0,     0,  -377,  -377,  -377,  -377,  -377,  -377,  -377,
    -377,   483,     0,  -379,  -379,  -379,     0,  -379,  -379,  -379,
    -379,     0,     0,     0,  -379,     0,     0,  -379,     0,     0,
       0,  -379,  -379,     0,     0,  -379,     0,  -379,     0,     0,
    -379,     0,  -379,  -379,  -379,     0,     0,  -379,     0,  -379,
    -379,  -379,     0,     0,     0,     0,     0,     0,     0,  -379,
       0,     0,     0,     0,  -379,  -379,     0,  -379,     0,   467,
    -379,  -379,     0,  -379,  -379,     0,  -379,     0,     0,  -379,
    -379,  -379,  -379,  -379,    52,     0,  -379,     0,  -379,  -379,
       0,     0,  -379,  -379,     0,  -379,  -379,     0,  -379,     0,
    -379,  -379,     0,  -379,  -379,  -379,     0,  -379,     0,     0,
    -379,     0,     0,     0,  -379,     0,  -379,     0,  -379,     0,
       0,     0,     0,     0,  -379,    54,  -379,  -379,  -379,  -379,
    -379,  -379,   480,     0,  -382,  -382,  -382,     0,  -382,  -382,
    -382,  -382,     0,     0,     0,  -382,     0,     0,  -382,     0,
       0,     0,  -382,  -382,     0,     0,  -382,     0,  -382,     0,
       0,  -382,     0,  -382,  -382,    50,     0,     0,  -382,     0,
    -382,  -382,  -382,     0,     0,     0,     0,     0,     0,     0,
    -382,     0,     0,     0,     0,  -382,  -382,     0,  -382,     0,
    -382,  -382,  -382,     0,  -382,  -382,     0,  -382,     0,     0,
    -382,  -382,  -382,  -382,  -382,    52,     0,  -382,     0,  -382,
    -382,     0,     0,  -382,  -382,     0,  -382,  -382,     0,  -382,
       0,  -382,  -382,     0,  -382,  -382,  -382,     0,  -382,     0,
       0,  -382,     0,     0,     0,  -382,     0,  -382,     0,  -382,
       0,     0,     0,     0,     0,  -382,    54,  -382,  -382,  -382,
    -382,  -382,  -382,    44,     0,    45,  -390,    46,     0,  -390,
    -390,  -390,  -390,     0,     0,     0,    47,     0,     0,  -390,
       0,     0,     0,  -390,  -390,     0,     0,    48,     0,  -390,
       0,     0,  -390,     0,  -390,    49,    50,     0,     0,  -390,
       0,    51,  -390,  -390,     0,     0,     0,     0,     0,     0,
       0,  -390,     0,     0,     0,     0,  -390,  -390,     0,  -390,
       0,  -390,  -390,  -390,     0,  -390,  -390,     0,  -390,     0,
       0,  -390,  -390,  -390,  -390,  -390,    52,     0,  -390,     0,
    -390,  -390,     0,     0,  -390,  -390,     0,  -390,  -390,     0,
    -390,     0,  -390,  -390,     0,  -390,  -390,  -390,     0,  -390,
       0,     0,  -390,     0,     0,     0,  -390,     0,  -390,     0,
    -390,     0,     0,     0,     0,     0,  -390,    54,  -390,    56,
      57,  -390,  -390,  -390,   461,     0,  -331,  -331,  -331,     0,
    -331,  -331,  -331,  -331,     0,     0,     0,  -331,     0,     0,
    -331,     0,     0,     0,  -331,  -331,     0,     0,  -331,     0,
    -331,     0,     0,  -331,     0,  -331,  -331,  -331,     0,     0,
    -331,     0,  -331,  -331,  -331,     0,     0,     0,     0,     0,
       0,     0,  -331,     0,     0,     0,     0,  -331,  -331,     0,
     249,     0,     0,  -331,  -331,     0,  -331,  -331,     0,  -331,
       0,     0,  -331,  -331,  -331,  -331,  -331,  -331,     0,  -331,
       0,  -331,  -331,     0,     0,  -331,  -331,     0,  -331,  -331,
       0,  -331,     0,  -331,  -331,     0,  -331,  -331,  -331,     0,
    -331,     0,     0,  -331,     0,     0,     0,  -331,     0,  -331,
       0,  -331,     0,     0,     0,     0,     0,  -331,  -331,  -331,
    -331,  -331,  -331,  -331,  -331,   598,     0,  -413,  -413,  -413,
       0,  -413,  -413,  -413,  -413,     0,     0,     0,  -413,     0,
       0,  -413,     0,     0,     0,  -413,  -413,     0,     0,    48,
       0,  -413,     0,     0,  -413,     0,  -413,  -413,  -413,     0,
       0,  -413,     0,    51,  -413,  -413,     0,     0,     0,     0,
       0,     0,     0,  -413,     0,     0,     0,     0,  -413,  -413,
       0,  -413,     0,     0,  -413,  -413,     0,  -413,  -413,     0,
    -413,     0,     0,  -413,  -413,  -413,  -413,  -413,  -413,     0,
    -413,     0,  -413,  -413,     0,     0,  -413,  -413,     0,  -413,
    -413,     0,  -413,     0,  -413,  -413,     0,  -413,  -413,  -413,
       0,  -413,     0,     0,  -413,     0,     0,     0,  -413,     0,
    -413,     0,  -413,     0,     0,     0,     0,     0,  -413,  -413,
    -413,  -413,    57,  -413,  -413,  -413,   461,     0,  -320,  -320,
    -320,     0,  -320,  -320,  -320,  -320,     0,     0,     0,  -320,
       0,     0,  -320,     0,     0,     0,  -320,  -320,     0,     0,
    -320,     0,  -320,     0,     0,  -320,     0,  -320,  -320,  -320,
       0,     0,  -320,     0,  -320,  -320,  -320,     0,     0,     0,
       0,     0,     0,     0,  -320,     0,     0,     0,     0,  -320,
    -320,     0,   249,     0,     0,  -320,  -320,     0,  -320,  -320,
       0,  -320,     0,     0,  -320,  -320,  -320,  -320,  -320,  -320,
       0,  -320,     0,  -320,  -320,     0,     0,  -320,  -320,     0,
    -320,  -320,     0,  -320,     0,  -320,  -320,     0,  -320,  -320,
    -320,     0,  -320,     0,     0,  -320,     0,     0,     0,  -320,
       0,  -320,     0,  -320,     0,     0,     0,     0,     0,  -320,
    -320,  -320,  -320,  -320,  -320,  -320,  -320,   598,     0,  -412,
    -412,  -412,     0,  -412,  -412,  -412,  -412,     0,     0,     0,
    -412,     0,     0,  -412,     0,     0,     0,  -412,  -412,     0,
       0,    48,     0,  -412,     0,     0,  -412,     0,  -412,  -412,
    -412,     0,     0,  -412,     0,    51,  -412,  -412,     0,     0,
       0,     0,     0,     0,     0,  -412,     0,     0,     0,     0,
    -412,  -412,     0,  -412,     0,     0,  -412,  -412,     0,  -412,
    -412,     0,  -412,     0,     0,  -412,  -412,  -412,  -412,  -412,
    -412,     0,  -412,     0,  -412,  -412,     0,     0,  -412,  -412,
       0,  -412,  -412,     0,  -412,     0,  -412,  -412,     0,  -412,
    -412,  -412,     0,  -412,     0,     0,  -412,     0,     0,     0,
    -412,     0,  -412,     0,  -412,     0,     0,     0,     0,     0,
    -412,  -412,  -412,  -412,    57,  -412,  -412,  -412,   461,     0,
    -346,  -346,  -346,     0,  -346,  -346,  -346,  -346,     0,     0,
       0,  -346,     0,     0,  -346,     0,     0,     0,  -346,  -346,
       0,     0,  -346,     0,  -346,     0,     0,  -346,     0,  -346,
    -346,  -346,     0,     0,  -346,     0,  -346,  -346,  -346,     0,
       0,     0,     0,     0,     0,     0,  -346,     0,     0,     0,
       0,  -346,  -346,     0,   249,     0,     0,  -346,  -346,     0,
    -346,  -346,     0,  -346,     0,     0,  -346,  -346,  -346,  -346,
    -346,  -346,     0,  -346,     0,  -346,  -346,     0,     0,  -346,
    -346,     0,  -346,  -346,     0,  -346,     0,  -346,  -346,     0,
    -346,  -346,  -346,     0,  -346,     0,     0,  -346,     0,     0,
       0,  -346,     0,  -346,     0,  -346,     0,     0,     0,     0,
       0,  -346,  -346,  -346,  -346,  -346,  -346,  -346,  -346,   461,
       0,  -347,  -347,  -347,     0,  -347,  -347,  -347,  -347,     0,
       0,     0,  -347,     0,     0,  -347,     0,     0,     0,  -347,
    -347,     0,     0,  -347,     0,  -347,     0,     0,  -347,     0,
    -347,  -347,  -347,     0,     0,  -347,     0,  -347,  -347,  -347,
       0,     0,     0,     0,     0,     0,     0,  -347,     0,     0,
       0,     0,  -347,  -347,     0,   249,     0,     0,  -347,  -347,
       0,  -347,  -347,     0,  -347,     0,     0,  -347,  -347,  -347,
    -347,  -347,  -347,     0,  -347,     0,  -347,  -347,     0,     0,
    -347,  -347,     0,  -347,  -347,     0,  -347,     0,  -347,  -347,
       0,  -347,  -347,  -347,     0,  -347,     0,     0,  -347,     0,
       0,     0,  -347,     0,  -347,     0,  -347,     0,     0,     0,
       0,     0,  -347,  -347,  -347,  -347,  -347,  -347,  -347,  -347,
     480,     0,  -416,  -416,  -416,     0,  -416,  -416,  -416,  -416,
       0,     0,     0,  -416,     0,     0,  -416,     0,     0,     0,
    -416,  -416,     0,     0,  -416,     0,  -416,     0,     0,  -416,
       0,  -416,  -416,    50,     0,     0,  -416,     0,  -416,  -416,
    -416,     0,     0,     0,     0,     0,     0,     0,  -416,     0,
       0,     0,     0,  -416,  -416,     0,  -416,     0,     0,  -416,
    -416,     0,  -416,  -416,     0,  -416,     0,     0,  -416,  -416,
    -416,  -416,  -416,    52,     0,  -416,     0,  -416,  -416,     0,
       0,  -416,  -416,     0,  -416,  -416,     0,  -416,     0,  -416,
    -416,     0,  -416,  -416,  -416,     0,  -416,     0,     0,  -416,
       0,     0,     0,  -416,     0,  -416,     0,  -416,     0,     0,
       0,     0,     0,  -416,    54,  -416,  -416,  -416,  -416,  -416,
    -416,   598,     0,  -411,  -411,  -411,     0,  -411,  -411,  -411,
    -411,     0,     0,     0,  -411,     0,     0,  -411,     0,     0,
       0,  -411,  -411,     0,     0,    48,     0,  -411,     0,     0,
    -411,     0,  -411,  -411,  -411,     0,     0,  -411,     0,    51,
    -411,  -411,     0,     0,     0,     0,     0,     0,     0,  -411,
       0,     0,     0,     0,  -411,  -411,     0,  -411,     0,     0,
    -411,  -411,     0,  -411,  -411,     0,  -411,     0,     0,  -411,
    -411,  -411,  -411,  -411,  -411,     0,  -411,     0,  -411,  -411,
       0,     0,  -411,  -411,     0,  -411,  -411,     0,  -411,     0,
    -411,  -411,     0,  -411,  -411,  -411,     0,  -411,     0,     0,
    -411,     0,     0,     0,  -411,     0,  -411,     0,  -411,     0,
       0,     0,     0,     0,  -411,  -411,  -411,  -411,    57,  -411,
    -411,  -411,   461,     0,  -344,  -344,  -344,     0,  -344,  -344,
    -344,  -344,     0,     0,     0,  -344,     0,     0,  -344,     0,
       0,     0,  -344,  -344,     0,     0,  -344,     0,  -344,     0,
       0,  -344,     0,  -344,  -344,  -344,     0,     0,  -344,     0,
    -344,  -344,  -344,     0,     0,     0,     0,     0,     0,     0,
    -344,     0,     0,     0,     0,  -344,  -344,     0,   249,     0,
       0,  -344,  -344,     0,  -344,  -344,     0,  -344,     0,     0,
    -344,  -344,  -344,  -344,  -344,  -344,     0,  -344,     0,  -344,
    -344,     0,     0,  -344,  -344,     0,  -344,  -344,     0,  -344,
       0,  -344,  -344,     0,  -344,  -344,  -344,     0,  -344,     0,
       0,  -344,     0,     0,     0,  -344,     0,  -344,     0,  -344,
       0,     0,     0,     0,     0,  -344,  -344,  -344,  -344,  -344,
    -344,  -344,  -344,   461,     0,  -345,  -345,  -345,     0,  -345,
    -345,  -345,  -345,     0,     0,     0,  -345,     0,     0,  -345,
       0,     0,     0,  -345,  -345,     0,     0,  -345,     0,  -345,
       0,     0,  -345,     0,  -345,  -345,  -345,     0,     0,  -345,
       0,  -345,  -345,  -345,     0,     0,     0,     0,     0,     0,
       0,  -345,     0,     0,     0,     0,  -345,  -345,     0,   249,
       0,     0,  -345,  -345,     0,  -345,  -345,     0,  -345,     0,
       0,  -345,  -345,  -345,  -345,  -345,  -345,     0,  -345,     0,
    -345,  -345,     0,     0,  -345,  -345,     0,  -345,  -345,     0,
    -345,     0,  -345,  -345,     0,  -345,  -345,  -345,     0,  -345,
       0,     0,  -345,     0,     0,     0,  -345,     0,  -345,     0,
    -345,     0,     0,     0,     0,     0,  -345,  -345,  -345,  -345,
    -345,  -345,  -345,  -345,    96,     0,  -319,  -319,  -319,     0,
    -319,  -319,  -319,  -319,     0,     0,     0,  -319,     0,     0,
    -319,     0,     0,     0,  -319,  -319,     0,     0,  -319,     0,
    -319,     0,     0,    93,     0,  -319,  -319,  -319,     0,     0,
    -319,     0,  -319,  -319,  -319,     0,     0,     0,     0,     0,
       0,     0,  -319,     0,     0,     0,     0,  -319,  -319,     0,
       0,     0,     0,  -319,  -319,     0,  -319,  -319,     0,  -319,
       0,     0,  -319,  -319,  -319,  -319,  -319,  -319,     0,  -319,
       0,  -319,  -319,     0,     0,  -319,  -319,     0,  -319,  -319,
       0,  -319,     0,  -319,  -319,     0,  -319,  -319,  -319,     0,
    -319,     0,     0,  -319,     0,     0,     0,  -319,     0,  -319,
       0,  -319,     0,     0,     0,     0,     0,  -319,  -319,  -319,
    -319,  -319,  -319,  -319,  -319,   679,     0,  -297,  -297,  -297,
       0,  -297,  -297,  -297,  -297,     0,     0,     0,  -297,     0,
       0,  -297,     0,     0,     0,  -297,  -297,     0,     0,  -297,
       0,   680,     0,     0,  -297,     0,  -297,  -297,  -297,     0,
       0,  -297,     0,  -297,  -297,  -297,     0,     0,     0,     0,
       0,     0,     0,  -297,     0,     0,     0,     0,  -297,  -297,
       0,     0,     0,     0,  -297,  -297,     0,  -297,   681,     0,
     682,     0,     0,  -297,  -297,  -297,  -297,  -297,  -297,     0,
    -297,     0,  -297,  -297,     0,     0,  -297,  -297,     0,  -297,
    -297,     0,  -297,     0,  -297,  -297,     0,  -297,  -297,  -297,
       0,  -297,     0,     0,  -297,     0,     0,     0,  -297,     0,
    -297,     0,  -297,     0,     0,     0,     0,     0,  -297,  -297,
    -297,  -297,  -297,  -297,  -297,  -297,   457,     0,  -313,  -313,
    -313,     0,  -313,  -313,  -313,  -313,     0,     0,     0,  -313,
       0,     0,  -313,     0,     0,     0,  -313,  -313,     0,     0,
    -313,     0,  -313,     0,     0,  -313,     0,  -313,  -313,  -313,
       0,     0,  -313,     0,  -313,  -313,  -313,     0,     0,     0,
       0,     0,     0,     0,  -313,     0,     0,     0,     0,  -313,
    -313,     0,     0,     0,     0,  -313,  -313,     0,   287,  -313,
       0,  -313,     0,     0,  -313,  -313,  -313,  -313,  -313,  -313,
       0,  -313,     0,   290,  -313,     0,     0,  -313,  -313,     0,
    -313,  -313,     0,  -313,     0,  -313,  -313,     0,  -313,  -313,
    -313,     0,  -313,     0,     0,  -313,     0,     0,     0,  -313,
       0,  -313,     0,  -313,     0,     0,     0,     0,     0,  -313,
    -313,  -313,  -313,  -313,  -313,  -313,  -313,   679,     0,  -299,
    -299,  -299,     0,  -299,  -299,  -299,  -299,     0,     0,     0,
    -299,     0,     0,  -299,     0,     0,     0,  -299,  -299,     0,
       0,  -299,     0,   680,     0,     0,  -299,     0,  -299,  -299,
    -299,     0,     0,  -299,     0,  -299,  -299,  -299,     0,     0,
       0,     0,     0,     0,     0,  -299,     0,     0,     0,     0,
    -299,  -299,     0,     0,     0,     0,  -299,  -299,     0,  -299,
     681,     0,   682,     0,     0,  -299,  -299,  -299,  -299,  -299,
    -299,     0,  -299,     0,  -299,  -299,     0,     0,  -299,  -299,
       0,  -299,  -299,     0,  -299,     0,  -299,  -299,     0,  -299,
    -299,  -299,     0,  -299,     0,     0,  -299,     0,     0,     0,
    -299,     0,  -299,     0,  -299,     0,     0,     0,     0,     0,
    -299,  -299,  -299,  -299,  -299,  -299,  -299,  -299,   679,     0,
    -298,  -298,  -298,     0,  -298,  -298,  -298,  -298,     0,     0,
       0,  -298,     0,     0,  -298,     0,     0,     0,  -298,  -298,
       0,     0,  -298,     0,   680,     0,     0,  -298,     0,  -298,
    -298,  -298,     0,     0,  -298,     0,  -298,  -298,  -298,     0,
       0,     0,     0,     0,     0,     0,  -298,     0,     0,     0,
       0,  -298,  -298,     0,     0,     0,     0,  -298,  -298,     0,
    -298,   681,     0,   682,     0,     0,  -298,  -298,  -298,  -298,
    -298,  -298,     0,  -298,     0,  -298,  -298,     0,     0,  -298,
    -298,     0,  -298,  -298,     0,  -298,     0,  -298,  -298,     0,
    -298,  -298,  -298,     0,  -298,     0,     0,  -298,     0,     0,
       0,  -298,     0,  -298,     0,  -298,     0,     0,     0,     0,
       0,  -298,  -298,  -298,  -298,  -298,  -298,  -298,  -298,   670,
       0,  -287,  -287,  -287,     0,  -287,  -287,  -287,  -287,     0,
       0,     0,  -287,     0,     0,  -287,     0,     0,     0,  -287,
    -287,     0,     0,  -287,     0,     0,     0,     0,  -287,     0,
    -287,  -287,  -287,     0,     0,  -287,     0,  -287,  -287,  -287,
       0,     0,     0,     0,     0,     0,     0,  -287,     0,     0,
       0,     0,  -287,   671,     0,     0,     0,     0,  -287,  -287,
       0,  -287,     0,     0,     0,     0,     0,  -287,  -287,  -287,
    -287,  -287,  -287,     0,  -287,     0,  -287,  -287,     0,     0,
    -287,  -287,     0,  -287,   672,     0,   673,     0,  -287,  -287,
       0,  -287,  -287,  -287,     0,  -287,     0,     0,  -287,     0,
       0,     0,  -287,     0,  -287,     0,  -287,     0,     0,     0,
       0,     0,  -287,  -287,  -287,  -287,  -287,  -287,  -287,  -287,
     603,     0,  -293,  -293,  -293,     0,  -293,  -293,  -293,  -293,
       0,     0,     0,  -293,     0,     0,  -293,     0,     0,     0,
    -293,  -293,     0,     0,  -293,     0,     0,     0,     0,  -293,
       0,  -293,  -293,  -293,     0,     0,  -293,     0,  -293,  -293,
    -293,     0,     0,     0,     0,     0,     0,     0,  -293,     0,
       0,     0,     0,  -293,  -293,     0,     0,     0,     0,  -293,
     507,     0,  -293,     0,     0,     0,     0,     0,  -293,  -293,
    -293,  -293,  -293,  -293,     0,   510,     0,  -293,  -293,     0,
       0,  -293,  -293,     0,  -293,  -293,     0,  -293,     0,  -293,
    -293,     0,  -293,  -293,  -293,     0,  -293,     0,     0,  -293,
       0,     0,     0,  -293,     0,  -293,     0,  -293,     0,     0,
       0,     0,     0,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,   670,     0,  -291,  -291,  -291,     0,  -291,  -291,  -291,
    -291,     0,     0,     0,  -291,     0,     0,  -291,     0,     0,
       0,  -291,  -291,     0,     0,  -291,     0,     0,     0,     0,
    -291,     0,  -291,  -291,  -291,     0,     0,  -291,     0,  -291,
    -291,  -291,     0,     0,     0,     0,     0,     0,     0,  -291,
       0,     0,     0,     0,  -291,   671,     0,     0,     0,     0,
    -291,  -291,     0,  -291,     0,     0,     0,     0,     0,  -291,
    -291,  -291,  -291,  -291,  -291,     0,  -291,     0,  -291,  -291,
       0,     0,  -291,  -291,     0,  -291,   672,     0,   673,     0,
    -291,  -291,     0,  -291,  -291,  -291,     0,  -291,     0,     0,
    -291,     0,     0,     0,  -291,     0,  -291,     0,  -291,     0,
       0,     0,     0,     0,  -291,  -291,  -291,  -291,  -291,  -291,
    -291,  -291,   670,     0,  -289,  -289,  -289,     0,  -289,  -289,
    -289,  -289,     0,     0,     0,  -289,     0,     0,  -289,     0,
       0,     0,  -289,  -289,     0,     0,  -289,     0,     0,     0,
       0,  -289,     0,  -289,  -289,  -289,     0,     0,  -289,     0,
    -289,  -289,  -289,     0,     0,     0,     0,     0,     0,     0,
    -289,     0,     0,     0,     0,  -289,   671,     0,     0,     0,
       0,  -289,  -289,     0,  -289,     0,     0,     0,     0,     0,
    -289,  -289,  -289,  -289,  -289,  -289,     0,  -289,     0,  -289,
    -289,     0,     0,  -289,  -289,     0,  -289,   672,     0,   673,
       0,  -289,  -289,     0,  -289,  -289,  -289,     0,  -289,     0,
       0,  -289,     0,     0,     0,  -289,     0,  -289,     0,  -289,
       0,     0,     0,     0,     0,  -289,  -289,  -289,  -289,  -289,
    -289,  -289,  -289,   670,     0,  -290,  -290,  -290,     0,  -290,
    -290,  -290,  -290,     0,     0,     0,  -290,     0,     0,  -290,
       0,     0,     0,  -290,  -290,     0,     0,  -290,     0,     0,
       0,     0,  -290,     0,  -290,  -290,  -290,     0,     0,  -290,
       0,  -290,  -290,  -290,     0,     0,     0,     0,     0,     0,
       0,  -290,     0,     0,     0,     0,  -290,   671,     0,     0,
       0,     0,  -290,  -290,     0,  -290,     0,     0,     0,     0,
       0,  -290,  -290,  -290,  -290,  -290,  -290,     0,  -290,     0,
    -290,  -290,     0,     0,  -290,  -290,     0,  -290,   672,     0,
     673,     0,  -290,  -290,     0,  -290,  -290,  -290,     0,  -290,
       0,     0,  -290,     0,     0,     0,  -290,     0,  -290,     0,
    -290,     0,     0,     0,     0,     0,  -290,  -290,  -290,  -290,
    -290,  -290,  -290,  -290,   670,     0,  -288,  -288,  -288,     0,
    -288,  -288,  -288,  -288,     0,     0,     0,  -288,     0,     0,
    -288,     0,     0,     0,  -288,  -288,     0,     0,  -288,     0,
       0,     0,     0,  -288,     0,  -288,  -288,  -288,     0,     0,
    -288,     0,  -288,  -288,  -288,     0,     0,     0,     0,     0,
       0,     0,  -288,     0,     0,     0,     0,  -288,   671,     0,
       0,     0,     0,  -288,  -288,     0,  -288,     0,     0,     0,
       0,     0,  -288,  -288,  -288,  -288,  -288,  -288,     0,  -288,
       0,  -288,  -288,     0,     0,  -288,  -288,     0,  -288,   672,
       0,   673,     0,  -288,  -288,     0,  -288,  -288,  -288,     0,
    -288,     0,     0,  -288,     0,     0,     0,  -288,     0,  -288,
       0,  -288,     0,     0,     0,     0,     0,  -288,  -288,  -288,
    -288,  -288,  -288,  -288,  -288,   603,     0,  -294,  -294,  -294,
       0,  -294,  -294,  -294,  -294,     0,     0,     0,  -294,     0,
       0,  -294,     0,     0,     0,  -294,  -294,     0,     0,  -294,
       0,     0,     0,     0,  -294,     0,  -294,  -294,  -294,     0,
       0,  -294,     0,  -294,  -294,  -294,     0,     0,     0,     0,
       0,     0,     0,  -294,     0,     0,     0,     0,  -294,  -294,
       0,     0,     0,     0,  -294,   507,     0,  -294,     0,     0,
       0,     0,     0,  -294,  -294,  -294,  -294,  -294,  -294,     0,
     510,     0,  -294,  -294,     0,     0,  -294,  -294,     0,  -294,
    -294,     0,  -294,     0,  -294,  -294,     0,  -294,  -294,  -294,
       0,  -294,     0,     0,  -294,     0,     0,     0,  -294,     0,
    -294,     0,  -294,     0,     0,     0,     0,     0,  -294,  -294,
    -294,  -294,  -294,  -294,  -294,  -294,   603,     0,  -295,  -295,
    -295,     0,  -295,  -295,  -295,  -295,     0,     0,     0,  -295,
       0,     0,  -295,     0,     0,     0,  -295,  -295,     0,     0,
    -295,     0,     0,     0,     0,  -295,     0,  -295,  -295,  -295,
       0,     0,  -295,     0,  -295,  -295,  -295,     0,     0,     0,
       0,     0,     0,     0,  -295,     0,     0,     0,     0,  -295,
    -295,     0,     0,     0,     0,  -295,   507,     0,  -295,     0,
       0,     0,     0,     0,  -295,  -295,  -295,  -295,  -295,  -295,
       0,   510,     0,  -295,  -295,     0,     0,  -295,  -295,     0,
    -295,  -295,     0,  -295,     0,  -295,  -295,     0,  -295,  -295,
    -295,     0,  -295,     0,     0,  -295,     0,     0,     0,  -295,
       0,  -295,     0,  -295,     0,     0,     0,     0,     0,  -295,
    -295,  -295,  -295,  -295,  -295,  -295,  -295,   603,     0,  -296,
    -296,  -296,     0,  -296,  -296,  -296,  -296,     0,     0,     0,
    -296,     0,     0,  -296,     0,     0,     0,  -296,  -296,     0,
       0,  -296,     0,     0,     0,     0,  -296,     0,  -296,  -296,
    -296,     0,     0,  -296,     0,  -296,  -296,  -296,     0,     0,
       0,     0,     0,     0,     0,  -296,     0,     0,     0,     0,
    -296,  -296,     0,     0,     0,     0,  -296,   507,     0,  -296,
       0,     0,     0,     0,     0,  -296,  -296,  -296,  -296,  -296,
    -296,     0,   510,     0,  -296,  -296,     0,     0,  -296,  -296,
       0,  -296,  -296,     0,  -296,     0,  -296,  -296,     0,  -296,
    -296,  -296,     0,  -296,     0,     0,  -296,     0,     0,     0,
    -296,     0,  -296,     0,  -296,     0,     0,     0,     0,     0,
    -296,  -296,  -296,  -296,  -296,  -296,  -296,  -296,   790,     0,
    -246,     0,  -246,     0,     0,     0,     0,     0,  -246,  -246,
    -246,  -246,  -246,   713,     0,     0,  -246,     0,     0,     0,
       0,  -246,  -246,  -246,     0,     0,  -246,  -246,  -246,  -246,
    -246,  -246,  -246,     0,     0,     0,  -246,  -246,     0,   791,
    -246,  -246,     0,  -246,     0,     0,     0,  -246,     0,     0,
    -246,     0,     0,     0,     0,  -246,     0,  -246,     0,     0,
    -246,     0,     0,     0,     0,     0,     0,  -246,     0,     0,
    -246,  -246,     0,     0,     0,  -246,  -246,     0,     0,     0,
    -246,  -246,     0,     0,     0,     0,     0,     0,  -246,  -246,
    -246,     0,     0,  -246,  -246,  -246,  -246,  -246,  -246,     0,
       0,  -246,  -246,     0,     0,     0,     0,     0,     0,     0,
    -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,  -246,   659,
       0,  -284,  -284,  -284,     0,   660,   661,  -284,  -284,     0,
       0,     0,  -284,     0,     0,  -284,     0,     0,     0,  -284,
    -284,     0,     0,  -284,     0,     0,     0,     0,  -284,     0,
    -284,  -284,  -284,     0,     0,  -284,     0,  -284,  -284,  -284,
       0,     0,     0,     0,     0,     0,     0,   662,     0,     0,
       0,     0,   663,     0,     0,     0,     0,     0,  -284,  -284,
       0,  -284,     0,     0,     0,     0,     0,  -284,  -284,  -284,
    -284,  -284,  -284,     0,  -284,     0,  -284,  -284,     0,     0,
    -284,  -284,     0,  -284,     0,     0,     0,     0,  -284,  -284,
       0,  -284,   664,  -284,     0,  -284,     0,     0,  -284,     0,
       0,     0,  -284,     0,  -284,     0,  -284,     0,     0,     0,
       0,     0,  -284,  -284,  -284,  -284,  -284,  -284,  -284,  -284,
     659,     0,  -285,  -285,  -285,     0,   660,   661,  -285,  -285,
       0,     0,     0,  -285,     0,     0,  -285,     0,     0,     0,
    -285,  -285,     0,     0,  -285,     0,     0,     0,     0,  -285,
       0,  -285,  -285,  -285,     0,     0,  -285,     0,  -285,  -285,
    -285,     0,     0,     0,     0,     0,     0,     0,   662,     0,
       0,     0,     0,   663,     0,     0,     0,     0,     0,  -285,
    -285,     0,  -285,     0,     0,     0,     0,     0,  -285,  -285,
    -285,  -285,  -285,  -285,     0,  -285,     0,  -285,  -285,     0,
       0,  -285,  -285,     0,  -285,     0,     0,     0,     0,  -285,
    -285,     0,  -285,   664,  -285,     0,  -285,     0,     0,  -285,
       0,     0,     0,  -285,     0,  -285,     0,  -285,     0,     0,
       0,     0,     0,  -285,  -285,  -285,  -285,  -285,  -285,  -285,
    -285,   659,     0,  -286,  -286,  -286,     0,   660,   661,  -286,
    -286,     0,     0,     0,  -286,     0,     0,  -286,     0,     0,
       0,  -286,  -286,     0,     0,  -286,     0,     0,     0,     0,
    -286,     0,  -286,  -286,  -286,     0,     0,  -286,     0,  -286,
    -286,  -286,     0,     0,     0,     0,     0,     0,     0,   662,
       0,     0,     0,     0,   663,     0,     0,     0,     0,     0,
    -286,  -286,     0,  -286,     0,     0,     0,     0,     0,  -286,
    -286,  -286,  -286,  -286,  -286,     0,  -286,     0,  -286,  -286,
       0,     0,  -286,  -286,     0,  -286,     0,     0,     0,     0,
    -286,  -286,     0,  -286,   664,  -286,     0,  -286,     0,     0,
    -286,     0,     0,     0,  -286,     0,  -286,     0,  -286,     0,
       0,     0,     0,     0,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,   424,     0,    45,     0,    46,     0,     0,     0,
       0,     0,   280,   135,   136,    47,  -161,     0,     0,     0,
     137,     0,     0,     0,     0,   281,    48,  -161,     0,     0,
     282,    93,   138,   283,    49,    50,     0,     0,     0,     0,
      51,   284,     0,     0,   140,   285,     0,   286,     0,     0,
       0,   141,     0,     0,   110,     0,     0,     0,     0,   142,
       0,   257,     0,     0,   287,     0,     0,     0,     0,     0,
       0,   288,     0,     0,   289,    52,     0,     0,     0,   290,
     291,     0,     0,     0,  -161,   292,     0,     0,     0,     0,
       0,     0,     7,   147,   293,     0,     0,   149,   294,   295,
     296,   297,   298,     0,     0,   299,   300,     0,     0,     0,
       0,     0,     0,     0,   301,    53,    54,    55,    56,    57,
      58,    59,    60,   910,     0,    45,     0,    46,     0,     0,
       0,     0,     0,   280,   135,   136,    47,   863,     0,     0,
       0,   137,     0,     0,     0,     0,   281,    48,   864,     0,
       0,   282,    93,   138,   283,    49,    50,     0,     0,     0,
       0,    51,   284,     0,     0,   140,   285,     0,   286,     0,
       0,     0,   141,     0,     0,   110,     0,     0,     0,     0,
     142,     0,   257,     0,     0,   287,     0,     0,     0,     0,
       0,     0,   288,     0,     0,   289,    52,     0,     0,     0,
     290,   291,     0,     0,     0,   218,   292,     0,     0,     0,
       0,     0,     0,     7,   147,   293,     0,     0,   149,   294,
     295,   296,   297,   298,     0,     0,   299,   300,     0,     0,
       0,     0,     0,     0,     0,   301,    53,    54,    55,    56,
      57,    58,    59,    60,   888,     0,    45,     0,    46,     0,
       0,     0,     0,     0,   280,   135,   136,    47,   863,     0,
       0,     0,   137,     0,     0,     0,     0,   281,    48,   864,
       0,     0,   282,    93,   138,   283,    49,    50,     0,     0,
       0,     0,    51,   284,     0,     0,   140,   285,     0,   286,
       0,     0,     0,   141,     0,     0,   110,     0,     0,     0,
       0,   142,     0,   257,     0,     0,   287,     0,     0,     0,
       0,     0,     0,   288,     0,     0,   289,    52,     0,     0,
       0,   290,   291,     0,     0,     0,     0,   292,     0,     0,
       0,     0,     0,     0,     7,   147,   293,     0,     0,   149,
     294,   295,   296,   297,   298,     0,     0,   299,   300,     0,
       0,     0,     0,     0,     0,     0,   301,    53,    54,    55,
      56,    57,    58,    59,    60,   279,     0,    45,     0,    46,
       0,     0,     0,     0,     0,   280,   135,   136,    47,     0,
       0,     0,     0,   137,     0,     0,     0,     0,   281,    48,
       0,     0,     0,   282,    93,   138,   283,    49,    50,     0,
       0,     0,     0,    51,   284,     0,     0,   140,   285,     0,
     286,     0,     0,     0,   141,     0,     0,   110,     0,     0,
       0,     0,   142,     0,   257,     0,     0,   287,     0,     0,
       0,     0,     0,     0,   288,     0,     0,   289,    52,     0,
       0,     0,   290,   291,     0,     0,     0,   218,   292,     0,
       0,     0,     0,     0,     0,     7,   147,   293,     0,     0,
     149,   294,   295,   296,   297,   298,     0,     0,   299,   300,
       0,     0,     0,     0,     0,     0,     0,   301,    53,    54,
      55,    56,    57,    58,    59,    60,   424,     0,    45,     0,
      46,     0,     0,     0,     0,     0,   280,   135,   136,    47,
       0,     0,     0,     0,   137,     0,     0,     0,     0,   281,
      48,     0,     0,     0,   282,    93,   138,   283,    49,    50,
       0,     0,     0,     0,    51,   284,     0,     0,   140,   285,
       0,   286,     0,     0,     0,   141,     0,     0,   110,     0,
       0,     0,     0,   142,     0,   257,     0,     0,   287,     0,
       0,     0,     0,     0,     0,   288,     0,     0,   289,    52,
       0,     0,     0,   290,   291,     0,     0,     0,     0,   292,
       0,     0,     0,     0,     0,     0,     7,   147,   293,     0,
       0,   149,   294,   295,   296,   297,   298,     0,     0,   299,
     300,     0,     0,     0,     0,     0,     0,     0,   301,    53,
      54,    55,    56,    57,    58,    59,    60,   654,     0,  -282,
    -282,  -282,     0,     0,     0,  -282,  -282,     0,     0,     0,
    -282,     0,     0,  -282,     0,     0,     0,  -282,  -282,     0,
       0,  -282,     0,     0,     0,     0,  -282,     0,  -282,  -282,
    -282,     0,     0,   655,     0,  -282,  -282,  -282,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -282,  -282,     0,  -282,
       0,     0,     0,     0,     0,  -282,  -282,  -282,   656,  -282,
    -282,     0,  -282,     0,  -282,  -282,     0,     0,  -282,  -282,
       0,  -282,     0,     0,     0,     0,  -282,  -282,     0,  -282,
       0,  -282,     0,  -282,     0,     0,  -282,     0,     0,     0,
    -282,     0,  -282,     0,  -282,     0,     0,     0,     0,     0,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   654,     0,
    -283,  -283,  -283,     0,     0,     0,  -283,  -283,     0,     0,
       0,  -283,     0,     0,  -283,     0,     0,     0,  -283,  -283,
       0,     0,  -283,     0,     0,     0,     0,  -283,     0,  -283,
    -283,  -283,     0,     0,   655,     0,  -283,  -283,  -283,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -283,  -283,     0,
    -283,     0,     0,     0,     0,     0,  -283,  -283,  -283,   656,
    -283,  -283,     0,  -283,     0,  -283,  -283,     0,     0,  -283,
    -283,     0,  -283,     0,     0,     0,     0,  -283,  -283,     0,
    -283,     0,  -283,     0,  -283,     0,     0,  -283,     0,     0,
       0,  -283,     0,  -283,     0,  -283,     0,     0,     0,     0,
       0,  -283,  -283,  -283,  -283,  -283,  -283,  -283,  -283,   651,
       0,  -280,  -280,  -280,     0,     0,     0,  -280,  -280,     0,
       0,     0,  -280,     0,     0,  -280,     0,     0,     0,  -280,
    -280,     0,     0,  -280,     0,     0,     0,     0,  -280,     0,
    -280,  -280,  -280,     0,     0,     0,     0,  -280,  -280,  -280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -280,  -280,
       0,  -280,     0,     0,     0,     0,     0,  -280,  -280,  -280,
       0,  -280,  -280,     0,  -280,     0,  -280,  -280,     0,     0,
    -280,  -280,     0,  -280,     0,     0,     0,     0,  -280,  -280,
       0,  -280,     0,  -280,     0,  -280,     0,     0,  -280,     0,
       0,     0,  -280,     0,   652,     0,  -280,     0,     0,     0,
       0,     0,  -280,  -280,  -280,  -280,  -280,  -280,  -280,  -280,
     651,     0,  -281,  -281,  -281,     0,     0,     0,  -281,  -281,
       0,     0,     0,  -281,     0,     0,  -281,     0,     0,     0,
    -281,  -281,     0,     0,  -281,     0,     0,     0,     0,  -281,
       0,  -281,  -281,  -281,     0,     0,     0,     0,  -281,  -281,
    -281,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -281,
    -281,     0,  -281,     0,     0,     0,     0,     0,  -281,  -281,
    -281,     0,  -281,  -281,     0,  -281,     0,  -281,  -281,     0,
       0,  -281,  -281,     0,  -281,     0,     0,     0,     0,  -281,
    -281,     0,  -281,     0,  -281,     0,  -281,     0,     0,  -281,
       0,     0,     0,  -281,     0,   652,     0,  -281,     0,     0,
       0,     0,     0,  -281,  -281,  -281,  -281,  -281,  -281,  -281,
    -281,   648,     0,  -278,  -278,  -278,     0,     0,     0,  -278,
    -278,     0,     0,     0,  -278,     0,     0,   649,     0,     0,
       0,  -278,  -278,     0,     0,  -278,     0,     0,     0,     0,
    -278,     0,  -278,  -278,  -278,     0,     0,     0,     0,  -278,
    -278,  -278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    -278,  -278,     0,  -278,     0,     0,     0,     0,     0,  -278,
    -278,  -278,     0,  -278,  -278,     0,  -278,     0,  -278,  -278,
       0,     0,  -278,  -278,     0,  -278,     0,     0,     0,     0,
    -278,  -278,     0,  -278,     0,  -278,     0,  -278,     0,     0,
    -278,     0,     0,     0,  -278,     0,     0,     0,  -278,     0,
       0,     0,     0,     0,  -278,  -278,  -278,  -278,  -278,  -278,
    -278,  -278,   648,     0,  -279,  -279,  -279,     0,     0,     0,
    -279,  -279,     0,     0,     0,  -279,     0,     0,   649,     0,
       0,     0,  -279,  -279,     0,     0,  -279,     0,     0,     0,
       0,  -279,     0,  -279,  -279,  -279,     0,     0,     0,     0,
    -279,  -279,  -279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  -279,  -279,     0,  -279,     0,     0,     0,     0,     0,
    -279,  -279,  -279,     0,  -279,  -279,     0,  -279,     0,  -279,
    -279,     0,     0,  -279,  -279,     0,  -279,     0,     0,     0,
       0,  -279,  -279,     0,  -279,     0,  -279,     0,  -279,     0,
       0,  -279,     0,     0,     0,  -279,     0,     0,     0,  -279,
       0,     0,     0,     0,     0,  -279,  -279,  -279,  -279,  -279,
    -279,  -279,  -279,   645,     0,  -276,  -276,  -276,     0,     0,
       0,  -276,  -276,     0,     0,     0,  -276,     0,     0,     0,
       0,     0,     0,  -276,  -276,     0,     0,  -276,     0,     0,
       0,     0,  -276,     0,  -276,  -276,  -276,     0,     0,     0,
       0,  -276,  -276,  -276,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -276,  -276,     0,  -276,     0,     0,     0,     0,
       0,  -276,  -276,  -276,     0,  -276,  -276,     0,  -276,     0,
    -276,  -276,     0,     0,  -276,  -276,     0,  -276,     0,     0,
       0,     0,  -276,  -276,     0,  -276,     0,  -276,     0,  -276,
       0,     0,  -276,     0,     0,     0,  -276,     0,     0,     0,
     646,     0,     0,     0,     0,     0,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,   645,     0,  -277,  -277,  -277,     0,
       0,     0,  -277,  -277,     0,     0,     0,  -277,     0,     0,
       0,     0,     0,     0,  -277,  -277,     0,     0,  -277,     0,
       0,     0,     0,  -277,     0,  -277,  -277,  -277,     0,     0,
       0,     0,  -277,  -277,  -277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -277,  -277,     0,  -277,     0,     0,     0,
       0,     0,  -277,  -277,  -277,     0,  -277,  -277,     0,  -277,
       0,  -277,  -277,     0,     0,  -277,  -277,     0,  -277,     0,
       0,     0,     0,  -277,  -277,     0,  -277,     0,  -277,     0,
    -277,     0,     0,  -277,     0,     0,     0,  -277,     0,     0,
       0,   646,     0,     0,     0,     0,     0,  -277,  -277,  -277,
    -277,  -277,  -277,  -277,  -277,   642,     0,  -274,  -274,  -274,
       0,     0,     0,   643,  -274,     0,     0,     0,  -274,     0,
       0,     0,     0,     0,     0,  -274,  -274,     0,     0,  -274,
       0,     0,     0,     0,  -274,     0,  -274,  -274,  -274,     0,
       0,     0,     0,  -274,  -274,  -274,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -274,  -274,     0,  -274,     0,     0,
       0,     0,     0,  -274,  -274,  -274,     0,  -274,  -274,     0,
    -274,     0,  -274,  -274,     0,     0,  -274,  -274,     0,  -274,
       0,     0,     0,     0,  -274,  -274,     0,  -274,     0,  -274,
       0,  -274,     0,     0,  -274,     0,     0,     0,  -274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -274,  -274,
    -274,  -274,  -274,  -274,  -274,  -274,   642,     0,  -275,  -275,
    -275,     0,     0,     0,   643,  -275,     0,     0,     0,  -275,
       0,     0,     0,     0,     0,     0,  -275,  -275,     0,     0,
    -275,     0,     0,     0,     0,  -275,     0,  -275,  -275,  -275,
       0,     0,     0,     0,  -275,  -275,  -275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -275,  -275,     0,  -275,     0,
       0,     0,     0,     0,  -275,  -275,  -275,     0,  -275,  -275,
       0,  -275,     0,  -275,  -275,     0,     0,  -275,  -275,     0,
    -275,     0,     0,     0,     0,  -275,  -275,     0,  -275,     0,
    -275,     0,  -275,     0,     0,  -275,     0,     0,     0,  -275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,   506,     0,    45,
    -272,    46,     0,     0,     0,     0,   639,     0,     0,     0,
      47,     0,     0,     0,     0,     0,     0,  -272,  -272,     0,
       0,    48,     0,     0,     0,     0,    93,     0,   283,    49,
      50,     0,     0,     0,     0,    51,   284,  -272,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,   507,     0,   287,
       0,     0,     0,     0,     0,   508,   288,   509,     0,   289,
      52,     0,   510,     0,   290,   291,     0,     0,  -272,  -272,
       0,  -272,     0,     0,     0,     0,  -272,  -272,     0,   293,
       0,  -272,     0,   294,     0,   424,   297,    45,     0,    46,
     299,     0,     0,     0,     0,   280,     0,     0,    47,     0,
      53,    54,    55,    56,    57,    58,    59,    60,   281,    48,
       0,     0,     0,   282,    93,     0,   283,    49,    50,     0,
       0,     0,     0,    51,   284,     0,     0,     0,   285,     0,
     286,     0,     0,     0,     0,     0,     0,   110,     0,     0,
       0,     0,     0,     0,   257,     0,     0,   287,     0,     0,
       0,     0,     0,     0,   288,     0,     0,   289,    52,     0,
       0,     0,   290,   291,     0,     0,     0,     0,   292,     0,
       0,     0,     0,     0,     0,     7,     0,   293,     0,     0,
       0,   294,   295,   296,   297,   298,     0,     0,   299,   300,
       0,     0,     0,     0,     0,     0,     0,   301,    53,    54,
      55,    56,    57,    58,    59,    60,   506,     0,    45,     0,
      46,     0,     0,     0,     0,     0,     0,   135,   136,    47,
       0,     0,     0,     0,   137,     0,     0,     0,     0,     0,
      48,     0,     0,     0,     0,    93,   138,   283,    49,    50,
       0,     0,     0,     0,    51,   284,     0,     0,   140,     0,
       0,     0,     0,     0,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   142,     0,   257,   507,     0,   287,     0,
       0,     0,     0,     0,   508,   288,   509,     0,   289,    52,
       0,   510,     0,   290,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   147,   293,     0,
       0,   149,   294,     0,     0,   297,     0,     0,     0,   299,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,   629,     0,    45,
       0,    46,     0,     0,     0,     0,     0,     0,   135,   136,
      47,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,    93,   138,   283,    49,
      50,     0,     0,     0,     0,    51,   284,     0,     0,   140,
       0,     0,     0,     0,     0,     0,   141,     0,     0,     0,
       0,     0,     0,     0,   142,     0,   257,     0,     0,   287,
       0,     0,     0,     0,     0,     0,   288,     0,     0,   289,
      52,     0,     0,     0,   290,   291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,   147,   293,
       0,     0,   149,   294,     0,     0,   297,     0,     0,     0,
     299,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    59,    60,   217,     0,
      45,   134,    46,     0,     0,     0,     0,     0,     0,   135,
     136,    47,     0,     0,     0,     0,   137,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,   138,     0,
      49,    50,     0,     0,     0,     0,    51,     0,   139,     0,
     140,     0,     0,     0,     0,     0,     0,   141,     0,     0,
       0,     0,     0,     0,     0,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   143,     0,     0,     0,     0,
       0,    52,     0,     0,     0,     0,     0,   144,   145,   146,
     218,     0,     0,     0,     0,     0,     0,     0,     0,   147,
       0,     0,   148,   149,     0,     0,   150,     0,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,   152,   153,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    44,
       0,    45,   134,    46,     0,     0,     0,     0,     0,     0,
     135,   136,    47,     0,     0,     0,     0,   137,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,   138,
       0,    49,    50,     0,     0,     0,     0,    51,     0,   139,
       0,   140,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,   142,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   143,     0,     0,     0,
       0,     0,    52,     0,     0,     0,     0,     0,   144,   145,
     146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,   148,   149,     0,     0,   150,     0,     0,
       0,   151,     0,     0,     0,     0,     0,     0,     0,   152,
     153,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      44,     0,    45,   134,    46,     0,     0,     0,     0,     0,
       0,   135,   136,    47,     0,     0,     0,     0,   137,     0,
       0,     0,     0,     0,    48,     0,     0,     0,     0,     0,
     138,     0,    49,    50,     0,     0,     0,     0,    51,     0,
     139,     0,   140,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,     0,    52,     0,     0,     0,     0,     0,   234,
     235,   236,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   147,     0,     0,   237,   149,     0,   574,   150,    45,
       0,    46,   151,     0,     0,     0,     0,     0,     0,     0,
      47,   153,     0,    53,    54,    55,    56,    57,    58,    59,
      60,    48,     0,     0,     0,     0,    93,     0,   283,    49,
      50,     0,     0,     0,     0,    51,   284,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   110,
       0,     0,     0,     0,     0,     0,   257,   507,     0,   287,
       0,     0,     0,     0,     0,   508,   288,   509,     0,   289,
      52,     0,   510,     0,   290,   291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
       0,     0,     0,   294,     0,   593,   297,    45,     0,    46,
     299,     0,     0,     0,     0,     0,     0,     0,    47,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,    48,
       0,     0,     0,     0,    93,     0,   283,    49,    50,     0,
       0,     0,     0,    51,   284,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   257,   507,     0,   287,     0,     0,
       0,     0,     0,   508,   288,   509,     0,   289,    52,     0,
     510,     0,   290,   291,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   412,     0,     0,   293,     0,     0,
       0,   294,     0,   751,   297,    45,     0,    46,   299,     0,
       0,     0,     0,     0,     0,     0,    47,     0,    53,    54,
      55,    56,    57,    58,    59,    60,     0,    48,     0,     0,
       0,     0,    93,     0,   283,    49,    50,     0,     0,     0,
       0,    51,   284,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   257,   507,     0,   287,     0,     0,     0,     0,
       0,   508,   288,   509,     0,   289,    52,     0,   510,     0,
     290,   291,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     0,   293,     0,     0,     0,   294,
       0,   506,   297,    45,     0,    46,   299,     0,     0,     0,
       0,     0,     0,     0,    47,     0,    53,    54,    55,    56,
      57,    58,    59,    60,     0,    48,     0,     0,     0,     0,
      93,     0,   283,    49,    50,     0,     0,     0,     0,    51,
     284,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     257,   507,     0,   287,     0,     0,     0,     0,     0,   508,
     288,   509,     0,   289,    52,     0,   510,     0,   290,   291,
       0,     0,     0,     0,     0,   832,     0,     0,     0,     0,
       0,     0,     0,   293,     0,     0,     0,   294,     0,   506,
     297,    45,     0,    46,   299,     0,     0,     0,     0,     0,
       0,     0,    47,     0,    53,    54,    55,    56,    57,    58,
      59,    60,     0,    48,     0,     0,     0,     0,    93,     0,
     283,    49,    50,     0,     0,     0,     0,    51,   284,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,   507,
       0,   287,     0,     0,     0,     0,     0,   508,   288,   509,
       0,   289,    52,     0,   510,     0,   290,   291,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   293,     0,     0,     0,   294,     0,   812,   297,    45,
       0,    46,   299,     0,     0,     0,     0,     0,     0,     0,
      47,     0,    53,    54,    55,    56,    57,    58,    59,    60,
       0,    48,     0,     0,     0,     0,    93,     0,   283,    49,
      50,     0,     0,     0,     0,    51,   284,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,     0,     0,   287,
       0,     0,     0,     0,     0,     0,   288,     0,     0,   289,
      52,     0,     0,     0,   290,   291,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   412,     0,     0,   293,
       0,     0,     0,   294,     0,   808,   297,    45,     0,    46,
     299,     0,     0,     0,     0,     0,     0,     0,    47,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,    48,
       0,     0,     0,     0,    93,     0,   283,    49,    50,     0,
       0,     0,     0,    51,   284,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   267,     0,    45,
      39,    46,     0,     0,   257,     0,     0,   287,   135,   136,
      47,     0,     0,     0,   288,   137,     0,   289,    52,     0,
       0,    48,   290,   291,     0,     0,     0,   138,     0,    49,
      50,     0,     0,     0,     0,    51,     0,   293,     0,   140,
       0,   294,     0,     0,   297,     0,   141,     0,   299,     0,
       0,     0,     0,     0,   142,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
      52,     0,     0,     0,     0,     0,     0,     0,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,     0,
       0,     0,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   268,     0,     0,
      53,    54,    55,    56,    57,    58,    59,    60,    44,     0,
      45,     0,    46,     0,     0,     0,     0,     0,     0,   135,
     136,    47,     0,     0,     0,     0,   137,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,   138,     0,
      49,    50,     0,     0,     0,     0,    51,     0,     0,     0,
     140,     0,     0,     0,     0,     0,   411,   141,    45,     0,
      46,     0,     0,     0,     0,   142,     0,   135,   136,    47,
       0,     0,     0,     0,   137,     0,     0,     0,     0,     0,
      48,    52,     0,     0,     0,     0,   138,     0,    49,    50,
       0,     0,     0,     0,    51,     0,     0,     0,   140,   147,
       0,     0,     0,   149,     0,   141,     0,     0,     0,     0,
       0,     0,     0,   142,     0,     0,     0,     0,   246,     0,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   412,     0,   147,     0,     0,
       0,   149,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
      54,    55,    56,    57,    58,    59,    60,    44,     0,    45,
       0,    46,     0,     0,     0,     0,     0,     0,   135,   136,
      47,     0,   248,     0,    45,   137,    46,     0,     0,     0,
       0,    48,     0,     0,   398,    47,    45,   138,    46,    49,
      50,     0,     0,     0,     0,    51,    48,    47,     0,   140,
       0,     0,     0,     0,    49,    50,   141,     0,    48,     0,
      51,     0,     0,     0,   142,     0,    49,    50,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,   249,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     249,     0,     0,     0,     0,    52,     0,     0,   147,     0,
       0,     0,   149,     0,     0,     0,     0,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    54,    55,    56,    57,    58,    59,    60,     0,     0,
       0,     0,     0,     0,     0,    53,    54,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,    53,    54,    55,
      56,    57,    58,    59,    60,    44,     0,    45,     0,    46,
       0,     0,     0,     0,     0,    44,     0,    45,    47,    46,
       0,     0,     0,     0,     0,     0,     0,     0,    47,    48,
       0,  -494,     0,  -494,     0,  -494,     0,    49,    50,    48,
       0,     0,     0,    51,  -494,     0,     0,    49,    50,     0,
       0,     0,     0,    51,     0,  -494,     0,     0,     0,     0,
       0,     0,     0,  -494,  -494,     0,     0,     0,     0,  -494,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,   291,     0,     0,     0,     0,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -494,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,    53,    54,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
       0,     0,     0,     0,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -464,     0,     0,     0,     0,  -509,     0,     0,
       0,     0,  -590,  -569,  -569,     0,     0,     0,     0,  -464,
    -569,     0,     0,  -464,     0,  -590,     0,     0,     0,  -464,
    -590,  -464,  -569,     0,  -513,  -506,     0,  -464,     0,     0,
       0,     0,     0,     0,  -569,  -590,     0,  -590,     0,     0,
       0,  -569,     0,     0,  -590,     0,     0,  -464,  -464,  -569,
    -513,  -464,     0,  -464,  -464,     0,  -464,     0,  -464,     0,
       0,     0,     0,     0,     0,  -506,     0,     0,  -464,  -464,
       0,     0,     0,     0,     0,  -590,     0,     0,  -464,     0,
    -464,  -464,  -590,  -569,  -509,     0,     0,  -569,     0,  -590,
    -590,     0,  -590,     0,     0,     0,  -590,  -464,  -464,     0,
    -464,  -509,  -509,     0,  -590,     0,  -506,     0,  -569,  -569,
       0,     0,     0,     0,  -464,  -569,     0,     0,  -464,     0,
       0,     0,     0,     0,  -464,     0,  -464,  -569,     0,  -513,
    -506,     0,  -464,     0,     0,     0,     0,     0,     0,  -569,
       0,     0,     0,     0,     0,     0,  -569,     0,     0,     0,
       0,     0,  -464,  -464,  -569,  -513,  -464,     0,  -464,  -464,
       0,  -464,     0,  -464,     0,     0,     0,     0,     0,     0,
    -506,     0,     0,  -464,  -464,     0,     0,     0,     0,     0,
       0,     0,     0,  -464,     0,  -464,  -464,  -464,  -569,  -509,
       0,     0,  -569,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -464,     0,  -464,  -509,  -581,     0,  -509,
       0,  -506,     0,     0,  -504,  -541,  -541,     0,  -581,  -581,
       0,     0,  -541,     0,     0,     0,     0,  -504,     0,  -581,
       0,     0,  -504,     0,  -541,  -504,     0,     0,  -581,     0,
       0,     0,     0,  -504,  -581,  -581,  -541,  -504,     0,  -504,
       0,     0,     0,  -541,     0,     0,  -504,     0,     0,     0,
       0,  -541,  -513,     0,  -557,     0,     0,     0,     0,     0,
       0,  -581,  -557,  -504,  -557,     0,  -504,     0,     0,  -557,
       0,     0,  -504,  -581,  -581,  -581,  -541,  -504,     0,     0,
       0,     0,     0,     0,     0,  -541,  -504,     0,  -581,  -541,
    -504,  -504,  -504,  -504,  -504,     0,  -581,  -504,  -504,     0,
       0,     0,     0,  -509,  -581,  -581,  -504,  -590,     0,     0,
    -590,  -590,  -590,  -590,  -590,     0,     0,     0,     0,     0,
    -590,     0,     0,     0,  -590,  -590,   -74,  -590,     0,     0,
    -590,     0,  -590,     0,   -74,   -74,     0,     0,     0,     0,
    -590,   -74,     0,     0,  -590,     0,     0,  -590,     0,  -590,
       0,     0,  -590,   -74,     0,     0,  -590,  -590,  -590,     0,
    -590,     0,     0,   -74,     0,   -74,     0,  -590,     0,  -590,
       0,     0,   -74,     0,     0,  -590,     0,     0,     0,     0,
     -74,     0,     0,     0,     0,  -590,  -590,  -590,  -590,  -590,
     -74,  -590,     0,  -590,  -590,     0,     0,  -590,  -590,     0,
       0,  -590,  -590,     0,  -590,  -590,     0,     0,  -590,  -590,
       0,  -590,     0,     0,   -74,     0,  -590,   -74,   -74,     0,
       0,   -74,  -509,     0,     0,   -74,     0,  -504,  -541,  -541,
       0,  -592,     0,   -99,   -74,  -541,     0,     0,     0,     0,
    -504,     0,  -592,     0,     0,  -504,     0,  -541,  -504,     0,
       0,  -592,     0,     0,     0,     0,  -504,     0,     0,  -541,
    -504,     0,  -504,     0,     0,     0,  -541,     0,     0,  -504,
       0,     0,     0,     0,  -541,  -513,     0,  -557,     0,     0,
       0,     0,     0,     0,     0,  -557,  -504,  -557,     0,  -504,
       0,     0,  -557,     0,     0,  -504,     0,     0,     0,  -541,
    -504,     0,     0,     0,     0,     0,     0,     0,  -541,  -504,
       0,     0,  -541,  -504,  -504,  -504,  -504,  -504,  -509,     0,
    -504,  -504,     0,  -504,  -541,  -541,  -509,  -581,     0,  -504,
       0,  -541,     0,     0,     0,     0,  -504,     0,  -581,     0,
       0,  -504,     0,  -541,  -485,     0,     0,  -581,     0,     0,
       0,     0,  -485,     0,     0,  -541,  -504,     0,  -504,     0,
       0,     0,  -541,     0,     0,  -504,     0,     0,     0,     0,
    -541,  -513,     0,  -485,     0,     0,     0,     0,     0,     0,
       0,  -485,  -485,  -485,     0,  -485,     0,     0,  -485,     0,
       0,  -485,     0,     0,     0,  -541,  -504,     0,     0,     0,
       0,     0,     0,     0,  -541,  -485,     0,     0,  -541,  -485,
    -504,  -504,  -485,  -504,  -509,     0,  -485,  -504,     0,  -504,
    -541,  -541,  -509,  -592,     0,  -504,     0,  -541,     0,     0,
       0,     0,  -504,     0,  -592,     0,     0,  -504,     0,  -541,
    -485,     0,     0,     0,     0,     0,     0,     0,  -485,     0,
       0,  -541,  -504,     0,  -504,     0,     0,     0,  -541,     0,
       0,  -504,     0,     0,     0,     0,  -541,  -513,     0,  -485,
       0,     0,     0,     0,     0,     0,     0,  -485,  -485,  -485,
       0,  -485,     0,     0,  -485,     0,     0,  -485,     0,  -509,
       0,  -541,  -504,     0,     0,  -569,  -569,     0,     0,     0,
    -541,  -485,  -569,     0,  -541,  -485,  -504,  -504,  -485,  -504,
       0,     0,  -485,  -504,  -569,  -557,     0,     0,  -509,     0,
       0,  -504,     0,  -557,     0,     0,  -569,     0,     0,     0,
       0,     0,     0,  -569,     0,     0,     0,     0,     0,     0,
       0,  -569,  -513,     0,  -557,     0,     0,     0,     0,     0,
       0,     0,  -557,  -557,  -557,     0,  -557,     0,     0,  -557,
       0,     0,  -557,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -569,  -509,     0,     0,  -569,
    -557,     0,     0,  -557,     0,     0,     0,  -557,     0,     0,
       0,     0,     0,  -509
};

static const yytype_int16 yycheck[] =
{
      20,    21,   350,   105,    31,   202,   504,   581,   473,   166,
     504,    31,   112,   406,   350,   108,    90,    37,   352,   504,
     333,   474,   578,    43,   640,   473,   333,   101,   379,   473,
     364,   105,   567,   190,   231,   252,   350,   558,   352,   567,
     561,   115,   106,   372,   567,   266,   379,   244,   122,   567,
     364,   493,   116,   536,   154,   474,   460,   131,     1,    53,
     617,   922,   126,   163,     1,   240,    11,   167,    79,     1,
     523,     0,   857,    84,    94,     1,    51,    97,     1,   106,
       1,   108,    11,     1,     4,     1,   106,   161,   108,   116,
      22,   193,   112,   954,     1,     1,   116,    34,    27,   126,
       6,    51,   567,     1,   523,   205,   126,   207,   305,    48,
       1,     1,    30,     1,    21,     1,     1,   111,   129,   567,
     337,     6,   196,   567,   341,     1,    32,    53,   303,   914,
      53,    22,   152,   481,   154,    33,    34,    74,    83,   159,
     233,   475,    60,   163,    30,   493,     1,   167,   250,   169,
      79,   225,   617,   557,    83,   229,    85,   493,   258,    91,
     365,   475,    82,    53,   497,    91,   608,   481,   501,   617,
     113,    20,    21,   617,    90,   275,    74,   698,   115,   493,
     401,   102,    31,   718,   667,   205,   743,   207,    37,   118,
     718,   111,    83,   213,    43,   718,   393,   261,   591,   592,
     718,    91,   276,   554,   110,    93,   233,   536,    93,    85,
       4,   231,   102,   233,     1,     0,   737,   115,     1,   532,
     240,   795,     1,     6,   244,   532,   246,   247,   425,   386,
       1,   567,   161,     1,   261,    20,    91,   166,   258,    30,
     856,   261,    21,   799,     0,    94,   266,    41,    97,    32,
     270,    30,   272,   718,   870,   275,    41,   106,   111,   108,
     608,     1,    30,   112,   785,   750,     6,   116,   753,    60,
     718,   605,   608,    60,   718,   891,    47,   126,   743,   372,
       1,    60,   302,   303,   867,   127,   306,   389,    82,   391,
      93,   605,   497,    63,   608,   743,   225,   111,   169,   743,
     229,    95,     1,   152,   887,   154,    91,   110,    78,    30,
     159,   413,    91,     1,   163,   768,   769,   770,   167,   421,
     169,   250,   807,    91,   426,   336,   811,   544,   545,   546,
       1,   405,   343,     1,   117,   118,   119,   120,   121,   350,
     371,   361,   362,   363,   375,   215,   551,   276,   553,   768,
     769,   770,   372,    93,    53,   225,   205,     1,   207,   857,
     202,   846,     1,   857,   213,     1,   583,   807,     4,    57,
     110,   811,   857,     1,     1,   246,   247,    48,     6,   308,
       1,   401,   718,   253,   233,   314,    30,   111,   781,    33,
      34,   240,    91,   754,   742,   415,   180,   246,   247,   270,
       1,   272,    90,   102,    32,    41,   846,   111,     1,   258,
       1,    38,   261,     6,    53,    83,   914,   266,   657,   658,
     914,   270,   907,   272,     1,    21,   275,     1,   742,   914,
      74,     1,   216,   918,   919,    31,   536,     1,   831,    32,
     460,     1,    63,   928,    35,   465,    82,   231,     1,   111,
     102,     1,    91,   938,   303,   107,    57,    78,    22,    95,
     244,    60,   391,   102,     1,   950,   951,   907,   120,    22,
     254,   115,    22,    60,   959,   568,    53,   694,   918,   919,
     697,   581,   110,    53,   504,    22,    30,    61,   928,   117,
     118,   119,   120,   121,    60,     1,    85,    57,   938,     1,
      93,   350,    76,   352,   578,   354,   537,   538,   539,   540,
     950,   951,   361,   362,    91,   364,   536,   110,   302,   959,
     881,    91,   306,   372,     1,   102,    90,   397,    30,   399,
      90,   633,   102,   694,     1,   732,   697,   557,    91,   388,
      90,   568,   127,     1,    63,    22,    60,   908,   568,   419,
     420,    57,   401,     1,    91,    57,     1,    60,   342,    78,
     921,   581,   779,    30,    22,   782,   415,   667,    59,   930,
      60,   932,   933,     1,   935,   504,    53,    22,   939,   363,
      93,   942,   943,     1,   945,    30,     4,    15,    90,    60,
       1,   611,   953,     4,   955,    53,    60,     4,    26,    35,
     961,    60,   963,   964,   965,    12,    13,   968,   969,   970,
     971,   460,    19,    61,    91,    60,   465,   202,   677,   678,
     549,     1,   207,    41,    31,     1,   475,     3,    76,     5,
     732,   788,   481,   562,    41,   127,    43,   794,    14,    60,
      51,    21,    21,    50,   493,    90,    91,   667,   101,    25,
      30,    58,   683,   684,   685,   584,   585,    33,    34,    60,
       1,    68,   115,    39,    82,    83,     0,     1,     1,   122,
       4,    82,     1,    47,     1,     4,     1,    95,   131,    53,
      60,    22,    60,   612,   613,    92,    20,     1,    95,    96,
     887,    18,    99,    47,     4,   795,   103,    22,    74,    53,
      60,    28,    16,   632,   111,   112,   635,    41,   557,    36,
     202,    91,   814,   787,   871,   207,    57,    51,   567,   568,
     504,    60,    51,    60,    57,   799,    27,    60,    53,    56,
     750,    41,   581,   753,   754,    62,   353,   354,    65,   115,
      67,   117,   118,   196,    27,   776,    30,    14,    82,    90,
      77,   665,   666,    82,   668,   669,   605,    91,    68,   608,
      87,   231,    89,   547,   225,     1,   154,     3,   229,     5,
      80,    81,    82,    57,   244,   795,   796,   100,    14,    63,
     107,     1,   109,   415,     4,    95,   159,   807,   159,    25,
      36,   811,    30,   103,    78,   815,   275,    33,    34,   163,
      20,   111,   112,    39,    53,   589,   674,   675,   676,     0,
       1,    57,   163,     4,    60,   276,    17,   202,   667,    57,
     749,    41,   865,   752,   207,    63,   846,   611,   848,    20,
     850,   851,   302,   372,   714,   855,   306,   857,    74,    85,
      78,   865,    91,   755,    80,    81,    82,   867,   641,   444,
      41,   647,   644,   102,   874,   875,   653,   877,   777,   546,
     650,   881,    82,   697,   718,   388,   497,   887,   554,   718,
       0,     1,    14,   328,     4,   895,    88,   806,   114,   115,
     116,   117,   118,   119,   120,   121,   231,   907,   908,   909,
      20,    82,   379,   742,   914,   231,    -1,    -1,   918,   919,
      91,   921,   388,    -1,    -1,    -1,    -1,    -1,   928,    -1,
     930,    41,   932,   933,    -1,   935,   845,    -1,   938,   939,
     940,   705,   942,   943,    -1,   945,    -1,    -1,   857,    30,
     950,   951,    33,   953,    -1,   955,    -1,    -1,     1,   959,
      -1,   961,    -1,   963,   964,   965,   795,     1,   968,   969,
     970,   971,    82,   882,   883,    18,    -1,    -1,    21,    -1,
      61,    91,    -1,    -1,    -1,    28,   750,    30,    22,   753,
     754,    -1,     4,    36,    -1,    76,   905,   906,    -1,    -1,
      -1,    -1,    36,    -1,    -1,   914,    -1,    -1,   917,    -1,
      22,    -1,    -1,    56,     1,   924,   925,    60,    -1,    62,
      63,    -1,    65,    57,    67,    -1,    60,   936,   937,    41,
      -1,    18,   796,     1,    77,    78,    -1,    -1,    -1,    -1,
     949,    28,    -1,   807,    87,    -1,    89,   811,    91,    36,
      18,   815,     6,   363,    -1,    -1,    -1,    91,    12,    13,
      28,    -1,    -1,    -1,   107,    19,   109,    -1,    36,    56,
      82,    83,    -1,    -1,    -1,    62,    -1,    31,    65,    91,
      67,    -1,   846,    95,   848,    -1,   850,   851,    56,    43,
      77,   855,    -1,   857,    62,    -1,    50,    65,    -1,    67,
      87,    -1,    89,   867,    58,    59,    -1,    -1,    -1,    77,
     874,   875,     0,   877,    -1,    -1,     4,   881,    -1,    87,
     107,    89,   109,   887,    -1,    -1,    -1,    -1,    -1,    -1,
       1,   895,    20,     4,    -1,    20,    21,    -1,    92,   107,
      -1,   109,    96,   907,   908,   909,    31,    -1,    -1,    20,
     914,    -1,    37,    41,   918,   919,   110,   921,    43,    -1,
      -1,    -1,    -1,    -1,   928,    -1,   930,    -1,   932,   933,
      41,   935,    -1,    -1,   938,   939,   940,    48,   942,   943,
      -1,   945,    -1,    -1,    -1,    -1,   950,   951,    -1,   953,
      -1,   955,    -1,    -1,    82,   959,    -1,   961,    -1,   963,
     964,   965,    -1,    91,   968,   969,   970,   971,    -1,    94,
      -1,    82,    97,    -1,    -1,    -1,    -1,    -1,    12,    13,
      91,   106,     1,   108,     3,    19,     5,   112,    -1,    -1,
      -1,   116,    -1,    -1,    -1,    14,    -1,    31,    -1,    -1,
      -1,   126,    -1,    -1,    -1,    -1,    25,    -1,    -1,    43,
      -1,    30,    -1,    32,    33,    34,    50,    -1,    -1,    -1,
      39,    40,    -1,    -1,    58,    -1,    -1,   152,    -1,   154,
       1,    -1,    -1,     4,   159,    -1,    -1,    -1,   163,    -1,
      -1,    60,   167,    -1,   169,   491,    -1,    -1,    -1,    20,
      69,    70,    71,    -1,    73,    74,    -1,    -1,    92,   231,
      79,   611,    96,    -1,    -1,    -1,    20,    21,    -1,    -1,
      41,    -1,   244,    -1,    93,    -1,    -1,    31,    97,    -1,
     205,   100,   207,    37,    -1,   104,    -1,    -1,   213,    43,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,    75,    -1,    -1,    -1,   233,    -1,
      -1,    82,    -1,    -1,    -1,   240,    -1,    -1,    -1,    -1,
      91,   246,   247,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     302,    -1,    -1,   258,   306,    -1,   261,    -1,    -1,    -1,
      94,   266,    -1,    97,    -1,   270,    -1,   272,    -1,    -1,
     275,    -1,   106,    -1,   108,     1,    -1,     3,   112,     5,
      -1,    -1,   116,    18,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,   126,    28,    -1,    -1,    -1,    -1,   303,    25,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,   363,    -1,    39,    -1,    -1,    -1,    -1,   152,    -1,
     154,    56,    -1,    -1,   754,   159,    -1,    62,    -1,   163,
      65,    -1,    67,   167,    -1,   169,    -1,    -1,    -1,    -1,
      66,     1,    77,    -1,     4,   350,    -1,   352,    74,   354,
      -1,    -1,    87,    -1,    89,    -1,   361,   362,    -1,   364,
      -1,    -1,    22,    -1,    -1,    -1,   796,   372,    -1,    -1,
      -1,   205,   107,   207,   109,    -1,    36,    -1,    -1,   213,
      -1,    41,    -1,   388,    -1,   815,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   401,    57,    -1,   233,
      -1,    -1,   231,    -1,    -1,    -1,   240,    -1,    -1,    -1,
     415,    -1,   246,   247,    -1,   244,    -1,    -1,   848,    -1,
     850,   851,    82,    83,   258,   855,    -1,   261,   754,    -1,
      -1,    91,   266,    -1,    -1,    95,   270,    -1,   272,    -1,
      -1,   275,    -1,    -1,   874,   875,    -1,   877,    -1,    -1,
      -1,    -1,   504,     4,    -1,   460,    -1,    -1,    -1,    -1,
     465,    12,    13,    -1,    -1,   895,    -1,    -1,    19,   303,
     475,    -1,    -1,   302,    -1,    -1,   481,   306,   908,   909,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   493,    -1,
      -1,   921,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
     930,    -1,   932,   933,    -1,   935,    -1,    58,    -1,    -1,
      -1,    -1,   942,   943,    -1,   945,   350,    -1,   352,    -1,
      -1,    -1,    -1,    -1,    -1,   955,    -1,   361,   362,    -1,
     364,    82,    -1,    -1,   363,    -1,    -1,    -1,   372,    -1,
      -1,    92,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,   557,   231,    -1,   881,    -1,    -1,    -1,   611,
     111,    -1,   567,   568,    -1,    -1,   244,   401,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   581,    -1,    -1,    -1,
      -1,   415,   908,   909,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   921,    -1,    -1,    -1,    -1,
     605,    -1,    18,   608,   930,    -1,   932,   933,    -1,   935,
      -1,    -1,    28,   939,   940,    -1,   942,   943,    -1,   945,
      36,    -1,    -1,    -1,   302,    -1,   460,   953,   306,   955,
      -1,   465,    -1,    -1,    -1,   961,    -1,   963,   964,   965,
      56,   475,   968,   969,   970,   971,    62,   481,    -1,    65,
     371,    67,    -1,    -1,   375,    -1,    -1,     4,    -1,   493,
      -1,    77,   667,    -1,    -1,    12,    13,    -1,    -1,    -1,
      -1,    87,    19,    89,    -1,   504,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,   363,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,    41,    -1,    43,    -1,   750,    -1,
      -1,   753,   754,    50,   231,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    -1,   718,    -1,    -1,    -1,   244,    -1,    -1,
      -1,    68,    -1,   557,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   567,   568,    -1,    -1,   742,    -1,    -1,
      -1,    -1,    -1,    -1,   796,    92,    -1,   581,    95,    96,
      -1,    -1,    99,    -1,    -1,   807,   103,    -1,    -1,   811,
       6,    -1,    -1,   815,   111,   112,    12,    13,    -1,    -1,
      -1,   605,    -1,    19,   608,   302,    -1,    -1,    -1,   306,
      -1,    -1,   611,    -1,    -1,    31,    -1,    -1,    -1,    -1,
     795,    -1,    -1,    -1,   846,    -1,   848,    43,   850,   851,
      -1,    -1,    -1,   855,    50,   857,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,   867,   537,   538,   539,   540,
      -1,    -1,   874,   875,    -1,   877,   504,    -1,    -1,   881,
      -1,    -1,    -1,   667,    -1,   887,   363,    -1,    -1,    -1,
      -1,    -1,    -1,   895,    -1,    -1,    92,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,   907,   908,   909,    -1,    -1,
      -1,    -1,   914,    -1,   110,    -1,   918,   919,    -1,   921,
      -1,    -1,    -1,    -1,    -1,    -1,   928,    -1,   930,    -1,
     932,   933,    -1,   935,   718,    -1,   938,   939,   940,    -1,
     942,   943,    -1,   945,    -1,    -1,    -1,    -1,   950,   951,
      -1,   953,    -1,   955,    -1,    -1,    -1,   959,   742,   961,
      -1,   963,   964,   965,    -1,    -1,   968,   969,   970,   971,
     641,   750,    -1,   644,   753,   754,   647,   231,    -1,   650,
      -1,    -1,   653,   611,    -1,    -1,   657,   658,    -1,    -1,
     244,    -1,    -1,    -1,   665,   666,    -1,   668,   669,    -1,
      -1,    -1,    -1,   674,   675,   676,   677,   678,    -1,    -1,
      -1,   795,   683,   684,   685,    -1,    -1,   796,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   504,   807,    -1,
      -1,    -1,   811,     6,    -1,    -1,   815,    -1,    -1,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    -1,   302,    -1,
      -1,    -1,   306,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   846,    -1,   848,
      43,   850,   851,    -1,    -1,    -1,   855,    50,   857,    -1,
      -1,    -1,    -1,    -1,   755,    58,    59,    -1,   867,    -1,
      -1,    -1,    -1,    -1,    -1,   874,   875,    -1,   877,    -1,
      -1,    -1,   881,    -1,    -1,   776,   777,    -1,   887,   363,
      -1,    -1,    -1,    -1,    -1,    -1,   895,    90,    -1,    92,
      -1,    -1,   750,    96,    -1,   753,   754,    -1,   907,   908,
     909,    -1,    -1,    -1,   611,   914,    -1,   110,    -1,   918,
     919,    -1,   921,    -1,    -1,    -1,    -1,    -1,    -1,   928,
      -1,   930,    -1,   932,   933,    -1,   935,    -1,    -1,   938,
     939,   940,    -1,   942,   943,    -1,   945,    -1,   796,    -1,
      -1,   950,   951,    -1,   953,    -1,   955,    -1,    -1,   807,
     959,    -1,   961,   811,   963,   964,   965,   815,    -1,   968,
     969,   970,   971,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   846,    -1,
     848,    -1,   850,   851,   231,    -1,    -1,   855,    -1,   857,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,   867,
      -1,    -1,    -1,    -1,    -1,    -1,   874,   875,    -1,   877,
     504,    -1,    -1,   881,    -1,    -1,    -1,    -1,    -1,   887,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   895,    -1,    -1,
      -1,    -1,    -1,   750,    -1,    -1,   753,   754,    -1,   907,
     908,   909,    -1,    -1,    -1,    -1,   914,    -1,    -1,    -1,
     918,   919,    -1,   921,    -1,   302,    -1,    -1,    -1,   306,
     928,    -1,   930,    -1,   932,   933,    -1,   935,    -1,    -1,
     938,   939,   940,    -1,   942,   943,    -1,   945,    -1,   796,
      -1,    -1,   950,   951,    -1,   953,    -1,   955,    -1,    -1,
     807,   959,    -1,   961,   811,   963,   964,   965,   815,    -1,
     968,   969,   970,   971,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   363,   611,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   846,
      -1,   848,    -1,   850,   851,   231,    -1,    -1,   855,    -1,
     857,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   244,    -1,
     867,    -1,    -1,    -1,    -1,    -1,    -1,   874,   875,    -1,
     877,    -1,    -1,    -1,   881,    -1,    -1,    -1,    -1,    -1,
     887,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   895,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     907,   908,   909,    -1,    -1,    -1,    -1,   914,    -1,    -1,
      -1,   918,   919,    -1,   921,    -1,   302,    -1,    -1,    -1,
     306,   928,    -1,   930,    -1,   932,   933,    -1,   935,    -1,
      -1,   938,   939,   940,    -1,   942,   943,    -1,   945,    -1,
      -1,    -1,    -1,   950,   951,    -1,   953,    -1,   955,    -1,
      -1,    -1,   959,    -1,   961,    -1,   963,   964,   965,    -1,
      -1,   968,   969,   970,   971,    -1,   750,   504,    -1,   753,
     754,     1,    -1,    -1,    -1,    -1,    -1,   363,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,   796,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   807,    -1,    -1,    56,   811,    -1,    -1,
      60,   815,    62,    63,    -1,    65,    -1,    67,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    -1,    77,    78,    12,
      13,    -1,    -1,    -1,    -1,    -1,    19,    87,    21,    89,
      -1,    91,   846,    -1,   848,    -1,   850,   851,    31,    -1,
      -1,   855,   754,   857,   611,    -1,    -1,   107,    41,   109,
      43,    -1,    -1,   867,    -1,    -1,    -1,    50,    -1,    -1,
     874,   875,    -1,   877,    -1,    58,    59,   881,    -1,    -1,
      -1,    -1,    -1,   887,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   895,    -1,    -1,    -1,    -1,    -1,    -1,   504,    82,
      83,    -1,    85,   907,   908,   909,    -1,    -1,    91,    92,
     914,    -1,    95,    96,   918,   919,    -1,   921,    -1,    -1,
      -1,    -1,    -1,    -1,   928,    -1,   930,   110,   932,   933,
      -1,   935,    -1,    -1,   938,   939,   940,    -1,   942,   943,
      -1,   945,    -1,    -1,    -1,    -1,   950,   951,    -1,   953,
      -1,   955,    -1,    -1,    -1,   959,    -1,   961,    -1,   963,
     964,   965,    -1,    -1,   968,   969,   970,   971,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   881,
      -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   750,    -1,    -1,   753,   754,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   611,   908,   909,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   921,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   930,    -1,
     932,   933,    -1,   935,    -1,    -1,    -1,   939,   940,   796,
     942,   943,    -1,   945,    -1,    -1,    -1,    -1,    -1,    -1,
     807,   953,    -1,   955,   811,    -1,    -1,    -1,   815,   961,
      -1,   963,   964,   965,    -1,    -1,   968,   969,   970,   971,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   846,
      -1,   848,    -1,   850,   851,    -1,    -1,    -1,   855,    -1,
     857,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     867,    -1,    -1,    -1,    -1,    -1,    -1,   874,   875,    -1,
     877,    -1,    -1,   413,   881,    -1,    -1,    -1,    -1,    -1,
     887,   421,    -1,    -1,    -1,    -1,    -1,    -1,   895,    -1,
      -1,    -1,    -1,    -1,   750,    -1,    -1,   753,   754,    -1,
     907,   908,   909,    -1,    -1,    -1,    -1,   914,    -1,    -1,
      -1,   918,   919,    -1,   921,    -1,    -1,    -1,    -1,    -1,
      -1,   928,    -1,   930,   464,   932,   933,    -1,   935,    -1,
      -1,   938,   939,   940,    -1,   942,   943,    -1,   945,    -1,
     796,    -1,    -1,   950,   951,    -1,   953,    -1,   955,    -1,
      -1,   807,   959,    -1,   961,   811,   963,   964,   965,   815,
      -1,   968,   969,   970,   971,    -1,    -1,    -1,    -1,    -1,
      -1,   511,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     846,    -1,   848,    -1,   850,   851,    -1,    -1,    -1,   855,
      -1,   857,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   867,    -1,    -1,    -1,    -1,    -1,    -1,   874,   875,
      -1,   877,    -1,    -1,    -1,   881,   370,    -1,    -1,   370,
      -1,   887,    -1,   377,    -1,    -1,   377,    -1,    -1,   895,
     384,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   907,   908,   909,    -1,   595,    -1,    -1,   914,    -1,
      -1,   405,   918,   919,   405,   921,    -1,    -1,    -1,    -1,
      -1,   754,   928,    -1,   930,    -1,   932,   933,    -1,   935,
      -1,    -1,   938,   939,   940,    -1,   942,   943,    -1,   945,
      -1,    -1,    -1,    -1,   950,   951,   636,   953,    -1,   955,
     444,    -1,    -1,   959,    -1,   961,    -1,   963,   964,   965,
      -1,    -1,   968,   969,   970,   971,    -1,    -1,   462,   463,
     464,   462,   463,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   687,   688,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   698,    -1,
      -1,   505,    -1,    -1,   505,    -1,    -1,   707,   708,   709,
     710,   515,    -1,    -1,   515,    -1,    -1,   717,    -1,    -1,
      -1,   371,    -1,    -1,    -1,   375,    -1,    -1,    -1,    -1,
      -1,    -1,   536,    -1,    -1,   536,    -1,   737,   881,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   753,   558,   559,   560,   561,   559,   560,
     564,    -1,    -1,   564,    -1,   908,   909,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   578,    -1,    -1,   578,   921,    -1,
      -1,    -1,    -1,   783,    -1,   785,    -1,   930,    -1,   932,
     933,    -1,   935,    -1,    -1,    -1,   939,   940,    -1,   942,
     943,   801,   945,    -1,    -1,   805,    -1,   807,    -1,    -1,
     953,   811,   955,   813,    -1,    -1,    -1,    -1,   961,    -1,
     963,   964,   965,    -1,    -1,   968,   969,   970,   971,    -1,
      -1,   635,    -1,    -1,   635,   835,    -1,    -1,    -1,    -1,
      -1,   841,    -1,    -1,    -1,    -1,   846,   847,    -1,   849,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   371,    -1,    -1,    -1,   375,    -1,    -1,
      -1,    -1,    -1,   873,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   884,   885,    -1,   537,   538,   539,
     540,    -1,   696,    -1,   698,   696,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   907,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   918,   919,
     920,    -1,    -1,    -1,    -1,    -1,   926,   927,   928,   929,
      -1,   931,    -1,   737,    -1,    -1,   740,    -1,   938,   740,
      -1,   941,    -1,   747,    -1,   749,   747,    -1,   749,    -1,
     950,   951,   952,    -1,    -1,    -1,    -1,    -1,    -1,   959,
     960,    -1,   962,    -1,    -1,    -1,    -1,   967,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   780,    -1,    -1,   780,
      -1,   785,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   641,    -1,    -1,   644,   799,    -1,   647,   799,    -1,
     650,    -1,    -1,   653,    -1,    -1,    -1,   657,   658,    -1,
      -1,    -1,    -1,    -1,    -1,   665,   666,   754,   668,   669,
      -1,    -1,    -1,    -1,   674,   675,   676,   677,   678,   537,
     538,   539,   540,   683,   684,   685,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   858,   859,    -1,   858,   859,    -1,
      -1,    -1,    -1,    -1,    -1,   869,    -1,    -1,   869,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   883,
      -1,    -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   905,    -1,    -1,   905,   755,    -1,    -1,    -1,    -1,
      -1,   915,   916,    -1,   915,   916,    -1,    -1,    -1,    -1,
      -1,   925,    -1,    -1,   925,    -1,   776,   777,    -1,    -1,
      -1,    -1,   936,   641,    -1,   936,   644,    -1,    -1,   647,
      -1,    -1,   650,    -1,   881,   653,    -1,    -1,    -1,   657,
     658,    -1,    -1,    -1,    -1,    -1,    -1,   665,   666,    -1,
     668,   669,    -1,    -1,    -1,    -1,   674,   675,   676,   677,
     678,   908,   909,    -1,    -1,   683,   684,   685,    -1,    -1,
      -1,    -1,    -1,    -1,   921,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   930,    -1,   932,   933,    -1,   935,    -1,
      -1,    -1,   939,   940,    -1,   942,   943,    -1,   945,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   953,    -1,   955,    -1,
      -1,    -1,    -1,    -1,   961,    -1,   963,   964,   965,    -1,
      -1,   968,   969,   970,   971,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,   755,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    21,    22,   776,   777,
      25,    -1,    27,    28,    -1,    30,    -1,    32,    33,    34,
      -1,    36,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    79,    -1,    -1,    82,    83,    -1,
      85,    86,    87,    88,    89,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,   106,   107,   108,   109,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    -1,    21,    22,    -1,
      -1,    25,    -1,    27,    28,    -1,    30,    -1,    32,    33,
      34,    -1,    36,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    67,    -1,    69,    70,    71,    72,    73,
      74,    -1,    76,    77,    78,    79,    -1,    -1,    82,    83,
      -1,    85,    86,    87,    88,    89,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,   106,   107,   108,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,    32,
      33,    34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    59,    60,    61,    -1,
      63,    64,    -1,    66,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,
      83,    -1,    85,    86,    -1,    88,    -1,    90,    91,    -1,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    59,    60,    61,
      -1,    63,    64,    -1,    66,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,
      82,    83,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,    30,
      -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    59,    60,
      61,    -1,    63,    64,    -1,    66,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    79,    -1,
      -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,    90,
      91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    21,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    59,
      60,    61,    -1,    63,    64,    -1,    66,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    79,
      -1,    -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    -1,    25,    -1,    27,    -1,
      -1,    30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,
      59,    60,    61,    -1,    63,    64,    -1,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      79,    -1,    -1,    82,    83,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    59,    60,    61,    -1,    63,    64,    -1,    66,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    79,    -1,    -1,    82,    83,    -1,    85,    86,    -1,
      88,    -1,    90,    91,    -1,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,
      57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,    86,
      -1,    88,    -1,    90,    91,    -1,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,   106,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,
      -1,    57,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    -1,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
     106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,    -1,
      25,    -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      55,    -1,    57,    -1,    -1,    60,    61,    -1,    63,    64,
      -1,    66,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      -1,    25,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    55,    -1,    57,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,
      -1,    85,    86,    -1,    88,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,    32,
      33,    34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    54,    55,    -1,    57,    -1,    -1,    60,    61,    -1,
      63,    64,    -1,    66,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,
      83,    -1,    85,    86,    -1,    88,    -1,    90,    91,    -1,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    57,    -1,    -1,    60,    61,
      -1,    63,    64,    -1,    66,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,
      82,    83,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,    30,
      -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,    60,
      61,    -1,    63,    64,    -1,    66,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    79,    -1,
      -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,    90,
      91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    21,    22,    -1,    -1,    25,    -1,    27,    -1,    -1,
      30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,    -1,
      60,    61,    -1,    63,    64,    -1,    66,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    79,
      -1,    -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    -1,    25,    -1,    27,    -1,
      -1,    30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,    -1,
      -1,    60,    61,    -1,    63,    64,    -1,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      79,    -1,    -1,    82,    83,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,    27,
      -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    79,    -1,    -1,    82,    83,    -1,    85,    86,    -1,
      88,    -1,    90,    91,    -1,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,
      27,    -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    64,    -1,    66,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,    86,
      -1,    88,    -1,    90,    91,    -1,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,   106,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,
      -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,    -1,
      66,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    -1,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
     106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,    -1,
      25,    -1,    27,    -1,    -1,    30,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    64,
      -1,    66,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      -1,    25,    -1,    27,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      64,    -1,    66,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,
      -1,    85,    86,    -1,    88,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    -1,    25,    -1,    27,    -1,    -1,    30,    -1,    32,
      33,    34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,
      63,    64,    -1,    66,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,
      83,    -1,    85,    86,    -1,    88,    -1,    90,    91,    -1,
      93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,
      82,    83,    -1,    85,    86,    -1,    88,    -1,    90,    91,
      -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    79,    -1,
      -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,    90,
      91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    79,
      -1,    -1,    82,    83,    -1,    85,    86,    -1,    88,    -1,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    76,    -1,    78,
      79,    -1,    -1,    82,    83,    -1,    85,    86,    -1,    88,
      -1,    90,    91,    -1,    93,    94,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    -1,    76,    -1,
      78,    79,    -1,    -1,    82,    83,    -1,    85,    86,    -1,
      88,    -1,    90,    91,    -1,    93,    94,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,   106,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      17,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    76,
      -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,    86,
      -1,    88,    -1,    90,    91,    -1,    93,    94,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,   106,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    17,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,
      86,    -1,    88,    -1,    90,    91,    -1,    93,    94,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
     106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,
      85,    86,    -1,    88,    -1,    90,    91,    -1,    93,    94,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      54,    55,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,
      -1,    85,    86,    -1,    88,    -1,    90,    91,    -1,    93,
      94,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    39,    40,    -1,    42,
      43,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    74,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    -1,    -1,    96,    97,    98,    99,   100,   101,    -1,
      -1,   104,   105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,   114,   115,   116,   117,   118,   119,   120,   121,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    37,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,
      82,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,
      -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    76,    -1,    78,    79,    -1,
      -1,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,
      91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    -1,    -1,    37,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    76,    -1,    78,    79,
      -1,    -1,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,
      90,    91,    -1,    93,    94,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,     1,    -1,     3,    -1,     5,    -1,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,    -1,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    40,    -1,    -1,    43,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    -1,    -1,    96,    97,    98,
      99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,   118,
     119,   120,   121,     1,    -1,     3,    -1,     5,    -1,    -1,
      -1,    -1,    -1,    11,    12,    13,    14,    15,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,    -1,
      -1,    29,    30,    31,    32,    33,    34,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    -1,    -1,    96,    97,
      98,    99,   100,   101,    -1,    -1,   104,   105,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,   117,
     118,   119,   120,   121,     1,    -1,     3,    -1,     5,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,    -1,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,    26,
      -1,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    -1,    60,    -1,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,    -1,
      -1,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,    96,
      97,    98,    99,   100,   101,    -1,    -1,   104,   105,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,   116,
     117,   118,   119,   120,   121,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    25,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,    -1,
      46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    -1,    60,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    -1,    -1,
      96,    97,    98,    99,   100,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,     1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    24,
      25,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    -1,    60,    -1,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    -1,
      -1,    96,    97,    98,    99,   100,   101,    -1,    -1,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,
      -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     1,    -1,
       3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,    22,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,
      33,    34,    -1,    -1,    37,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,
      83,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,
      93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,    -1,
      -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,     9,    10,    -1,
      -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    21,
      22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,
      82,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,    91,
      -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,    -1,
      -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,    -1,
      -1,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
       1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,    10,
      -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,
      -1,    32,    33,    34,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,
      71,    -1,    73,    74,    -1,    76,    -1,    78,    79,    -1,
      -1,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,    90,
      91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,   100,
      -1,    -1,    -1,   104,    -1,   106,    -1,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,     1,    -1,     3,     4,     5,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,    -1,
      -1,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    -1,    73,    74,    -1,    76,    -1,    78,    79,
      -1,    -1,    82,    83,    -1,    85,    -1,    -1,    -1,    -1,
      90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,    -1,
     100,    -1,    -1,    -1,   104,    -1,    -1,    -1,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,     1,    -1,     3,     4,     5,    -1,    -1,    -1,
       9,    10,    -1,    -1,    -1,    14,    -1,    -1,    17,    -1,
      -1,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,    -1,
      -1,    30,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,    -1,    73,    74,    -1,    76,    -1,    78,
      79,    -1,    -1,    82,    83,    -1,    85,    -1,    -1,    -1,
      -1,    90,    91,    -1,    93,    -1,    95,    -1,    97,    -1,
      -1,   100,    -1,    -1,    -1,   104,    -1,    -1,    -1,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    73,    74,    -1,    76,    -1,
      78,    79,    -1,    -1,    82,    83,    -1,    85,    -1,    -1,
      -1,    -1,    90,    91,    -1,    93,    -1,    95,    -1,    97,
      -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,    -1,
     108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,     1,    -1,     3,     4,     5,    -1,
      -1,    -1,     9,    10,    -1,    -1,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,    -1,
      -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    -1,    73,    74,    -1,    76,
      -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,    -1,
      -1,    -1,    -1,    90,    91,    -1,    93,    -1,    95,    -1,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
      -1,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    -1,    73,    74,    -1,
      76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,    85,
      -1,    -1,    -1,    -1,    90,    91,    -1,    93,    -1,    95,
      -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,     1,    -1,     3,     4,
       5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    -1,    73,    74,
      -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,    -1,
      85,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,    -1,
      95,    -1,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    10,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    73,
      74,    -1,    76,    -1,    78,    79,    -1,    -1,    82,    83,
      -1,    85,    -1,    -1,    -1,    -1,    90,    91,    -1,    93,
      -1,    95,    -1,    97,    -1,     1,   100,     3,    -1,     5,
     104,    -1,    -1,    -1,    -1,    11,    -1,    -1,    14,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,    24,    25,
      -1,    -1,    -1,    29,    30,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    44,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    -1,    93,    -1,    -1,
      -1,    97,    98,    99,   100,   101,    -1,    -1,   104,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,   114,   115,
     116,   117,   118,   119,   120,   121,     1,    -1,     3,    -1,
       5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    60,    61,    -1,    63,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    -1,    73,    74,
      -1,    76,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,    -1,
      -1,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,   104,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      74,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      -1,    -1,    96,    97,    -1,    -1,   100,    -1,    -1,    -1,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     1,    -1,
       3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    34,    -1,    -1,    -1,    -1,    39,    -1,    41,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      -1,    -1,    95,    96,    -1,    -1,    99,    -1,    -1,    -1,
     103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,   112,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    13,    14,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    -1,    -1,    95,    96,    -1,    -1,    99,    -1,    -1,
      -1,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
     112,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
       1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,
      -1,    12,    13,    14,    -1,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,
      41,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    -1,    -1,    95,    96,    -1,     1,    99,     3,
      -1,     5,   103,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,   112,    -1,   114,   115,   116,   117,   118,   119,   120,
     121,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    73,
      74,    -1,    76,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      -1,    -1,    -1,    97,    -1,     1,   100,     3,    -1,     5,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    63,    -1,    -1,
      -1,    -1,    -1,    69,    70,    71,    -1,    73,    74,    -1,
      76,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    90,    -1,    -1,    93,    -1,    -1,
      -1,    97,    -1,     1,   100,     3,    -1,     5,   104,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,    25,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    34,    -1,    -1,    -1,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    63,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    73,    74,    -1,    76,    -1,
      78,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    93,    -1,    -1,    -1,    97,
      -1,     1,   100,     3,    -1,     5,   104,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    14,    -1,   114,   115,   116,   117,
     118,   119,   120,   121,    -1,    25,    -1,    -1,    -1,    -1,
      30,    -1,    32,    33,    34,    -1,    -1,    -1,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    -1,    63,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    -1,    73,    74,    -1,    76,    -1,    78,    79,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    -1,    -1,    -1,    97,    -1,     1,
     100,     3,    -1,     5,   104,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    14,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,    -1,    25,    -1,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      -1,    63,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    73,    74,    -1,    76,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    -1,    -1,    -1,    97,    -1,     1,   100,     3,
      -1,     5,   104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      14,    -1,   114,   115,   116,   117,   118,   119,   120,   121,
      -1,    25,    -1,    -1,    -1,    -1,    30,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,
      74,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    90,    -1,    -1,    93,
      -1,    -1,    -1,    97,    -1,     1,   100,     3,    -1,     5,
     104,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,    25,
      -1,    -1,    -1,    -1,    30,    -1,    32,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    60,    -1,    -1,    63,    12,    13,
      14,    -1,    -1,    -1,    70,    19,    -1,    73,    74,    -1,
      -1,    25,    78,    79,    -1,    -1,    -1,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    39,    -1,    93,    -1,    43,
      -1,    97,    -1,    -1,   100,    -1,    50,    -1,   104,    -1,
      -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     1,    -1,
       3,    -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,
      13,    14,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,     1,    50,     3,    -1,
       5,    -1,    -1,    -1,    -1,    58,    -1,    12,    13,    14,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      25,    74,    -1,    -1,    -1,    -1,    31,    -1,    33,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    92,
      -1,    -1,    -1,    96,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,   116,   117,   118,   119,   120,   121,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    90,    -1,    92,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
     115,   116,   117,   118,   119,   120,   121,     1,    -1,     3,
      -1,     5,    -1,    -1,    -1,    -1,    -1,    -1,    12,    13,
      14,    -1,     1,    -1,     3,    19,     5,    -1,    -1,    -1,
      -1,    25,    -1,    -1,     1,    14,     3,    31,     5,    33,
      34,    -1,    -1,    -1,    -1,    39,    25,    14,    -1,    43,
      -1,    -1,    -1,    -1,    33,    34,    50,    -1,    25,    -1,
      39,    -1,    -1,    -1,    58,    -1,    33,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    74,    -1,    -1,    92,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,   120,   121,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,   120,   121,     1,    -1,     3,    -1,     5,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    14,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    14,    25,
      -1,     1,    -1,     3,    -1,     5,    -1,    33,    34,    25,
      -1,    -1,    -1,    39,    14,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    39,    -1,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,     1,    -1,    -1,    -1,    -1,     6,    -1,    -1,
      -1,    -1,    11,    12,    13,    -1,    -1,    -1,    -1,    18,
      19,    -1,    -1,    22,    -1,    24,    -1,    -1,    -1,    28,
      29,    30,    31,    -1,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    53,    -1,    -1,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    65,    -1,    67,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    78,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    -1,
      89,    90,    91,    92,    93,    -1,    -1,    96,    -1,    98,
      99,    -1,   101,    -1,    -1,    -1,   105,     1,   107,    -1,
     109,   110,     6,    -1,   113,    -1,   115,    -1,    12,    13,
      -1,    -1,    -1,    -1,    18,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    65,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    89,    90,    91,    92,    93,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,     4,    -1,     6,
      -1,   115,    -1,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,
      -1,    -1,    29,    -1,    31,    32,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      -1,    -1,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    95,    96,
      97,    98,    99,   100,   101,    -1,   103,   104,   105,    -1,
      -1,    -1,    -1,   110,   111,   112,   113,     4,    -1,    -1,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    21,    22,     4,    24,    -1,    -1,
      27,    -1,    29,    -1,    12,    13,    -1,    -1,    -1,    -1,
      37,    19,    -1,    -1,    41,    -1,    -1,    44,    -1,    46,
      -1,    -1,    49,    31,    -1,    -1,    53,    54,    55,    -1,
      57,    -1,    -1,    41,    -1,    43,    -1,    64,    -1,    66,
      -1,    -1,    50,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      68,    88,    -1,    90,    91,    -1,    -1,    94,    95,    -1,
      -1,    98,    99,    -1,   101,   102,    -1,    -1,   105,   106,
      -1,   108,    -1,    -1,    92,    -1,   113,    95,    96,    -1,
      -1,    99,     6,    -1,    -1,   103,    -1,    11,    12,    13,
      -1,    15,    -1,   111,   112,    19,    -1,    -1,    -1,    -1,
      24,    -1,    26,    -1,    -1,    29,    -1,    31,    32,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    43,
      44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    -1,    79,    -1,    -1,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    93,
      -1,    -1,    96,    97,    98,    99,   100,   101,     6,    -1,
     104,   105,    -1,    11,    12,    13,   110,    15,    -1,   113,
      -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    26,    -1,
      -1,    29,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    43,    44,    -1,    46,    -1,
      -1,    -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,    -1,
      -1,    79,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,    97,
      98,    99,   100,   101,     6,    -1,   104,   105,    -1,    11,
      12,    13,   110,    15,    -1,   113,    -1,    19,    -1,    -1,
      -1,    -1,    24,    -1,    26,    -1,    -1,    29,    -1,    31,
      32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    43,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      -1,    73,    -1,    -1,    76,    -1,    -1,    79,    -1,     6,
      -1,    83,    84,    -1,    -1,    12,    13,    -1,    -1,    -1,
      92,    93,    19,    -1,    96,    97,    98,    99,   100,   101,
      -1,    -1,   104,   105,    31,    32,    -1,    -1,   110,    -1,
      -1,   113,    -1,    40,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    -1,    73,    -1,    -1,    76,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    -1,    -1,    96,
      97,    -1,    -1,   100,    -1,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,   110
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     4,    20,    41,    75,    82,    91,   123,   124,
     125,   130,   131,   132,   139,   140,   171,   172,   173,   316,
     332,   389,   393,   402,     0,     1,    48,   126,   127,   128,
     129,   359,   131,     1,     4,    82,   140,   332,     1,     4,
      51,    82,   173,   362,     1,     3,     5,    14,    25,    33,
      34,    39,    74,   114,   115,   116,   117,   118,   119,   120,
     121,   313,   314,   315,   317,   326,   336,   344,   345,   350,
     356,   370,   371,   372,   373,   374,   388,   423,   424,   275,
     313,     1,   127,   130,   275,   276,   313,   313,   313,   136,
     137,   138,     1,    30,   341,   402,     1,   341,     1,   402,
     133,   134,   135,     1,    38,   174,   349,   141,   349,     1,
      53,   144,   363,     1,    47,   142,   358,   313,    66,   313,
     141,   144,   142,     1,    22,   175,   334,   363,   194,   275,
     276,   142,   193,   276,     4,    12,    13,    19,    31,    41,
      43,    50,    58,    68,    80,    81,    82,    92,    95,    96,
      99,   103,   111,   112,   145,   146,   147,   148,   149,   150,
     151,   152,   159,   160,   161,   165,   166,   167,   168,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   276,
     277,   313,   323,   325,   331,   342,   354,   361,   368,   403,
     406,   407,   144,   143,   194,   402,   142,   144,   194,     1,
      41,    95,   176,   177,   178,   179,   180,   181,   182,   316,
     352,   393,   406,   341,   144,   169,   313,     1,    83,   146,
     394,    80,    81,    82,   151,   152,   313,     1,   102,   155,
     157,   363,   402,   413,    80,    81,    82,    95,   161,   168,
     186,     1,   170,   196,   363,   402,   111,   186,     1,    57,
     162,   163,   164,   169,   313,   367,     1,    60,   375,   196,
       1,   334,   144,     1,   177,   394,   186,     1,   111,   182,
     186,   393,   421,     1,   155,   375,   155,   157,   157,     1,
      11,    24,    29,    32,    40,    44,    46,    63,    70,    73,
      78,    79,    84,    93,    97,    98,    99,   100,   101,   104,
     105,   113,   158,   186,   196,   197,   198,   199,   200,   201,
     203,   204,   205,   209,   210,   211,   212,   214,   220,   222,
     223,   228,   230,   232,   233,   234,   235,   242,   243,   258,
     259,   261,   262,   263,   264,   265,   266,   267,   268,   270,
     274,   278,   279,   280,   281,   282,   283,   284,   285,   287,
     288,   289,   290,   291,   294,   296,   302,   303,   305,   312,
     313,   324,   335,   340,   341,   343,   345,   351,   355,   357,
     375,   378,   384,   387,   388,   392,   394,   395,   402,   404,
     408,   409,   410,   411,   412,   414,   415,   422,   424,   156,
     193,   162,   313,   197,   394,   408,   411,   169,     1,   169,
       1,   334,   402,     1,    36,   347,   367,   155,     1,    85,
     396,     1,    90,   153,   154,   186,   401,   194,   163,   169,
     169,   153,   401,   157,     1,   197,   162,     1,   394,   197,
     402,   402,     1,    18,    28,    56,    62,    65,    67,    77,
      87,    89,   107,   109,   244,   328,   339,   347,   366,   377,
     380,   382,   391,   398,   400,   417,   419,     1,   378,   392,
     341,     1,   367,   367,   375,   341,     1,    59,   286,   369,
       1,   289,   290,   297,   298,   341,   344,   345,   388,   424,
       1,   288,   286,     1,   286,   295,   388,   424,   206,   313,
     313,   201,   313,   288,     1,     6,   110,   306,   307,   309,
     311,   318,   404,   420,    60,    60,     1,    61,    69,    71,
      76,   240,   241,   242,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   268,   313,   375,   376,   383,   385,
     390,   257,   265,   274,   278,   187,   192,   193,   257,   240,
       1,   304,   308,   310,   311,   343,   420,    30,    60,    60,
      60,    60,   240,   196,    60,     1,   295,   423,   334,   402,
     394,   155,   155,   163,     1,   183,   185,   240,   363,   396,
       1,   334,   401,   164,   155,   155,   401,   394,   241,   279,
     313,   240,   240,     1,   240,   269,   401,   313,     1,   301,
     336,   350,   371,     1,   299,   300,   376,   390,   288,     1,
      21,   333,   229,   231,     1,   422,     1,   297,     1,   307,
     343,     1,     6,   117,   118,   119,   120,   121,   343,     1,
     200,   210,   225,   227,   313,   402,   240,     1,   401,    10,
     240,   322,     1,     9,   321,     1,   108,   418,     1,    17,
     327,     1,   106,   416,     1,    37,    72,   348,   386,     1,
       7,     8,    49,    54,    94,   319,   320,   360,   364,   405,
       1,    55,    86,    88,   365,   397,   399,   376,   390,     1,
      27,    64,    66,   338,   379,   381,   186,   187,   191,   313,
     257,   257,   257,   257,   271,   272,   367,   271,   375,   402,
       1,   404,   404,     1,   310,   279,   313,   269,   240,   240,
     269,   402,     1,    16,   236,   237,   330,   240,   292,   293,
     315,   317,   326,   336,   344,   345,   350,   370,   371,   388,
     424,   193,   184,   185,   154,   402,   402,   375,   396,   396,
     334,   401,   288,   297,   201,   402,   402,    60,   301,   402,
     334,     1,   240,   402,   401,   333,   247,   248,   249,   250,
     251,   252,   252,   253,   253,   191,   253,   253,   254,   254,
     254,   255,   255,   257,   257,   257,   401,   401,   272,   273,
     367,   240,   273,   269,   401,   375,   401,   401,   401,   401,
       1,    42,   237,   238,   353,    60,   401,   293,     1,   334,
     394,   269,   401,   240,   301,   240,   240,   402,     1,   210,
     313,   402,     1,   226,   227,   401,   201,   202,   203,   207,
     213,   221,   224,   313,   355,   357,   422,   245,   257,     1,
     260,   367,    85,   396,   401,   269,   401,   215,   363,   196,
     196,   154,   201,   185,   401,   401,   402,   226,   401,   226,
     401,   401,   201,     1,    35,   346,   208,    60,    60,    60,
     396,   401,     1,    15,    26,   216,   217,   218,   219,   329,
     337,   401,   402,   226,   401,   401,   201,   401,   201,   201,
     201,   333,   225,   402,   240,   240,   217,   218,     1,   197,
     219,   239,   240,   333,   196,   401,   201,   201,   201,   202,
     203,   313,   355,   357,   422,   402,   240,   402,   401,   401,
       1,   394,   333,   201,    60,    60,    60,   240,   402,   402,
     226,   401,   202,   202,   225,   402,   240,   240,   402,   226,
     401,   226,   401,   401,   202,   346,   402,   240,   402,   401,
     401,   226,   401,   401,   202,   401,   202,   202,   202,   240,
     402,   402,   226,   401,   202,   401,   202,   202,   202,   402,
     226,   401,   226,   401,   401,   346,   202,   226,   401,   401,
     401,   401
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   122,   123,   124,   124,   125,   126,   126,   127,   127,
     128,   129,   130,   130,   131,   131,   131,   133,   132,   134,
     132,   135,   132,   136,   132,   137,   132,   138,   132,   139,
     139,   140,   140,   140,   141,   142,   143,   143,   144,   145,
     145,   146,   146,   146,   147,   147,   148,   149,   149,   149,
     149,   150,   150,   151,   151,   151,   152,   152,   153,   153,
     154,   155,   156,   156,   157,   157,   157,   157,   158,   158,
     159,   159,   160,   160,   161,   161,   161,   161,   161,   161,
     161,   162,   162,   162,   163,   163,   164,   164,   165,   166,
     166,   166,   166,   166,   166,   166,   166,   167,   167,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   169,   170,
     170,   171,   172,   172,   173,   173,   174,   174,   175,   176,
     176,   177,   177,   178,   179,   179,   179,   180,   180,   181,
     181,   182,   182,   183,   184,   184,   185,   185,   186,   186,
     187,   187,   188,   188,   189,   189,   189,   189,   189,   189,
     190,   190,   191,   191,   192,   192,   193,   194,   195,   196,
     196,   197,   197,   198,   198,   199,   200,   201,   201,   201,
     201,   201,   201,   202,   202,   202,   202,   202,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   204,
     206,   205,   208,   207,   209,   210,   210,   210,   210,   210,
     210,   210,   210,   211,   212,   213,   214,   215,   216,   216,
     217,   218,   218,   219,   219,   220,   221,   222,   223,   223,
     223,   223,   223,   223,   223,   223,   224,   224,   224,   224,
     224,   224,   224,   224,   225,   225,   226,   227,   227,   229,
     228,   231,   230,   232,   233,   234,   235,   235,   236,   236,
     237,   238,   239,   240,   241,   241,   242,   243,   243,   243,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   245,   245,   246,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   251,   252,   252,   252,
     252,   252,   252,   253,   253,   253,   253,   254,   254,   254,
     255,   255,   255,   255,   256,   256,   257,   257,   257,   257,
     257,   258,   259,   260,   260,   260,   260,   261,   262,   263,
     263,   263,   263,   264,   264,   264,   264,   264,   264,   265,
     265,   266,   266,   267,   267,   267,   267,   267,   267,   267,
     268,   268,   269,   269,   270,   270,   270,   270,   271,   271,
     272,   273,   273,   274,   274,   275,   275,   276,   276,   277,
     278,   278,   279,   279,   280,   281,   281,   281,   281,   281,
     281,   282,   282,   282,   283,   283,   284,   284,   285,   285,
     286,   287,   287,   287,   288,   288,   289,   289,   290,   290,
     291,   292,   292,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   294,   294,   295,   295,   296,   296,
     296,   296,   296,   296,   297,   298,   299,   300,   300,   301,
     301,   301,   302,   302,   303,   303,   304,   305,   306,   306,
     307,   307,   308,   308,   309,   309,   310,   310,   311,   311,
     311,   311,   311,   311,   311,   312,   313,   313,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   315,   316,   316,   317,   318,   318,
     319,   319,   320,   321,   321,   322,   323,   324,   325,   326,
     327,   327,   328,   328,   329,   329,   330,   330,   331,   332,
     332,   333,   333,   334,   334,   335,   336,   336,   337,   337,
     338,   338,   339,   340,   340,   341,   341,   342,   343,   343,
     344,   344,   345,   345,   346,   346,   347,   347,   348,   348,
     349,   349,   350,   351,   352,   353,   353,   354,   355,   356,
     357,   358,   358,   359,   359,   360,   360,   361,   362,   362,
     363,   363,   364,   365,   365,   366,   367,   367,   368,   369,
     369,   370,   371,   372,   373,   374,   375,   375,   376,   376,
     377,   378,   378,   379,   380,   381,   382,   383,   384,   384,
     385,   386,   387,   388,   388,   389,   390,   391,   392,   393,
     394,   394,   395,   396,   396,   397,   398,   399,   400,   401,
     401,   402,   402,   403,   404,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   413,   414,   415,   416,   416,
     417,   418,   418,   419,   420,   421,   422,   422,   423,   424
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     3,     1,     2,     1,     1,
       3,     5,     1,     2,     1,     1,     1,     0,     7,     0,
       5,     0,     6,     0,     6,     0,     4,     0,     5,     1,
       2,     1,     1,     1,     2,     2,     1,     3,     3,     1,
       2,     1,     1,     1,     1,     1,     2,     3,     4,     2,
       3,     1,     2,     1,     1,     1,     4,     3,     1,     3,
       2,     2,     1,     3,     4,     3,     2,     1,     4,     4,
       4,     3,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     3,     1,     3,     2,     4,
       4,     3,     3,     3,     3,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     1,
       1,     5,     1,     2,     1,     1,     2,     3,     3,     1,
       2,     1,     1,     3,     1,     1,     1,     5,     5,     1,
       2,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       2,     1,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     7,     7,     5,     4,     1,     2,
       2,     1,     2,     3,     2,     5,     5,     7,     9,     8,
       8,     7,     8,     7,     7,     6,     9,     8,     8,     7,
       8,     7,     7,     6,     1,     1,     1,     1,     3,     0,
       4,     0,     4,     3,     3,     5,     3,     4,     1,     2,
       5,     2,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     4,     4,     1,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       1,     1,     1,     4,     6,     6,     3,     5,     5,     3,
       3,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       5,     4,     1,     3,     4,     4,     3,     3,     1,     2,
       3,     2,     3,     4,     4,     1,     3,     1,     3,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     2,     1,     1,     2,     1,     1,     1,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     5,     4,
       3,     4,     3,     2,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
        case 17:
#line 54 "B053040014.y" /* yacc.c:1646  */
    {push(yylval.name,0);}
#line 4677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 55 "B053040014.y" /* yacc.c:1646  */
    {push(yylval.name,0);}
#line 4683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 56 "B053040014.y" /* yacc.c:1646  */
    {push(yylval.name,0);}
#line 4689 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 57 "B053040014.y" /* yacc.c:1646  */
    {push(yylval.name,0);}
#line 4695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 58 "B053040014.y" /* yacc.c:1646  */
    {push(yylval.name,0);}
#line 4701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 59 "B053040014.y" /* yacc.c:1646  */
    {push(yylval.name,0);}
#line 4707 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 102 "B053040014.y" /* yacc.c:1646  */
    {push(yylval.name,0);}
#line 4713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 171 "B053040014.y" /* yacc.c:1646  */
    { push(yylval.name,0);}
#line 4719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 172 "B053040014.y" /* yacc.c:1646  */
    { push(yylval.name,0);}
#line 4725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 178 "B053040014.y" /* yacc.c:1646  */
    { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
#line 4731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 213 "B053040014.y" /* yacc.c:1646  */
    { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
#line 4737 "y.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 214 "B053040014.y" /* yacc.c:1646  */
    { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
#line 4743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 357:
#line 300 "B053040014.y" /* yacc.c:1646  */
    {if(!find_to_end(yylval.name))printf("(Error : Class未宣告使用: %s)",yylval.name);}
#line 4749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 360:
#line 302 "B053040014.y" /* yacc.c:1646  */
    { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
#line 4755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 362:
#line 303 "B053040014.y" /* yacc.c:1646  */
    { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
#line 4761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 364:
#line 304 "B053040014.y" /* yacc.c:1646  */
    { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
#line 4767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 446:
#line 345 "B053040014.y" /* yacc.c:1646  */
    {
	   	//printf("(yytext = \"%s\")",yytext);
		yylval.name = (char*)malloc(yyleng);
                strcpy(yylval.name,yytext);
		//printf("(yylval.name = \"%s\")",yylval.name);
		}
#line 4778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 447:
#line 351 "B053040014.y" /* yacc.c:1646  */
    {
		//printf("(yytext = \"%s\")",yytext);
	   	yylval.name = (char*)malloc(yyleng);
                strcpy(yylval.name,yytext);
		//printf("(yylval.name = \"%s\")",yylval.name);
		}
#line 4789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 540:
#line 409 "B053040014.y" /* yacc.c:1646  */
    {push("$",1);}
#line 4795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 580:
#line 440 "B053040014.y" /* yacc.c:1646  */
    {	
     		s* tmp = get_top();
		int now_wall = 0;
		while(top && tmp->wall == now_wall){
			pop();
			tmp = get_top();
		}
		if(tmp)
			pop();
	}
#line 4810 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4814 "y.tab.c" /* yacc.c:1646  */
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
#line 480 "B053040014.y" /* yacc.c:1906  */

int main(){
	init();
	yyparse();
	return 0;
}
void yyerror(const char *str){
	fprintf(stderr," Error : %s : \"%s\" in line %d , char %d\n",str,yytext,lineCount,charCount);
}
void init(){
	top = NULL;
//	yydebug=1;
}
void push(char* id,int wall){
	/*找重複宣告*/
	if(!wall && find(id)){
		printf("(Error : 重複宣告 : %s)",id);
		return;
	}

	/*真正push*/
	s* tmp = top;
	top = (s*)malloc(sizeof(s));
	if(id)
		top->id = (char*)malloc(strlen(id));
	else{
		printf("Symbol Table: id is NULL!\n");
		return;
	}
	strcpy(top->id,id);
	top->wall = wall;
	top->next=tmp;
	
}
s* get_top(){
	return top;
}
void pop(){
	if(!top){
		printf("Symblo Table: Symbol table is empty!\n");
		return;
	}
	s* tmp = top;
	top = top->next;
	free(tmp);
}
int find(const char* str){
	s* tmp = top;
	while(tmp){
		if(strcmp(str,tmp->id)==0)
			return 1;
		else if(!tmp->next || tmp->next->wall)
			return 0;
		tmp = tmp->next;
	}
	return 0;

}

int find_to_end(const char* str){
	s *tmp = top, *wall_p;
	while(tmp){
		if(tmp->wall)
			wall_p = tmp;
		tmp = tmp->next;
	}
	tmp = wall_p;
	while(tmp){
		if(strcmp(str,tmp->id)==0)
			return 1;
		tmp = tmp->next;
	}
	return 0;
}
int invo_find_to_end(const char* str){
	s *tmp = top;
	while(tmp){
		if(strcmp(str,tmp->id)==0)
			return 1;
		tmp = tmp->next;
	}
	return 0;
}
char* add_function_id(const char* str){
	char* tmp = (char*)malloc(strlen(yylval.name)+3);
        strcpy(tmp,yylval.name);
	strcat(tmp,"()");
	return tmp; 
}
void output(){
	s* tmp = top;
	while(tmp){
		printf("%s ,",tmp->id);
		tmp = tmp->next;
	}

}
