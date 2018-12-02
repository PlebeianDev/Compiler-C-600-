/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_ICONST = 258,
    T_FCONST = 259,
    T_CCONST = 260,
    T_SCONST = 261,
    T_EOF = 262,
    T_TYPEDEF = 263,
    T_CHAR = 264,
    T_INT = 265,
    T_FLOAT = 266,
    T_STRING = 267,
    T_CLASS = 268,
    T_PRIVATE = 269,
    T_PROTECTED = 270,
    T_PUBLIC = 271,
    T_VOID = 272,
    T_STATIC = 273,
    T_UNION = 274,
    T_ENUM = 275,
    T_LIST = 276,
    T_CONTINUE = 277,
    T_BREAK = 278,
    T_IF = 279,
    T_ELSE = 280,
    T_WHILE = 281,
    T_FOR = 282,
    T_SWITCH = 283,
    T_CASE = 284,
    T_DEFAULT = 285,
    T_RETURN = 286,
    T_LENGTH = 287,
    T_NEW = 288,
    T_CIN = 289,
    T_COUT = 290,
    T_MAIN = 291,
    T_THIS = 292,
    T_OROP = 293,
    T_ANDOP = 294,
    T_EQUOP = 295,
    T_RELOP = 296,
    T_ADDOP = 297,
    T_MULOP = 298,
    T_NOTOP = 299,
    T_INCDEC = 300,
    T_SIZEOP = 301,
    T_LPAREN = 302,
    T_RPAREN = 303,
    T_SEMI = 304,
    T_DOT = 305,
    T_COMMA = 306,
    T_ASSIGN = 307,
    T_COLON = 308,
    T_LBRACK = 309,
    T_RBRACK = 310,
    T_REFER = 311,
    T_LBRACE = 312,
    T_RBRACE = 313,
    T_METH = 314,
    T_INP = 315,
    T_OUT = 316,
    T_ID = 317,
    T_LISTFUNC = 318
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "syntax.y" /* yacc.c:1909  */

    int ival;
    double dval;
    char* strval;

#line 124 "syntax.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
