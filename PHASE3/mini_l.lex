%{
using namespace std;
#define YY_NO_UNPUT
#include <iostream>
#include <stdio.h>
#include <string>
#include "y.tab.h"
int currLine = 1;
int curCol = 0;
%}

ALL      [A-Za-z0-9]
ALPHA    [A-Za-z]
DIGIT    [0-9]
ID ["function","integer","array"]
%option noyywrap
%%

"\n" {curCol = 0; currLine += 1;}
"function" {curCol += strlen(yytext); return FUNCTION; }
"beginparams" {curCol += strlen(yytext); return BEGIN_PARAMS; }
"endparams" {curCol += strlen(yytext); return END_PARAMS; }
"beginlocals" {curCol += strlen(yytext); return BEGIN_LOCALS; }
"endlocals" {curCol += strlen(yytext); return END_LOCALS; }
"beginbody" {curCol += strlen(yytext); return BEGIN_BODY; }
"endbody" {curCol += strlen(yytext); return END_BODY; }
"integer" {curCol += strlen(yytext); return INTEGER; }
"array" {curCol += strlen(yytext); return ARRAY; }
"of" {curCol += strlen(yytext); return OF; }
"if" {curCol += strlen(yytext); return IF; }
"then" {curCol += strlen(yytext); return THEN; }
"endif" {curCol += strlen(yytext); return ENDIF; }
"else" {curCol += strlen(yytext); return ELSE; }
"for" {curCol += strlen(yytext); return FOR;}
"while" {curCol += strlen(yytext); return WHILE; }
"do" {curCol += strlen(yytext); return DO; }
"beginloop" {curCol += strlen(yytext); return BEGINLOOP; }
"endloop" {curCol += strlen(yytext); return ENDLOOP; }
"continue" {curCol += strlen(yytext); return CONTINUE; }
"read" {curCol += strlen(yytext); return READ; }
"write" {curCol += strlen(yytext); return WRITE; }
"and" {curCol += strlen(yytext); return AND; }
"or" {curCol += strlen(yytext); return OR; }
"not" {curCol += strlen(yytext); return NOT; }
"true" {curCol += strlen(yytext); return TRUE; }
"false" {curCol += strlen(yytext); return FALSE; }
"return" {curCol += strlen(yytext); return RETURN; }
"-"		{curCol += strlen(yytext); return SUB; }
"+"		{curCol += strlen(yytext); return ADD; }
"*"		{curCol += strlen(yytext); return MULT; }
"/"		{curCol += strlen(yytext); return DIV; }
"%"		{curCol += strlen(yytext); return MOD; }
"=="	{curCol += strlen(yytext); return EQ; }
"<>"	{curCol += strlen(yytext); return NEQ; }
"<"		{curCol += strlen(yytext); return LT; }
">"		{curCol += strlen(yytext); return GT; }
"<="	{curCol += strlen(yytext); return LTE; }
">="	{curCol += strlen(yytext); return GTE; }
";"		{curCol += strlen(yytext); return SEMICOLON; }
":"		{curCol += strlen(yytext); return COLON; }
","		{curCol += strlen(yytext); return COMMA; }
"("		{curCol += strlen(yytext); return L_PAREN; }
")"		{curCol += strlen(yytext); return R_PAREN; }
"["		{curCol += strlen(yytext); return L_SQUARE_BRACKET; }
"]"		{curCol += strlen(yytext); return R_SQUARE_BRACKET; }
":="	{curCol += strlen(yytext); return ASSIGN; }

[ \t]* {curCol += strlen(yytext);}
##.* 	{curCol += strlen(yytext);}

{ALPHA}+(_|{DIGIT}|{ALPHA})+({ALPHA}|{DIGIT})"_"+$ {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n",currLine,curCol ,yytext); curCol += strlen(yytext);}
{ALPHA}+"_"+$ {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n",currLine,curCol ,yytext); curCol += strlen(yytext);}
{ALPHA}+{ALL}*"_"+$ {printf("Error at line %d, column %d: identifier \"%s\" cannot end with an underscore\n",currLine,curCol ,yytext); curCol += strlen(yytext);}

{DIGIT}+{ALPHA}+ {printf("Invalid Identifier at line %d, column %d: identifier \"%s\" must begin with a letter\n",currLine,curCol,yytext ); curCol += strlen(yytext);}
"_"{ALPHA}+  {printf("Invalid Identifier at line %d, column %d: identifier \"%s\" must begin with a letter\n",currLine,curCol,yytext ); curCol += strlen(yytext);}

{ALPHA}+"_"+{ALPHA} {;curCol += strlen(yytext); yylval.op_val=(yytext) ; return IDENT;}
{ALPHA}+(_|{DIGIT}|{ALPHA})+({ALPHA}|{DIGIT}) {curCol += strlen(yytext); yylval.op_val=(yytext) ; return IDENT;}
{ALPHA}+  {curCol += strlen(yytext); yylval.op_val=(yytext) ; return IDENT;}
{ALPHA}+{ALL}* {curCol += strlen(yytext); yylval.op_val=(yytext) ; return IDENT;}
{DIGIT}+  {curCol += strlen(yytext); yylval.int_val=atoi(yytext) ; return NUMBER;}

. {printf("Error at line %d , column %d : unrecognized symbol %s\n", currLine, curCol, yytext); curCol += strlen(yytext);}
%%
