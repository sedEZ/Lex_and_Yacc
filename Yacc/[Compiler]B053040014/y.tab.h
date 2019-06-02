/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 34 "B053040014.y" /* yacc.c:1909  */

	char* name;

#line 300 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
