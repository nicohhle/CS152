// A Bison parser, made by GNU Bison 3.5.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015, 2018-2020 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.

// Undocumented macros, especially those whose name start with YY_,
// are private implementation details.  Do not rely on them.



// First part of user prologue.
#line 10 "phase2.y"
	
 #define YY_NO_UNPUT
 #include <stdio.h>
 #include <stdlib.h>
 #include <string>
 #include <iostream>
 #include <sstream>
 void yyerror(char *s);
#line 67 "phase2.y"

  int yylex();

#line 53 "y.tab.c"


#include "y.tab.h"


// Unqualified %code blocks.
#line 20 "phase2.y"

  struct statement {
    std::string code;
  };

  struct expression {
    std::string code;
    std::string result_id;
  };
%

#line 72 "y.tab.c"


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

// Whether we are compiled with exception support.
#ifndef YY_EXCEPTIONS
# if defined __GNUC__ && !defined __EXCEPTIONS
#  define YY_EXCEPTIONS 0
# else
#  define YY_EXCEPTIONS 1
# endif
#endif



// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << '\n';                       \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE (Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void> (0)
# define YY_STACK_PRINT()                static_cast<void> (0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

namespace yy {
#line 144 "y.tab.c"


  /// Build a parser object.
  parser::parser ()
#if YYDEBUG
    : yydebug_ (false),
      yycdebug_ (&std::cerr)
#else

#endif
  {}

  parser::~parser ()
  {}

  parser::syntax_error::~syntax_error () YY_NOEXCEPT YY_NOTHROW
  {}

  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  parser::by_state::by_state () YY_NOEXCEPT
    : state (empty_state)
  {}

  parser::by_state::by_state (const by_state& that) YY_NOEXCEPT
    : state (that.state)
  {}

  void
  parser::by_state::clear () YY_NOEXCEPT
  {
    state = empty_state;
  }

  void
  parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  parser::by_state::by_state (state_type s) YY_NOEXCEPT
    : state (s)
  {}

