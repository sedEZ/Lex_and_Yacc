%{
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
%}
%error-verbose
%union{
	char* name;
};
%token<name> A ABSTRACT B BACKSLASH BEQ BIGGER BINARY_AND BINARY_OR BREAK BOOLEAN BYTE C CASE CATCH CARET CARET_EQUAL CHAR CLASS COLON COMMA CONST CONTINUE D DEFAULT DEVIDE DEVIDE_EQUAL DO DOT DOUBLE DOUBLE_QUOTATION E EIGHT_NINE ELSE EQUAL EQUAL_EQUAL EXTENDS F FALSE FINAL FINALLY FLOAT FOR GOTO IF IMPLEMENTS IMPORT INSTANCEOF INT INTERFACE KEYWORDS LBB LEQ LL LL_EQUAL LMB LONG LONG_INDICATOR LSB MINUS MINUS_EQUAL MINUS_MINUS MODULO MODULO_EQUAL MULTIPLY MULTIPLY_EQUAL NATIVE NEGATION NEW NOT NOT_EQUAL Null ONE_TO_SEVEN PACKAGE PLUS PLUS_EQUAL PLUS_PLUS PRINT PRIVATE PROTECTED PUBLIC RBB RETURN RMB RR RR_EQUAL RRR RRR_EQUAL RSB SEMICOLON SHORT SINGLE_QUOTATION SMALLER STATIC STRING SUPER SWITCH SYNCHRONIZED THIS THROW THROWS TRANSIENT TRUE TRY UNIARY_AND UNIARY_AND_EQUAL UNIARY_OR UNIARY_OR_EQUAL VALID_STRING_CHARACTER VOID VOLATILE WHILE X ZERO ID LOWER_B LOWER_F LOWER_N LOWER_T LOWER_R

%%

goal : compilation_unit
compilation_unit : package_declaration import_declarations type_declarations | type_declarations

//{printf("Here");}
//Declarations
package_declaration : PACKAGEs package_name SEMICOLONs
import_declarations : import_declaration  | import_declarations import_declaration
import_declaration : single_type_import_declaration 
                    | type_import_on_demand_declaration
single_type_import_declaration : IMPORTs type_name SEMICOLONs
type_import_on_demand_declaration : IMPORTs package_name DOTs MULTIPLY SEMICOLONs
type_declarations : type_declaration | type_declarations type_declaration
type_declaration : class_declaration | interface_declaration | SEMICOLONs
class_declaration : class_modifiers CLASSs identifier {push(yylval.name,0);} super interfaces class_body
		  | class_modifiers CLASSs identifier {push(yylval.name,0);} class_body
		  | class_modifiers CLASSs identifier {push(yylval.name,0);} interfaces class_body
		  | CLASSs identifier {push(yylval.name,0);} super interfaces class_body
                  | CLASSs identifier {push(yylval.name,0);} class_body
                  | CLASSs identifier {push(yylval.name,0);} interfaces class_body
class_modifiers : class_modifier | class_modifiers class_modifier
class_modifier : PUBLIC | ABSTRACT | FINAL
super : EXTENDSs class_type
interfaces : IMPLEMENTSs interface_type_list
interface_type_list : interface_type | interface_type_list COMMAs interface_type
class_body : LBBs class_body_declarations RBBs
class_body_declarations : class_body_declaration
			| class_body_declarations class_body_declaration
class_body_declaration : class_member_declaration
                       | static_initializer | constructor_declaration
class_member_declaration : method_declaration | field_declaration
static_initializer : STATICs block

//Constructor的宣告
constructor_declaration : constructor_modifiers constructor_declarator constructor_body
                        | constructor_modifiers constructor_declarator throws constructor_body
			| constructor_declarator constructor_body
                        | constructor_declarator throws constructor_body
constructor_modifiers : constructor_modifier 
                      | constructor_modifiers constructor_modifier
constructor_modifier : PUBLIC | PROTECTED | PRIVATE
constructor_declarator : simple_type_name LSBs formal_parameter_list RSBs 
		       | simple_type_name LSBs RSBs
