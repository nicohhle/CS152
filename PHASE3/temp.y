

%{
#define YY_NO_UNPUT
#include <stdio.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include "y.tab.h"
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
  labelCount += 1;

  x += to_string(labelCount);
  return x;
}

string new_temp(){
  string x = "__temp__";
  tempCount += 1;

  x += to_string(tempCount);
  return x;
}

%}

%union{
  int int_val;
  char*	op_val;
  struct statement_semval {
	 char* code;
  } s;

  struct expression_semval {
	 char *code;
	 char *result_id;
  } e;

  struct comp_semval {
	 char *optr;
  } c;

}

%start program

%token <int_val> NUMBER
%token <op_val> IDENT

%token FUNCTION
%token BEGIN_PARAMS
%token END_PARAMS
%token BEGIN_LOCALS
%token END_LOCALS
%token BEGIN_BODY
%token END_BODY
%token INTEGER
%token ARRAY
%token OF
%token IF
%token THEN
%token ENDIF
%token ELSE
%token WHILE
%token DO
%token FOR
%token IN
%token BEGINLOOP
%token ENDLOOP
%token CONTINUE
%token READ
%token WRITE
%left AND
%left OR
%right NOT

%token TRUE
%token FALSE
%token RETURN

%left SUB
%left ADD
%left MULT
%left DIV
%left MOD
%left EQ
%left NEQ
%left LT
%left GT
%left LTE
%left GTE

%token L_PAREN
%token R_PAREN
%token L_SQUARE_BRACKET
%token R_SQUARE_BRACKET
%token COLON
%token SEMICOLON
%token COMMA
%left ASSIGN

%type <s> program
%type <s> function
%type <s> statement
%type <s> statementloop
%type <c> comp
%type <e> bool_exp
%type <e> var
%type <e> varloop
%type <e> identifier
%type <e> identifierloop
%type <e> expression
%type <e> expressionloop
%type <e> multiplicative_expression
%type <e> term
%type <e> declaration
%type <e> declarationloop
%type <e> relation_exp
%type <e> relation_and_exp

%%
program:     function program { printf("program -> function program\n"); }
          | 
          {
            $$.code = "";
          }
			    ;

function:   FUNCTION identifier SEMICOLON BEGIN_PARAMS declarationloop END_PARAMS BEGIN_LOCALS declarationloop END_LOCALS BEGIN_BODY statementloop END_BODY 
            {
              ostringstream oss;
              oss << $2.code << $5.code; 

              oss << "func " << $2.result_id << endl;
              oss << $8.code << $11.code;

              oss << "endfunc" << endl;

              cout << oss.str();
            }
            ;

declaration:  identifierloop COLON INTEGER { printf("declaration -> identifierloop COLON INTEGER\n"); }
              | identifierloop COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER { printf("declaration -> identifierloop COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n"); }
              ;

declarationloop:  declaration SEMICOLON declarationloop 
                  { 
                    ostringstream oss;
                    oss << $1.code << $3.code;
                    
                    $$.code = strdup(oss.str().c_str());
                    $$.result_id = "";
                  }
            | 
            { 
              $$.code = "";
              $$.result_id = "";
            }
            ;

statement:  var ASSIGN expression { printf("statement -> var ASSIGN expression\n"); }
            | IF bool_exp THEN statementloop ENDIF 
            {
              string x = new_label();
              string y = new_label();
              ostringstream oss;

              oss << $2.code;
              oss << "?:= " << x << ", " << $2.result_id << endl;
              oss << ":= y" << endl;
              oss << ": " << x << endl;
              oss << $4.code;
              oss << ": " << y << endl;

              $$.code = strdup(oss.str().c_str());
            }
            | IF bool_exp THEN statementloop ELSE statementloop ENDIF { printf("statement -> IF bool_exp THEN statementloop ELSE statementloop ENDIF\n"); }
            | WHILE bool_exp BEGINLOOP statementloop ENDLOOP { printf("statement -> WHILE bool_exp BEGINLOOP statementloop ENDLOOP\n"); }
            | DO BEGINLOOP statementloop ENDLOOP WHILE bool_exp { printf("statement -> DO BEGINLOOP statementloop ENDLOOP WHILE bool_exp\n"); }
            | FOR var ASSIGN number SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statementloop ENDLOOP { printf("statement -> FOR var ASSIGN number SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statementloop ENDLOOP\n"); }
            | READ varloop { printf("statement -> READ varloop\n"); }
            | WRITE varloop { printf("statement -> WRITE varloop\n"); }
            | CONTINUE 
            {
              // std::string x = "continue\n";
              $$.code = "continue\n"; // "strdup(x.c_str())";
            }
            | RETURN expression 
            { 
              ostringstream oss;
              oss << $2.code;
              oss << "ret " << $2.result_id << endl;

              $$.code = strdup(oss.str().c_str());
            }
            ;

statementloop:  statement SEMICOLON statementloop 
                { 
                  ostringstream oss;
                  oss << $1.code << $3.code;

                  $$.code = strdup(oss.str().c_str());
                }
            | statement SEMICOLON 
            { 
              $$.code = $1.code;
            }
            ;

bool_exp:   relation_and_exp OR bool_exp { printf("bool_exp -> relation_and_exp OR bool_exp\n"); }
            | relation_and_exp 
            {
              $$.code = $1.code;
              $$.result_id = $1.result_id;
            }
            ;

