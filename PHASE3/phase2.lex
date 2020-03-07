%{ /* -*- C++ -*- */
# include <cerrno>
# include <climits>
# include <cstdlib>
# include <string>

// Work around an incompatibility in flex (at least versions
// 2.5.31 through 2.5.33): it generates code that does
// not conform to C89.  See Debian bug 333231
// <http://bugs.debian.org/cgi-bin/bugreport.cgi?bug=333231>.
# undef yywrap
# define yywrap() 1

// Pacify warnings in yy_init_buffer (observed with Flex 2.6.4)
// and GCC 7.3.0.
#if defined __GNUC__ && 7 <= __GNUC__
# pragma GCC diagnostic ignored "-Wnull-dereference"
#endif
%}

%option noyywrap nounput batch debug noinput


VAR	 	[a-zA-Z]+[a-zA-Z_0-9]*
DIGITCHECK	[0-9]
DIGIT		{DIGITCHECK}
COMMENT  	##.*

BADVAR_DIG	[0-9]+[a-zA-Z_]+[a-zA-Z_0-9]*
BADVAR_UND	[a-zA-Z]+[a-zA-Z_0-9]*_+
 
%{
  // Code run each time a pattern is matched.
  # define YY_USER_ACTION  loc.columns (yyleng);
%}

%%

%{
  // A handy shortcut to the location held by the driver.
  yy::location& loc = drv.location;
  // Code run each time yylex is called.
  loc.step ();
%}


"function"		return yy::parser::make_FUNCTION (loc);
"beginparams"		return yy::parser::make_BEGIN_PARAMS (loc);
"endparams"		return yy::parser::make_END_PARAMS (loc);
"beginlocals"		return yy::parser::make_BEGIN_LOCALS (loc);
"endlocals"		return yy::parser::make_END_LOCALS (loc);
"beginbody"		return yy::parser::make_BEGIN_BODY (loc);
"endbody"		return yy::parser::make_END_BODY (loc);
"integer"		return yy::parser::make_INTEGER (loc);
"array"			return yy::parser::make_ARRAY (loc);
"of"			return yy::parser::make_OF (loc);
"if"			return yy::parser::make_IF (loc);
"then"			return yy::parser::make_THEN (loc);
"endif"			return yy::parser::make_ENDIF (loc);
"else"			return yy::parser::make_ELSE (loc);
"while"			return yy::parser::make_WHILE (loc);
"do"			return yy::parser::make_DO (loc);
"for"			return yy::parser::make_FOR (loc);
"beginloop"		return yy::parser::make_BEGINLOOP (loc);
"endloop"		return yy::parser::make_ENDLOOP (loc);
"continue"		return yy::parser::make_CONTINUE (loc);
"read"			return yy::parser::make_READ (loc);
"write"			return yy::parser::make_WRITE (loc);
"and"			return yy::parser::make_AND (loc);
"or"			return yy::parser::make_OR (loc);
"not"			return yy::parser::make_NOT (loc);
"true"			return yy::parser::make_TRUE (loc);
"false"			return yy::parser::make_FALSE (loc);
"return"		return yy::parser::make_RETURN (loc);

"-"			return yy::parser::make_SUB (loc);
"+"			return yy::parser::make_ADD (loc);
"*"			return yy::parser::make_MULT (loc);
"/"			return yy::parser::make_DIV (loc);
"%"			return yy::parser::make_MOD (loc);

"=="			return yy::parser::make_EQ (loc);
"<>"			{currPos += yyleng; return NEQ (loc);
"<"			return yy::parser::make_LT (loc);
">"			return yy::parser::make_GT (loc);
"<="			return yy::parser::make_LTE (loc);
">="			return yy::parser::make_GTE (loc);

";"			return yy::parser::make_SEMICOLON (loc);
":"			return yy::parser::make_COLON (loc);
","			return yy::parser::make_COMMA (loc);
"("			return yy::parser::make_L_PAREN (loc);
")"			return yy::parser::make_R_PAREN (loc);
"["			return yy::parser::make_L_SQUARE_BRACKET (loc);
"]"			return yy::parser::make_R_SQUARE_BRACKET (loc);
":="			return yy::parser::make_ASSIGN (loc);


{VAR}+			return yy::parser::make_IDENT (yytext, loc);
{DIGIT}+		return yy::parser::make_NUMBER (atoi(yytext), loc);
{COMMENT}		loc.lines(yyleng); loc.step ();
[ \t]+        		loc.step ();
[\n]+           		loc.lines (yyleng); loc.step ();

%%