formal_parameter_list : formal_parameter | formal_parameter_list COMMAs formal_parameter
formal_parameter : type variable_declarator_id
throws : THROWSs class_type_list
class_type_list : class_type | class_type_list COMMAs class_type
constructor_body : LBBs explicit_constructor_invocation block_statements RBBs 
		 | LBBs block_statements RBBs
	         | LBBs RBBs
		 | SEMICOLONs
explicit_constructor_invocation: THISs LSB argument_list RSBs  | SUPERs LSB argument_list RSBs

//Member variable的宣告
field_declaration : field_modifiers type variable_declarators SEMICOLONs
		  | type variable_declarators SEMICOLONs
field_modifiers : field_modifier | field_modifiers field_modifier
field_modifier : PUBLIC | PROTECTED | PRIVATE | STATIC | FINAL | TRANSIENT | VOLATILE
variable_declarators : variable_declarator  | variable_declarators COMMAs variable_declarator
		     | error
variable_declarator : variable_declarator_id 
                    | variable_declarator_id EQUALs variable_initializer
variable_declarator_id : identifier {push(yylval.name,0);} | variable_declarator_id LMBs RMBs

//Member function的宣告
method_declaration : method_header method_body
method_header : method_modifiers type method_declarator throws 
	      | method_modifiers VOID method_declarator throws 
	      | type method_declarator throws 
              | VOID method_declarator throws 
	      | method_modifiers type method_declarator
              | method_modifiers VOID method_declarator
              | type method_declarator
              | VOID method_declarator

method_modifiers : method_modifier | field_modifiers method_modifier
method_modifier : PUBLIC | PROTECTED | PRIVATE | STATIC | ABSTRACT | FINAL | SYNCHRONIZED | NATIVE
method_declarator : identifier LSBs formal_parameter_list RSBs 
		  | identifier LSBs RSBs
method_body : block | SEMICOLONs
interface_declaration : interface_modifiers INTERFACEs identifier 
                        extends_interfaces interface_body
interface_modifiers : interface_modifier 
                    | interface_modifiers interface_modifier
interface_modifier : PUBLICs | ABSTRACTs
extends_interfaces : EXTENDSs interface_type | extends_interfaces COMMAs interface_type
interface_body : LBBs interface_member_declarations RBBs
interface_member_declarations : interface_member_declaration
                              | interface_member_declarations interface_member_declaration
interface_member_declaration : constant_declaration   | abstract_method_declaration
constant_declaration : constant_modifiers type variable_declarator
constant_modifiers : PUBLICs | STATICs | FINALs
abstract_method_declaration: abstract_method_modifiers type method_declarator throws SEMICOLONs
			   | abstract_method_modifiers VOIDs method_declarator throws SEMICOLONs
abstract_method_modifiers : abstract_method_modifier 
                          | abstract_method_modifiers abstract_method_modifier
abstract_method_modifier : PUBLICs | ABSTRACTs
array_initializer : LBBs variable_initializers RBBs
variable_initializers : variable_initializer  | variable_initializers COMMAs variable_initializer
variable_initializer : expression | array_initializer

//Types
type : primitive_type | reference_type
primitive_type : numeric_type | BOOLEANs
numeric_type : integral_type | floating_point_type
integral_type : BYTEs | SHORTs | INTs | LONGs | CHARs | STRINGs
floating_point_type : FLOATs | DOUBLEs
reference_type : class_or_interface_type | array_type
class_or_interface_type : class_type | interface_type
class_type : type_name
interface_type : type_name
array_type : type LMBs RMBs


//Blocks and Commands
block : LBBs block_statements RBBs | LBBs RBBs
block_statements : block_statement | block_statement block_statements
block_statement : local_variable_declaration_statement | statement
local_variable_declaration_statement : local_variable_declaration SEMICOLONs
local_variable_declaration : type variable_declarators
statement : statement_without_trailing_substatement
          | labeled_statement | if_then_statement | if_then_else_statement
          | while_statement | for_statement
statement_no_short_if : statement_without_trailing_substatement
                      | labeled_statement_no_short_if | if_then_else_statement_no_short_if
                      | while_statement_no_short_if | for_statement_no_short_if
