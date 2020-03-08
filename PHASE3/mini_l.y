

%{
#define YY_NO_UNPUT
#define api.value.type variant
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "heading.h"
int yyerror(char *s);
int yylex(void);

int labelCount = 0;
int tempCount = 0;
int paramCount = 0;

struct statement_semval {
  string code;
};

struct expression_semval {
  string code;
  string result_id;
};

struct ident_semval {
  string name;
};

struct comp_semval {
  string optr;
};


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
  // int int_val;
  // char*	op_val;
  struct expression_semval* e_semval;
  struct statement_semval* s_semval;
  struct comp_semval* c_semval;
}

%start prog_start
%token FUNCTION BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY INTEGER ARRAY OF IF THEN ENDIF ELSE FOR WHILE DO BEGINLOOP ENDLOOP CONTINUE READ WRITE AND OR NOT TRUE FALSE RETURN
%token SUB ADD MULT DIV MOD EQ NEQ LT GT LTE GTE SEMICOLON COLON COMMA L_PAREN R_PAREN L_SQUARE_BRACKET R_SQUARE_BRACKET ASSIGN
%token <int> NUMBER
%token <char*> IDENT

%type <s_semval> prog_start
%type <s_semval> progInner
%type <s_semval> function
%type <s_semval> funcInnerTwo
%type <s_semval> funcInnerParams
%type <s_semval> funcInnerLocals
%type <s_semval> statement
%type <c_semval> comp
%type <s_semval> stateInnerOne
%type <s_semval> stateInnerTwo
%type <e_semval> bool_expr
%type <e_semval> var
%type <e_semval> ident
%type <e_semval> expression
%type <e_semval> multiplicative_expr
%type <e_semval> term
%type <e_semval> declaration
%type <e_semval> decInner
%type <e_semval> relation_expr
%type <e_semval> relation_and_expr

%%
prog_start:     progInner {
                  cout << $1->code;
                }
                ;
progInner:      function progInner {
                  ostringstream oss;
                  oss << $1->code << $2->code;
                  $$->code = oss.str();
                }
                | {
                  $$->code = "";
                }
                ;
function:       FUNCTION ident SEMICOLON BEGIN_PARAMS funcInnerParams END_PARAMS BEGIN_LOCALS funcInnerLocals END_LOCALS BEGIN_BODY funcInnerTwo END_BODY 
                {
                  ostringstream oss;
                  oss << $2->code << $5->code << $8->code << $11->code;
                  $$->code = oss.str();
                }
                ;
ident:          IDENT
                {
                  ostringstream oss;
                  oss << ". " << $1 << endl;
                  $$->code = oss.str();
                  $$->result_id = $1;
                }
                ;
funcInnerParams:    declaration SEMICOLON funcInnerParams
                    {
                      ostringstream oss;
                      string x = new_temp();
                      oss << $1->code;
                      oss << "= " << $1->result_id << ", $" << paramCount << endl;
                      oss << ". " << x << endl;
                      oss << "= " << x << ", " << $1->result_id << endl;
                      $$->code = oss.str();
                      paramCount++;
                    }
                    |
                    {
                      $$->code = "";
                    }
                    ;
funcInnerLocals:    declaration SEMICOLON funcInnerLocals 
                    {
                      ostringstream oss;
                      oss << $1->code;
                      oss << $3->code;
                      $$->code = oss.str();
                    }
                    | 
                    {
                      $$->code = "";
                    }
                    ;
funcInnerTwo:   statement SEMICOLON funcInnerTwo 
                {
                  $$->code = $1->code;
                }
                | 
                {
                  $$->code = "";
                }
                ;
declaration:    decInner COLON INTEGER
                {
                  $$->code = $1->code;
                }
                | decInner COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER {printf("declaration -> decInner COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER \n");}
                ;
decInner:       ident 
                {
                  $$->code = $1->code;
                }
                | ident COMMA decInner {printf("decInner -> ident COMMA decInner \n");}
                ;
