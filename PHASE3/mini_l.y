%{
#define YY_NO_UNPUT
#include <stdio.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <stdbool.h>
#include "y.tab.h"
#include "t.tab.h"
#include "heading.h"

using namespace std;

void yyerror(const char* s);
int yylex(void);


extern int currLine;
extern int currPos;
extern char* yytext;
  
int labelCount = 0;
int tempCount = 0;
int paramCount = 0;

string new_label(){
  string x = "__label__";
  x += to_string(labelCount);
  labelCount += 1;
  return x;
}

string new_temp(){
  string x = "__temp__";
  x += to_string(tempCount);
  tempCount += 1;
  return x;
}

%}

%union{
  int int_val;
  char*	op_val;
  
  struct statement_semval {
	 char *code;
	 char *result_id;
	 char *label;
  } s;

  struct expression_semval {
	 char *code;
	 char *result_id;
	 char *arr_size;
	 char *arr_name;
	 bool is_array;
  } e;

  struct comp_semval {
	 char *optr;
  } c;

}

%start prog_start
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY OF IF THEN ENDIF ELSE FOR WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN
%token SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token <int_val> NUMBER
%token <op_val> IDENT

%type <s> prog_start progInner function funcInnerLocals funcInnerTwo funcInnerParams statement stateInnerOne stateInnerTwo
%type <e> bool_expr var ident termInnerOne expression multiplicative_expr term declaration decInner relation_expr relation_and_expr
%type <c> comp
%%

prog_start:     progInner {
                  cout << $1.code;
                }
                ;
progInner:      function progInner {
                  ostringstream oss;
                  oss << $1.code << $2.code;
                  $$.code = strdup(oss.str().c_str());
                }
                | {
                  $$.code = "";
                }
                ;
function:       FUNCTION ident SEMICOLON BEGIN_PARAMS funcInnerParams END_PARAMS BEGIN_LOCALS funcInnerLocals END_LOCALS BEGIN_BODY funcInnerTwo END_BODY 
                {
                  ostringstream oss;
                  oss << "func " << $2.result_id << endl;
                  oss << $5.code << $8.code << $11.code;
                  $$.code = strdup(oss.str().c_str());
                }
                ;
ident:          IDENT
                {
				  $$.code = "";
                  $$.result_id = $1;
                }
                ;
funcInnerParams:    declaration SEMICOLON funcInnerParams
                    {
                      ostringstream oss;
                      oss << $1.code;
                      oss << "= " << $1.result_id << ", $" << paramCount << endl;
                      $$.code = strdup(oss.str().c_str());
                      paramCount++;
                    }
                    |
                    {
					  $$.code = "";
					  $$.result_id = "";
                    }
                    ;
funcInnerLocals:    declaration SEMICOLON funcInnerLocals 
                    {
                      ostringstream oss;
                      oss << $1.code;
                      oss << $3.code;
                      $$.code = strdup(oss.str().c_str());
                      
                    }
                    | 
                    {
                      $$.code = "";
                      $$.result_id = "";
                    }
                    ;
funcInnerTwo:   statement SEMICOLON funcInnerTwo 
                {
				  ostringstream oss;
				  oss << $1.code << $3.code;
                  $$.code = strdup(oss.str().c_str());
                }
                | 
                {
				  ostringstream oss;
				  oss << "endfunc" << endl << endl;
				  $$.code = strdup(oss.str().c_str());
                }
                ;
declaration:    decInner COLON INTEGER
                {
				  if (strchr($1.result_id, '#') == NULL){
				    ostringstream oss;
				    oss << ". " << $1.result_id << endl;
				    $$.code = strdup(oss.str().c_str());
				    $$.result_id = $1.result_id;
				  }
				  else {
				    char curr = $1.result_id[0];
				    int count = 0;
				    ostringstream oss;
				    while (count < strlen($1.result_id)){
					  ostringstream lss;
					  curr = $1.result_id[count];

					  while ((curr != '#') && count < strlen($1.result_id)){
					    lss << curr;
					    count += 1;
					    curr = $1.result_id[count];
					  }
					  oss << ". " << lss.str().c_str() << endl;
					  count += 1;
					}
					$$.code = strdup(oss.str().c_str());
					$$.result_id = $1.result_id;
				  }
                }
                | decInner COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER 
                {
				  ostringstream oss;
				  oss << ".[] " << $1.result_id << ", " << $5 << endl;
				  $$.arr_size = strdup(to_string($5).c_str());
 				  $$.code = strdup(oss.str().c_str());
				}
                ;