statement_without_trailing_substatement : block | empty_statement 
                                        | expression_statement | switch_statement | do_statement 
                                        | break_statement | continue_statement | return_statement 
                                        | synchronized_statement | throws_statement | try_statement
empty_statement : SEMICOLONs
labeled_statement : identifier { push(yylval.name,0);} COLONs statement
labeled_statement_no_short_if : identifier { push(yylval.name,0);} COLONs statement_no_short_if
expression_statement : statement_expression SEMICOLONs
statement_expression : assignment | preincrement_expression 
                     | postincrement_expression | predecrement_expression
                     | postdecrement_expression | method_invocation 
                     | class_instance_creation_expression
		     | identifier { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
if_then_statement: IFs LSB expression RSBs statement
if_then_else_statement: IFs LSB expression RSBs statement_no_short_if ELSEs statement
if_then_else_statement_no_short_if : IFs LSB expression RSBs statement_no_short_if 
                                      ELSEs statement_no_short_if
switch_statement : SWITCHs LSB expression RSBs switch_block
switch_block : LBBs switch_block_statement_groups switch_labels RBBs
switch_block_statement_groups : switch_block_statement_group
                              | switch_block_statement_groups switch_block_statement_group
switch_block_statement_group : switch_labels block_statements
switch_labels : switch_label | switch_labels switch_label
switch_label : CASEs constant_expression COLONs | DEFAULTs COLONs
while_statement : WHILEs LSB expression RSBs statement
while_statement_no_short_if : WHILEs LSB expression RSBs statement_no_short_if
do_statement : DOs statement WHILEs LSB expression RSBs SEMICOLONs
for_statement : FORs LSB for_init SEMICOLONs expression SEMICOLONs for_update RSBs statement 
	      | FORs LSB for_init SEMICOLONs SEMICOLONs for_update RSBs statement
	      | FORs LSB for_init SEMICOLONs expression SEMICOLONs RSBs statement 
              | FORs LSB for_init SEMICOLONs SEMICOLONs RSBs statement
	      | FORs LSB SEMICOLONs expression SEMICOLONs for_update RSBs statement 
              | FORs LSB SEMICOLONs SEMICOLONs for_update RSBs statement
              | FORs LSB SEMICOLONs expression SEMICOLONs RSBs statement 
              | FORs LSB SEMICOLONs SEMICOLONs RSBs statement
for_statement_no_short_if : FORs LSB for_init SEMICOLONs expression SEMICOLONs for_update RSBs  statement_no_short_if
			  | FORs LSB for_init SEMICOLONs SEMICOLONs for_update RSBs  statement_no_short_if
			  | FORs LSB for_init SEMICOLONs expression SEMICOLONs RSBs  statement_no_short_if
			  | FORs LSB for_init SEMICOLONs SEMICOLONs RSBs  statement_no_short_if
			  | FORs LSB SEMICOLONs expression SEMICOLONs for_update RSBs  statement_no_short_if
                          | FORs LSB SEMICOLONs SEMICOLONs for_update RSBs  statement_no_short_if
                          | FORs LSB SEMICOLONs expression SEMICOLONs RSBs  statement_no_short_if
                          | FORs LSB SEMICOLONs SEMICOLONs RSBs  statement_no_short_if
for_init : statement_expression_list | local_variable_declaration
for_update : statement_expression_list
statement_expression_list : statement_expression 
			  | statement_expression_list COMMAs statement_expression
break_statement : BREAKs identifier { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);} SEMICOLONs
continue_statement : CONTINUEs identifier { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);} SEMICOLONs
return_statement : RETURNs expression SEMICOLONs
throws_statement : THROWs expression SEMICOLONs
synchronized_statement : SYNCHRONIZEDs LSB expression RSBs block
try_statement : TRYs block catches | TRYs block catches finally
catches : catch_clause | catches catch_clause
catch_clause : CATCHs LSB formal_parameter RSBs block
finally : FINALLYs block

//Expressions
constant_expression : expression
expression : assignment_expression
assignment_expression : conditional_expression | assignment
assignment : left_hand_side assignment_operator assignment_expression
left_hand_side : expression_name | field_access | array_access
assignment_operator :  EQUALs | MULTIPLY_EQUALs | DEVIDE_EQUALs | MODULO_EQUALs | PLUS_EQUALs | MINUS_EQUALs 
		    | LL_EQUALs | RR_EQUALs  | RRR_EQUALs | UNIARY_AND_EQUALs | CARET_EQUALs | UNIARY_OR_EQUALs
