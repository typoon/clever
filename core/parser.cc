/* A Bison parser, made by GNU Bison 2.5.  */

/* Skeleton implementation for Bison LALR(1) parsers in C++
   
      Copyright (C) 2002-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* First part of user declarations.  */




#include "parser.hh"

/* User implementation prologue.  */


/* Unqualified %code blocks.  */


#include "core/driver.h"




#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* FIXME: INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                               \
 do                                                                    \
   if (N)                                                              \
     {                                                                 \
       (Current).begin = YYRHSLOC (Rhs, 1).begin;                      \
       (Current).end   = YYRHSLOC (Rhs, N).end;                        \
     }                                                                 \
   else                                                                \
     {                                                                 \
       (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;        \
     }                                                                 \
 while (false)
#endif

/* Suppress unused-variable warnings by "using" E.  */
#define YYUSE(e) ((void) (e))

/* Enable debugging if requested.  */
#if YYDEBUG

/* A pseudo ostream that takes yydebug_ into account.  */
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)	\
do {							\
  if (yydebug_)						\
    {							\
      *yycdebug_ << Title << ' ';			\
      yy_symbol_print_ ((Type), (Value), (Location));	\
      *yycdebug_ << std::endl;				\
    }							\
} while (false)

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug_)				\
    yy_reduce_print_ (Rule);		\
} while (false)

# define YY_STACK_PRINT()		\
do {					\
  if (yydebug_)				\
    yystack_print_ ();			\
} while (false)

#else /* !YYDEBUG */

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_REDUCE_PRINT(Rule)
# define YY_STACK_PRINT()

#endif /* !YYDEBUG */

#define yyerrok		(yyerrstatus_ = 0)
#define yyclearin	(yychar = yyempty_)

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace clever {


  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              /* Fall through.  */
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  Parser::Parser (Driver& driver_yyarg, ScannerState& state_yyarg, Compiler& c_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg),
      state (state_yyarg),
      c (c_yyarg)
  {
  }

  Parser::~Parser ()
  {
  }

#if YYDEBUG
  /*--------------------------------.
  | Print this symbol on YYOUTPUT.  |
  `--------------------------------*/

  inline void
  Parser::yy_symbol_value_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yyvaluep);
    switch (yytype)
      {
         default:
	  break;
      }
  }


  void
  Parser::yy_symbol_print_ (int yytype,
			   const semantic_type* yyvaluep, const location_type* yylocationp)
  {
    *yycdebug_ << (yytype < yyntokens_ ? "token" : "nterm")
	       << ' ' << yytname_[yytype] << " ("
	       << *yylocationp << ": ";
    yy_symbol_value_print_ (yytype, yyvaluep, yylocationp);
    *yycdebug_ << ')';
  }
