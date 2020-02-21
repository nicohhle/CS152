/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     IDENT = 259,
     FUNCTION = 260,
     BEGIN_PARAMS = 261,
     END_PARAMS = 262,
     BEGIN_LOCALS = 263,
     END_LOCALS = 264,
     BEGIN_BODY = 265,
     END_BODY = 266,
     INTEGER = 267,
     ARRAY = 268,
     OF = 269,
     IF = 270,
     THEN = 271,
     ENDIF = 272,
     ELSE = 273,
     WHILE = 274,
     DO = 275,
     FOR = 276,
     BEGINLOOP = 277,
     ENDLOOP = 278,
     CONTINUE = 279,
     READ = 280,
     WRITE = 281,
     TRUE = 282,
     FALSE = 283,
     RETURN = 284,
     SEMICOLON = 285,
     COLON = 286,
     COMMA = 287,
     L_PAREN = 288,
     R_PAREN = 289,
     L_SQUARE_BRACKET = 290,
     R_SQUARE_BRACKET = 291,
     MOD = 292,
     DIV = 293,
     MULT = 294,
     ADD = 295,
     SUB = 296,
     GTE = 297,
     GT = 298,
     LTE = 299,
     LT = 300,
     NEQ = 301,
     EQ = 302,
     NOT = 303,
     AND = 304,
     OR = 305,
     ASSIGN = 306
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define IDENT 259
#define FUNCTION 260
#define BEGIN_PARAMS 261
#define END_PARAMS 262
#define BEGIN_LOCALS 263
#define END_LOCALS 264
#define BEGIN_BODY 265
#define END_BODY 266
#define INTEGER 267
#define ARRAY 268
#define OF 269
#define IF 270
#define THEN 271
#define ENDIF 272
#define ELSE 273
#define WHILE 274
#define DO 275
#define FOR 276
#define BEGINLOOP 277
#define ENDLOOP 278
#define CONTINUE 279
#define READ 280
#define WRITE 281
#define TRUE 282
#define FALSE 283
#define RETURN 284
#define SEMICOLON 285
#define COLON 286
#define COMMA 287
#define L_PAREN 288
#define R_PAREN 289
#define L_SQUARE_BRACKET 290
#define R_SQUARE_BRACKET 291
#define MOD 292
#define DIV 293
#define MULT 294
#define ADD 295
#define SUB 296
#define GTE 297
#define GT 298
#define LTE 299
#define LT 300
#define NEQ 301
#define EQ 302
#define NOT 303
#define AND 304
#define OR 305
#define ASSIGN 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 13 "phase2.y"
{
  int num;
  char *ident;
}
/* Line 1529 of yacc.c.  */
#line 156 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

