/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include <stdio.h>
#include "code.h"

extern int yylineno;

int yylex();
void yyerror(char *s);

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 203 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Class = 3,                      /* Class  */
  YYSYMBOL_Public = 4,                     /* Public  */
  YYSYMBOL_Static = 5,                     /* Static  */
  YYSYMBOL_Void = 6,                       /* Void  */
  YYSYMBOL_Main = 7,                       /* Main  */
  YYSYMBOL_If = 8,                         /* If  */
  YYSYMBOL_Else = 9,                       /* Else  */
  YYSYMBOL_While = 10,                     /* While  */
  YYSYMBOL_Extends = 11,                   /* Extends  */
  YYSYMBOL_Integer = 12,                   /* Integer  */
  YYSYMBOL_Boolean = 13,                   /* Boolean  */
  YYSYMBOL_String = 14,                    /* String  */
  YYSYMBOL_True = 15,                      /* True  */
  YYSYMBOL_False = 16,                     /* False  */
  YYSYMBOL_Id = 17,                        /* Id  */
  YYSYMBOL_IntegerIteral = 18,             /* IntegerIteral  */
  YYSYMBOL_And = 19,                       /* And  */
  YYSYMBOL_This = 20,                      /* This  */
  YYSYMBOL_New = 21,                       /* New  */
  YYSYMBOL_Println = 22,                   /* Println  */
  YYSYMBOL_Length = 23,                    /* Length  */
  YYSYMBOL_Return = 24,                    /* Return  */
  YYSYMBOL_Rbrace = 25,                    /* Rbrace  */
  YYSYMBOL_Raccess = 26,                   /* Raccess  */
  YYSYMBOL_LBracket = 27,                  /* LBracket  */
  YYSYMBOL_RBracket = 28,                  /* RBracket  */
  YYSYMBOL_Semicolon = 29,                 /* Semicolon  */
  YYSYMBOL_Comma = 30,                     /* Comma  */
  YYSYMBOL_Laccess = 31,                   /* Laccess  */
  YYSYMBOL_Lbrace = 32,                    /* Lbrace  */
  YYSYMBOL_33_ = 33,                       /* '='  */
  YYSYMBOL_34_ = 34,                       /* '.'  */
  YYSYMBOL_35_ = 35,                       /* '*'  */
  YYSYMBOL_36_ = 36,                       /* '+'  */
  YYSYMBOL_37_ = 37,                       /* '-'  */
  YYSYMBOL_38_ = 38,                       /* '<'  */
  YYSYMBOL_39_ = 39,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_Goal = 41,                      /* Goal  */
  YYSYMBOL_MainClass = 42,                 /* MainClass  */
  YYSYMBOL_ClassDeclarationList = 43,      /* ClassDeclarationList  */
  YYSYMBOL_ClassDeclarations = 44,         /* ClassDeclarations  */
  YYSYMBOL_ClassDeclaration = 45,          /* ClassDeclaration  */
  YYSYMBOL_ExtendOpt = 46,                 /* ExtendOpt  */
  YYSYMBOL_VarDeclarations = 47,           /* VarDeclarations  */
  YYSYMBOL_VarDeclaration = 48,            /* VarDeclaration  */
  YYSYMBOL_MethodDeclarations = 49,        /* MethodDeclarations  */
  YYSYMBOL_MethodDeclarationList = 50,     /* MethodDeclarationList  */
  YYSYMBOL_MethodDeclaration = 51,         /* MethodDeclaration  */
  YYSYMBOL_TypeIdentifiers = 52,           /* TypeIdentifiers  */
  YYSYMBOL_TypeIdentifierList = 53,        /* TypeIdentifierList  */
  YYSYMBOL_TypeIdentifier = 54,            /* TypeIdentifier  */
  YYSYMBOL_Statements = 55,                /* Statements  */
  YYSYMBOL_StatementList = 56,             /* StatementList  */
  YYSYMBOL_Type = 57,                      /* Type  */
  YYSYMBOL_Statement = 58,                 /* Statement  */
  YYSYMBOL_Expressions = 59,               /* Expressions  */
  YYSYMBOL_ExpressionList = 60,            /* ExpressionList  */
  YYSYMBOL_Expression = 61,                /* Expression  */
  YYSYMBOL_Identifier = 62                 /* Identifier  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  23
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    39,     2,     2,     2,     2,     2,     2,
       2,     2,    35,    36,     2,    37,    34,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    33,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    41,    41,    54,    65,    70,    79,    82,    90,   100,
     103,   112,   115,   123,   132,   135,   143,   148,   156,   168,
     171,   179,   184,   192,   201,   204,   212,   217,   225,   230,
     235,   240,   248,   253,   259,   265,   271,   276,   286,   289,
     297,   302,   310,   315,   320,   325,   330,   335,   340,   345,
     351,   356,   361,   366,   371,   376,   381,   386,   391,   399
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "Class", "Public",
  "Static", "Void", "Main", "If", "Else", "While", "Extends", "Integer",
  "Boolean", "String", "True", "False", "Id", "IntegerIteral", "And",
  "This", "New", "Println", "Length", "Return", "Rbrace", "Raccess",
  "LBracket", "RBracket", "Semicolon", "Comma", "Laccess", "Lbrace", "'='",
  "'.'", "'*'", "'+'", "'-'", "'<'", "'!'", "$accept", "Goal", "MainClass",
  "ClassDeclarationList", "ClassDeclarations", "ClassDeclaration",
  "ExtendOpt", "VarDeclarations", "VarDeclaration", "MethodDeclarations",
  "MethodDeclarationList", "MethodDeclaration", "TypeIdentifiers",
  "TypeIdentifierList", "TypeIdentifier", "Statements", "StatementList",
  "Type", "Statement", "Expressions", "ExpressionList", "Expression",
  "Identifier", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,    61,    46,    42,    43,    45,    60,    33
};
#endif

#define YYPACT_NINF (-55)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      12,   -13,     5,    27,   -55,     6,   -55,   -13,    27,   -55,
     -55,    29,    26,   -55,    47,   -13,    14,    66,   -55,   -55,
      70,    41,    51,     4,    48,   -55,   -55,    61,    85,   -55,
     -13,   -55,    77,   -13,    69,   -55,   -55,    63,    62,    73,
     -55,   -55,    75,     4,   -13,    74,    78,   -55,   -13,    81,
      71,     4,   -55,    80,   -55,   -55,     2,    49,    84,    91,
      93,     2,    96,    42,    98,     2,   -55,    42,    67,    67,
      67,    99,   101,    67,    67,    67,   -55,   -55,   -55,   -55,
     -55,     1,    67,    67,    79,   -55,   100,   111,   -55,   -55,
     124,   134,   145,    92,   102,   156,   -55,    67,     2,    67,
     -16,    67,    67,    67,    67,     2,   103,   107,   -55,   108,
      67,    97,   -55,   -55,   132,   169,   -55,   117,   -11,   -10,
     -10,   -55,   -55,   -55,    67,   -55,   182,   -55,     2,   -55,
      67,   192,   -55,   -55,   123,   122,   203,   -55,   -55,    67,
     203
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     6,    59,     0,     1,     0,     7,     2,
       4,     0,     9,     5,     0,     0,     0,     0,    10,    11,
       0,    14,     0,     0,    28,    30,    12,     0,    15,    16,
       0,    31,     0,     0,     0,     8,    17,     0,     0,     0,
      29,    13,     0,    19,     0,     0,    20,    21,     0,     0,
       0,     0,    23,     0,    11,    22,     0,    24,     0,     0,
       0,    24,     0,     0,     0,    25,    26,    31,     0,     0,
       0,     0,     0,     0,     0,     0,    27,    50,    51,    58,
      53,     0,     0,     0,     0,    52,     0,     0,    32,     3,
       0,     0,     0,     0,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    36,     0,
       0,     0,    57,    42,     0,     0,    48,     0,    46,    44,
      45,    43,    34,    35,     0,    18,     0,    55,     0,    47,
      38,     0,    54,    33,     0,    39,    40,    37,    49,     0,
      41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -55,   -55,   -55,   -55,   -55,   146,   -55,   112,   -55,   -55,
     -55,   128,   -55,   -55,   106,   116,   -55,   -20,   -54,   -55,
     -55,   -34,    -1
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     8,     9,    10,    16,    21,    26,    27,
      28,    29,    45,    46,    47,    64,    65,    30,    66,   134,
     135,    84,    85
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       5,     4,    62,    33,     4,     6,    12,   116,    97,    97,
      58,    76,    59,    93,    18,     1,    24,    25,     4,     4,
      31,     4,    31,    48,    60,   102,   103,   104,   104,    37,
       7,    48,    39,    14,    61,    86,    87,    15,    11,    90,
      91,    92,    31,    49,   114,    23,    19,    52,    95,    96,
      31,   122,    17,    24,    25,    63,    67,    58,     4,    59,
      63,    24,    25,   113,    63,   115,     4,   118,   119,   120,
     121,    60,    20,    73,   133,    74,   126,    22,    32,    34,
      94,    61,    77,    78,     4,    79,    35,    80,    81,    23,
     131,    38,    41,    42,    82,    40,   136,    63,    97,   117,
      43,    44,    50,    54,    63,   140,    83,    98,    51,    53,
      99,    68,    56,   100,   101,   102,   103,   104,    69,    97,
      70,    72,    75,   110,    88,   127,    89,    63,   105,   111,
      97,    99,   123,   125,   100,   101,   102,   103,   104,   106,
     124,   128,    99,    97,   130,   100,   101,   102,   103,   104,
     107,   138,   139,    97,    13,    99,    36,    55,   100,   101,
     102,   103,   104,   108,    97,    99,    57,     0,   100,   101,
     102,   103,   104,     0,   109,    97,    99,    71,     0,   100,
     101,   102,   103,   104,   112,     0,     0,    99,    97,     0,
     100,   101,   102,   103,   104,   129,     0,     0,     0,     0,
      99,    97,     0,   100,   101,   102,   103,   104,   132,     0,
       0,    97,     0,    99,     0,     0,   100,   101,   102,   103,
     104,   137,    97,    99,     0,     0,   100,   101,   102,   103,
     104,     0,     0,     0,    99,     0,     0,   100,   101,   102,
     103,   104
};

static const yytype_int16 yycheck[] =
{
       1,    17,    56,    23,    17,     0,     7,    23,    19,    19,
       8,    65,    10,    12,    15,     3,    12,    13,    17,    17,
      21,    17,    23,    43,    22,    36,    37,    38,    38,    30,
       3,    51,    33,     4,    32,    69,    70,    11,    32,    73,
      74,    75,    43,    44,    98,     4,    32,    48,    82,    83,
      51,   105,     5,    12,    13,    56,    57,     8,    17,    10,
      61,    12,    13,    97,    65,    99,    17,   101,   102,   103,
     104,    22,     6,    31,   128,    33,   110,     7,    27,    31,
      81,    32,    15,    16,    17,    18,    25,    20,    21,     4,
     124,    14,    29,    31,    27,    26,   130,    98,    19,   100,
      27,    26,    28,    32,   105,   139,    39,    28,    30,    28,
      31,    27,    32,    34,    35,    36,    37,    38,    27,    19,
      27,    25,    24,    31,    25,    28,    25,   128,    28,    27,
      19,    31,    29,    25,    34,    35,    36,    37,    38,    28,
      33,     9,    31,    19,    27,    34,    35,    36,    37,    38,
      26,    28,    30,    19,     8,    31,    28,    51,    34,    35,
      36,    37,    38,    29,    19,    31,    54,    -1,    34,    35,
      36,    37,    38,    -1,    29,    19,    31,    61,    -1,    34,
      35,    36,    37,    38,    28,    -1,    -1,    31,    19,    -1,
      34,    35,    36,    37,    38,    26,    -1,    -1,    -1,    -1,
      31,    19,    -1,    34,    35,    36,    37,    38,    26,    -1,
      -1,    19,    -1,    31,    -1,    -1,    34,    35,    36,    37,
      38,    29,    19,    31,    -1,    -1,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    41,    42,    17,    62,     0,     3,    43,    44,
      45,    32,    62,    45,     4,    11,    46,     5,    62,    32,
       6,    47,     7,     4,    12,    13,    48,    49,    50,    51,
      57,    62,    27,    57,    31,    25,    51,    62,    14,    62,
      26,    29,    31,    27,    26,    52,    53,    54,    57,    62,
      28,    30,    62,    28,    32,    54,    32,    47,     8,    10,
      22,    32,    58,    62,    55,    56,    58,    62,    27,    27,
      27,    55,    25,    31,    33,    24,    58,    15,    16,    18,
      20,    21,    27,    39,    61,    62,    61,    61,    25,    25,
      61,    61,    61,    12,    62,    61,    61,    19,    28,    31,
      34,    35,    36,    37,    38,    28,    28,    26,    29,    29,
      31,    27,    28,    61,    58,    61,    23,    62,    61,    61,
      61,    61,    58,    29,    33,    25,    61,    28,     9,    26,
      27,    61,    26,    58,    59,    60,    61,    29,    28,    30,
      61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    42,    43,    43,    44,    44,    45,    46,
      46,    47,    47,    48,    49,    49,    50,    50,    51,    52,
      52,    53,    53,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    58,    58,    58,    58,    58,    58,    59,    59,
      60,    60,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,    17,     1,     2,     0,     1,     7,     0,
       2,     0,     2,     3,     0,     1,     1,     2,    13,     0,
       1,     1,     3,     2,     0,     1,     1,     2,     1,     3,
       1,     1,     3,     7,     5,     5,     4,     7,     0,     1,
       1,     3,     3,     3,     3,     3,     3,     4,     3,     6,
       1,     1,     1,     1,     5,     4,     2,     3,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* Goal: MainClass ClassDeclarations  */