statement:      var ASSIGN expression
                {
                  ostringstream oss;
                  oss << $3->code;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "= " << x << ", " << $1->result_id << ", " << $3->result_id << endl;
                  $$->code = oss.str();
                }
                | IF bool_expr THEN stateInnerOne ENDIF
                {
                  string l = new_label();
                  string m = new_label();
                  ostringstream oss;

                  oss << $2->code;
                  oss << "?:= " << l << ", " << $2->result_id << endl;
                  oss << ":= m" << endl;
                  oss << ": " << l << endl;
                  oss << $4->code;
                  oss << ": " << m << endl;

                  $$->code = oss.str();
                }
                | IF bool_expr THEN stateInnerOne ELSE stateInnerOne ENDIF {printf("statement -> IF bool_exp THEN stateInnerOne ELSE stateInnerOne ENDIF \n");}
                | WHILE bool_expr BEGINLOOP stateInnerOne ENDLOOP {printf("statement -> WHILE bool_expr BEGINLOOP stateInnerOne ENDLOOP \n");}
                | DO BEGINLOOP stateInnerOne ENDLOOP WHILE bool_expr {printf("statement -> DO BEGINLOOP stateInnerOne ENDLOOP WHILE bool_expr \n");}
                | FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP stateInnerOne ENDLOOP {printf("statement -> FOR var ASSIGN NUMBER SEMICOLON bool_expr SEMICOLON var ASSIGN expression BEGINLOOP stateInnerOne ENDLOOP \n");}
                | READ stateInnerTwo 
                {
                  // ostringstream oss;
                  // oss << $2->code;
                  // oss << ".< " << $2->resul
                }
                | WRITE stateInnerTwo 
                {printf("statement -> write stateInnerTwo \n");}
                | CONTINUE 
                {
                  ostringstream oss;
                  string x = new_label();
                  oss << ":= x" << endl;
                  oss << ": " << x << endl;
                  $$->code = oss.str();
                }
                | RETURN expression 
                {
                  ostringstream oss;
                  oss << $2->code;
                  oss << "ret " << $2->result_id << endl;
                  $$->code = oss.str();
                }
                ;
stateInnerOne:  statement SEMICOLON stateInnerOne {printf("stateInnerOne -> statement SEMICOLON stateInnerOne \n");}
                | statement SEMICOLON {printf("stateInnerOne -> statement SEMICOLON \n");}
                ;
stateInnerTwo:  var {printf("stateInnerTwo -> var \n");}
                | var COMMA stateInnerTwo {printf("stateInnerTwo -> var COMMA stateInnerTwo \n");}
                ;
bool_expr:      relation_and_expr
                {
                  $$->code = $1->code;
                  $$->result_id = $1->result_id;
                }
                | relation_and_expr OR bool_expr 
                {
                  ostringstream oss;
                  oss << $1->code << $3->code;
                  string x = new_temp();
                  oss << "|| " << x << ", " << $1->result_id << ", " << $3->result_id;
                  $$->code = oss.str();
                  $$->result_id = x;
                }
                ;
relation_and_expr:  relation_expr 
                    {
                      $$->code = $1->code;
                      $$->result_id = $1->result_id;
                    }
                    | relation_expr AND relation_and_expr  
                    {
                      ostringstream oss;
                      oss << $1->code << $3->code;
                      string x = new_temp();
                      oss << "&& " << x << ", " << $1->result_id << ", " << $3->result_id;
                      $$->code = oss.str();
                      $$->result_id = x;
                    }
                    ;
relation_expr:  expression comp expression
                {
                  ostringstream oss;
                  string x = new_temp();
                  oss << $1->code;
                  oss << $3->code;
                  oss << $2->optr << " " << x << ", " << $1->result_id << ", " << $3->result_id << endl;
                  $$->code = oss.str();
                  $$->result_id = x;
                }
                | TRUE {printf("relation_expr -> TRUE \n");}
                | FALSE {printf("relation_expr -> FALSE \n");}
                | L_PAREN bool_expr R_PAREN {printf("relation_expr -> L_PAREN bool_expr R_PAREN \n");}
                | NOT expression comp expression {printf("relation_expr -> NOT expression comp expression \n");}
                | NOT TRUE {printf("relation_expr -> NOT TRUE \n");}
                | NOT FALSE {printf("relation_expr -> NOT FALSE \n");}
                | NOT L_PAREN bool_expr R_PAREN {printf("relation_expr -> NOT L_PAREN bool_expr R_PAREN \n");}
                ;