conditional_expression : conditional_or_expression
                       | conditional_or_expression  expression COLONs conditional_expression
conditional_or_expression : conditional_and_expression
                          | conditional_or_expression BINARY_ORs conditional_and_expression
conditional_and_expression : inclusive_or_expression
                           | conditional_and_expression BINARY_ANDs inclusive_or_expression
inclusive_or_expression : exclusive_or_expression
                        | inclusive_or_expression UNIARY_ORs exclusive_or_expression
exclusive_or_expression : and_expression
                        | exclusive_or_expression CARETs and_expression
and_expression : equality_expression
               | and_expression UNIARY_ANDs equality_expression
equality_expression : relational_expression
                    | equality_expression EQUAL_EQUALs relational_expression
                    | equality_expression NOT_EQUALs relational_expression
relational_expression : shift_expression 
                      | relational_expression SMALLERs shift_expression
                      | relational_expression BIGGERs shift_expression
                      | relational_expression LEQs shift_expression
                      | relational_expression BEQs shift_expression
                      | relational_expression INSTANCEOFs reference_type
shift_expression : additive_expression
                 | shift_expression LLs additive_expression
                 | shift_expression RRs additive_expression
                 | shift_expression RRRs additive_expression
additive_expression : multiplicative_expression
                 | additive_expression PLUSs multiplicative_expression
                 | additive_expression MINUSs multiplicative_expression
multiplicative_expression : unary_expression
                          | multiplicative_expression MULTIPLYs unary_expression
                          | multiplicative_expression DEVIDEs unary_expression
                          | multiplicative_expression MODULOs unary_expression
cast_expression : LSBs primitive_type RSBs unary_expression 
                | LSBs reference_type RSBs unary_expression_not_plus_minus
unary_expression : preincrement_expression | predecrement_expression
                 | PLUSs unary_expression | MINUSs unary_expression
                 | unary_expression_not_plus_minus
predecrement_expression : MINUS_MINUSs unary_expression
preincrement_expression : PLUS_PLUSs unary_expression
unary_expression_not_plus_minus : postfix_expression | NEGATIONs unary_expression 
                                | NOTs unary_expression | cast_expression
postdecrement_expression : postfix_expression MINUS_MINUSs
postincrement_expression : postfix_expression PLUS_PLUSs
postfix_expression : primary | expression_name 
                   | postincrement_expression | postdecrement_expression
method_invocation : method_name LSBs argument_list RSBs 
                  | primary DOTs method_name LSBs argument_list RSBs 
		  | SUPERs DOT method_name LSBs argument_list RSBs
		  | method_name LSBs RSBs 
                  | primary DOTs method_name LSBs RSBs 
                  | SUPERs DOT method_name LSBs RSBs
field_access : primary DOTs identifier | SUPERs DOT identifier
primary : primary_no_new_array | array_creation_expression
primary_no_new_array : literal | THISs | LSBs expression RSBs 
                     | class_instance_creation_expression | field_access 
                     | method_invocation | array_access
class_instance_creation_expression : NEWs class_type LSBs argument_list RSBs | NEWs class_type LSBs RSBs 
argument_list : expression | argument_list COMMAs expression
array_creation_expression : NEWs primitive_type dim_exprs dims 
                          | NEWs class_or_interface_type dim_exprs dims
			  | NEWs primitive_type dim_exprs 
                          | NEWs class_or_interface_type dim_exprs
dim_exprs : dim_expr | dim_exprs dim_expr
dim_expr : LMBs expression RMBs
dims : LMBs RMB | dims LMBs RMBs
array_access : expression_name LMBs expression RMBs | primary_no_new_array LMBs expression RMBs