decInner:       ident 
                {
				  
                }
                | ident COMMA decInner 
                {
				  ostringstream oss; 
				  oss << $1.result_id << "#" << $3.result_id;
				  $$.result_id = strdup(oss.str().c_str());
				}
                ;
statement:      var ASSIGN expression
                {
				  if ($1.is_array){
				    ostringstream oss;
				    oss << $1.code;
				    oss << $3.code;
				    oss << "[]= " << $1.arr_name << ", " <<  $1.result_id << ", " 	<< $3.result_id << endl;
				    $$.code = strdup(oss.str().c_str());
				  }
				  else {
				    ostringstream oss;
                    oss << $3.code;
				    oss << "= " << $1.result_id << ", " << $3.result_id << endl;
				    $$.code = strdup(oss.str().c_str());
				  }
                }
                | IF bool_expr THEN stateInnerOne ENDIF
                {
                  string l = new_label();
                  string m = new_label();
                  ostringstream oss;

                  oss << $2.code;
                  oss << "?:= " << l << ", " << $2.result_id << endl;
                  oss << ":= " << m << endl;
                  oss << ": " << l << endl;
                  oss << $4.code;
                  oss << ": " << m << endl;

                  $$.code = strdup(oss.str().c_str());
                }
                | IF bool_expr THEN stateInnerOne ELSE stateInnerOne ENDIF 
				{
				  string l = new_label();
				  string m = new_label();
				  ostringstream oss;
				  
				  oss << $2.code;
				  oss << "?:= " << l << ", " << $2.result_id << endl;
				  oss << ":= " << m << endl;
				  oss << ": " << l << endl;
				  oss << $4.code;
				  oss << ": " << m << endl;
				  oss << $6.code;				  
				}
                | WHILE bool_expr BEGINLOOP stateInnerOne ENDLOOP
				{
				  string l = new_label();
				  string m = new_label();
				  string n = new_label();
				  ostringstream oss;
				  
				  if ($4.label == NULL || strstr($4.label, "__label__") == NULL){
					  oss << ": " << n << endl;
					  oss << $2.code;
					  oss << "?:= " << l << ", " << $2.result_id << endl;
					  oss << ":= " << m << endl;
					  oss << ": " << l << endl;
					  oss << $4.code;
					  oss << ":= " << n << endl;
					  oss << ": " << m << endl;
				  }
				  else {
				  	  oss << ": " << n << endl;
					  oss << $2.code;
					  oss << "?:= " << l << ", " << $2.result_id << endl;
					  oss << ":= " << m << endl;
					  oss << ":= " << $4.label << endl;
					  oss << ": " << l << endl;
					  oss << $4.code;
					  oss << ":= " << n << endl;
					  oss << ": " << m << endl;
					  oss << ": " << $4.label << endl;
				  }
				  

				  $$.code = strdup(oss.str().c_str());
				  
				}
                | DO BEGINLOOP stateInnerOne ENDLOOP WHILE bool_expr 
                {
				  string l = new_label();
				  string m = new_label();
				  string n = new_label();
				  ostringstream oss;
				 
				  if ($3.label == NULL || strstr($3.label, "__label__") == NULL){
					  oss << ": " << l << endl;
					  oss << $3.code;
					  oss << "?:= " << n << ", " << $6.result_id << endl;
					  oss << ":= " << m << endl;
					  oss << ": " << n << endl;
					  oss << $6.code;
					  oss << ": " << m << endl; 
				  }
				  else {
					  oss << ": " << l << endl;
					  oss << $3.code;
					  oss << "?:= " << n << ", " << $6.result_id << endl;
					  oss << ":= " << m << endl;
					  oss << ":= " << $3.label << endl;
					  oss << ": " << n << endl;
					  oss << ": " << $3.label << endl;
					  oss << $6.code;
					  oss << ": " << m << endl;
				  }

				  $$.code = strdup(oss.str().c_str());
				  
				}
                | FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP stateInnerOne ENDLOOP 
                {}
                | READ stateInnerTwo 
                {
				  ostringstream oss;
				  if (strchr($2.result_id, '#') == NULL){
					  oss << ".< " << $2.result_id << endl;
					  $$.code = strdup(oss.str().c_str());
					  $$.result_id = $2.result_id;
				  }
				  else {
					  int count = 0;
					  char curr = $2.result_id[0];
					  
					  while (count < strlen($2.result_id)){
					    curr = $2.result_id[count];
					    ostringstream lss;

					    while ((curr != '#') && count < strlen($2.result_id)){
						  lss << curr;
						  count += 1;
						  curr = $2.result_id[count];
						}
						oss << ".< " << lss.str().c_str() << endl;
						count += 1;
					  }
				  }  
				  $$.code = strdup(oss.str().c_str());				
                }
                | WRITE stateInnerTwo 
                {
				  ostringstream oss;
				  
				  if (strchr($2.result_id, '#') == NULL){
					  oss << ".> " << $2.result_id << endl;
					  $$.code = strdup(oss.str().c_str());
					  $$.result_id = $2.result_id;
				  }
				  else {
					  int count = 0;
					  char curr = $2.result_id[0];
					  
					  while (count < strlen($2.result_id)){
					    curr = $2.result_id[count];
					    ostringstream lss;
					    
					    while ((curr != '#') && count < strlen($2.result_id)){
						  lss << curr;
						  count += 1;
						  curr = $2.result_id[count];
						}
						oss << ".> " << lss.str().c_str() << endl;
						count += 1;
					  }
				  }  
				  $$.code = strdup(oss.str().c_str());	
				}
                | CONTINUE 
                {
                  ostringstream oss;
                  string l = new_label();
                  $$.label = strdup(l.c_str());
                  $$.code = "";
                }
                | RETURN expression 
                {
                  ostringstream oss;
                  oss << $2.code;
                  oss << "ret " << $2.result_id << endl;
                  $$.code = strdup(oss.str().c_str());
                }
                ;