#endif

  void
  Parser::yydestruct_ (const char* yymsg,
			   int yytype, semantic_type* yyvaluep, location_type* yylocationp)
  {
    YYUSE (yylocationp);
    YYUSE (yymsg);
    YYUSE (yyvaluep);

    YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

    switch (yytype)
      {
  
	default:
	  break;
      }
  }

  void
  Parser::yypop_ (unsigned int n)
  {
    yystate_stack_.pop (n);
    yysemantic_stack_.pop (n);
    yylocation_stack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  Parser::debug_level_type
  Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif

  inline bool
  Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  Parser::parse ()
  {
    /// Lookahead and lookahead in internal form.
    int yychar = yyempty_;
    int yytoken = 0;

    /* State.  */
    int yyn;
    int yylen = 0;
    int yystate = 0;

    /* Error handling.  */
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// Semantic value of the lookahead.
    semantic_type yylval;
    /// Location of the lookahead.
    location_type yylloc;
    /// The locations where the error started and ended.
    location_type yyerror_range[3];

    /// $$.
    semantic_type yyval;
    /// @$.
    location_type yyloc;

    int yyresult;

    YYCDEBUG << "Starting parse" << std::endl;


    /* User initialization code.  */
    
{
yylloc.begin.filename = yylloc.end.filename = driver.getFile();
}


    /* Initialize the stacks.  The initial state will be pushed in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystate_stack_ = state_stack_type (0);
    yysemantic_stack_ = semantic_stack_type (0);
    yylocation_stack_ = location_stack_type (0);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* New state.  */
  yynewstate:
    yystate_stack_.push (yystate);
    YYCDEBUG << "Entering state " << yystate << std::endl;

    /* Accept?  */
    if (yystate == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    /* Backup.  */
  yybackup:

    /* Try to take a decision without lookahead.  */
    yyn = yypact_[yystate];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    /* Read a lookahead token.  */
    if (yychar == yyempty_)
      {
	YYCDEBUG << "Reading a token: ";
	yychar = yylex (&yylval, &yylloc, driver, state);
      }


    /* Convert token to internal form.  */
    if (yychar <= yyeof_)
      {
	yychar = yytoken = yyeof_;
	YYCDEBUG << "Now at end of input." << std::endl;
      }
    else
      {
	yytoken = yytranslate_ (yychar);
	YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
      }

    /* If the proper action on seeing token YYTOKEN is to reduce or to
       detect an error, take that action.  */
    yyn += yytoken;
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yytoken)
      goto yydefault;

    /* Reduce or error.  */
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
	if (yy_table_value_is_error_ (yyn))
	  goto yyerrlab;
	yyn = -yyn;
	goto yyreduce;
      }

    /* Shift the lookahead token.  */
    YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

    /* Discard the token being shifted.  */
    yychar = yyempty_;

    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yylloc);

    /* Count tokens shifted since error; after three, turn off error
       status.  */
    if (yyerrstatus_)
      --yyerrstatus_;

    yystate = yyn;
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystate];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    /* If YYLEN is nonzero, implement the default value of the action:
       `$$ = $1'.  Otherwise, use the top of the stack.

       Otherwise, the following line sets YYVAL to garbage.
       This behavior is undocumented and Bison
       users should not rely upon it.  */
    if (yylen)
      yyval = yysemantic_stack_[yylen - 1];
    else
      yyval = yysemantic_stack_[0];

    {
      slice<location_type, location_stack_type> slice (yylocation_stack_, yylen);
      YYLLOC_DEFAULT (yyloc, slice, yylen);
    }
    YY_REDUCE_PRINT (yyn);
    switch (yyn)
      {
	  case 2:

    { c.init(driver.getFile()); }
    break;

  case 3:

    { c.setAST((yysemantic_stack_[(2) - (2)].block)); }
    break;

  case 4:

    { (yyval.block) = new ast::Block(yyloc); }
    break;

  case 5:

    { (yysemantic_stack_[(2) - (1)].block)->append((yysemantic_stack_[(2) - (2)].node));       }
    break;

  case 26:

    { (yyval.block) = (yysemantic_stack_[(3) - (2)].block); }
    break;

  case 27:

    { (yyval.inst) = new ast::Instantiation((yysemantic_stack_[(3) - (1)].type), NULL, yyloc); }
    break;

  case 28:

    { (yyval.inst) = new ast::Instantiation((yysemantic_stack_[(6) - (1)].type), (yysemantic_stack_[(6) - (5)].narray),   yyloc); }
    break;

  case 29:

    { (yyval.break_) = new ast::Break(yyloc); }
    break;

  case 30:

    { (yyval.continue_) = new ast::Continue(yyloc); }
    break;

  case 31:

    {
#ifndef CLEVER_THREADS
		error(yyloc, "Cannot use process block syntax, threads is disabled!"); YYABORT;
#else
		(yyval.threadblock) = new ast::ThreadBlock((yysemantic_stack_[(3) - (3)].block), (yysemantic_stack_[(3) - (2)].ident), yyloc);
#endif
	}
    break;

  case 32:

    {
#ifndef CLEVER_THREADS
		error(yyloc, "Cannot use process block syntax, threads is disabled!"); YYABORT;
#else
		(yyval.threadblock) = new ast::ThreadBlock((yysemantic_stack_[(6) - (6)].block), (yysemantic_stack_[(6) - (2)].ident), (yysemantic_stack_[(6) - (4)].node), yyloc);
#endif
	}
    break;

  case 33:

    {
#ifndef CLEVER_THREADS
		error(yyloc, "Cannot use critical block syntax, threads is disabled!"); YYABORT;
#else
		(yyval.criticalblock) = new ast::CriticalBlock((yysemantic_stack_[(2) - (2)].block), yyloc);
#endif
	}
    break;

  case 44:

    { (yyval.node) = (yysemantic_stack_[(3) - (2)].node); }
    break;

  case 62:

    { (yysemantic_stack_[(1) - (1)].property)->setWriteMode(); }
    break;

  case 64:

    { (yyval.node) = new ast::Subscript((yysemantic_stack_[(4) - (1)].node), (yysemantic_stack_[(4) - (3)].node), yyloc); }
    break;

  case 65:

    { (yyval.node) = new ast::Arithmetic(ast::Arithmetic::MOP_SUB, new ast::IntLit(0, yyloc), (yysemantic_stack_[(2) - (2)].node), yyloc); }
    break;

  case 66:

    { (yyval.node) = new ast::Arithmetic(ast::Arithmetic::MOP_ADD, new ast::IntLit(0, yyloc), (yysemantic_stack_[(2) - (2)].node), yyloc); }
    break;

  case 67:

    { (yyval.node) = new ast::Boolean(ast::Boolean::BOP_NOT, (yysemantic_stack_[(2) - (2)].node), yyloc);                                  }
    break;

  case 68:

    { (yyval.node) = new ast::Bitwise(ast::Bitwise::BOP_NOT, (yysemantic_stack_[(2) - (2)].node), yyloc);                                  }
    break;

  case 69:

    { (yyval.class_) = new ast::ClassDef((yysemantic_stack_[(6) - (2)].type), (yysemantic_stack_[(6) - (4)].narray), (yysemantic_stack_[(6) - (5)].narray), yyloc); }
    break;

  case 70:

    { (yyval.narray) = NULL; }
    break;

  case 72:

    { (yyval.narray) = new ast::NodeArray(yyloc); }
    break;

  case 73:

    { (yyval.narray) = (yysemantic_stack_[(3) - (1)].narray); }
    break;

  case 74:

    { (yyval.narray) = (yysemantic_stack_[(1) - (1)].narray); }
    break;

  case 76:

    { (yyval.narray) = (yysemantic_stack_[(1) - (0)].narray); }
    break;

  case 78:

    { (yyval.narray) = (yysemantic_stack_[(1) - (0)].narray); }
    break;

  case 88:

    { (yysemantic_stack_[(1) - (0)].narray)->append((yysemantic_stack_[(1) - (1)].attr)); }
    break;

  case 89:

    { (yysemantic_stack_[(3) - (0)].narray)->append((yysemantic_stack_[(3) - (3)].attr)); }
    break;

  case 90:

    { (yyval.attr) = new ast::AttrDecl((yysemantic_stack_[(3) - (1)].ident), (yysemantic_stack_[(3) - (3)].node), false, yyloc); }
    break;

  case 91:

    { (yyval.attr) = new ast::AttrDecl((yysemantic_stack_[(1) - (1)].ident), NULL, false, yyloc);     }
    break;

  case 92:

    { (yyval.narray) = new ast::NodeArray(yyloc); (yyval.narray)->append((yysemantic_stack_[(1) - (1)].attr)); }
    break;

  case 93:

    { (yysemantic_stack_[(3) - (1)].narray)->append((yysemantic_stack_[(3) - (3)].attr)); }
    break;

  case 94:

    { (yyval.attr) = new ast::AttrDecl((yysemantic_stack_[(3) - (1)].ident), (yysemantic_stack_[(3) - (3)].node), true, yyloc);   }
    break;

  case 95:

    { (yyval.narray) = NULL; }
    break;

  case 97:

    { (yyval.narray) = new ast::NodeArray(yyloc); (yyval.narray)->append((yysemantic_stack_[(1) - (1)].fdecl)); }
    break;

  case 98:

    { (yysemantic_stack_[(2) - (1)].narray)->append((yysemantic_stack_[(2) - (2)].fdecl)); }
    break;

  case 99:

    { (yyval.inst) = new ast::Instantiation(CSTRING("Array"), (yysemantic_stack_[(3) - (2)].narray), yyloc); }
    break;

  case 100:

    { (yyval.narray) = new ast::NodeArray(yyloc); (yyval.narray)->append((yysemantic_stack_[(3) - (1)].strlit)); (yyval.narray)->append((yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 101:

    { (yysemantic_stack_[(5) - (1)].narray)->append((yysemantic_stack_[(5) - (3)].strlit)); (yysemantic_stack_[(5) - (1)].narray)->append((yysemantic_stack_[(5) - (5)].node));                                 }
    break;

  case 102:

    { (yyval.inst) = new ast::Instantiation(CSTRING("Map"), NULL, yyloc); }
    break;

  case 103:

    { (yyval.inst) = new ast::Instantiation(CSTRING("Map"), (yysemantic_stack_[(3) - (2)].narray), yyloc);   }
    break;

  case 104:

    { (yyval.throw_) = new ast::Throw((yysemantic_stack_[(2) - (2)].node), yyloc); }
    break;

  case 106:

    { (yyval.narray) = new ast::NodeArray(yyloc); (yyval.narray)->append((yysemantic_stack_[(1) - (1)].catch_)); }
    break;

  case 107:

    { (yysemantic_stack_[(2) - (1)].narray)->append((yysemantic_stack_[(2) - (2)].catch_));                                 }
    break;

  case 108:

    { (yyval.catch_) = new ast::Catch((yysemantic_stack_[(5) - (3)].ident), (yysemantic_stack_[(5) - (5)].block), yyloc); }
    break;

  case 109:

    { (yyval.block) = NULL; }
    break;

  case 110:

    { (yyval.block) = (yysemantic_stack_[(2) - (2)].block);   }
    break;

  case 111:

    { (yyval.except) = new ast::Try((yysemantic_stack_[(4) - (2)].block), (yysemantic_stack_[(4) - (3)].narray), (yysemantic_stack_[(4) - (4)].block), yyloc); }
    break;

  case 112:

    { (yyval.property) = new ast::Property((yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].ident), yyloc); }
    break;

  case 113:

    { (yyval.property) = new ast::Property((yysemantic_stack_[(3) - (1)].type), (yysemantic_stack_[(3) - (3)].ident), yyloc); }
    break;

  case 114:

    { (yyval.property) = new ast::Property((yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].ident), yyloc); }
    break;

  case 115:

    { (yyval.property) = new ast::Property((yysemantic_stack_[(3) - (1)].type), (yysemantic_stack_[(3) - (3)].ident), yyloc); }
    break;

  case 116:

    { (yyval.mcall) = (yysemantic_stack_[(0) - (0)].mcall); }
    break;

  case 117:

    { (yyval.mcall) = new ast::MethodCall((yysemantic_stack_[(6) - (0)].node), (yysemantic_stack_[(6) - (3)].ident), (yysemantic_stack_[(6) - (5)].narray), yyloc); }
    break;

  case 118:

    { (yyval.property) = new ast::Property((yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].ident), yyloc); }
    break;

  case 119:

    { (yyval.property) = new ast::Property((yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].ident), yyloc); (yyval.property)->setStatic(); }
    break;

  case 120:

    { (yyval.node) = new ast::MethodCall((yysemantic_stack_[(6) - (1)].node), (yysemantic_stack_[(6) - (3)].ident), (yysemantic_stack_[(6) - (5)].narray), yyloc); }
    break;

  case 121:

    { (yyval.node) = (yysemantic_stack_[(8) - (8)].node); }
    break;

  case 122:

    { (yyval.node) = new ast::MethodCall((yysemantic_stack_[(6) - (1)].type), (yysemantic_stack_[(6) - (3)].ident), (yysemantic_stack_[(6) - (5)].narray), yyloc); }
    break;

  case 123:

    { (yyval.node) = (yysemantic_stack_[(8) - (8)].node); }
    break;

  case 124:

    { (yyval.inc_dec) = new ast::IncDec(ast::IncDec::POS_INC, (yysemantic_stack_[(2) - (1)].node), yyloc); }
    break;

  case 125:

    { (yyval.inc_dec) = new ast::IncDec(ast::IncDec::POS_DEC, (yysemantic_stack_[(2) - (1)].node), yyloc); }
    break;

  case 126:

    { (yyval.inc_dec) = new ast::IncDec(ast::IncDec::PRE_INC, (yysemantic_stack_[(2) - (2)].node), yyloc); }
    break;

  case 127:

    { (yyval.inc_dec) = new ast::IncDec(ast::IncDec::PRE_DEC, (yysemantic_stack_[(2) - (2)].node), yyloc); }
    break;

  case 128:

    { (yyval.comp) = new ast::Comparison(ast::Comparison::COP_EQUAL,   (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 129:

    { (yyval.comp) = new ast::Comparison(ast::Comparison::COP_NEQUAL,  (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 130:

    { (yyval.comp) = new ast::Comparison(ast::Comparison::COP_GREATER, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 131:

    { (yyval.comp) = new ast::Comparison(ast::Comparison::COP_GEQUAL,  (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 132:

    { (yyval.comp) = new ast::Comparison(ast::Comparison::COP_LESS,    (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 133:

    { (yyval.comp) = new ast::Comparison(ast::Comparison::COP_LEQUAL,  (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 134:

    { (yyval.boolean) = new ast::Boolean(ast::Boolean::BOP_OR, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc);  }
    break;

  case 135:

    { (yyval.boolean) = new ast::Boolean(ast::Boolean::BOP_AND, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 136:

    { (yyval.logic) = new ast::Logic(ast::Logic::LOP_OR, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc);      }
    break;

  case 137:

    { (yyval.logic) = new ast::Logic(ast::Logic::LOP_AND, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc);     }
    break;

  case 138:

    { (yyval.arithmetic) = new ast::Arithmetic(ast::Arithmetic::MOP_ADD, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 139:

    { (yyval.arithmetic) = new ast::Arithmetic(ast::Arithmetic::MOP_SUB, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 140:

    { (yyval.arithmetic) = new ast::Arithmetic(ast::Arithmetic::MOP_MUL, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 141:

    { (yyval.arithmetic) = new ast::Arithmetic(ast::Arithmetic::MOP_DIV, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 142:

    { (yyval.arithmetic) = new ast::Arithmetic(ast::Arithmetic::MOP_MOD, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 143:

    { (yyval.bitwise) = new ast::Bitwise(ast::Bitwise::BOP_AND, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc);    }
    break;

  case 144:

    { (yyval.bitwise) = new ast::Bitwise(ast::Bitwise::BOP_OR, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc);     }
    break;

  case 145:

    { (yyval.bitwise) = new ast::Bitwise(ast::Bitwise::BOP_XOR, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc);    }
    break;

  case 146:

    { (yyval.bitwise) = new ast::Bitwise(ast::Bitwise::BOP_LSHIFT, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 147:

    { (yyval.bitwise) = new ast::Bitwise(ast::Bitwise::BOP_RSHIFT, (yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 148:

    { (yyval.narray) = (yysemantic_stack_[(2) - (2)].narray); }
    break;

  case 149:

    { (yyval.narray) = (yysemantic_stack_[(2) - (2)].narray); }
    break;

  case 150:

    { (yyval.narray) = new ast::NodeArray(yyloc); (yyval.narray)->append((yysemantic_stack_[(1) - (1)].vardecl)); }
    break;

  case 151:

    { (yysemantic_stack_[(3) - (1)].narray)->append((yysemantic_stack_[(3) - (3)].vardecl)); }
    break;

  case 152:

    { (yyval.vardecl) = new ast::VariableDecl((yysemantic_stack_[(3) - (1)].ident), new ast::Assignment((yysemantic_stack_[(3) - (1)].ident), (yysemantic_stack_[(3) - (3)].node), yyloc), false, yyloc); }
    break;

  case 153:

    { (yyval.vardecl) = new ast::VariableDecl((yysemantic_stack_[(1) - (1)].ident), new ast::Assignment((yysemantic_stack_[(1) - (1)].ident), NULL, yyloc), false, yyloc); }
    break;

  case 154:

    { (yyval.narray) = new ast::NodeArray(yyloc); (yyval.narray)->append((yysemantic_stack_[(1) - (1)].vardecl)); }
    break;

  case 155:

    { (yysemantic_stack_[(3) - (1)].narray)->append((yysemantic_stack_[(3) - (3)].vardecl)); }
    break;

  case 156:

    { (yyval.vardecl) = new ast::VariableDecl((yysemantic_stack_[(3) - (1)].ident), new ast::Assignment((yysemantic_stack_[(3) - (1)].ident), (yysemantic_stack_[(3) - (3)].node), yyloc), true, yyloc); }
    break;

  case 157:

    { (yyval.assignment) = new ast::Assignment((yysemantic_stack_[(3) - (1)].node), (yysemantic_stack_[(3) - (3)].node), yyloc); }
    break;

  case 158:

    { (yyval.ident) = (yysemantic_stack_[(1) - (1)].ident); }
    break;

  case 159:

    { (yysemantic_stack_[(3) - (1)].ident)->append('.', (yysemantic_stack_[(3) - (3)].ident)); (yyval.ident) = (yysemantic_stack_[(3) - (1)].ident); }
    break;

  case 160:

    { (yyval.import) = new ast::Import((yysemantic_stack_[(4) - (2)].ident), yyloc);     }
    break;

  case 161:

    { (yyval.import) = new ast::Import((yysemantic_stack_[(4) - (2)].ident), yyloc);     }
    break;

  case 162:

    { (yyval.import) = new ast::Import((yysemantic_stack_[(4) - (2)].ident), (yysemantic_stack_[(4) - (4)].ident), yyloc); }
    break;

  case 163:

    { (yyval.import) = new ast::Import((yysemantic_stack_[(4) - (2)].ident), (yysemantic_stack_[(4) - (4)].type), yyloc); }
    break;

  case 164:

    { (yyval.import) = new ast::Import((yysemantic_stack_[(2) - (2)].ident), yyloc); (yyval.import)->setNamespaced(true); }
    break;

  case 165:

    { (yyval.vardecl) = new ast::VariableDecl((yysemantic_stack_[(4) - (1)].ident), new ast::Assignment((yysemantic_stack_[(4) - (1)].ident), NULL, yyloc), false, yyloc); }
    break;

  case 166:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(5) - (2)].ident), NULL, (yysemantic_stack_[(5) - (5)].block), NULL, false, yyloc); }
    break;

  case 167:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(5) - (2)].type), NULL, (yysemantic_stack_[(5) - (5)].block), NULL, yyloc); }
    break;

  case 168:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(6) - (2)].ident), NULL, (yysemantic_stack_[(6) - (6)].block), (yysemantic_stack_[(6) - (4)].vardecl), false, yyloc); }
    break;

  case 169:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(6) - (2)].type), NULL, (yysemantic_stack_[(6) - (6)].block), (yysemantic_stack_[(6) - (4)].vardecl), yyloc); }
    break;

  case 170:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(6) - (2)].ident), (yysemantic_stack_[(6) - (4)].narray), (yysemantic_stack_[(6) - (6)].block), NULL, false, yyloc); }
    break;

  case 171:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(6) - (2)].type), (yysemantic_stack_[(6) - (4)].narray), (yysemantic_stack_[(6) - (6)].block), NULL, yyloc); }
    break;

  case 172:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(8) - (2)].ident), (yysemantic_stack_[(8) - (4)].narray), (yysemantic_stack_[(8) - (8)].block), (yysemantic_stack_[(8) - (6)].vardecl), false, yyloc); }
    break;

  case 173:

    { (yyval.fdecl) = new ast::FunctionDecl((yysemantic_stack_[(8) - (2)].type), (yysemantic_stack_[(8) - (4)].narray), (yysemantic_stack_[(8) - (8)].block), (yysemantic_stack_[(8) - (6)].vardecl), yyloc); }
    break;

  case 174:

    { (yyval.fdecl) = new ast::FunctionDecl(NULL, NULL, (yysemantic_stack_[(4) - (4)].block), NULL, true, yyloc); }
    break;

  case 175:

    { (yyval.fdecl) = new ast::FunctionDecl(NULL, NULL, (yysemantic_stack_[(5) - (5)].block), (yysemantic_stack_[(5) - (3)].vardecl), true, yyloc); }
    break;

  case 176:

    { (yyval.fdecl) = new ast::FunctionDecl(NULL, (yysemantic_stack_[(5) - (3)].narray), (yysemantic_stack_[(5) - (5)].block), NULL, true, yyloc); }
    break;

  case 177:

    { (yyval.fdecl) = new ast::FunctionDecl(NULL, (yysemantic_stack_[(7) - (3)].narray), (yysemantic_stack_[(7) - (7)].block), (yysemantic_stack_[(7) - (5)].vardecl), true, yyloc); }
    break;

  case 178:

    { (yyval.narray) = NULL; }
    break;

  case 180:

    { (yyval.narray) = new ast::NodeArray(yyloc); (yyval.narray)->append((yysemantic_stack_[(1) - (1)].node)); }
    break;

  case 181:

    { (yysemantic_stack_[(3) - (1)].narray)->append((yysemantic_stack_[(3) - (3)].node)); }
    break;

  case 182:

    { (yyval.fcall) = (yysemantic_stack_[(0) - (0)].fcall); }
    break;

  case 183:

    { (yyval.fcall) = new ast::FunctionCall((yysemantic_stack_[(4) - (1)].node), (yysemantic_stack_[(4) - (3)].narray), yyloc); }
    break;

  case 184:

    { (yyval.node) = new ast::Subscript((yysemantic_stack_[(4) - (1)].node), (yysemantic_stack_[(4) - (3)].node), yyloc); }
    break;

  case 186:

    { (yysemantic_stack_[(3) - (1)].ident)->append(':', (yysemantic_stack_[(3) - (3)].ident)); (yyval.ident) = (yysemantic_stack_[(3) - (1)].ident); }
    break;

  case 187:

    { (yysemantic_stack_[(6) - (1)].ident)->append(':', (yysemantic_stack_[(6) - (3)].ident)); (yyval.fcall) = new ast::FunctionCall((yysemantic_stack_[(6) - (1)].ident), (yysemantic_stack_[(6) - (5)].narray), yyloc); }
    break;

  case 188:

    { (yyval.fcall) = (yysemantic_stack_[(8) - (8)].fcall); }
    break;

  case 189:

    { (yysemantic_stack_[(5) - (1)].ident)->append(':', (yysemantic_stack_[(5) - (3)].type)); (yyval.inst) = new ast::Instantiation((yysemantic_stack_[(5) - (1)].ident), NULL, yyloc); }
    break;

  case 190:

    { (yysemantic_stack_[(8) - (1)].ident)->append(':', (yysemantic_stack_[(8) - (3)].type)); (yyval.inst) = new ast::Instantiation((yysemantic_stack_[(8) - (1)].ident), (yysemantic_stack_[(8) - (7)].narray),   yyloc); }
    break;

  case 191:

    { (yysemantic_stack_[(8) - (1)].ident)->append(':', (yysemantic_stack_[(8) - (3)].type)); (yyval.mcall) = new ast::MethodCall(new ast::Type((yysemantic_stack_[(8) - (1)].ident)->getName(), yyloc), (yysemantic_stack_[(8) - (5)].ident), (yysemantic_stack_[(8) - (7)].narray), yyloc); clever_delete((yysemantic_stack_[(8) - (1)].ident)); }
    break;

  case 192:

    { (yyval.node) = (yysemantic_stack_[(10) - (10)].node); }
    break;

  case 193:

    { (yyval.fcall) = new ast::FunctionCall((yysemantic_stack_[(4) - (1)].ident), (yysemantic_stack_[(4) - (3)].narray), yyloc); }
    break;

  case 194:

    { (yyval.fcall) = (yysemantic_stack_[(6) - (6)].fcall); }
    break;

  case 195:

    { (yyval.ret) = new ast::Return((yysemantic_stack_[(2) - (2)].node), yyloc); }
    break;

  case 196:

    { (yyval.ret) = new ast::Return(NULL, yyloc); }
    break;

  case 197:

    { (yyval.while_loop) = new ast::While((yysemantic_stack_[(5) - (3)].node), (yysemantic_stack_[(5) - (5)].block), yyloc); }
    break;

  case 199:

    { (yysemantic_stack_[(6) - (0)].ifcond)->addConditional((yysemantic_stack_[(6) - (4)].node), (yysemantic_stack_[(6) - (6)].block)); }
    break;

  case 200:

    { (yyval.ifcond) = (yysemantic_stack_[(0) - (0)].ifcond); }
    break;

  case 201:

    { (yysemantic_stack_[(2) - (0)].ifcond)->setElseNode((yysemantic_stack_[(2) - (2)].node)); (yyval.ifcond) = (yysemantic_stack_[(2) - (0)].ifcond); }
    break;

  case 202:

    { (yyval.ifcond) = new ast::If((yysemantic_stack_[(5) - (3)].node), (yysemantic_stack_[(5) - (5)].node), yyloc); }
    break;

  case 203:

    { (yyval.ifcond) = (yysemantic_stack_[(7) - (6)].ifcond); }
    break;

  case 204:

    { (yyval.ifcond) = (yysemantic_stack_[(9) - (9)].ifcond); }
    break;



	default:
          break;
      }
    /* User semantic actions sometimes alter yychar, and that requires
       that yytoken be updated with the new translation.  We take the
       approach of translating immediately before every use of yytoken.
       One alternative is translating here after every semantic action,
       but that translation would be missed if the semantic action
       invokes YYABORT, YYACCEPT, or YYERROR immediately after altering
       yychar.  In the case of YYABORT or YYACCEPT, an incorrect
       destructor might then be invoked immediately.  In the case of
       YYERROR, subsequent parser actions might lead to an incorrect
       destructor call or verbose syntax error message before the
       lookahead is translated.  */
    YY_SYMBOL_PRINT ("-> $$ =", yyr1_[yyn], &yyval, &yyloc);

    yypop_ (yylen);
    yylen = 0;
    YY_STACK_PRINT ();

    yysemantic_stack_.push (yyval);
    yylocation_stack_.push (yyloc);

    /* Shift the result of the reduction.  */
    yyn = yyr1_[yyn];
    yystate = yypgoto_[yyn - yyntokens_] + yystate_stack_[0];
    if (0 <= yystate && yystate <= yylast_
	&& yycheck_[yystate] == yystate_stack_[0])
      yystate = yytable_[yystate];
    else
      yystate = yydefgoto_[yyn - yyntokens_];
    goto yynewstate;

  /*------------------------------------.
  | yyerrlab -- here on detecting error |
  `------------------------------------*/
  yyerrlab:
    /* Make sure we have latest lookahead translation.  See comments at
       user semantic actions for why this is necessary.  */
    yytoken = yytranslate_ (yychar);

    /* If not already recovering from an error, report this error.  */
    if (!yyerrstatus_)
      {
	++yynerrs_;
	if (yychar == yyempty_)
	  yytoken = yyempty_;
	error (yylloc, yysyntax_error_ (yystate, yytoken));
      }

    yyerror_range[1] = yylloc;
    if (yyerrstatus_ == 3)
      {
	/* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

	if (yychar <= yyeof_)
	  {
	  /* Return failure if at end of input.  */
	  if (yychar == yyeof_)
	    YYABORT;
	  }
	else
	  {
	    yydestruct_ ("Error: discarding", yytoken, &yylval, &yylloc);
	    yychar = yyempty_;
	  }
      }

    /* Else will try to reuse lookahead token after shifting the error
       token.  */
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;

    yyerror_range[1] = yylocation_stack_[yylen - 1];
    /* Do not reclaim the symbols of the rule which action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    yystate = yystate_stack_[0];
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;	/* Each real token shifted decrements this.  */

    for (;;)
      {
	yyn = yypact_[yystate];
	if (!yy_pact_value_is_default_ (yyn))
	{
	  yyn += yyterror_;
	  if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
	    {
	      yyn = yytable_[yyn];
	      if (0 < yyn)
		break;
	    }
	}

	/* Pop the current state because it cannot handle the error token.  */
	if (yystate_stack_.height () == 1)
	YYABORT;

	yyerror_range[1] = yylocation_stack_[0];
	yydestruct_ ("Error: popping",
		     yystos_[yystate],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);
	yypop_ ();
	yystate = yystate_stack_[0];
	YY_STACK_PRINT ();
      }

    yyerror_range[2] = yylloc;
    // Using YYLLOC is tempting, but would change the location of
    // the lookahead.  YYLOC is available though.
    YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
    yysemantic_stack_.push (yylval);
    yylocation_stack_.push (yyloc);

    /* Shift the error token.  */
    YY_SYMBOL_PRINT ("Shifting", yystos_[yyn],
		     &yysemantic_stack_[0], &yylocation_stack_[0]);

    yystate = yyn;
    goto yynewstate;

    /* Accept.  */
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    /* Abort.  */
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (yychar != yyempty_)
      {
        /* Make sure we have latest lookahead translation.  See comments
           at user semantic actions for why this is necessary.  */
        yytoken = yytranslate_ (yychar);
        yydestruct_ ("Cleanup: discarding lookahead", yytoken, &yylval,
                     &yylloc);
      }

    /* Do not reclaim the symbols of the rule which action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (yystate_stack_.height () != 1)
      {
	yydestruct_ ("Cleanup: popping",
		   yystos_[yystate_stack_[0]],
		   &yysemantic_stack_[0],
		   &yylocation_stack_[0]);
	yypop_ ();
      }

    return yyresult;
  }

  // Generate an error message.
  std::string
  Parser::yysyntax_error_ (int yystate, int yytoken)
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yychar.
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            /* Stay within bounds of both yycheck and yytname.  */
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = 0;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
  const short int Parser::yypact_ninf_ = -223;
  const short int
  Parser::yypact_[] =
  {
      -223,    17,  -223,  -223,   186,    41,    -4,   143,  -223,  -223,
    -223,    16,    29,  -223,    69,   273,  -223,  -223,    71,   171,
     167,   129,   286,   286,  -223,   129,   273,  -223,  -223,   202,
     273,    42,   273,  -223,  -223,   148,   159,   160,  -223,  -223,
     121,   117,   127,  -223,  -223,  -223,   161,  -223,   138,   170,
     174,   175,   179,   180,  -223,   183,   181,   184,   191,  -223,
    -223,   189,   162,  -223,    58,   273,   273,   273,  -223,   -43,
     192,   273,   273,   273,   273,    42,  -223,   121,   599,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,   210,   213,  -223,   199,   206,   111,  -223,  -223,   208,
      56,   209,   214,   209,   234,   599,   215,   599,   211,   230,
     229,   222,    26,   -46,   447,  -223,  -223,  -223,  -223,  -223,
      30,   273,   273,  -223,  -223,  -223,  -223,  -223,  -223,   212,
    -223,  -223,  -223,   273,    41,   220,   221,  -223,   227,   502,
     523,    34,    10,     6,  -223,  -223,  -223,  -223,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   273,   273,   273,   273,    71,
       8,     9,   273,  -223,    35,    49,   223,   249,   234,  -223,
      46,  -223,   273,   273,  -223,  -223,   297,  -223,  -223,   231,
    -223,   666,   349,   241,   232,   599,  -223,   273,   273,  -223,
     129,   129,  -223,  -223,  -223,  -223,  -223,   142,   129,    32,
     233,    27,    27,    27,    27,   197,   197,   766,   766,   678,
     654,   689,   666,   744,   755,   777,   137,   137,  -223,  -223,
    -223,   599,  -223,   129,   104,   237,   129,   108,   239,   370,
    -223,  -223,   304,   129,  -223,  -223,   269,    79,   118,   599,
     599,   258,   273,  -223,    14,   273,   244,   245,  -223,  -223,
    -223,   259,  -223,   318,   129,   129,  -223,   318,   129,   129,
    -223,   318,   129,   129,   129,   251,  -223,   256,   269,  -223,
     118,  -223,  -223,   255,   273,   254,   262,   263,   270,  -223,
    -223,   102,  -223,   267,   271,  -223,  -223,   274,  -223,  -223,
     275,  -223,  -223,  -223,   129,  -223,  -223,   278,   341,   345,
    -223,   599,  -223,   273,   273,  -223,  -223,   273,   273,   342,
    -223,   129,   129,   129,  -223,  -223,   302,   298,  -223,   303,
     305,  -223,  -223,   291,   293,  -223,   306,   426,   299,   301,
     362,  -223,  -223,  -223,   123,   341,   123,   345,   306,  -223,
    -223,   102,    50,  -223,  -223,   273,   129,  -223,  -223,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,   313,  -223,   578,  -223,   306,   273,   129,   314,  -223,
    -223
  };

  /* YYDEFACT[S] -- default reduction number in state S.  Performed when
     YYTABLE doesn't specify something else to do.  Zero means the
     default is an error.  */
  const unsigned char
  Parser::yydefact_[] =
  {
         2,     0,     4,     1,     3,     0,     0,    34,    37,    38,
      36,     0,     0,    29,     0,   196,    40,    41,     0,     0,
       0,     0,     0,     0,    39,     0,     0,    30,    35,     0,
     178,     4,     0,     5,    16,     0,     0,     0,    17,    18,
       0,     0,    45,    23,    43,    42,     0,    22,    46,     0,
       0,     0,     0,     0,    11,     0,     0,    47,     0,    14,
      13,   153,   148,   150,     0,   178,     0,     0,   158,   164,
       0,     0,     0,     0,     0,     0,    58,    48,   195,    49,
      59,    56,    54,    53,    51,    50,    52,    55,    57,    60,
      47,     0,   149,   154,     0,     0,     0,     4,    33,     0,
      34,   126,     0,   127,     0,   104,     0,   180,     0,   179,
       0,     0,     0,     0,     0,    25,    20,    21,   124,   125,
       0,     0,     0,    19,    10,    15,     7,     8,     6,     0,
      24,     9,    12,     0,     0,   113,    27,   115,     0,     0,
       0,     0,     0,     0,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,     0,     0,     0,   109,   105,   106,
      70,    99,     0,     0,   102,    26,     0,   103,    44,   112,
     114,   157,     0,     0,   186,   152,   151,   178,   178,   193,
       0,     0,   163,   162,   161,   159,   160,   153,     0,     0,
       0,   133,   131,   132,   130,   147,   146,   128,   129,   134,
     136,   135,   137,   144,   145,   143,   139,   138,   140,   141,
     142,   156,   155,     0,     0,     0,     0,     0,     0,     0,
     113,   112,     0,     0,   111,   107,    95,    71,     0,   181,
     100,     0,   178,    64,     0,   178,     0,     0,   182,   197,
     202,     0,   174,     0,     0,     0,   167,     0,     0,     0,
     166,     0,     0,     0,     0,     0,   110,     0,    96,    97,
       0,    76,    78,     0,     0,     0,     0,   189,     0,   122,
      28,   194,   198,     0,     0,   176,   175,     0,   171,   169,
       0,   170,   168,    32,     0,    69,    98,     0,     0,     0,
      73,   101,   120,   178,   178,   187,   116,     0,   178,   203,
     165,     0,     0,     0,   108,    75,    91,    77,    88,     0,
      79,    92,   116,     0,     0,   182,   123,     0,     0,     0,
     200,   177,   173,   172,     0,     0,     0,     0,   121,   191,
     190,   188,     0,   184,   183,     0,     0,   204,    80,    83,
      84,    82,    86,    87,    85,    81,    90,    89,    94,    93,
     116,   118,   119,     0,   201,   192,   178,     0,     0,   199,
     117
  };

  /* YYPGOTO[NTERM-NUM].  */
  const short int
  Parser::yypgoto_[] =
  {
      -223,  -223,  -223,   373,  -223,   -21,    -1,  -223,  -223,  -223,
    -223,    -2,   -14,   198,  -223,  -223,  -223,  -223,  -223,  -223,
    -223,    98,  -223,  -223,    33,  -223,    47,  -223,    48,  -223,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,   218,  -223,  -223,
    -223,  -199,     1,  -223,  -223,     2,  -223,  -223,  -223,  -223,
    -223,  -223,   -47,  -106,  -223,   228,     3,  -223,  -223,  -145,
    -222,  -223,   -42,  -223,    63,  -223,     4,  -223,  -223,     5,
    -223,  -223,  -223,  -223,  -223,  -223,  -223,  -223
  };

  /* YYDEFGOTO[NTERM-NUM].  */
  const short int
  Parser::yydefgoto_[] =
  {
        -1,     1,     2,   112,    33,    34,    76,    36,    37,    38,
      39,    77,   107,    41,    42,    79,    43,   246,   247,   248,
     280,   283,   308,   309,   366,   327,   328,   330,   331,   277,
     278,    44,   113,    45,    46,   177,   178,   179,   244,    47,
      48,   336,    80,   332,   316,    81,    82,    83,    84,    85,
      86,    51,    62,    63,    92,    93,    87,    69,    53,   210,
      54,    88,   108,   109,   291,    55,    89,   335,   370,    90,
     258,    58,    59,   319,   357,    60,   292,   340
  };

  /* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule which
     number is the opposite.  If YYTABLE_NINF_, syntax error.  */
  const short int Parser::yytable_ninf_ = -186;
  const short int
  Parser::yytable_[] =
  {
        98,    78,    40,    35,   104,    49,    50,    52,    56,    57,
     186,   207,   105,   207,   207,   205,   141,     3,   114,   286,
     101,   103,   142,   138,   279,   235,   238,   187,   196,     5,
       6,     7,     8,     9,    10,   189,    11,    12,   202,   203,
     240,  -186,  -186,  -186,  -186,   152,    61,   153,    13,   -72,
     110,    14,   139,   140,   241,   371,   306,   144,   145,   146,
     147,    64,   287,   135,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    68,   173,   206,    25,    26,    27,
      28,    29,   -74,   208,   190,   233,   236,   -72,   263,   137,
     163,   164,    66,   165,   166,   167,   209,    30,    31,   185,
     204,   111,    32,   190,   372,    67,   136,   191,   192,   264,
      40,    35,   137,    49,    50,    52,    56,    57,   294,   195,
     -74,   281,   297,   234,   237,    91,   300,   -61,   358,   359,
     360,   361,    65,   348,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   256,   257,   196,   239,   282,
     267,   196,   362,   363,   271,   196,   118,   119,   249,   250,
     364,   375,    96,   317,   121,    94,    95,   365,   318,   259,
     260,   268,   172,    97,   -63,   272,   120,   262,   122,     5,
       6,     7,     8,     9,    10,   -62,    11,    12,   -63,   133,
     -61,    97,  -185,   165,   166,   167,   106,   261,    13,   -62,
     285,    14,   266,   288,   -61,   270,   193,   194,   134,    65,
     102,   102,   276,   115,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   116,   117,   123,    25,    26,    27,
      28,    29,   129,   295,   296,   124,   133,   298,   299,   125,
     126,   301,   302,   303,   127,   128,   130,    30,    31,   131,
     163,   164,    32,   165,   166,   167,   132,   168,   143,   169,
     311,   333,   334,   174,   175,   170,   338,     6,     7,     8,
       9,    10,   171,   324,   176,   122,   182,   180,   183,   181,
      99,   100,     8,     9,    10,   184,   197,   198,   243,   242,
     341,   342,   343,   337,   199,   251,   254,   252,   255,   275,
     265,    19,    16,    17,   269,    70,   273,   284,    22,    23,
      24,   289,   290,   207,   293,    16,    17,    28,   304,   305,
     310,   312,   320,    24,   378,   374,    71,    72,   313,   314,
      28,   373,    73,    74,    30,    75,   326,   315,   321,    32,
     329,   322,   323,   325,   345,   339,   379,    30,    75,   344,
     346,   347,    32,   148,   149,   150,   151,   152,   349,   153,
     350,   352,   154,   155,   356,     4,   354,   355,   307,   368,
     156,   157,   158,   159,   148,   149,   150,   151,   152,   376,
     153,   380,   367,   154,   155,   369,   245,   232,   351,     0,
       0,   156,   157,   158,   159,     0,     0,     0,     0,   160,
     161,   162,   163,   164,     0,   165,   166,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   253,     0,     0,
     160,   161,   162,   163,   164,     0,   165,   166,   167,     0,
     148,   149,   150,   151,   152,     0,   153,     0,   274,   154,
     155,     0,     0,     0,     0,     0,     0,   156,   157,   158,
     159,   148,   149,   150,   151,   152,     0,   153,     0,     0,
     154,   155,     0,     0,     0,     0,     0,     0,   156,   157,
     158,   159,     0,     0,     0,     0,   160,   161,   162,   163,
     164,     0,   165,   166,   167,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   353,     0,     0,   160,   161,   162,
     163,   164,     0,   165,   166,   167,   148,   149,   150,   151,
     152,     0,   153,     0,   188,   154,   155,     0,     0,     0,
       0,     0,     0,   156,   157,   158,   159,   148,   149,   150,
     151,   152,     0,   153,     0,     0,   154,   155,     0,     0,
       0,     0,     0,     0,   156,   157,   158,   159,     0,     0,
       0,     0,   160,   161,   162,   163,   164,     0,   165,   166,
     167,     0,     0,     0,     0,     0,     0,     0,     0,   200,
       0,     0,     0,   160,   161,   162,   163,   164,     0,   165,
     166,   167,   148,   149,   150,   151,   152,     0,   153,     0,
     201,   154,   155,     0,     0,     0,     0,     0,     0,   156,
     157,   158,   159,   148,   149,   150,   151,   152,     0,   153,
       0,     0,   154,   155,     0,     0,     0,     0,     0,     0,
     156,   157,   158,   159,     0,     0,     0,     0,   160,   161,
     162,   163,   164,     0,   165,   166,   167,     0,     0,     0,
       0,     0,     0,     0,     0,   377,     0,     0,     0,   160,
     161,   162,   163,   164,     0,   165,   166,   167,   148,   149,
     150,   151,   152,     0,   153,     0,     0,   154,   155,     0,
     148,   149,   150,   151,   152,   156,   153,   158,   159,   154,
     155,     0,   148,   149,   150,   151,   152,   156,   153,   158,
       0,   154,   155,   148,   149,   150,   151,   152,     0,   153,
       0,   158,   154,   155,   160,   161,   162,   163,   164,     0,
     165,   166,   167,     0,     0,     0,   160,   161,   162,   163,
     164,     0,   165,   166,   167,     0,     0,     0,   160,   161,
     162,   163,   164,     0,   165,   166,   167,     0,     0,   160,
     161,   162,   163,   164,     0,   165,   166,   167,   148,   149,
     150,   151,   152,     0,   153,     0,     0,   154,   155,   148,
     149,   150,   151,   152,     0,   153,     0,     0,   154,   155,
     148,   149,   150,   151,   152,     0,   153,     0,     0,  -186,
    -186,   148,   149,   150,   151,   152,     0,   153,     0,     0,
     154,   155,     0,     0,     0,   161,   162,   163,   164,     0,
     165,   166,   167,     0,     0,     0,     0,   162,   163,   164,
       0,   165,   166,   167,     0,     0,     0,     0,     0,   163,
     164,     0,   165,   166,   167,     0,     0,     0,     0,     0,
     163,   164,     0,   165,   166,   167
  };

  /* YYCHECK.  */
  const short int
  Parser::yycheck_[] =
  {
        21,    15,     4,     4,    25,     4,     4,     4,     4,     4,
      56,     5,    26,     5,     5,     5,    59,     0,    32,     5,
      22,    23,    65,    65,   246,   170,   171,    73,   134,     3,
       4,     5,     6,     7,     8,     5,    10,    11,     4,     5,
       5,    14,    15,    16,    17,    18,     5,    20,    22,     3,
       8,    25,    66,    67,     5,     5,   278,    71,    72,    73,
      74,    65,    48,     5,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,     5,    96,    66,    51,    52,    53,
      54,    55,     3,    77,    54,    77,    77,    41,    56,    54,
      63,    64,    76,    66,    67,    68,   143,    71,    72,    73,
      66,    59,    76,    54,    54,    76,    48,   121,   122,    77,
     112,   112,    54,   112,   112,   112,   112,   112,   263,   133,
      41,     3,   267,   170,   171,    54,   271,    71,     5,     6,
       7,     8,    76,   332,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   197,   198,   263,   172,    41,
      56,   267,    39,    40,    56,   271,    45,    46,   182,   183,
      47,   370,     5,    71,    57,     4,     5,    54,    76,   200,
     201,    77,    71,    72,    57,    77,    65,   208,    71,     3,
       4,     5,     6,     7,     8,    57,    10,    11,    71,    57,
      57,    72,    59,    66,    67,    68,     4,    65,    22,    71,
     252,    25,   233,   255,    71,   236,     4,     5,    56,    76,
      22,    23,   243,    75,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    75,    75,    75,    51,    52,    53,
      54,    55,    59,   264,   265,    75,    57,   268,   269,    75,
      75,   272,   273,   274,    75,    75,    75,    71,    72,    75,
      63,    64,    76,    66,    67,    68,    75,    57,    76,    56,
     284,   313,   314,    65,    65,    76,   318,     4,     5,     6,
       7,     8,    76,   304,    50,    71,    56,    72,    59,    78,
       4,     5,     6,     7,     8,    73,    76,    76,    49,    76,
     321,   322,   323,   317,    77,     8,    65,    76,    76,     5,
      77,    42,    39,    40,    77,    42,    77,    59,    45,    46,
      47,    77,    77,     5,    65,    39,    40,    54,    77,    73,
      75,    77,    65,    47,   376,   356,    63,    64,    76,    76,
      54,   355,    69,    70,    71,    72,     5,    77,    77,    76,
       5,    77,    77,    75,    56,    13,   377,    71,    72,    57,
      57,    56,    76,    14,    15,    16,    17,    18,    77,    20,
      77,    65,    23,    24,    12,     2,    77,    76,   280,   346,
      31,    32,    33,    34,    14,    15,    16,    17,    18,    76,
      20,    77,   345,    23,    24,   347,   178,   169,   335,    -1,
      -1,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      60,    61,    62,    63,    64,    -1,    66,    67,    68,    -1,
      14,    15,    16,    17,    18,    -1,    20,    -1,    78,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    14,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,
      33,    34,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    60,    61,    62,
      63,    64,    -1,    66,    67,    68,    14,    15,    16,    17,
      18,    -1,    20,    -1,    77,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    34,    14,    15,    16,
      17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    -1,    66,    67,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    -1,    66,
      67,    68,    14,    15,    16,    17,    18,    -1,    20,    -1,
      77,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    33,    34,    14,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    14,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    23,    24,    -1,
      14,    15,    16,    17,    18,    31,    20,    33,    34,    23,
      24,    -1,    14,    15,    16,    17,    18,    31,    20,    33,
      -1,    23,    24,    14,    15,    16,    17,    18,    -1,    20,
      -1,    33,    23,    24,    60,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    -1,    66,    67,    68,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    -1,    66,    67,    68,    -1,    -1,    60,
      61,    62,    63,    64,    -1,    66,    67,    68,    14,    15,
      16,    17,    18,    -1,    20,    -1,    -1,    23,    24,    14,
      15,    16,    17,    18,    -1,    20,    -1,    -1,    23,    24,
      14,    15,    16,    17,    18,    -1,    20,    -1,    -1,    23,
      24,    14,    15,    16,    17,    18,    -1,    20,    -1,    -1,
      23,    24,    -1,    -1,    -1,    61,    62,    63,    64,    -1,
      66,    67,    68,    -1,    -1,    -1,    -1,    62,    63,    64,
      -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,    63,
      64,    -1,    66,    67,    68,    -1,    -1,    -1,    -1,    -1,
      63,    64,    -1,    66,    67,    68
  };

  /* STOS_[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
  const unsigned char
  Parser::yystos_[] =
  {
         0,    80,    81,     0,    82,     3,     4,     5,     6,     7,
       8,    10,    11,    22,    25,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    51,    52,    53,    54,    55,
      71,    72,    76,    83,    84,    85,    86,    87,    88,    89,
      90,    92,    93,    95,   110,   112,   113,   118,   119,   121,
     124,   130,   135,   137,   139,   144,   145,   148,   150,   151,
     154,     5,   131,   132,    65,    76,    76,    76,     5,   136,
      42,    63,    64,    69,    70,    72,    85,    90,    91,    94,
     121,   124,   125,   126,   127,   128,   129,   135,   140,   145,
     148,    54,   133,   134,     4,     5,     5,    72,    84,     4,
       5,    90,    92,    90,    84,    91,     4,    91,   141,   142,
       8,    59,    82,   111,    91,    75,    75,    75,    45,    46,
      65,    57,    71,    75,    75,    75,    75,    75,    75,    59,
      75,    75,    75,    57,    56,     5,    48,    54,   141,    91,
      91,    59,    65,    76,    91,    91,    91,    91,    14,    15,
      16,    17,    18,    20,    23,    24,    31,    32,    33,    34,
      60,    61,    62,    63,    64,    66,    67,    68,    57,    56,
      76,    76,    71,    84,    65,    65,    50,   114,   115,   116,
      72,    78,    56,    59,    73,    73,    56,    73,    77,     5,
      54,    91,    91,     4,     5,    91,   132,    76,    76,    77,
      77,    77,     4,     5,    66,     5,    66,     5,    77,   131,
     138,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,   134,    77,   131,   138,    77,   131,   138,    91,
       5,     5,    76,    49,   117,   116,    96,    97,    98,    91,
      91,     8,    76,    78,    65,    76,   141,   141,   149,    84,
      84,    65,    84,    56,    77,    77,    84,    56,    77,    77,
      84,    56,    77,    77,    78,     5,    84,   108,   109,   139,
      99,     3,    41,   100,    59,   141,     5,    48,   141,    77,
      77,   143,   155,    65,   138,    84,    84,   138,    84,    84,
     138,    84,    84,    84,    77,    73,   139,   100,   101,   102,
      75,    91,    77,    76,    76,    77,   123,    71,    76,   152,
      65,    77,    77,    77,    84,    75,     5,   104,   105,     5,
     106,   107,   122,   141,   141,   146,   120,    91,   141,    13,
     156,    84,    84,    84,    57,    56,    57,    56,   120,    77,
      77,   143,    65,    78,    77,    76,    12,   153,     5,     6,
       7,     8,    39,    40,    47,    54,   103,   105,   103,   107,
     147,     5,    54,    91,    84,   120,    76,    77,   141,    84,
      77
  };

#if YYDEBUG
  /* TOKEN_NUMBER_[YYLEX-NUM] -- Internal symbol number corresponding
     to YYLEX-NUM.  */
  const unsigned short int
  Parser::yytoken_number_[] =
  {
         0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,    44,    61,   311,    58,
     124,    94,    38,    45,    43,    46,    42,    47,    37,    33,
     126,    91,   123,   125,   312,    59,    40,    41,    93
  };
#endif

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
  const unsigned char
  Parser::yyr1_[] =
  {
         0,    79,    81,    80,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    85,    85,    86,
      87,    88,    88,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    92,    92,    92,    93,    94,    94,    94,    94,    95,
      96,    96,    98,    97,    99,    97,   101,   100,   102,   100,
     103,   103,   103,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   108,   108,   109,   109,   110,
     111,   111,   112,   112,   113,   114,   115,   115,   116,   117,
     117,   118,   119,   119,   119,   119,   120,   120,   120,   120,
     122,   121,   123,   121,   124,   124,   124,   124,   125,   125,
     125,   125,   125,   125,   126,   126,   127,   127,   128,   128,
     128,   128,   128,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   132,   132,   133,   133,   134,   135,   136,   136,
     137,   137,   137,   137,   137,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   144,   144,   146,   145,   145,
     145,   147,   145,   149,   148,   150,   150,   151,   152,   152,
     153,   153,   155,   156,   154
  };

  /* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
  const unsigned char
  Parser::yyr2_[] =
  {
         0,     2,     0,     2,     0,     2,     2,     2,     2,     2,
       2,     1,     2,     1,     1,     2,     1,     1,     1,     2,
       2,     2,     1,     1,     2,     2,     3,     3,     6,     1,
       1,     3,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     2,     2,     2,     6,
       0,     1,     0,     3,     0,     4,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     3,     3,     0,     1,     1,     2,     3,
       3,     5,     3,     3,     2,     1,     1,     2,     5,     0,
       2,     4,     3,     3,     3,     3,     0,     6,     3,     3,
       0,     8,     0,     8,     2,     2,     2,     2,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       1,     3,     3,     1,     1,     3,     3,     3,     1,     3,
       4,     4,     4,     4,     2,     4,     5,     5,     6,     6,
       6,     6,     8,     8,     4,     5,     5,     7,     0,     1,
       1,     3,     0,     4,     4,     1,     3,     0,     8,     5,
       8,     0,    10,     0,     6,     2,     1,     5,     0,     6,
       0,     2,     0,     0,     9
  };

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
  /* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
     First, the terminals, then, starting at \a yyntokens_, nonterminals.  */
  const char*
  const Parser::yytname_[] =
  {
    "\"end of file\"", "error", "$undefined", "\"var\"",
  "\"type specification\"", "\"identifier\"", "\"number\"",
  "\"float-number\"", "\"string\"", "\"for\"", "\"while\"", "\"if\"",
  "\"else\"", "\"else if\"", "\"<=\"", "\">=\"", "\"<\"", "\">\"",
  "\">>\"", "\">>=\"", "\"<<\"", "\"<<=\"", "\"break\"", "\"==\"",
  "\"!=\"", "\"import\"", "\"+=\"", "\"*=\"", "\"/=\"", "\"-=\"", "\"%=\"",
  "\"||\"", "\"or\"", "\"&&\"", "\"and\"", "\"&=\"", "\"|=\"", "\"^=\"",
  "\"return\"", "\"true\"", "\"false\"", "\"const\"", "\"function\"",
  "\"spawn\"", "\"critical\"", "\"++\"", "\"--\"", "\"null\"", "\"new\"",
  "\"finally\"", "\"catch\"", "\"try\"", "\"throw\"", "\"continue\"",
  "\"constant identifier\"", "\"class\"", "','", "'='", "XOR_EQUAL", "':'",
  "'|'", "'^'", "'&'", "'-'", "'+'", "'.'", "'*'", "'/'", "'%'", "'!'",
  "'~'", "'['", "'{'", "'}'", "UMINUS", "';'", "'('", "')'", "']'",
  "$accept", "program", "$@1", "statement_list", "statement", "block",
  "instantiation", "break", "continue", "thread_block", "critical_block",
  "object", "rvalue", "lvalue", "subscript", "unary", "class_def",
  "class_attr_decl", "class_attr_list", "@2", "@3",
  "non_empty_class_attr_list", "@4", "@5", "attr_rvalue",
  "class_attr_decl_list", "class_attr_decl_impl",
  "class_attr_const_decl_list", "class_attr_const_decl_impl",
  "class_method_decl", "class_method_list", "array", "key_value_list",
  "map", "throw", "catch", "not_empty_catch", "catch_impl", "finally",
  "try_catch_finally", "property_access", "mcall_chain", "mcall", "@6",
  "@7", "inc_dec", "comparison", "boolean", "logic", "arithmetic",
  "bitwise", "variable_decl", "variable_decl_list", "variable_decl_impl",
  "const_decl_list", "const_decl_impl", "assignment", "import_ident_list",
  "import", "vararg", "fdecl", "anonymous_fdecl", "call_args",
  "non_empty_call_args", "fcall_chain", "fully_qualified_name",
  "fully_qualified_call", "@8", "@9", "fcall", "@10", "return_stmt",
  "while", "elseif", "else", "if", "@11", "@12", 0
  };
#endif

#if YYDEBUG
  /* YYRHS -- A `-1'-separated list of the rules' RHS.  */
  const Parser::rhs_number_type
  Parser::yyrhs_[] =
  {
        80,     0,    -1,    -1,    81,    82,    -1,    -1,    82,    83,
      -1,   137,    75,    -1,   130,    75,    -1,   135,    75,    -1,
     148,    75,    -1,   121,    75,    -1,   139,    -1,   150,    75,
      -1,   154,    -1,   151,    -1,   124,    75,    -1,    84,    -1,
      88,    -1,    89,    -1,   113,    75,    -1,    86,    75,    -1,
      87,    75,    -1,   118,    -1,    95,    -1,   145,    75,    -1,
      85,    75,    -1,    72,    82,    73,    -1,     4,    65,    48,
      -1,     4,    65,    48,    76,   141,    77,    -1,    22,    -1,
      53,    -1,    43,     5,    84,    -1,    43,     5,    71,    91,
      78,    84,    -1,    44,    84,    -1,     5,    -1,    54,    -1,
       8,    -1,     6,    -1,     7,    -1,    47,    -1,    39,    -1,
      40,    -1,   112,    -1,   110,    -1,    76,    91,    77,    -1,
      93,    -1,   119,    -1,   148,    -1,    90,    -1,    94,    -1,
     128,    -1,   127,    -1,   129,    -1,   126,    -1,   125,    -1,
     135,    -1,   124,    -1,   140,    -1,    85,    -1,   121,    -1,
     145,    -1,     5,    -1,   119,    -1,    93,    -1,    92,    71,
      91,    78,    -1,    63,    91,    -1,    64,    91,    -1,    69,
      91,    -1,    70,    91,    -1,    55,     4,    72,    96,   108,
      73,    -1,    -1,    97,    -1,    -1,    98,   100,    75,    -1,
      -1,    97,    99,   100,    75,    -1,    -1,     3,   101,   104,
      -1,    -1,    41,   102,   106,    -1,     5,    -1,    54,    -1,
       8,    -1,     6,    -1,     7,    -1,    47,    -1,    39,    -1,
      40,    -1,   105,    -1,   104,    56,   105,    -1,     5,    57,
     103,    -1,     5,    -1,   107,    -1,   106,    56,   107,    -1,
       5,    57,   103,    -1,    -1,   109,    -1,   139,    -1,   109,
     139,    -1,    71,   141,    78,    -1,     8,    59,    91,    -1,
     111,    56,     8,    59,    91,    -1,    72,    59,    73,    -1,
      72,   111,    73,    -1,    52,    91,    -1,   115,    -1,   116,
      -1,   115,   116,    -1,    50,    76,     5,    77,    84,    -1,
      -1,    49,    84,    -1,    51,    84,   114,   117,    -1,    90,
      65,     5,    -1,     4,    65,     5,    -1,    90,    65,    54,
      -1,     4,    65,    54,    -1,    -1,   120,    65,     5,    76,
     141,    77,    -1,   120,    65,     5,    -1,   120,    65,    54,
      -1,    -1,    90,    65,     5,    76,   141,    77,   122,   120,
      -1,    -1,     4,    65,     5,    76,   141,    77,   123,   120,
      -1,    90,    45,    -1,    90,    46,    -1,    45,    90,    -1,
      46,    90,    -1,    91,    23,    91,    -1,    91,    24,    91,
      -1,    91,    17,    91,    -1,    91,    15,    91,    -1,    91,
      16,    91,    -1,    91,    14,    91,    -1,    91,    31,    91,
      -1,    91,    33,    91,    -1,    91,    32,    91,    -1,    91,
      34,    91,    -1,    91,    64,    91,    -1,    91,    63,    91,
      -1,    91,    66,    91,    -1,    91,    67,    91,    -1,    91,
      68,    91,    -1,    91,    62,    91,    -1,    91,    60,    91,
      -1,    91,    61,    91,    -1,    91,    20,    91,    -1,    91,
      18,    91,    -1,     3,   131,    -1,    41,   133,    -1,   132,
      -1,   131,    56,   132,    -1,     5,    57,    91,    -1,     5,
      -1,   134,    -1,   133,    56,   134,    -1,    54,    57,    91,
      -1,    92,    57,    91,    -1,     5,    -1,   136,    65,     5,
      -1,    25,   136,    65,    66,    -1,    25,   136,    59,    66,
      -1,    25,   136,    59,     5,    -1,    25,   136,    59,     4,
      -1,    25,   136,    -1,     5,    65,    65,    65,    -1,    42,
       5,    76,    77,    84,    -1,    42,     4,    76,    77,    84,
      -1,    42,     5,    76,   138,    77,    84,    -1,    42,     4,
      76,   138,    77,    84,    -1,    42,     5,    76,   131,    77,
      84,    -1,    42,     4,    76,   131,    77,    84,    -1,    42,
       5,    76,   131,    56,   138,    77,    84,    -1,    42,     4,
      76,   131,    56,   138,    77,    84,    -1,    42,    76,    77,
      84,    -1,    42,    76,   138,    77,    84,    -1,    42,    76,
     131,    77,    84,    -1,    42,    76,   131,    56,   138,    77,
      84,    -1,    -1,   142,    -1,    91,    -1,   142,    56,    91,
      -1,    -1,   143,    76,   141,    77,    -1,   143,    71,    91,
      78,    -1,     5,    -1,   144,    59,     5,    -1,    -1,   144,
      59,     5,    76,   141,    77,   146,   143,    -1,   144,    59,
       4,    65,    48,    -1,   144,    59,     4,    65,    48,    76,
     141,    77,    -1,    -1,   144,    59,     4,    65,     5,    76,
     141,    77,   147,   120,    -1,    -1,     5,    76,   141,    77,
     149,   143,    -1,    38,    91,    -1,    38,    -1,    10,    76,
      91,    77,    84,    -1,    -1,   152,    13,    76,    91,    77,
      84,    -1,    -1,    12,    84,    -1,    -1,    -1,    11,    76,
      91,    77,    84,   155,   152,   156,   153,    -1
  };

  /* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
     YYRHS.  */
  const unsigned short int
  Parser::yyprhs_[] =
  {
         0,     0,     3,     4,     7,     8,    11,    14,    17,    20,
      23,    26,    28,    31,    33,    35,    38,    40,    42,    44,
      47,    50,    53,    55,    57,    60,    63,    67,    71,    78,
      80,    82,    86,    93,    96,    98,   100,   102,   104,   106,
     108,   110,   112,   114,   116,   120,   122,   124,   126,   128,
     130,   132,   134,   136,   138,   140,   142,   144,   146,   148,
     150,   152,   154,   156,   158,   163,   166,   169,   172,   175,
     182,   183,   185,   186,   190,   191,   196,   197,   201,   202,
     206,   208,   210,   212,   214,   216,   218,   220,   222,   224,
     228,   232,   234,   236,   240,   244,   245,   247,   249,   252,
     256,   260,   266,   270,   274,   277,   279,   281,   284,   290,
     291,   294,   299,   303,   307,   311,   315,   316,   323,   327,
     331,   332,   341,   342,   351,   354,   357,   360,   363,   367,
     371,   375,   379,   383,   387,   391,   395,   399,   403,   407,
     411,   415,   419,   423,   427,   431,   435,   439,   443,   446,
     449,   451,   455,   459,   461,   463,   467,   471,   475,   477,
     481,   486,   491,   496,   501,   504,   509,   515,   521,   528,
     535,   542,   549,   558,   567,   572,   578,   584,   592,   593,
     595,   597,   601,   602,   607,   612,   614,   618,   619,   628,
     634,   643,   644,   655,   656,   663,   666,   668,   674,   675,
     682,   683,   686,   687,   688
  };

  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
  const unsigned short int
  Parser::yyrline_[] =
  {
         0,   210,   210,   210,   214,   215,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   242,   246,   247,   251,
     255,   259,   266,   276,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   319,   320,   321,   325,   329,   330,   331,   332,   336,
     340,   341,   345,   345,   346,   346,   350,   350,   351,   351,
     355,   356,   357,   358,   359,   360,   361,   362,   366,   367,
     371,   372,   376,   377,   381,   385,   386,   390,   391,   395,
     399,   400,   404,   405,   409,   413,   417,   418,   422,   426,
     427,   431,   435,   436,   437,   438,   442,   443,   444,   445,
     449,   449,   450,   450,   454,   455,   456,   457,   461,   462,
     463,   464,   465,   466,   470,   471,   475,   476,   480,   481,
     482,   483,   484,   488,   489,   490,   491,   492,   496,   497,
     501,   502,   506,   507,   511,   512,   516,   520,   524,   525,
     529,   530,   531,   532,   533,   537,   541,   543,   545,   547,
     549,   551,   553,   555,   560,   562,   564,   566,   571,   572,
     576,   577,   581,   582,   583,   587,   588,   592,   592,   593,
     594,   595,   595,   599,   599,   603,   604,   608,   612,   614,
     619,   620,   624,   625,   624
  };

  // Print the state stack on the debug stream.
  void
  Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (state_stack_type::const_iterator i = yystate_stack_.begin ();
	 i != yystate_stack_.end (); ++i)
      *yycdebug_ << ' ' << *i;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    /* Print the symbols being reduced, and their result.  */
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
	       << " (line " << yylno << "):" << std::endl;
    /* The symbols being reduced.  */
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
		       yyrhs_[yyprhs_[yyrule] + yyi],
		       &(yysemantic_stack_[(yynrhs) - (yyi + 1)]),
		       &(yylocation_stack_[(yynrhs) - (yyi + 1)]));
  }
#endif // YYDEBUG

  /* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
  Parser::token_number_type
  Parser::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
           0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    68,    62,     2,
      76,    77,    66,    64,    56,    63,    65,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    75,
       2,    57,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    78,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    72,    60,    73,    70,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    58,    74
    };
    if ((unsigned int) t <= yyuser_token_number_max_)
      return translate_table[t];
    else
      return yyundef_token_;
  }

  const int Parser::yyeof_ = 0;
  const int Parser::yylast_ = 845;
  const int Parser::yynnts_ = 78;
  const int Parser::yyempty_ = -2;
  const int Parser::yyfinal_ = 3;
  const int Parser::yyterror_ = 1;
  const int Parser::yyerrcode_ = 256;
  const int Parser::yyntokens_ = 79;

  const unsigned int Parser::yyuser_token_number_max_ = 312;
  const Parser::token_number_type Parser::yyundef_token_ = 2;


} // clever





namespace clever {

void Parser::error(const Parser::location_type& line, const std::string& msg)
{
	driver.error(line, msg);
}

} // clever