relation_and_exp:   notloop AND relation_and_exp { printf("relation_and_exp -> notloop AND relation_and_exp\n"); }
                    | notloop { printf("relation_and_exp -> notloop\n"); }
                    ;

relation_exp:   expression comp expression 
                {
                  ostringstream oss;
                  std::string x = new_temp();

                  oss << $1.code << $3.code;
                  oss << ". " << x << endl;
                  oss << $2.optr << x << ", " << $1.result_id << ", " << $3.result_id << endl;

                  $$.code = strdup(oss.str().c_str());
                  $$.result_id = strdup(x.c_str());
                }
                | TRUE 
                {
                  $$.code = "";
                  $$.result_id = "1";
                }
                | FALSE 
                {
                  $$.code = "";
                  $$.result_id = "0";
                }
                | L_PAREN bool_exp R_PAREN 
                { 
                  $$.code = $2.code;
                  $$.result_id = $2.result_id;
                }
                ;

notloop:    NOT notloop { printf("notloop -> NOT notloop\n"); }
            | relation_exp { printf("notloop -> relation_exp\n"); }
            ;

comp:       EQ 
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

expression: multiplicative_expression 
            {
              $$.code = $1.code;
              $$.result_id = $1.result_id;
            }
            | multiplicative_expression ADD expression 
            {
              ostringstream oss;
              std::string x = new_temp();

              oss << $1.code << $3.code;
              oss << ". " << x << endl;
              oss << "+ " << x << ", " << $1.result_id << ", " << $3.result_id << endl;

              $$.code = strdup(oss.str().c_str());
            }
            | multiplicative_expression SUB expression 
            {
              ostringstream oss;
              std::string x = new_temp();

              oss << $1.code << $3.code;
              oss << ". " << x << endl;
              oss << "- " << x << ", " << $1.result_id << ", " << $3.result_id << endl;

              $$.code = strdup(oss.str().c_str());
            }
            ;

multiplicative_expression:  term 
                            {
                              $$.code = $1.code;
                              $$.result_id = $1.result_id;
                            }
                            | term MULT multiplicative_expression 
                            {
                              ostringstream oss;
                              std::string x = new_temp();

                              oss << $1.code << $3.code;
                              oss << ". " << x << endl;
                              oss << "* " << x << ", " << $1.result_id << ", " << $3.result_id << endl;

                              $$.code = strdup(oss.str().c_str());
                            }
                            | term DIV multiplicative_expression 
                            {
                              ostringstream oss;
                              std::string x = new_temp();

                              oss << $1.code << $3.code;
                              oss << ". " << x << endl;
                              oss << "/ " << x << ", " << $1.result_id << ", " << $3.result_id << endl;

                              $$.code = strdup(oss.str().c_str());
                            }
                            | term MOD multiplicative_expression 
                            {
                              ostringstream oss;
                              std::string x = new_temp();

                              oss << $1.code << $3.code;
                              oss << ". " << x << endl;
                              oss << "% " << x << ", " << $1.result_id << ", " << $3.result_id << endl;

                              $$.code = strdup(oss.str().c_str());
                            }
                            ;

term:   SUB var { printf("term -> SUB var\n"); }
        | SUB number { printf("term -> SUB number\n"); }
        | SUB L_PAREN expression R_PAREN { printf("term -> SUB L_PAREN expression R_PAREN\n"); }
        | var { printf("term -> var\n"); }
        | number { printf("term -> number\n"); }
        | L_PAREN expression R_PAREN 
        {
          $$.code = $2.code;
          $$.result_id = $2.result_id;
        }
        | identifier L_PAREN expressionloop R_PAREN 
        {
          ostringstream oss;
          std::string x = new_temp();

          // no $1.code -- we are not taking in anything
          oss << $3.code;
          oss << ". " << x << endl;
          oss << "call " << $1.result_id << ", " << x << endl;

          $$.code = strdup(oss.str().c_str());
        }
        ;

varloop:  var { printf("varloop -> var\n"); }
          | var COMMA varloop { printf("varloop -> var COMMA varloop\n"); }
          ;

var:      identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET { printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n"); }
          | identifier { printf("var -> identifier\n"); }
          ;

number: NUMBER { printf("number -> NUMBER %d\n", yylval.int_val); }
        ;

expressionloop:   expression COMMA expressionloop 
                  {
                    ostringstream oss;
                    oss << $1.code;
                    oss << "param " << $1.result_id << endl;
                    oss << $3.code;

                    $$.code = strdup(oss.str().c_str());
                    $$.result_id = "";
                  }
                  | expression 
                  {
                    ostringstream oss;
                    oss << $1.code;
                    oss << "param " << $1.result_id << endl;

                    $$.code = strdup(oss.str().c_str());
                    $$.result_id = "";
                  }
                  | 
                  {
                    $$.code = "";
                    $$.result_id = "";
                  }
                  ;

identifier: IDENT 
            { 
              ostringstream oss;
              oss << $1 << endl;
              $$.code = strdup(oss.str().c_str());
              $$.result_id = $1;
            }
            ;

identifierloop:   identifier COMMA identifierloop 
                  { printf("identifierloop -> identifier COMMA identifierloop\n"); } 
                  | identifier 
                  { 
                    $$.code = "";
                    $$.result_id = $1.result_id;
                  }
                  ;

%%

void yyerror(const char* s) {
   printf("ERROR: %s at symbol \"%s\" on line %d, col %d\n", s, yytext, currLine, currPos);
}
