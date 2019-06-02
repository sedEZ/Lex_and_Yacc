%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include"y.tab.h"
	#define MAX_SYMBOL_NUM 1024
	
	void actions();
	unsigned int lineCount= 1, charCount=0 ;
	int print_line = 1;
%}


%x COMMENTS
%x SINGLE_QUOTATION_STRINGS
%x DOUBLE_QUOTATION_STRINGS

A			a|A
ABSTRACT		abstract
B			B
LOWER_B			b
BACKSLASH		\\
BEQ			>=
BIGGER			>
BINARY_AND		&&
BINARY_OR	 	\|\|
BOOLEAN			boolean
BREAK			break
BYTE			byte
C			c|C
CASE			case
CATCH			catch
CARET			\^
CARET_EQUAL		\^=
CHAR			char
CLASS			class
COLON			:
COMMA			,
CONTINUE		continue
D			d|D
DEFAULT			default
DEVIDE			\/
DEVIDE_EQUAL		\/=
DO			do
DOT			\.
DOUBLE			double
DOUBLE_QUOTATION	\"
E			e|E			
EIGHT_NINE		8|9
ELSE			else
EQUAL			=
EQUAL_EQUAL		==
LOWER_T			t
LOWER_R			r
LOWER_N			n
EXTENDS			extends
F			F
LOWER_F			f
FALSE			false
FINAL			final
FINALLY			finally
FLOAT			float
FOR			for
GOTO			goto
IF			if
IMPLEMENTS		implements
IMPORT			import
INSTANCEOF		instanceof
INT			int
INTERFACE		interface
KEYWORDS		keywords
LBB			\{
LEQ			<=
LL			<<
LL_EQUAL		<<=
LMB			\[
LONG			long
LONG_INDICATOR		l|L
LSB			\(
MINUS			\-
MINUS_EQUAL		\-=
MINUS_MINUS		\-\-
MODULO			%
MODULO_EQUAL		%=
MULTIPLY		\*
MULTIPLY_EQUAL		\*=
NATIVE			native
NEGATION		~
NEW			new
NOT			not
NOT_EQUAL		!=
Null			null
ONE_TO_SEVEN		1|2|3|4|5|6|7
PACKAGE			package
PLUS			\+
PLUS_EQUAL		\+=
PLUS_PLUS		\+\+
PRINT			print
PRIVATE			private
PROTECTED		protected
PUBLIC			public
RBB			\}
RETURN			return
RMB			\]
RR			>>
RR_EQUAL		>>=
RRR			>>>
RRR_EQUAL		>>>=
RSB			\)
SEMICOLON		;
SHORT			short
SINGLE_QUOTATION	\'
SMALLER			<
STATIC			static
STRING			String
SUPER			super
SWITCH			switch
SYNCHRONIZED		synchronized
THIS			this
THROW			throw
THROWS			throws
TRANSIENT		transient
TRUE			true
TRY			try
UNIARY_AND		&
UNIARY_AND_EQUAL	&=
UNIARY_OR		\|
UNIARY_OR_EQUAL		\|=
VOID			void
VOLATILE		volatile
WHILE			while
X			x|X
ZERO			0