comp:           EQ
                {
                  $$->optr = "=";
                }
                | NEQ
                {
                  $$->optr = "!=";
                }
                | LT
                {
                  $$->optr = "<";
                }
                | GT
                {
                  $$->optr = ">";
                }
                | LTE
                {
                  $$->optr = "<=";
                }
                | GTE
                {
                  $$->optr = ">=";
                }
                ;
expression:     multiplicative_expr
                {                  
                  $$->result_id = $1->result_id;
                  $$->code = $1->code;
                }
                | multiplicative_expr ADD expression
                {
                  ostringstream oss;
                  oss << $1->code << $3->code;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "+ " << x << ", " << $1->result_id << ", " << $3->result_id << endl;
                  $$->code = oss.str();
                  $$->result_id = x;
                }
                | multiplicative_expr SUB expression
                {
                  ostringstream oss;
                  oss << $1->code << $3->code;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "- " << x << ", " << $1->result_id << ", " << $3->result_id << endl;
                  $$->code = oss.str();
                  $$->result_id = x;
                }
                ;
multiplicative_expr:  term
                      {
                        ostringstream oss;
                        string x = new_temp();
                        oss << $1->code;
                        oss << ". " << x << endl;
                        oss << "= " << x << ", " << $1->result_id << endl;
                        $$->code = oss.str();
                        $$->result_id = x;
                      }
                      | term MULT multiplicative_expr
                      {
                        ostringstream oss;
                        oss << $1->code << $3->code;
                        string x = new_temp();
                        oss << ". " << x << endl;
                        oss << "* " << x << ", " << $1->result_id << ", " << $3->result_id << endl;
                        $$->code = oss.str();
                        $$->result_id = x; //stoi($1->result_id) + stoi($3->result_id);
                      }
                      | term DIV multiplicative_expr 
                      {
                        ostringstream oss;
                        oss << $1->code << $3->code;
                        string x = new_temp();
                        oss << ". " << x << endl;
                        oss << "/ " << x << ", " << $1->result_id << ", " << $3->result_id << endl;
                        $$->code = oss.str();
                        $$->result_id = x; //  stoi($1->result_id) + stoi($3->result_id);
                      }
                      | term MOD multiplicative_expr 
                      {
                        ostringstream oss;
                        oss << $1->code << $3->code;
                        string x = new_temp();
                        oss << ". " << x << endl;
                        oss << "% " << x << ", " << $1->result_id << ", " << $3->result_id << endl;
                        $$->code = oss.str();
                        $$->result_id = x;
                      }
                      ;
term:           var
                {
                  $$->code = $1->code;
                  $$->result_id = $1->result_id;
                }
                | NUMBER
                {
                  ostringstream oss;
                  string x = new_temp();
                  oss << ". " << x << endl;
                  oss << "= " << x << ", " << $1 << endl;
                  $$->code = oss.str();
                  $$->result_id = $1;
                }
                | L_PAREN expression R_PAREN {printf("term -> L_PAREN expression R_PAREN \n");}
                | SUB var {printf("term -> SUB var \n");}
                | SUB NUMBER {printf("term -> SUB NUMBER \n");}
                | SUB L_PAREN expression R_PAREN {printf("term -> SUB L_PAREN expression R_PAREN \n");}
                | ident L_PAREN termInnerOne R_PAREN {printf("term -> ident L_PAREN termInnerOne R_PAREN \n");}
                ;
termInnerOne:   expression COMMA termInnerOne {printf("termInnerOne -> expression COMMA termInnerOne \n");}
                | expression {printf("termInnerOne -> expression \n");}
                | {printf("termInnerOne -> Epsilon \n");}
                ;
var:            ident
                {
                  // ostringstream oss;
                  // string x = new_temp();
                  // oss << $1->code;
                  // oss << ". " << x << endl;
                  // oss << "= " << x << ", " << $1->result_id << endl;
                  // $$->code = oss.str();
                  // $$->result_id = x;
                  $$->code = $1->code;
                  $$->result_id = $1->result_id;
                }
                | ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET
                {
                  printf("ident L_SQUARE_BRACKET expression R_SQUARE_BRACKET \n");
                }
                ;

%%

int main (int argc,char **argv) {return yyparse();}

int yyerror(string s)
{
  extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c

  cerr << "ERROR: " << s << " at symbol \"" << yytext;
  cerr << "\" on line " << yylineno << endl;
  exit(1);
}

int yyerror(char *s)
{
  return yyerror(string(s));
}
