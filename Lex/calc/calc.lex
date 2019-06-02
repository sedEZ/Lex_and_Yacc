%{
    #include <stdio.h>
    #include "y.tab.h"
    #define RED "\033[0;32;31m"
    #define NONE "\033[m"
    //currentChar specify the first character of the error token
    char currentChar;
%}
number  [0-9]*[\.]?(([0-9]*[Ee][\+\-]?[0-9]+)|([0-9]*))?
error 	[^ \n\t()+\-\*/]+
%%
{number} {/*yylval is the value of the token*/currentChar = yytext[0];yylval.dval = atof(yytext);return(NUMBER); }
"+" {currentChar = yytext[0]; return('+');}
"-" {currentChar = yytext[0];return('-');}
"*" {currentChar = yytext[0];return('*');}
"/" {currentChar = yytext[0];return('/');}
"(" {currentChar = yytext[0];return('(');}
")" {currentChar = yytext[0];return(')');}
[ ] {/*do nothing*/}
"\n" {return('\n');}
{error} {fprintf(stderr,RED"error token <%s>\n"NONE,yytext);exit(1);}
%%
//Becasue yylex() is a defined routine in yyparse(), we can skip this part:)