stateInnerOne:  statement SEMICOLON stateInnerOne 
				{
				  ostringstream oss;
				  oss << $1.code << $3.code;
				  $$.code = strdup(oss.str().c_str());
				}
                | statement SEMICOLON 
				{
				  $$.code = $1.code;
				  $$.result_id = $1.result_id;
				}
                ;
stateInnerTwo:  var 
				{
				  $$.code = $1.code;
				  $$.result_id = $1.result_id;
				}
                | var COMMA stateInnerTwo 
			    {
				  ostringstream oss;
				  oss << $1.result_id << "#" << $3.result_id;
				  $$.result_id = strdup(oss.str().c_str());
			    }
                ;
bool_expr:      relation_and_expr
                {
                  $$.code = $1.code;
                  $$.result_id = $1.result_id;
                }
                | relation_and_expr OR bool_expr 
                {
                  ostringstream oss;
                  oss << $1.code << $3.code;
                  string x = new_temp();
                  oss << "|| " << x << ", " << $1.result_id << ", " << $3.result_id;
                  $$.code = strdup(oss.str().c_str());
                  $$.result_id = strdup(x.c_str());
                }
                ;
relation_and_expr:  relation_expr 
                    {
                      $$.code = $1.code;
                      $$.result_id = $1.result_id;
                    }
                    | relation_expr AND relation_and_expr  
                    {
                      ostringstream oss;
                      string x = new_temp();
                      oss << $1.code << $3.code;
                      oss << ". " << x << endl;
                      oss << "&& " << x << 	", " << $1.result_id << ", " << $3.result_id << endl;
                      
                      $$.code = strdup(oss.str().c_str());
                      $$.result_id = strdup(x.c_str());
                    }
                    ;
relation_expr:  expression comp expression
                {
                  ostringstream oss;
                  string x = new_temp();
				  oss << $1.code << $3.code;
                  oss << ". " << x << endl;
                  oss << $2.optr << " " << x << ", " << $1.result_id << ", " << $3.result_id << endl;
                  $$.code = strdup(oss.str().c_str());
                  $$.result_id = strdup(x.c_str());
                }
                | TRUE 
                {
				  ostringstream oss;
				  oss << "1";
				  $$.result_id = strdup(oss.str().c_str());
				}
                | FALSE 
                {
				  ostringstream oss;
				  oss << "0";
				  $$.result_id = strdup(oss.str().c_str());				
				}
                | 
                L_PAREN bool_expr R_PAREN 
                {
				  $$.code = $2.code;
				  $$.result_id = $2.result_id;
				}
                | NOT expression comp expression {printf("relation_expr . NOT expression comp expression \n");}
                | NOT TRUE {printf("relation_expr . NOT TRUE \n");}
                | NOT FALSE {printf("relation_expr . NOT FALSE \n");}
                | NOT L_PAREN bool_expr R_PAREN {printf("relation_expr . NOT L_PAREN bool_expr R_PAREN \n");}
                ;
comp:           EQ
                {
                  $$.optr = "==";
                }
                | NEQ
                {
                  $$.optr = "!=";
                }
                | LT
                {
                  $$.optr = "<";
                }
                | GT
                {
                  $$.optr = ">";
                }
                | LTE
                {
                  $$.optr = "<=";
                }
                | GTE
                {
                  $$.optr = ">=";
                }
                ;
