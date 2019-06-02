%{
#include<stdio.h>
unsigned charCount = 0, idCount = 0, lineCount = 0;   
%} 
id 	[^ \t\n]+
space [ ]
eol \n
character   .
%%
{id}	{ idCount++; charCount += yyleng; printf("id : %s\n", yytext);}
{space} {}
{eol}   {lineCount++;}
{character} {printf("charatet token:%s",yytext);charCount++;}
%%
main(){
	yylex(); 	
	printf("The number of characters: %d\n",charCount);
	printf("The number of ids: %d\n", idCount);
	printf("The number of lines: %d\n", lineCount);
	return 0;
 }