  parser::symbol_number_type
  parser::by_state::type_get () const YY_NOEXCEPT
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[+state];
  }

  parser::stack_symbol_type::stack_symbol_type ()
  {}

  parser::stack_symbol_type::stack_symbol_type (YY_RVREF (stack_symbol_type) that)
    : super_type (YY_MOVE (that.state))
  {
    switch (that.type_get ())
    {
      case 59: // bool_exp
      case 60: // relation_and_exp
      case 61: // relation_exp
      case 62: // notloop
      case 63: // comp
      case 64: // expression
      case 65: // multiplicative_expression
      case 70: // expressionloop
        value.YY_MOVE_OR_COPY< expression > (YY_MOVE (that.value));
        break;

      case 3: // NUMBER
        value.YY_MOVE_OR_COPY< int > (YY_MOVE (that.value));
        break;

      case 53: // program
      case 54: // function
      case 55: // declaration
      case 56: // declarationloop
      case 57: // statement
      case 58: // statementloop
      case 66: // term
      case 67: // varloop
      case 68: // var
      case 69: // number
      case 71: // identifier
      case 72: // identifierloop
        value.YY_MOVE_OR_COPY< statement > (YY_MOVE (that.value));
        break;

      case 4: // IDENT
        value.YY_MOVE_OR_COPY< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

#if 201103L <= YY_CPLUSPLUS
    // that is emptied.
    that.state = empty_state;
#endif
  }

  parser::stack_symbol_type::stack_symbol_type (state_type s, YY_MOVE_REF (symbol_type) that)
    : super_type (s)
  {
    switch (that.type_get ())
    {
      case 59: // bool_exp
      case 60: // relation_and_exp
      case 61: // relation_exp
      case 62: // notloop
      case 63: // comp
      case 64: // expression
      case 65: // multiplicative_expression
      case 70: // expressionloop
        value.move< expression > (YY_MOVE (that.value));
        break;

      case 3: // NUMBER
        value.move< int > (YY_MOVE (that.value));
        break;

      case 53: // program
      case 54: // function
      case 55: // declaration
      case 56: // declarationloop
      case 57: // statement
      case 58: // statementloop
      case 66: // term
      case 67: // varloop
      case 68: // var
      case 69: // number
      case 71: // identifier
      case 72: // identifierloop
        value.move< statement > (YY_MOVE (that.value));
        break;

      case 4: // IDENT
        value.move< std::string > (YY_MOVE (that.value));
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

#if YY_CPLUSPLUS < 201103L
  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 59: // bool_exp
      case 60: // relation_and_exp
      case 61: // relation_exp
      case 62: // notloop
      case 63: // comp
      case 64: // expression
      case 65: // multiplicative_expression
      case 70: // expressionloop
        value.copy< expression > (that.value);
        break;

      case 3: // NUMBER
        value.copy< int > (that.value);
        break;

      case 53: // program
      case 54: // function
      case 55: // declaration
      case 56: // declarationloop
      case 57: // statement
      case 58: // statementloop
      case 66: // term
      case 67: // varloop
      case 68: // var
      case 69: // number
      case 71: // identifier
      case 72: // identifierloop
        value.copy< statement > (that.value);
        break;

      case 4: // IDENT
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }

  parser::stack_symbol_type&
  parser::stack_symbol_type::operator= (stack_symbol_type& that)
  {
    state = that.state;
    switch (that.type_get ())
    {
      case 59: // bool_exp
      case 60: // relation_and_exp
      case 61: // relation_exp
      case 62: // notloop
      case 63: // comp
      case 64: // expression
      case 65: // multiplicative_expression
      case 70: // expressionloop
        value.move< expression > (that.value);
        break;

      case 3: // NUMBER
        value.move< int > (that.value);
        break;

      case 53: // program
      case 54: // function
      case 55: // declaration
      case 56: // declarationloop
      case 57: // statement
      case 58: // statementloop
      case 66: // term
      case 67: // varloop
      case 68: // var
      case 69: // number
      case 71: // identifier
      case 72: // identifierloop
        value.move< statement > (that.value);
        break;

      case 4: // IDENT
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.state = empty_state;
    return *this;
  }
#endif

  template <typename Base>
  void
  parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
#if defined __GNUC__ && ! defined __clang__ && ! defined __ICC && __GNUC__ * 100 + __GNUC_MINOR__ <= 408
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
#endif
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  void
  parser::yypush_ (const char* m, YY_MOVE_REF (stack_symbol_type) sym)
  {
    if (m)
      YY_SYMBOL_PRINT (m, sym);
    yystack_.push (YY_MOVE (sym));
  }

  void
  parser::yypush_ (const char* m, state_type s, YY_MOVE_REF (symbol_type) sym)
  {
#if 201103L <= YY_CPLUSPLUS
    yypush_ (m, stack_symbol_type (s, std::move (sym)));
#else
    stack_symbol_type ss (s, sym);
    yypush_ (m, ss);
#endif
  }

  void
  parser::yypop_ (int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  parser::debug_level_type
  parser::debug_level () const
  {
    return yydebug_;
  }

  void
  parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  parser::state_type
  parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  bool
  parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  bool
  parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  parser::operator() ()
  {
    return parse ();
  }

  int
  parser::parse ()
  {
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

#if YY_EXCEPTIONS
    try
#endif // YY_EXCEPTIONS
      {
    YYCDEBUG << "Starting parse\n";


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, YY_MOVE (yyla));

  /*-----------------------------------------------.
  | yynewstate -- push a new symbol on the stack.  |
  `-----------------------------------------------*/
  yynewstate:
    YYCDEBUG << "Entering state " << int (yystack_[0].state) << '\n';

    // Accept?
    if (yystack_[0].state == yyfinal_)
      YYACCEPT;

    goto yybackup;


  /*-----------.
  | yybackup.  |
  `-----------*/
  yybackup:
    // Try to take a decision without lookahead.
    yyn = yypact_[+yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
#if YY_EXCEPTIONS
        try
#endif // YY_EXCEPTIONS
          {
            symbol_type yylookahead (yylex ());
            yyla.move (yylookahead);
          }
#if YY_EXCEPTIONS
        catch (const syntax_error& yyexc)
          {
            YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
            error (yyexc);
            goto yyerrlab1;
          }
#endif // YY_EXCEPTIONS
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      {
        goto yydefault;
      }

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", state_type (yyn), YY_MOVE (yyla));
    goto yynewstate;


  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[+yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;


  /*-----------------------------.
  | yyreduce -- do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_ (yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
      switch (yyr1_[yyn])
    {
      case 59: // bool_exp
      case 60: // relation_and_exp
      case 61: // relation_exp
      case 62: // notloop
      case 63: // comp
      case 64: // expression
      case 65: // multiplicative_expression
      case 70: // expressionloop
        yylhs.value.emplace< expression > ();
        break;

      case 3: // NUMBER
        yylhs.value.emplace< int > ();
        break;

      case 53: // program
      case 54: // function
      case 55: // declaration
      case 56: // declarationloop
      case 57: // statement
      case 58: // statementloop
      case 66: // term
      case 67: // varloop
      case 68: // var
      case 69: // number
      case 71: // identifier
      case 72: // identifierloop
        yylhs.value.emplace< statement > ();
        break;

      case 4: // IDENT
        yylhs.value.emplace< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
#if YY_EXCEPTIONS
      try
#endif // YY_EXCEPTIONS
        {
          switch (yyn)
            {
  case 2:
#line 72 "phase2.y"
                             { 
              std::ostringstream oss;

              oss << yystack_[1].value.as < statement > ().code << yystack_[0].value.as < statement > ().code << std::endl;
              
              yylhs.value.as < statement > ().code = oss.str();
            }
#line 693 "y.tab.c"
    break;

  case 3:
#line 79 "phase2.y"
            { printf("program -> epsilon\n"); }
#line 699 "y.tab.c"
    break;

  case 4:
#line 82 "phase2.y"
                                                                                                                                                            { printf("function -> FUNCTION identifier SEMICOLON BEGIN_PARAMS declarationloop END_PARAMS BEGIN_LOCALS declarationloop END_LOCALS BEGIN_BODY statementloop END_BODY\n"); }
#line 705 "y.tab.c"
    break;

  case 5:
#line 86 "phase2.y"
                                           { printf("declaration -> identifierloop COLON INTEGER\n"); }
#line 711 "y.tab.c"
    break;

  case 6:
#line 87 "phase2.y"
                                                                                               { printf("declaration -> identifierloop COLON ARRAY L_SQUARE_BRACKET NUMBER R_SQUARE_BRACKET OF INTEGER\n"); }
#line 717 "y.tab.c"
    break;

  case 7:
#line 90 "phase2.y"
                                                        { printf("declarationloop -> declaration SEMICOLON declarationloop\n"); }
#line 723 "y.tab.c"
    break;

  case 8:
#line 91 "phase2.y"
              { printf("declarationloop -> epsilon\n"); }
#line 729 "y.tab.c"
    break;

  case 9:
#line 94 "phase2.y"
                                  { printf("statement -> var ASSIGN expression\n"); }
#line 735 "y.tab.c"
    break;

  case 10:
#line 95 "phase2.y"
                                                   { printf("statement -> IF bool_exp THEN statementloop ENDIF\n"); }
#line 741 "y.tab.c"
    break;

  case 11:
#line 96 "phase2.y"
                                                                      { printf("statement -> IF bool_exp THEN statementloop ELSE statementloop ENDIF\n"); }
#line 747 "y.tab.c"
    break;

  case 12:
#line 97 "phase2.y"
                                                             { printf("statement -> WHILE bool_exp BEGINLOOP statementloop ENDLOOP\n"); }
#line 753 "y.tab.c"
    break;

  case 13:
#line 98 "phase2.y"
                                                                { printf("statement -> DO BEGINLOOP statementloop ENDLOOP WHILE bool_exp\n"); }
#line 759 "y.tab.c"
    break;

  case 14:
#line 99 "phase2.y"
                                                                                                                       { printf("statement -> FOR var ASSIGN number SEMICOLON bool_exp SEMICOLON var ASSIGN expression BEGINLOOP statementloop ENDLOOP\n"); }
#line 765 "y.tab.c"
    break;

  case 15:
#line 100 "phase2.y"
                           { printf("statement -> READ varloop\n"); }
#line 771 "y.tab.c"
    break;

  case 16:
#line 101 "phase2.y"
                            { printf("statement -> WRITE varloop\n"); }
#line 777 "y.tab.c"
    break;

  case 17:
#line 102 "phase2.y"
                       { printf("statement -> CONTINUE\n"); }
#line 783 "y.tab.c"
    break;

  case 18:
#line 103 "phase2.y"
                                { printf("statement -> RETURN expression\n"); }
#line 789 "y.tab.c"
    break;

  case 19:
#line 106 "phase2.y"
                                                  { printf("statementloop -> statement SEMICOLON statementloop\n"); }
#line 795 "y.tab.c"
    break;

  case 20:
#line 107 "phase2.y"
                                  { printf("statementloop -> statement SEMICOLON\n"); }
#line 801 "y.tab.c"
    break;

  case 21:
#line 110 "phase2.y"
                                         { printf("bool_exp -> relation_and_exp OR bool_exp\n"); }
#line 807 "y.tab.c"
    break;

  case 22:
#line 111 "phase2.y"
                               { printf("bool_exp -> relation_and_exp\n"); }
#line 813 "y.tab.c"
    break;

  case 23:
#line 114 "phase2.y"
                                                 { printf("relation_and_exp -> notloop AND relation_and_exp\n"); }
#line 819 "y.tab.c"
    break;

  case 24:
#line 115 "phase2.y"
                              { printf("relation_and_exp -> notloop\n"); }
#line 825 "y.tab.c"
    break;

  case 25:
#line 118 "phase2.y"
                                           { printf("relation_exp -> expression comp expression\n"); }
#line 831 "y.tab.c"
    break;

  case 26:
#line 119 "phase2.y"
                       { printf("relation_exp -> TRUE"); }
#line 837 "y.tab.c"
    break;

  case 27:
#line 120 "phase2.y"
                        { printf("relation_exp -> FALSE"); }
#line 843 "y.tab.c"
    break;

  case 28:
#line 121 "phase2.y"
                                           { printf("relation_exp -> L_PAREN bool_exp R_PAREN\n"); }
#line 849 "y.tab.c"
    break;

  case 29:
#line 124 "phase2.y"
                        { printf("notloop -> NOT notloop\n"); }
#line 855 "y.tab.c"
    break;

  case 30:
#line 125 "phase2.y"
                           { printf("notloop -> relation_exp\n"); }
#line 861 "y.tab.c"
    break;

  case 31:
#line 128 "phase2.y"
               { printf("comp -> EQ\n"); }
#line 867 "y.tab.c"
    break;

  case 32:
#line 129 "phase2.y"
                  { printf("comp -> NEQ\n"); }
#line 873 "y.tab.c"
    break;

  case 33:
#line 130 "phase2.y"
                  { printf("comp -> LT\n"); }
#line 879 "y.tab.c"
    break;

  case 34:
#line 131 "phase2.y"
                 { printf("comp -> GT\n"); }
#line 885 "y.tab.c"
    break;

  case 35:
#line 132 "phase2.y"
                   { printf("comp -> LTE\n"); }
#line 891 "y.tab.c"
    break;

  case 36:
#line 133 "phase2.y"
                  { printf("comp -> GTE\n"); }
#line 897 "y.tab.c"
    break;

  case 37:
#line 136 "phase2.y"
                                      { printf("expression -> multiplicative_expression\n"); }
#line 903 "y.tab.c"
    break;

  case 38:
#line 137 "phase2.y"
                                                       { printf("expression -> multiplicative_expression ADD expression\n"); }
#line 909 "y.tab.c"
    break;

  case 39:
#line 138 "phase2.y"
                                                       { printf("expression -> multiplicative_expression SUB expression\n"); }
#line 915 "y.tab.c"
    break;

  case 40:
#line 141 "phase2.y"
                                 { printf("multiplicative_expression -> term\n"); }
#line 921 "y.tab.c"
    break;

  case 41:
#line 142 "phase2.y"
                                                                  { printf("multiplicative_expression -> term MULT multiplicative_expression\n"); }
#line 927 "y.tab.c"
    break;

  case 42:
#line 143 "phase2.y"
                                                                 { printf("multiplicative_expression -> term DIV multiplicative_expression\n"); }
#line 933 "y.tab.c"
    break;

  case 43:
#line 144 "phase2.y"
                                                                 { printf("multiplicative_expression -> term MOD multiplicative_expression\n"); }
#line 939 "y.tab.c"
    break;

  case 44:
#line 147 "phase2.y"
                { printf("term -> SUB var\n"); }
#line 945 "y.tab.c"
    break;

  case 45:
#line 148 "phase2.y"
                     { printf("term -> SUB number\n"); }
#line 951 "y.tab.c"
    break;

  case 46:
#line 149 "phase2.y"
                                         { printf("term -> SUB L_PAREN expression R_PAREN\n"); }
#line 957 "y.tab.c"
    break;

  case 47:
#line 150 "phase2.y"
              { printf("term -> var\n"); }
#line 963 "y.tab.c"
    break;

  case 48:
#line 151 "phase2.y"
                 { printf("term -> number\n"); }
#line 969 "y.tab.c"
    break;

  case 49:
#line 152 "phase2.y"
                                     { printf("term -> L_PAREN expression R_PAREN\n"); }
#line 975 "y.tab.c"
    break;

  case 50:
#line 153 "phase2.y"
                                                    { printf("term -> identifier L_PAREN expressionloop R_PAREN\n"); }
#line 981 "y.tab.c"
    break;

  case 51:
#line 156 "phase2.y"
              { printf("varloop -> var\n"); }
#line 987 "y.tab.c"
    break;

  case 52:
#line 157 "phase2.y"
                              { printf("varloop -> var COMMA varloop\n"); }
#line 993 "y.tab.c"
    break;

  case 53:
#line 160 "phase2.y"
                                                                  { printf("var -> identifier L_SQUARE_BRACKET expression R_SQUARE_BRACKET\n"); }
#line 999 "y.tab.c"
    break;

  case 54:
#line 161 "phase2.y"
                       { printf("var -> identifier\n"); }
#line 1005 "y.tab.c"
    break;

  case 55:
#line 164 "phase2.y"
               { printf("number -> NUMBER %d\n", yylval.num); }
#line 1011 "y.tab.c"
    break;

  case 56:
#line 167 "phase2.y"
                                                  { printf("expressionloop-> expression COMMA expressionloop\n"); }
#line 1017 "y.tab.c"
    break;

  case 57:
#line 168 "phase2.y"
                               { printf("expressionloop -> expression"); }
#line 1023 "y.tab.c"
    break;

  case 58:
#line 169 "phase2.y"
                    { printf("expressionloop -> epsilon"); }
#line 1029 "y.tab.c"
    break;

  case 59:
#line 172 "phase2.y"
                  { printf("identifier -> IDENT %s\n", yylval.ident); }
#line 1035 "y.tab.c"
    break;

  case 60:
#line 175 "phase2.y"
                                                  { printf("identifierloop -> identifier COMMA identifierloop\n"); }
#line 1041 "y.tab.c"
    break;

  case 61:
#line 176 "phase2.y"
                               { printf("identifierloop -> identifier\n"); }
#line 1047 "y.tab.c"
    break;


#line 1051 "y.tab.c"

            default:
              break;
            }
        }
#if YY_EXCEPTIONS
      catch (const syntax_error& yyexc)
        {
          YYCDEBUG << "Caught exception: " << yyexc.what() << '\n';
          error (yyexc);
          YYERROR;
        }
#endif // YY_EXCEPTIONS
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, YY_MOVE (yylhs));
    }
    goto yynewstate;


  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:
    /* Pacify compilers when the user code never invokes YYERROR and
       the label yyerrorlab therefore never appears in user code.  */
    if (false)
      YYERROR;

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;


  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[+yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yy_error_token_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yy_error_token_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = state_type (yyn);
      yypush_ ("Shifting", YY_MOVE (error_token));
    }
    goto yynewstate;


  /*-------------------------------------.
  | yyacceptlab -- YYACCEPT comes here.  |
  `-------------------------------------*/
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;


  /*-----------------------------------.
  | yyabortlab -- YYABORT comes here.  |
  `-----------------------------------*/
  yyabortlab:
    yyresult = 1;
    goto yyreturn;


  /*-----------------------------------------------------.
  | yyreturn -- parsing is finished, return the result.  |
  `-----------------------------------------------------*/
  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
#if YY_EXCEPTIONS
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack\n";
        // Do not try to display the values of the reclaimed symbols,
        // as their printers might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
#endif // YY_EXCEPTIONS
  }

  void
  parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what ());
  }

  // Generate an error message.
  std::string
  parser::yysyntax_error_ (state_type, const symbol_type&) const
  {
    return YY_("syntax error");
  }


  const signed char parser::yypact_ninf_ = -48;

  const signed char parser::yytable_ninf_ = -1;

  const short
  parser::yypact_[] =
  {
       9,    22,    37,     9,   -48,    11,   -48,   -48,    36,    22,
      26,    50,    29,    38,    22,    63,    22,    -8,   -48,    22,
     -48,   -48,    39,    72,    79,    74,   -48,    55,    98,    80,
      35,    35,    71,    22,   -48,    22,    22,    40,    67,    89,
      64,    68,    92,   -48,   -48,    35,    21,    35,    90,    58,
     -48,    56,   105,     8,     1,   -48,   -48,    -4,    87,    98,
      73,   -48,    83,   -48,    40,   -48,    98,   -48,    40,    40,
     -48,    78,    99,    40,   -48,   -48,   -48,    98,    35,    35,
     -48,   -48,   -48,   -48,   -48,   -48,    40,    40,    40,    40,
      40,    40,    40,    98,    93,    79,    22,    86,   -48,   -48,
      94,   -48,   -48,    91,     4,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,    96,    95,   108,   115,   119,   -48,   -48,
     -48,   -48,    98,    40,   -48,   -48,    35,    35,   118,   -48,
     -48,   120,   -48,    22,   114,    40,   130,    98,   131,   -48
  };

  const signed char
  parser::yydefact_[] =
  {
       3,     0,     0,     3,    59,     0,     1,     2,     0,     8,
       0,     0,    61,     0,     8,     0,     0,     0,     7,     8,
      60,     5,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,     0,
       0,    54,     0,    26,    27,     0,     0,     0,     0,    22,
      30,    24,     0,    37,    40,    47,    48,    54,     0,     0,
       0,    15,    51,    16,     0,    18,    20,     4,     0,     0,
       6,     0,     0,     0,    44,    45,    29,     0,     0,     0,
      31,    32,    33,    35,    34,    36,     0,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,     0,    19,     9,
       0,    28,    49,     0,     0,    21,    23,    25,    38,    39,
      41,    42,    43,    57,     0,     0,     0,     0,    52,    53,
      46,    10,     0,    58,    50,    12,     0,     0,     0,    56,
      13,     0,    11,     0,     0,     0,     0,     0,     0,    14
  };

  const short
  parser::yypgoto_[] =
  {
     -48,   150,   -48,   -48,    -3,   -48,   -47,   -28,    76,   -48,
     109,   -48,    -9,    -2,   -48,   -30,   -26,   -23,    34,    -1,
     142
  };

  const signed char
  parser::yydefgoto_[] =
  {
      -1,     2,     3,    10,    11,    38,    39,    48,    49,    50,
      51,    86,    52,    53,    54,    61,    55,    56,   114,    57,
      13
  };

  const unsigned char
  parser::yytable_[] =
  {
       5,    27,    40,    58,    21,    22,    63,    60,    12,    62,
      62,    18,    94,    12,     1,    12,    23,    71,    12,    98,
      74,   121,   122,    75,    26,     4,     4,    41,    65,    92,
     104,    69,    41,    40,    41,    41,    72,     6,    26,     4,
      40,     8,     9,    26,     4,    41,   115,    89,    90,    91,
     105,    40,    87,    88,    73,    97,    14,    15,    41,    99,
     100,    16,    43,    44,   103,    41,   118,    40,    45,    17,
      62,    19,   117,    64,    24,   128,    41,   107,   108,   109,
      46,    25,    26,   113,    28,    46,    47,   110,   111,   112,
     138,    29,    41,    59,    42,    41,    40,    66,   130,   131,
      67,    68,     4,    69,    70,    79,    77,   134,    78,    93,
      95,    40,   101,    30,   113,    96,   116,    31,    32,    33,
     102,    41,    34,    35,    36,   120,   136,    37,   123,   124,
     119,   125,    41,   102,   126,   132,    41,    80,    81,    82,
      83,    84,    85,    80,    81,    82,    83,    84,    85,   127,
     133,   135,   137,     7,   139,   106,    76,   129,    20
  };

  const unsigned char
  parser::yycheck_[] =
  {
       1,    24,    28,    31,    12,    13,    36,    33,     9,    35,
      36,    14,    59,    14,     5,    16,    19,    45,    19,    66,
      46,    17,    18,    46,     3,     4,     4,    28,    37,    33,
      77,    35,    33,    59,    35,    36,    45,     0,     3,     4,
      66,    30,     6,     3,     4,    46,    93,    46,    47,    48,
      78,    77,    44,    45,    33,    64,    30,     7,    59,    68,
      69,    32,    27,    28,    73,    66,    96,    93,    33,    31,
      96,     8,    95,    33,    35,   122,    77,    86,    87,    88,
      45,     9,     3,    92,    10,    45,    51,    89,    90,    91,
     137,    36,    93,    22,    14,    96,   122,    30,   126,   127,
      11,    37,     4,    35,    12,    49,    16,   133,    50,    22,
      37,   137,    34,    15,   123,    32,    23,    19,    20,    21,
      34,   122,    24,    25,    26,    34,   135,    29,    32,    34,
      36,    23,   133,    34,    19,    17,   137,    38,    39,    40,
      41,    42,    43,    38,    39,    40,    41,    42,    43,    30,
      30,    37,    22,     3,    23,    79,    47,   123,    16
  };

  const signed char
  parser::yystos_[] =
  {
       0,     5,    53,    54,     4,    71,     0,    53,    30,     6,
      55,    56,    71,    72,    30,     7,    32,    31,    56,     8,
      72,    12,    13,    56,    35,     9,     3,    69,    10,    36,
      15,    19,    20,    21,    24,    25,    26,    29,    57,    58,
      68,    71,    14,    27,    28,    33,    45,    51,    59,    60,
      61,    62,    64,    65,    66,    68,    69,    71,    59,    22,
      68,    67,    68,    67,    33,    64,    30,    11,    37,    35,
      12,    59,    64,    33,    68,    69,    62,    16,    50,    49,
      38,    39,    40,    41,    42,    43,    63,    44,    45,    46,
      47,    48,    33,    22,    58,    37,    32,    64,    58,    64,
      64,    34,    34,    64,    58,    59,    60,    64,    64,    64,
      65,    65,    65,    64,    70,    58,    23,    69,    67,    36,
      34,    17,    18,    32,    34,    23,    19,    30,    58,    70,
      59,    59,    17,    30,    68,    37,    64,    22,    58,    23
  };

  const signed char
  parser::yyr1_[] =
  {
       0,    52,    53,    53,    54,    55,    55,    56,    56,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    62,
      62,    63,    63,    63,    63,    63,    63,    64,    64,    64,
      65,    65,    65,    65,    66,    66,    66,    66,    66,    66,
      66,    67,    67,    68,    68,    69,    70,    70,    70,    71,
      72,    72
  };

  const signed char
  parser::yyr2_[] =
  {
       0,     2,     2,     0,    12,     3,     8,     3,     0,     3,
       5,     7,     5,     6,    13,     2,     2,     1,     2,     3,
       2,     3,     1,     3,     1,     3,     1,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       1,     3,     3,     3,     2,     2,     4,     1,     1,     3,
       4,     1,     3,     4,     1,     1,     3,     1,     0,     1,
       3,     1
  };


#if YYDEBUG
  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const parser::yytname_[] =
  {
  "$end", "error", "$undefined", "NUMBER", "IDENT", "FUNCTION",
  "BEGIN_PARAMS", "END_PARAMS", "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY",
  "END_BODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "FOR", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ",
  "WRITE", "TRUE", "FALSE", "RETURN", "SEMICOLON", "COLON", "COMMA",
  "L_PAREN", "R_PAREN", "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "ASSIGN",
  "EQ", "NEQ", "LT", "LTE", "GT", "GTE", "ADD", "SUB", "MULT", "DIV",
  "MOD", "AND", "OR", "NOT", "$accept", "program", "function",
  "declaration", "declarationloop", "statement", "statementloop",
  "bool_exp", "relation_and_exp", "relation_exp", "notloop", "comp",
  "expression", "multiplicative_expression", "term", "varloop", "var",
  "number", "expressionloop", "identifier", "identifierloop", YY_NULLPTR
  };


  const unsigned char
  parser::yyrline_[] =
  {
       0,    72,    72,    79,    82,    86,    87,    90,    91,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   106,
     107,   110,   111,   114,   115,   118,   119,   120,   121,   124,
     125,   128,   129,   130,   131,   132,   133,   136,   137,   138,
     141,   142,   143,   144,   147,   148,   149,   150,   151,   152,
     153,   156,   157,   160,   161,   164,   167,   168,   169,   172,
     175,   176
  };

  // Print the state stack on the debug stream.
  void
  parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << int (i->state);
    *yycdebug_ << '\n';
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  parser::yy_reduce_print_ (int yyrule)
  {
    int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):\n";
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG


} // yy
#line 1436 "y.tab.c"

#line 179 "phase2.y"
  

void yyerror(char* s)
{
  // extern int yylineno;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  extern char currPos;
  extern int currLine;
  
  printf("%s on line %d at character %d at symbol \"%s\"\n", s, currLine, currPos, yytext);
  exit(1);
}