expression:     multiplicative_expr
                {                  
                  $$.result_id = $1.result_id;
                  $$.code = $1.code;
                }
                | multiplicative_expr ADD expression
                {
                  ostringstream oss;
                  oss << $1.code << $3.code;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "+ " << x << ", " << $1.result_id << ", " << $3.result_id << endl;
                  $$.code = strdup(oss.str().c_str());
                  $$.result_id = strdup(x.c_str());
                }
                | multiplicative_expr SUB expression
                {
                  ostringstream oss;
                  oss << $1.code << $3.code;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "- " << x << ", " << $1.result_id << ", " << $3.result_id << endl;
                  $$.code = strdup(oss.str().c_str());
                  $$.result_id = strdup(x.c_str());
                }
                ;
multiplicative_expr:  term
                      {	
						if (strlen($1.code) > 0){
						  if ($1.is_array){
							ostringstream oss;
							string x = new_temp();
							
							oss << $1.code;
							oss << ". " << x << endl;
							oss << "=[] " << x << ", " << $1.arr_name << ", " << $1.result_id << endl;
							$$.code = strdup(oss.str().c_str());
						    $$.result_id = strdup(x.c_str());
						  }
						  else {
							$$.code = $1.code;
						    $$.result_id = $1.result_id;
						  }
		
						}	 
						else {
						  ostringstream oss;
						  string x = new_temp();
						  oss << ". " << x << endl;
						  oss << "= " << x << ", " << $1.result_id << endl;
						  $$.code = strdup(oss.str().c_str());
						  $$.result_id = strdup(x.c_str());
						}
                      }
                      | term MULT multiplicative_expr
                      {
                        ostringstream oss;
                        oss << $1.code << $3.code;
                        string x = new_temp();
                        oss << ". " << x << endl;
                        oss << "* " << x << ", " << $1.result_id << ", " << $3.result_id << endl;
                        $$.code = strdup(oss.str().c_str());
                        $$.result_id = strdup(x.c_str());
                      }
                      | term DIV multiplicative_expr 
                      {
                        ostringstream oss;
                        string x = new_temp();
                        oss << $1.code << $3.code;
                        oss << ". " << x << endl;
                        oss << "/ " << x << ", " << $1.result_id << ", " << $3.result_id << endl;
                        $$.code = strdup(oss.str().c_str());
                        $$.result_id = strdup(x.c_str()); 
                      }
                      | term MOD multiplicative_expr 
                      {
                        ostringstream oss;
                        oss << $1.code << $3.code;
                        string x = new_temp();
                        oss << ". " << x << endl;
                        oss << "% " << x << ", " << $1.result_id << ", " << $3.result_id << endl;
                        $$.code = strdup(oss.str().c_str());
                        $$.result_id = strdup(x.c_str());
                      }
                      ;
term:           var
                {
                  $$.result_id = $1.result_id;
                }
                | NUMBER
                {
			      $$.code = "";		 	
                  $$.result_id = strdup(to_string($1).c_str());
                }
                | L_PAREN expression R_PAREN 
                {
				  $$.code = $2.code;
				  $$.result_id = $2.result_id;
				}
                | SUB var {printf("term . SUB var \n");}
                | SUB NUMBER {printf("term . SUB NUMBER \n");}
                | SUB L_PAREN expression R_PAREN {printf("term . SUB L_PAREN expression R_PAREN \n");}
                | ident L_PAREN termInnerOne R_PAREN 
				{
				  ostringstream oss;
				  oss << $3.code;
				  string x = new_temp();
				  oss << "param " << $3.result_id << endl;
				  oss << ". " << x << endl;
				  oss << "call " << $1.result_id << ", " << x << endl;
				  $$.code = strdup(oss.str().c_str());
				  $$.result_id = strdup(x.c_str());		  
				}
                ;
termInnerOne:   expression COMMA termInnerOne {printf("termInnerOne . expression COMMA termInnerOne \n");}
                | expression 
				{
				  $$.code = $1.code;
                  $$.result_id = $1.result_id;
				}
                | 
				{
				  $$.code = "";
				  $$.result_id = "";
				}
                ;
var:            ident
                { 
                  $$.result_id = $1.result_id;
                }
                | ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
                {
				  $$.arr_name = $1.result_id;
				  $$.result_id = $3.result_id;
				  $$.is_array = TRUE;
				  $$.code = $3.code;
                }
                ;
%%

void yyerror(const char* s) {
   printf("ERROR: %s at symbol \"%s\" on line %d, col %d\n", s, yytext, currLine, currPos);
}