//Tokens
package_name : identifier | package_name DOTs identifier
type_name : identifier {if(!find_to_end(yylval.name))printf("(Error : Class未宣告使用: %s)",yylval.name);}| package_name DOTs identifier
simple_type_name : identifier
expression_name : identifier { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);} | ambiguous_name DOTs identifier
method_name : identifier { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);} | PRINT
ambiguous_name: identifier { if(!invo_find_to_end(yylval.name))printf("(Error : 未宣告使用 : %s)",yylval.name);}
literal : integer_literal | floating_point_literal | boolean_literal 
        | character_literal | string_literal | null_literal
integer_literal : decimal_integer_literal | hex_integer_literal | octal_integer_literal
decimal_integer_literal : decimal_numeral integer_type_suffix | decimal_numeral
hex_integer_literal :  hex_numeral integer_type_suffix | hex_numeral
octal_integer_literal :  octal_numeral integer_type_suffix | octal_numeral
integer_type_suffix :  LONG_INDICATORs
decimal_numeral : ZEROs | non_zero_digit digits | non_zero_digit
digits : digit | digits digit
digit : ZEROs | non_zero_digit
non_zero_digit : ONE_TO_SEVENs | EIGHT_NINEs
hex_numeral : ZEROs Xs hex_digits
hex_digits : hex_digit | hex_digits hex_digit
hex_digit : ZEROs | ONE_TO_SEVENs | EIGHT_NINEs | As | Bs | Cs | Ds | Es | Fs | LOWER_Bs | LOWER_Fs
octal_numeral : ZEROs octal_digit | octal_numeral octal_digit
octal_digit : ZEROs | ONE_TO_SEVENs
floating_point_literal : digits DOTs digits exponent_part float_type_suffix
		       | DOTs digits exponent_part float_type_suffix
                       | digits exponent_part float_type_suffix
		       | digits DOTs digits exponent_part 
                       | DOTs digits exponent_part 
                       | digits exponent_part
exponent_part : exponent_indicator signed_integer
exponent_indicator : Es
signed_integer : sign digits
sign : PLUSs |  MINUSs
float_type_suffix : Ds | Fs | LOWER_Fs
boolean_literal : TRUEs | FALSEs
character_literal : SINGLE_QUOTATIONs single_character SINGLE_QUOTATIONs 
	          | SINGLE_QUOTATIONs escape_sequence SINGLE_QUOTATIONs
single_character : input_character_except_SINGLE_QUOTATION_and_BACKSLASH
string_literal : DOUBLE_QUOTATIONs string_characters DOUBLE_QUOTATIONs
string_characters : string_character | string_characters string_character
string_character : input_character_except_DOUBLE_QUOTATION_and_BACKSLASH | escape_character
input_character_except_SINGLE_QUOTATION_and_BACKSLASH : VALID_STRING_CHARACTERs | DOUBLE_QUOTATIONs 
input_character_except_DOUBLE_QUOTATION_and_BACKSLASH : VALID_STRING_CHARACTERs | SINGLE_QUOTATIONs
escape_sequence : escape_character | escape_character escape_sequence
escape_character : BACKSLASHs LOWER_B | BACKSLASHs LOWER_F | BACKSLASHs LOWER_N | BACKSLASHs LOWER_T 		
	   	 | BACKSLASHs LOWER_R | BACKSLASHs BACKSLASH | BACKSLASHs DOUBLE_QUOTATIONs
null_literal : Nulls
identifier : IDs {
	   	//printf("(yytext = \"%s\")",yytext);
		yylval.name = (char*)malloc(yyleng);
                strcpy(yylval.name,yytext);
		//printf("(yylval.name = \"%s\")",yylval.name);
		}
	   | other_IDs {
		//printf("(yytext = \"%s\")",yytext);
	   	yylval.name = (char*)malloc(yyleng);
                strcpy(yylval.name,yytext);
		//printf("(yylval.name = \"%s\")",yylval.name);
		}
other_IDs : As | Bs | Cs | Ds | Es | Fs | Xs | LOWER_Bs | LOWER_Fs | LOWER_Ns | LOWER_Ts | LOWER_Rs
	  | ZEROs | ONE_TO_SEVENs | EIGHT_NINEs

