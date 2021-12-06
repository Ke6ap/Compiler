/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    T_EOF = 0,
    T_PROGRAM = 258,
    T_CONST = 259,
    T_TYPE = 260,
    T_COUPLE = 261,
    T_ARRAY = 262,
    T_OF = 263,
    T_VAR = 264,
    T_FORWARD = 265,
    T_FUNCTION = 266,
    T_PROCEDURE = 267,
    T_INTEGER = 268,
    T_REAL = 269,
    T_BOOLEAN = 270,
    T_CHAR = 271,
    T_STRING = 272,
    T_BEGIN = 273,
    T_END = 274,
    T_IF = 275,
    T_THEN = 276,
    T_ELSE = 277,
    T_CASE = 278,
    T_OTHERWISE = 279,
    T_WHILE = 280,
    T_DO = 281,
    T_FOR = 282,
    T_DOWNTO = 283,
    T_TO = 284,
    T_READ = 285,
    T_WRITE = 286,
    T_LENGTH = 287,
    T_RELOP = 288,
    T_ADDOP = 289,
    T_OROP = 290,
    T_MULDIVANDOP = 291,
    T_NOTOP = 292,
    T_PAIROP = 293,
    T_LPAREN = 294,
    T_RPAREN = 295,
    T_SEMI = 296,
    T_DOTDOT = 297,
    T_DOT = 298,
    T_COMMA = 299,
    T_ASSIGN = 300,
    T_EQU = 301,
    T_COLON = 302,
    T_LBRACK = 303,
    T_RBRACK = 304,
    T_ID = 305,
    T_ICONST = 306,
    T_BCONST = 307,
    T_CCONST = 308,
    T_SCONST = 309,
    T_RCONST = 310,
    NO_ELSE = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "syntax.y"

    int     intval;
    double  doubleval;
    int     boolval;
    char    charval;
    char    *stringval;

#line 123 "syntax.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */
