%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#define MAX_SYMBOL_NUM 1024
	void create();
	int lookup(const char*);
	int insert(const char*);
	void dump();
	char** symbolTable;
	unsigned int lineCount= 1, charCount=0 ,idCount=0 ;
	int idCheck=0 , idCheck2=0;
%}
Symbols 	[:\(\)\{\}\{\}]
Comma		,
Semicolon	;
Operators 	[\*/%\=]|[\+\-&\|=](1,2)|[<>=!]=?
Keywords	break|case|catch|const|continue|default|do|else|extends|false|final|finally|for|if|implements|main|new|print|private|protected|public|return|static|switch|this|true|try|void|while
Type		boolean|byte|class|char|double|float|int|long|short|string
ID		[a-zA-Z_][a-zA-Z0-9_]*
Doubleeger	[\-]?[0-9]+
Float		[\-]?[0-9]+[\.]?(([0-9]*[Ee][\+\-]?[0-9]+)|([0-9]*))?
String		\".*\"
Comments	\/\/.*\n|\/\*(.|[\r\n])*\*\/
Whitespace	[ \t]+
Newline		\n
InvalidID	[a-zA-Z0-9_#@\$]+
%%
{Keywords}	{ 	
			printf("Line %d, 1st char: %d,\"%s\" is a \"reserved word\".\n",lineCount,charCount+1,yytext); 
			charCount += yyleng; 
		}
{Type}		{ 	
			idCheck = 1;
			printf("Line %d, 1st char: %d,\"%s\" is a \"reserved word\".\n",lineCount,charCount+1,yytext); 
			charCount += yyleng; 
		}
{ID}		{ 	
			if(idCheck==0 || lookup(yytext)!=-1){
				printf("ERROR : Line %d, 1st char: %d,\"%s\" is an \"UNDECLARED ID\".\n",lineCount,charCount+1,yytext);
				printf("\tPlease declare it before using.\n");
                        	charCount += yyleng;
			
			}
			else{	
				if(idCheck==1)//if it's in declaration, set idCheck2 to 1 so other declaration can be valid
					idCheck2 =1;

				printf("Line %d, 1st char: %d,\"%s\" is an \"ID\".\n",lineCount,charCount+1,yytext);
				charCount += yyleng; 
				if(insert(yytext)== -1){
					perror("Insert ID failed");
					exit(0);
				}
			}
				
		}
{Symbols}	{
			printf("Line %d, 1st char: %d,\"%s\" is a \"symbol\".\n",lineCount,charCount+1,yytext);
			charCount += yyleng;
		}
{Comma}		{
			if(idCheck2 == 0){//if the "," is not after id declaration, other ids after it should be invalid
				idCheck=0;
			}
			printf("Line %d, 1st char: %d,\"%s\" is a \"symbol\".\n",lineCount,charCount+1,yytext);
			charCount += yyleng;
		}
{Semicolon}	{
			idCheck=0;	//If the declare is over , clean the state of idCheck
			printf("Line %d, 1st char: %d,\"%s\" is a \"symbol\".\n",lineCount,charCount+1,yytext);
			charCount += yyleng;
		}
{Operators}	{	
			idCheck = 0;
			printf("Line %d, 1st char: %d,\"%s\" is an \"operator\".\n",lineCount,charCount+1,yytext);
                        charCount += yyleng;
		}
{Doubleeger}	{
                        printf("Line %d, 1st char: %d,\"%s\" is an \"Integer\".\n",lineCount,charCount+1,yytext);
                        charCount += yyleng;
                }
{Float}		{
                        printf("Line %d, 1st char: %d,\"%s\" is a \"real\".\n",lineCount,charCount+1,yytext);
                        charCount += yyleng;
                }
{String}        {
                        printf("Line %d, 1st char: %d,%s is a \"string\".\n",lineCount,charCount+1,yytext);
                        charCount += yyleng;
                }
{Comments}	{
                        printf("Line %d, 1st char: %d,\"%s\" is a \"comment\".\n",lineCount,charCount+1,yytext);
                        charCount += yyleng;
                }
{Whitespace}	{	charCount += yyleng;}
{Newline}	{	
			lineCount++;
			charCount=0;
		}
{InvalidID}	{
			printf("ERROR : Line %d, 1st char: %d,\"%s\" is an \"Invalid ID\"!!\n",lineCount,charCount+1,yytext);
			charCount += yyleng;
		}
%%
	int main(){
		create();
		yylex();
		printf("The symbol table contains:\n");
		dump();
		free(symbolTable);
		return 0;
	}

	void create(){
		symbolTable = (char**)calloc(MAX_SYMBOL_NUM,sizeof(char*));//Create symbol table
		if(symbolTable == NULL){
			perror("calloc of symbolTable ERROR!");
			exit(1);
		}
		idCount=0;//idCount records (table size-1);
	}
        int lookup(const char* s){
		for(int i=0;i<=idCount;i++){
			if(symbolTable[i]==NULL | s == NULL)
				break;
			if(strcmp(symbolTable[i],s)==0)
				return i;
		}
		return -1;//search failed
	}
        int insert(const char* s){
		if(idCount < MAX_SYMBOL_NUM){
			symbolTable[idCount] =(char*)malloc(sizeof(strlen(s))+1);
			strcpy(symbolTable[idCount++],s);
			return idCount;
		}
		return -1;//insert failed
	}
        void dump(){
		for(int i=0;i<idCount;i++)
			printf("%s ",symbolTable[i]);
		printf("\n");
	}