//TOKENS
As : A | error
ABSTRACTs : ABSTRACT | error
Bs : B 
BACKSLASHs : BACKSLASH | error
BEQs : BEQ | error
BIGGERs : BIGGER
BINARY_ANDs : BINARY_AND | error
BINARY_ORs : BINARY_OR
BOOLEANs : BOOLEAN
BREAKs : BREAK
BYTEs : BYTE
Cs : C
CARETs : CARET | error
CARET_EQUALs : CARET_EQUAL | error
CASEs : CASE | error
CATCHs : CATCH | error
CHARs : CHAR
CLASSs : CLASS | error
COLONs : COLON | error
COMMAs : COMMA | error
CONTINUEs : CONTINUE
Ds : D | error
DEFAULTs : DEFAULT | error
DEVIDEs : DEVIDE | error
DEVIDE_EQUALs : DEVIDE_EQUAL
DOs : DO | error
DOTs : DOT | error
DOUBLEs : DOUBLE
DOUBLE_QUOTATIONs : DOUBLE_QUOTATION | error
Es : E | error
EIGHT_NINEs : EIGHT_NINE | error
ELSEs : ELSE | error
EQUALs : EQUAL | error
EQUAL_EQUALs : EQUAL_EQUAL | error
EXTENDSs : EXTENDS | error
Fs : F
FALSEs : FALSE
FINALs : FINAL
FINALLYs : FINALLY | error
FLOATs : FLOAT
FORs : FOR
IDs : ID
IFs : IF
IMPLEMENTSs : IMPLEMENTS | error
IMPORTs : IMPORT | error
INSTANCEOFs : INSTANCEOF | error
INTs : INT
INTERFACEs : INTERFACE | error
LBBs : LBB {push("$",1);} | error
LEQs : LEQ
LLs : LL | error
LL_EQUALs : LL_EQUAL
LMBs : LMB | error
LONGs : LONG
LONG_INDICATORs : LONG_INDICATOR | error
LOWER_Bs : LOWER_B
LOWER_Fs : LOWER_F
LOWER_Ns : LOWER_N
LOWER_Rs : LOWER_R
LOWER_Ts : LOWER_T
LSBs : LSB | error
MINUSs : MINUS | error
MINUS_EQUALs : MINUS_EQUAL
MINUS_MINUSs : MINUS_MINUS | error
MODULOs : MODULO
MODULO_EQUALs : MODULO_EQUAL
MULTIPLYs : MULTIPLY
MULTIPLY_EQUALs : MULTIPLY_EQUAL
NEGATIONs : NEGATION
NEWs : NEW | error
NOTs : NOT
NOT_EQUALs : NOT_EQUAL
Nulls : Null
ONE_TO_SEVENs : ONE_TO_SEVEN | error
PACKAGEs : PACKAGE
PLUSs : PLUS
PLUS_EQUALs : PLUS_EQUAL
PLUS_PLUSs : PLUS_PLUS
PUBLICs : PUBLIC
RBBs : RBB {	
     		s* tmp = get_top();
		int now_wall = 0;
		while(top && tmp->wall == now_wall){
			pop();
			tmp = get_top();
		}
		if(tmp)
			pop();
	} | error
RETURNs : RETURN
RMBs : RMB | error
RRs : RR
RR_EQUALs : RR_EQUAL
RRRs : RRR 
RRR_EQUALs : RRR_EQUAL
RSBs : RSB | error
SEMICOLONs : SEMICOLON | error
SHORTs : SHORT
SINGLE_QUOTATIONs : SINGLE_QUOTATION | error
SMALLERs : SMALLER
STATICs : STATIC
STRINGs : STRING
SUPERs : SUPER
SWITCHs : SWITCH
SYNCHRONIZEDs : SYNCHRONIZED
THISs : THIS
THROWs : THROW
THROWSs : THROWS | error
TRUEs : TRUE
TRYs : TRY
UNIARY_ANDs : UNIARY_AND | error
UNIARY_AND_EQUALs : UNIARY_AND_EQUAL
UNIARY_ORs : UNIARY_OR | error
UNIARY_OR_EQUALs : UNIARY_OR_EQUAL
VALID_STRING_CHARACTERs : VALID_STRING_CHARACTER
VOIDs : VOID
WHILEs : WHILE | error
Xs : X
ZEROs : ZERO
%%
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