Whitespace		[ \t\b\f]+
Newline			\n|\r\n
SingleComments		\/\/.*\n
ID			[a-zA-Z_][a-zA-Z0-9_]*
Numbers			[0-9]*
VALID_STRING_CHARACTER	[^\\'"]

%%
<COMMENTS>"*/"				{actions();BEGIN INITIAL;}
<COMMENTS>.				{actions();}
<COMMENTS>{Newline}			{actions();lineCount++;charCount=0;print_line=1;}
<INITIAL>"/*"				{actions();BEGIN COMMENTS;}

<INITIAL>{SINGLE_QUOTATION}				{actions();BEGIN SINGLE_QUOTATION_STRINGS;return (SINGLE_QUOTATION);}
<SINGLE_QUOTATION_STRINGS>{SINGLE_QUOTATION}		{actions();BEGIN INITIAL;return (SINGLE_QUOTATION);}
<SINGLE_QUOTATION_STRINGS>{VALID_STRING_CHARACTER}      {actions();return (VALID_STRING_CHARACTER);}
<SINGLE_QUOTATION_STRINGS>{DOUBLE_QUOTATION}       	{actions();return (DOUBLE_QUOTATION);}

<INITIAL>{DOUBLE_QUOTATION}		{actions();BEGIN DOUBLE_QUOTATION_STRINGS;return(DOUBLE_QUOTATION);}
<DOUBLE_QUOTATION_STRINGS>{DOUBLE_QUOTATION}		{actions();BEGIN INITIAL;return(DOUBLE_QUOTATION);}
<DOUBLE_QUOTATION_STRINGS>{VALID_STRING_CHARACTER}      {actions();return (VALID_STRING_CHARACTER);}
<DOUBLE_QUOTATION_STRINGS>{SINGLE_QUOTATION}       	{actions();return (SINGLE_QUOTATION);}

{Whitespace}	{actions();}
{A}	{actions();return(A);}
{ABSTRACT}	{actions();return (ABSTRACT);}
{B}	{actions();return (B);}
{LOWER_B}	{actions();return (LOWER_B);}
{BACKSLASH}	{actions();return (BACKSLASH);}
{BEQ}	{actions();return (BEQ);}
{BIGGER}	{actions();return (BIGGER);}
{BINARY_AND}	{actions();return (BINARY_AND);}
{BINARY_OR}	{actions();return (BINARY_OR);}
{BREAK}		{actions();return (BREAK);}
{BOOLEAN}	{actions();return (BOOLEAN);}
{BYTE}	{actions();return (BYTE);}
{C}	{actions();return (C);}
{CASE}	{actions();return (CASE);}
{CATCH}	{actions();return (CATCH);}
{CARET}	{actions();return (CARET);}
{CARET_EQUAL}	{actions();return (CARET_EQUAL);}
{CHAR}	{actions();return (CHAR);}
{CLASS}	{actions();return (CLASS);}
{COLON}	{actions();return (COLON);}
{COMMA}	{actions();return (COMMA);}
{CONTINUE}	{actions();return (CONTINUE);}
{D}	{actions();return (D);}
{DEFAULT}	{actions();return (DEFAULT);}
{DEVIDE}	{actions();return (DEVIDE);}
{DEVIDE_EQUAL}	{actions();return (DEVIDE_EQUAL);}
{DO}	{actions();return (DO);}
{DOT}	{actions();return (DOT);}
{DOUBLE}	{actions();return (DOUBLE);}
{E}	{actions();return (E);}
{EIGHT_NINE}	{actions();return (EIGHT_NINE);}
{ELSE}	{actions();return (ELSE);}
{EQUAL}	{actions();return (EQUAL);}
{EQUAL_EQUAL}	{actions();return (EQUAL_EQUAL);}
{EXTENDS}	{actions();return (EXTENDS);}
{F}	{actions();return (F);}
{LOWER_F}	{actions();return (LOWER_F);}
{FALSE}	{actions();return (FALSE);}
{FINAL}	{actions();return (FINAL);}
{FINALLY}	{actions();return (FINALLY);}
{FLOAT}	{actions();return (FLOAT);}
{FOR}	{actions();return (FOR);}
{GOTO}	{actions();return (GOTO);}
{IF}	{actions();return (IF);}
{IMPLEMENTS}	{actions();return (IMPLEMENTS);}
{IMPORT}	{actions();return (IMPORT);}
{INSTANCEOF}	{actions();return (INSTANCEOF);}
{INT}	{actions();return (INT);}
{INTERFACE}	{actions();return (INTERFACE);}
{KEYWORDS}	{actions();return (KEYWORDS);}
{LBB}	{actions();return (LBB);}
{LEQ}	{actions();return (LEQ);}
{LL}	{actions();return (LL);}
{LL_EQUAL}	{actions();return (LL_EQUAL);}
{LMB}	{actions();return (LMB);}
{LONG}	{actions();return (LONG);}
{LONG_INDICATOR}	{actions();return (LONG_INDICATOR);}
{LOWER_T}	{actions();return (LOWER_T);}
{LOWER_R}	{actions();return (LOWER_R);}
{LOWER_N}	{actions();return (LOWER_N);}
{LSB}	{actions();return (LSB);}
{MINUS}	{actions();return (MINUS);}
{MINUS_EQUAL}	{actions();return (MINUS_EQUAL);}
{MINUS_MINUS}	{actions();return (MINUS_MINUS);}
{MODULO}	{actions();return (MODULO);}
{MODULO_EQUAL}	{actions();return (MODULO_EQUAL);}
{MULTIPLY}	{actions();return (MULTIPLY);}
{MULTIPLY_EQUAL}	{actions();return (MULTIPLY_EQUAL);}
{NATIVE}	{actions();return (NATIVE);}
{NEGATION}	{actions();return (NEGATION);}
{NEW}	{actions();return (NEW);}
{NOT}	{actions();return (NOT);}
{NOT_EQUAL}	{actions();return (NOT_EQUAL);}
{Null}	{actions();return (Null);}
{ONE_TO_SEVEN}	{actions();return (ONE_TO_SEVEN);}
{PACKAGE}	{actions();return (PACKAGE);}
{PLUS}	{actions();return (PLUS);}
{PLUS_EQUAL}	{actions();return (PLUS_EQUAL);}
{PLUS_PLUS}	{actions();return (PLUS_PLUS);}
{PRINT}		{actions();return (PRINT);}
{PRIVATE}	{actions();return (PRIVATE);}
{PROTECTED}	{actions();return (PROTECTED);}
{PUBLIC}	{actions();return (PUBLIC);}
{RBB}	{actions();return (RBB);}
{RETURN}	{actions();return (RETURN);}
{RMB}	{actions();return (RMB);}
{RR}	{actions();return (RR);}
{RR_EQUAL}	{actions();return (RR_EQUAL);}
{RRR}	{actions();return (RRR);}
{RRR_EQUAL}	{actions();return (RRR_EQUAL);}
{RSB}	{actions();return (RSB);}
{SEMICOLON}	{actions();return (SEMICOLON);}
{SHORT}	{actions();return (SHORT);}
{SMALLER}	{actions();return (SMALLER);}
{STATIC}	{actions();return (STATIC);}
{STRING}	{actions();return (STRING);}
{SUPER}	{actions();return (SUPER);}
{SWITCH}	{actions();return (SWITCH);}
{SYNCHRONIZED}	{actions();return (SYNCHRONIZED);}
{THIS}	{actions();return (THIS);}
{THROW}	{actions();return (THROW);}
{THROWS}	{actions();return (THROWS);}
{TRANSIENT}	{actions();return (TRANSIENT);}
{TRUE}	{actions();return (TRUE);}
{TRY}	{actions();return (TRY);}
{UNIARY_AND}	{actions();return (UNIARY_AND);}
{UNIARY_AND_EQUAL}	{actions();return (UNIARY_AND_EQUAL);}
{UNIARY_OR}	{actions();return (UNIARY_OR);}
{UNIARY_OR_EQUAL}	{actions();return (UNIARY_OR_EQUAL);}
{VOID}	{actions();return (VOID);}
{VOLATILE}	{actions();return (VOLATILE);}
{WHILE}	{actions();return (WHILE);}
{X}	{actions();return (X);}
{ZERO}	{actions();return (ZERO);}
{ID}	{actions();return (ID);}

{SingleComments}	{actions();lineCount++;charCount=0;print_line=1;}
{Newline}		{actions();lineCount++;charCount=0;print_line=1;}

%%


void actions(){
	if(print_line){
		printf("Line %d :",lineCount);
		print_line = 0;
	}
	charCount += yyleng;
	printf("%s",yytext);
}