#line 42 "parser.y"
    {
        (yyval.code) = new_code("Goal", 2, (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
        //if (check($$)) 
        {
            printf("Syntax tree:\n");
            Print((yyval.code), 0);
        }
    }
#line 1368 "y.tab.c"
    break;

  case 3: /* MainClass: Class Identifier Lbrace Public Static Void Main LBracket String Laccess Raccess Identifier RBracket Lbrace Statement Rbrace Rbrace  */
#line 55 "parser.y"
    {
        (yyval.code) = new_code("MainClass", 17, (yyvsp[-16].code), (yyvsp[-15].code), new_code("{", 0), (yyvsp[-13].code), (yyvsp[-12].code),
                                       (yyvsp[-11].code), (yyvsp[-10].code), (yyvsp[-9].code), (yyvsp[-8].code), new_code("[", 0), (yyvsp[-6].code),
                                       (yyvsp[-5].code), (yyvsp[-4].code), new_code("{", 0), (yyvsp[-2].code), (yyvsp[-1].code),
                                       (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1380 "y.tab.c"
    break;

  case 4: /* ClassDeclarationList: ClassDeclaration  */
#line 66 "parser.y"
    {
        (yyval.code) = new_code("ClassDeclarationList", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1389 "y.tab.c"
    break;

  case 5: /* ClassDeclarationList: ClassDeclarationList ClassDeclaration  */
#line 71 "parser.y"
    {
        (yyval.code) = new_code("ClassDeclarationList", 2, (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1398 "y.tab.c"
    break;

  case 6: /* ClassDeclarations: %empty  */
#line 79 "parser.y"
    {
        (yyval.code) = NULL;
    }
#line 1406 "y.tab.c"
    break;

  case 7: /* ClassDeclarations: ClassDeclarationList  */
#line 83 "parser.y"
    {
        (yyval.code) = new_code("ClassDeclarations", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1415 "y.tab.c"
    break;

  case 8: /* ClassDeclaration: Class Identifier ExtendOpt Lbrace VarDeclarations MethodDeclarations Rbrace  */
#line 91 "parser.y"
    {
        (yyval.code) = new_code("ClassDeclaration", 7, (yyvsp[-6].code), (yyvsp[-5].code), (yyvsp[-4].code), new_code("{", 0),
                                             (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1425 "y.tab.c"
    break;

  case 9: /* ExtendOpt: %empty  */
#line 100 "parser.y"
    {
        (yyval.code) = NULL;
    }
#line 1433 "y.tab.c"
    break;

  case 10: /* ExtendOpt: Extends Identifier  */
#line 104 "parser.y"
    {
        (yyval.code) = new_code("ExtendOpt", 2, (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1442 "y.tab.c"
    break;

  case 11: /* VarDeclarations: %empty  */
#line 112 "parser.y"
    {
        (yyval.code) = NULL;
    }
#line 1450 "y.tab.c"
    break;

  case 12: /* VarDeclarations: VarDeclarations VarDeclaration  */
#line 116 "parser.y"
    {
        (yyval.code) = new_code("VarDeclarations", 1, (yyvsp[-1].code));
        (yyval.code)->line = yylineno;
    }
#line 1459 "y.tab.c"
    break;

  case 13: /* VarDeclaration: Type Identifier Semicolon  */
#line 124 "parser.y"
    {
        (yyval.code) = new_code("VarDeclaration", 3, (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1468 "y.tab.c"
    break;

  case 14: /* MethodDeclarations: %empty  */
#line 132 "parser.y"
    {
        (yyval.code) = NULL;
    }
#line 1476 "y.tab.c"
    break;

  case 15: /* MethodDeclarations: MethodDeclarationList  */
#line 136 "parser.y"
    {
        (yyval.code) = new_code("MethodDeclarations", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1485 "y.tab.c"
    break;

  case 16: /* MethodDeclarationList: MethodDeclaration  */
#line 144 "parser.y"
    {
        (yyval.code) = new_code("MethodDeclarationList", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1494 "y.tab.c"
    break;

  case 17: /* MethodDeclarationList: MethodDeclarationList MethodDeclaration  */
#line 149 "parser.y"
    {
        (yyval.code) = new_code("MethodDeclarationList", 2, (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1503 "y.tab.c"
    break;

  case 18: /* MethodDeclaration: Public Type Identifier LBracket TypeIdentifiers RBracket Lbrace VarDeclarations Statements Return Expression Semicolon Rbrace  */
#line 157 "parser.y"
    {
        (yyval.code) = new_code("MethodDeclaration", 13, (yyvsp[-12].code), (yyvsp[-11].code), (yyvsp[-10].code), (yyvsp[-9].code),
                                               (yyvsp[-8].code), (yyvsp[-7].code), new_code("{", 0),
                                               (yyvsp[-5].code), (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code),
                                               (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1515 "y.tab.c"
    break;

  case 19: /* TypeIdentifiers: %empty  */
#line 168 "parser.y"
    {
        (yyval.code) = NULL;
    }
#line 1523 "y.tab.c"
    break;

  case 20: /* TypeIdentifiers: TypeIdentifierList  */
#line 172 "parser.y"
    {
        (yyval.code) = new_code("TypeIdentifiers", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1532 "y.tab.c"
    break;

  case 21: /* TypeIdentifierList: TypeIdentifier  */
#line 180 "parser.y"
    {
        (yyval.code) = new_code("TypeIdentifierList", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1541 "y.tab.c"
    break;

  case 22: /* TypeIdentifierList: TypeIdentifierList Comma TypeIdentifier  */
#line 185 "parser.y"
    {
        (yyval.code) = new_code("TypeIdentifierList", 3, (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1550 "y.tab.c"
    break;

  case 23: /* TypeIdentifier: Type Identifier  */
#line 193 "parser.y"
    {
        (yyval.code) = new_code("TypeIdentifer", 2, (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1559 "y.tab.c"
    break;

  case 24: /* Statements: %empty  */
#line 201 "parser.y"
    {
        (yyval.code) = NULL;
    }
#line 1567 "y.tab.c"
    break;

  case 25: /* Statements: StatementList  */
#line 205 "parser.y"
    {
        (yyval.code) = new_code("Statements", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1576 "y.tab.c"
    break;

  case 26: /* StatementList: Statement  */
#line 213 "parser.y"
    {
        (yyval.code) = new_code("StatementList", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1585 "y.tab.c"
    break;

  case 27: /* StatementList: StatementList Statement  */
#line 218 "parser.y"
    {
        (yyval.code) = new_code("StatementList", 2, (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1594 "y.tab.c"
    break;

  case 28: /* Type: Integer  */
#line 226 "parser.y"
    {
        (yyval.code) = new_code("Type", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1603 "y.tab.c"
    break;

  case 29: /* Type: Integer Laccess Raccess  */
#line 231 "parser.y"
    {
        (yyval.code) = new_code("Type", 3, (yyvsp[-2].code), new_code("[", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1612 "y.tab.c"
    break;

  case 30: /* Type: Boolean  */
#line 236 "parser.y"
    {
        (yyval.code) = new_code("Type", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1621 "y.tab.c"
    break;

  case 31: /* Type: Identifier  */
#line 241 "parser.y"
    {
        (yyval.code) = new_code("Type", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1630 "y.tab.c"
    break;

  case 32: /* Statement: Lbrace Statements Rbrace  */
#line 249 "parser.y"
    {
        (yyval.code) = new_code("Statement", 3, new_code("{", 0), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1639 "y.tab.c"
    break;

  case 33: /* Statement: If LBracket Expression RBracket Statement Else Statement  */
#line 254 "parser.y"
    {
        (yyval.code) = new_code("Statement", 7, (yyvsp[-6].code), (yyvsp[-5].code), (yyvsp[-4].code), (yyvsp[-3].code),
                                      (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1649 "y.tab.c"
    break;

  case 34: /* Statement: While LBracket Expression RBracket Statement  */
#line 260 "parser.y"
    {
        (yyval.code) = new_code("Statement", 5, (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code),
                                      (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1659 "y.tab.c"
    break;

  case 35: /* Statement: Println LBracket Expression RBracket Semicolon  */
#line 266 "parser.y"
    {
        (yyval.code) = new_code("Statement", 5, (yyvsp[-4].code), (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code),
                                      (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1669 "y.tab.c"
    break;

  case 36: /* Statement: Identifier '=' Expression Semicolon  */
#line 272 "parser.y"
    {
        (yyval.code) = new_code("Statement", 4, (yyvsp[-3].code), new_code("=", 0), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1678 "y.tab.c"
    break;

  case 37: /* Statement: Identifier Laccess Expression Raccess '=' Expression Semicolon  */
#line 277 "parser.y"
    {
        (yyval.code) = new_code("Statement", 7, (yyvsp[-6].code), new_code("[", 0), (yyvsp[-4].code), (yyvsp[-3].code),
                                      new_code("=", 0), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1688 "y.tab.c"
    break;

  case 38: /* Expressions: %empty  */
#line 286 "parser.y"
    {
        (yyval.code) = NULL;
    }
#line 1696 "y.tab.c"
    break;

  case 39: /* Expressions: ExpressionList  */
#line 290 "parser.y"
    {
        (yyval.code) = new_code("Expressions", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1705 "y.tab.c"
    break;

  case 40: /* ExpressionList: Expression  */
#line 298 "parser.y"
    {
        (yyval.code) = new_code("ExpressionList", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1714 "y.tab.c"
    break;

  case 41: /* ExpressionList: ExpressionList Comma Expression  */
#line 303 "parser.y"
    {
        (yyval.code) = new_code("ExpressionList", 3, (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1723 "y.tab.c"
    break;

  case 42: /* Expression: Expression And Expression  */
#line 311 "parser.y"
    {
        (yyval.code) = new_code("Expression", 3, (yyvsp[-2].code), new_code("$$", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1732 "y.tab.c"
    break;

  case 43: /* Expression: Expression '<' Expression  */
#line 316 "parser.y"
    {
        (yyval.code) = new_code("Expression", 3, (yyvsp[-2].code), new_code("<", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1741 "y.tab.c"
    break;

  case 44: /* Expression: Expression '+' Expression  */
#line 321 "parser.y"
    {
        (yyval.code) = new_code("Expression", 3, (yyvsp[-2].code), new_code("+", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1750 "y.tab.c"
    break;

  case 45: /* Expression: Expression '-' Expression  */
#line 326 "parser.y"
    {
        (yyval.code) = new_code("Expression", 3, (yyvsp[-2].code), new_code("-", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1759 "y.tab.c"
    break;

  case 46: /* Expression: Expression '*' Expression  */
#line 331 "parser.y"
    {
        (yyval.code) = new_code("Expression", 3, (yyvsp[-2].code), new_code("*", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1768 "y.tab.c"
    break;

  case 47: /* Expression: Expression Laccess Expression Raccess  */
#line 336 "parser.y"
    {
        (yyval.code) = new_code("Expression", 4, (yyvsp[-3].code), new_code("[", 0), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1777 "y.tab.c"
    break;

  case 48: /* Expression: Expression '.' Length  */
#line 341 "parser.y"
    {
        (yyval.code) = new_code("Expression", 3, (yyvsp[-2].code), new_code(".", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1786 "y.tab.c"
    break;

  case 49: /* Expression: Expression '.' Identifier LBracket Expressions RBracket  */
#line 346 "parser.y"
    {
        (yyval.code) = new_code("Expression", 6, (yyvsp[-5].code), new_code(".", 0), (yyvsp[-3].code),
                                       (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1796 "y.tab.c"
    break;

  case 50: /* Expression: True  */
#line 352 "parser.y"
    {
        (yyval.code) = new_code("Expression", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1805 "y.tab.c"
    break;

  case 51: /* Expression: False  */
#line 357 "parser.y"
    {
        (yyval.code) = new_code("Expression", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1814 "y.tab.c"
    break;

  case 52: /* Expression: Identifier  */
#line 362 "parser.y"
    {
        (yyval.code) = new_code("Expression", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1823 "y.tab.c"
    break;

  case 53: /* Expression: This  */
#line 367 "parser.y"
    {
        (yyval.code) = new_code("Expression", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1832 "y.tab.c"
    break;

  case 54: /* Expression: New Integer Laccess Expression Raccess  */
#line 372 "parser.y"
    {
        (yyval.code) = new_code("Expression", 5, (yyvsp[-4].code), (yyvsp[-3].code), new_code("[", 0), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1841 "y.tab.c"
    break;

  case 55: /* Expression: New Identifier LBracket RBracket  */
#line 377 "parser.y"
    {
        (yyval.code) = new_code("Expression", 4, (yyvsp[-3].code), (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1850 "y.tab.c"
    break;

  case 56: /* Expression: '!' Expression  */
#line 382 "parser.y"
    {
        (yyval.code) = new_code("Expression", 2, new_code("!", 0), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1859 "y.tab.c"
    break;

  case 57: /* Expression: LBracket Expression RBracket  */
#line 387 "parser.y"
    {
        (yyval.code) = new_code("Expression", 3, (yyvsp[-2].code), (yyvsp[-1].code), (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1868 "y.tab.c"
    break;

  case 58: /* Expression: IntegerIteral  */
#line 392 "parser.y"
    {
        (yyval.code) = new_code("Expression", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1877 "y.tab.c"
    break;

  case 59: /* Identifier: Id  */
#line 400 "parser.y"
    {
        (yyval.code) = new_code("Expression", 1, (yyvsp[0].code));
        (yyval.code)->line = yylineno;
    }
#line 1886 "y.tab.c"
    break;


#line 1890 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 406 "parser.y"

void yyerror(char *s) {
    fprintf(stderr, "line %d: %s \n", yylineno, s);
}

int main(void) {
    yyparse();
    return 0;
}
