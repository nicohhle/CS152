/* Phase 3 */ 
%{	
#define YY_NO_UNPUT
// #define YYSTYPE char *
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <map>
#include <string.h>
#include <set>

int tempCount = 0;
int labelCount = 0;
extern char* yytext;
extern int currPos;
void yyerror(const char* s);
int yylex();
%}

%code{
  struct {
    std::string code;
  } Statement;

  struct {
    std::string code;
    std::string result_id;
  } Expression;
%}

%start program

%token <int> NUMBER
%token <std::string> IDENT

%token FUNCTION
%token BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO FOR BEGINLOOP ENDLOOP CONTINUE
%token READ WRITE
%token TRUE FALSE
%token RETURN

%type <statement> program function declaration declarationloop statement statementloop term varloop var number identifier identifierloop
%type <expression> bool_exp relation_and_exp relation_exp notloop comp expression multiplicative_expression expressionloop


%token SEMICOLON COLON COMMA 
%token L_PAREN R_PAREN 
%token L_SQUARE_BRACKET R_SQUARE_BRACKET

%left  ASSIGN
%left  EQ
%left  NEQ
%left  LT
%left  LTE
%left  GT
%left  GTE
%left  ADD
%left  SUB
%left  MULT
%left  DIV
%left  MOD
%left  AND
%left  OR
%right  NOT

%{
  int yylex();
%}

%% 
program:    function program { 
              std::ostringstream oss;

              oss << $1.code << $2.code << std::endl;
              
              $$.code = oss.str();
            }
          | { printf("program -> epsilon\n"); }
			    ;

function:   FUNCTION identifier SEMICOLON BEGIN_PARAMS declarationloop END_PARAMS BEGIN_LOCALS declarationloop END_LOCALS BEGIN_BODY statementloop END_BODY { printf("function -> FUNCTION identifier SEMICOLON BEGIN_PARAMS declarationloop END_PARAMS BEGIN_LOCALS declarationloop END_LOCALS BEGIN_BODY statementloop END_BODY\n"); }

            ;

declaration:  identifierloop COLON INTEGER { printf("declaration -> identifierloop COLON INTEGER\n"); }
              | identifierloop COLON ARRAY L_SQUARE_BRACKET number R_SQUARE_BRACKET OF INTEGER { printf("declaration -> identifierloop COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n"); }
              ;

declarationloop:  declaration SEMICOLON declarationloop { printf("declarationloop -> declaration SEMICOLON declarationloop\n"); }
            | { printf("declarationloop -> epsilon\n"); }
            ;

statement:  var ASSIGN expression { printf("statement -> var ASSIGN expression\n"); }
            | IF bool_exp THEN statementloop ENDIF { printf("statement -> IF bool_exp THEN statementloop ENDIF\n"); }
            | IF bool_exp THEN statementloop ELSE statementloop ENDIF { printf("statement -> IF bool_exp THEN statementloop ELSE statementloop ENDIF\n"); }
            | WHILE bool_exp BEGINLOOP statementloop ENDLOOP { printf("statement -> WHILE bool_exp BEGINLOOP statementloop ENDLOOP\n"); }
            | DO BEGINLOOP statementloop ENDLOOP WHILE bool_exp { printf("statement -> DO BEGINLOOP statementloop ENDLOOP WHILE bool_exp\n"); }
            | FOR var ASSIGN number SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statementloop ENDLOOP { printf("statement -> FOR var ASSIGN number SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statementloop ENDLOOP\n"); }
            | READ varloop { printf("statement -> READ varloop\n"); }
            | WRITE varloop { printf("statement -> WRITE varloop\n"); }
            | CONTINUE { printf("statement -> CONTINUE\n"); }
            | RETURN expression { printf("statement -> RETURN expression\n"); }
            ;

statementloop:  statement SEMICOLON statementloop { printf("statementloop -> statement SEMICOLON statementloop\n"); }
            | statement SEMICOLON { printf("statementloop -> statement SEMICOLON\n"); }
            ;

bool_exp:   relation_and_exp OR bool_exp { printf("bool_exp -> relation_and_exp OR bool_exp\n"); }
            | relation_and_exp { printf("bool_exp -> relation_and_exp\n"); }
            ;

relation_and_exp:   notloop AND relation_and_exp { printf("relation_and_exp -> notloop AND relation_and_exp\n"); }
                    | notloop { printf("relation_and_exp -> notloop\n"); }
                    ;

relation_exp:   expression comp expression { printf("relation_exp -> expression comp expression\n"); }
                | TRUE { printf("relation_exp -> TRUE"); }
                | FALSE { printf("relation_exp -> FALSE"); }
                | L_PAREN bool_exp R_PAREN { printf("relation_exp -> L_PAREN bool_exp R_PAREN\n"); }
                ;

notloop:    NOT notloop { printf("notloop -> NOT notloop\n"); }
            | relation_exp { printf("notloop -> relation_exp\n"); }
            ;

comp:       EQ { printf("comp -> EQ\n"); }
            | NEQ { printf("comp -> NEQ\n"); }
            | LT  { printf("comp -> LT\n"); }
            | GT { printf("comp -> GT\n"); }
            | LTE  { printf("comp -> LTE\n"); }
            | GTE { printf("comp -> GTE\n"); }
            ;

expression: multiplicative_expression { printf("expression -> multiplicative_expression\n"); }
            | multiplicative_expression ADD expression { printf("expression -> multiplicative_expression ADD expression\n"); }
            | multiplicative_expression SUB expression { printf("expression -> multiplicative_expression SUB expression\n"); }
            ;

multiplicative_expression:  term { printf("multiplicative_expression -> term\n"); }
                            | term MULT multiplicative_expression { printf("multiplicative_expression -> term MULT multiplicative_expression\n"); }
                            | term DIV multiplicative_expression { printf("multiplicative_expression -> term DIV multiplicative_expression\n"); }
                            | term MOD multiplicative_expression { printf("multiplicative_expression -> term MOD multiplicative_expression\n"); }
                            ;

term:   SUB var { printf("term -> SUB var\n"); }
        | SUB number { printf("term -> SUB number\n"); }
        | SUB L_PAREN expression R_PAREN { printf("term -> SUB L_PAREN expression R_PAREN\n"); }
        | var { printf("term -> var\n"); }
        | number { printf("term -> number\n"); }
        | L_PAREN expression R_PAREN { printf("term -> L_PAREN expression R_PAREN\n"); }
        | identifier L_PAREN expressionloop R_PAREN { printf("term -> identifier L_PAREN expressionloop R_PAREN\n"); }
        ;

varloop:  var { printf("varloop -> var\n"); }
          | var COMMA varloop { printf("varloop -> var COMMA varloop\n"); }
          ;

var:      identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET { printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n"); }
          | identifier { printf("var -> identifier\n"); }
          ;

number: NUMBER { printf("number -> NUMBER %d\n", yylval.num); }
        ;

expressionloop:   expression COMMA expressionloop { printf("expressionloop-> expression COMMA expressionloop\n"); }
                  | expression { printf("expressionloop -> expression"); }
                  | { printf("expressionloop -> epsilon"); }
                  ;

identifier: IDENT { printf("identifier -> IDENT %s\n", yylval.ident); }
            ;

identifierloop:   identifier COMMA identifierloop { printf("identifierloop -> identifier COMMA identifierloop\n"); } 
                  | identifier { printf("identifierloop -> identifier\n"); }
                  ;

%%  

void yyerror(char* s)
{
  // extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  // extern char currPos;
  extern int currLine;
  
  printf("%s on line %d at character %d at symbol \"%s\"\n", s, currLine, currPos, yytext);
  exit(1);
}