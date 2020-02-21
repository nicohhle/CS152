/* Phase 2 */
%{	
 #define YY_NO_UNPUT
 #include <stdio.h>
 #include <stdlib.h>
 void yyerror(const char *msg);
 extern int currLine;
 extern int currPos;
 extern char *yytext;
 extern FILE *yyin;
%}

%union{
  int num;
  char *ident;
}

%error-verbose
%start prog_start

%token <num> NUMBER
%token <ident> IDENT

%token FUNCTION
%token BEGIN_PARAMS END_PARAMS BEGIN_LOCALS END_LOCALS BEGIN_BODY END_BODY
%token INTEGER ARRAY OF IF THEN ENDIF ELSE WHILE DO FOR BEGINLOOP ENDLOOP CONTINUE
%token READ WRITE
%token TRUE FALSE
%token RETURN

%token SEMICOLON COLON COMMA 
%token L_PAREN R_PAREN 
%token L_SQUARE_BRACKET R_SQUARE_BRACKET

%left MULT DIV MOD 
%left SUB ADD
%left LT LTE GT GTE 
%left EQ NEQ 
%token NOT
%token AND
%token OR
%token ASSIGN

%% 
prog_start:		prog { printf("prog_start -> prog\n"); }
        			;

prog:     function prog { printf("prog -> function prog\n"); }
          | { printf("prog -> epsilon\n"); }
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

relation_and_exp:   relation_exp AND relation_and_exp { printf("relation_and_exp -> relation_exp AND relation_exp\n"); }
                    | relation_exp { printf("relation_and_exp -> relation_exp\n"); }
                    ;

relation_exp:   notloop expression comp expression { printf("relation_exp -> notloop expression comp expression\n"); }
                | TRUE { printf("relation_exp -> TRUE"); }
                | FALSE { printf("relation_exp -> FALSE"); }
                | L_PAREN bool_exp R_PAREN { printf("relation_exp -> L_PAREN bool_exp R_PAREN\n"); }
                ;

notloop:    NOT notloop { printf("notloop -> NOT notloop\n"); }
            | { printf("notloop -> epsilon\n"); }
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
            | multiplicative_expression SUB expression { printf("expression -> multiplicative_expression SUB expression\n")}
            ;

multiplicative_expression:  term { printf("multiplicative_expression -> term\n"); }
                            | term MULT multiplicative_expression {("multiplicative_expression -> term MULT multiplicative_expression\n"); }
                            | term DIV multiplicative_expression {("multiplicative_expression -> term DIV multiplicative_expression\n"); }
                            | term MOD multiplicative_expression {("multiplicative_expression -> term MOD multiplicative_expression\n"); }
                            ;

term:   SUB term_num { printf("term -> SUB term_num\n"); }
        | term_num { printf("term -> term_num\n"); }
        | identifier L_PAREN expressionloop R_PAREN { printf("term -> identifier L_PAREN expressionloop R_PAREN\n"); }
        ;

term_num:   var { printf("term_num -> var\n"); }
            | number { printf("term_num -> number\n"); }
            | L_PAREN expression R_PAREN { printf("term_num -> L_PAREN expression R_PAREN\n"); }
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

void yyerror(const char *msg) {

  printf("%s: parsing error at line: %d, column: %d\nUnpexpected symbol %s encountered.\n", msg, currLine, currPos, yytext);

  exit(1);
  //  printf("** Line %d, position %d: %s\n", currLine, currPos, msg);
}



