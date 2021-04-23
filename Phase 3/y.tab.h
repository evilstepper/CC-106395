/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Class = 258,                   /* Class  */
    Public = 259,                  /* Public  */
    Static = 260,                  /* Static  */
    Void = 261,                    /* Void  */
    Main = 262,                    /* Main  */
    If = 263,                      /* If  */
    Else = 264,                    /* Else  */
    While = 265,                   /* While  */
    Extends = 266,                 /* Extends  */
    Integer = 267,                 /* Integer  */
    Boolean = 268,                 /* Boolean  */
    String = 269,                  /* String  */
    True = 270,                    /* True  */
    False = 271,                   /* False  */
    Id = 272,                      /* Id  */
    IntegerIteral = 273,           /* IntegerIteral  */
    And = 274,                     /* And  */
    This = 275,                    /* This  */
    New = 276,                     /* New  */
    Println = 277,                 /* Println  */
    Length = 278,                  /* Length  */
    Return = 279,                  /* Return  */
    Rbrace = 280,                  /* Rbrace  */
    Raccess = 281,                 /* Raccess  */
    LBracket = 282,                /* LBracket  */
    RBracket = 283,                /* RBracket  */
    Semicolon = 284,               /* Semicolon  */
    Comma = 285,                   /* Comma  */
    Laccess = 286,                 /* Laccess  */
    Lbrace = 287                   /* Lbrace  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define Class 258
#define Public 259
#define Static 260
#define Void 261
#define Main 262
#define If 263
#define Else 264
#define While 265
#define Extends 266
#define Integer 267
#define Boolean 268
#define String 269
#define True 270
#define False 271
#define Id 272
#define IntegerIteral 273
#define And 274
#define This 275
#define New 276
#define Println 277
#define Length 278
#define Return 279
#define Rbrace 280
#define Raccess 281
#define LBracket 282
#define RBracket 283
#define Semicolon 284
#define Comma 285
#define Laccess 286
#define Lbrace 287

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 11 "parser.y"

    struct Code* code;
    double d;

#line 136 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
