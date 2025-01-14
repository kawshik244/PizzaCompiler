
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "1907054.y"

#include<stdio.h>
#include <math.h>
#include<stdlib.h>
#include<string.h>
extern yylineno;


    char var[1000][1000];
    int keep[1000];
	char store_str[1000][1000];  
	float store_float[1000]; 
	int tid[1000];

	int l_pointer = 1,f=1;
	int cas=0,cas_var=0;
	char param[100][100];
	int cnt_func = 1;
    int func_here(char *s){
 		int i;
        for(i=1; i<cnt_func; i++){
            if(strcmp(param[i],s) == 0)return 1;
        }return 0;
	}

    int assign_func(char *s)
    {
        strcpy(param[cnt_func],s); cnt_func++;return 1;
    }


    int isdeclared(char *s){
        int i;
        for(i=1; i<l_pointer; i++){
            if(strcmp(var[i],s) == 0)return 1;
        }return 0;
    }
    
    int assign(char *s)
    {
        if(isdeclared(s)==1)
            return 0;
        strcpy(var[l_pointer],s); keep[l_pointer]=0;l_pointer++;return 1;
    }

    int setval(char *s,int val)
    {
        if(isdeclared(s) == 0)
            return 0;
        int ok=0, i;
        for( i=1; i<l_pointer; i++)
        {
            if(strcmp(var[i],s) == 0)
            {
                ok=i;
                break;
            }
        }
        keep[ok]=val;
        return 1;
    }

    int getval(char *s)
    {

        int pos=-1;
        int i;
        for( i=1; i<l_pointer; i++)
        {
            if(strcmp(var[i],s) == 0)
            {
                pos=i;
                break;
            }
        }
        return pos;
    }
    




/* Line 189 of yacc.c  */
#line 156 "1907054.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     CHEESE = 260,
     FLOATY = 261,
     CHARACTER = 262,
     CHECKIF = 263,
     OTHERWISE = 264,
     LOOPFOR = 265,
     PF = 266,
     ENDED = 267,
     COLON = 268,
     BUTTON = 269,
     FALLBACK = 270,
     VALUE = 271,
     ASSIGN = 272,
     INC = 273,
     DEC = 274,
     LT = 275,
     GT = 276,
     EQ = 277,
     BSIEQ = 278,
     KOMEQ = 279,
     MAINPIZZA = 280,
     UP = 281,
     DOWN = 282,
     MAMLA = 283,
     KEEPGOING = 284,
     WORDY = 285,
     DOUBLE = 286,
     DEF = 287,
     HEADER = 288,
     IMPORT = 289,
     SINWAVE = 290,
     COSMIC = 291,
     TANGENT = 292,
     NATURELOG = 293,
     LOGARITHM = 294,
     ODDEVEN = 295,
     FACTORIZEME = 296,
     GCD = 297,
     PRIMEPIZZA = 298,
     IFX = 299,
     ELSE = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 85 "1907054.y"

    char *ch;
	char c;
    int paparoni;
    int mozorella;
	double floating;



/* Line 214 of yacc.c  */
#line 247 "1907054.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 259 "1907054.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  165

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    59,     2,     2,
      53,    54,    48,    46,    55,    47,     2,    49,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    56,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,    50,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,    10,    11,    16,    17,    26,    27,    31,
      33,    34,    36,    39,    41,    45,    47,    49,    51,    55,
      57,    60,    62,    64,    66,    69,    75,    80,    88,   100,
     118,   136,   148,   156,   158,   159,   166,   173,   175,   177,
     181,   185,   189,   193,   197,   201,   205,   209,   213,   217,
     221,   224,   227,   230,   233,   236,   239,   242,   249
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    62,    63,    25,    51,    65,    52,    -1,
      -1,    34,    20,    33,    21,    -1,    -1,    32,     4,    53,
      64,    54,    51,    65,    52,    -1,    -1,    64,    55,     4,
      -1,     4,    -1,    -1,     3,    -1,    65,    69,    -1,    66,
      -1,    67,    68,    12,    -1,     5,    -1,     6,    -1,    30,
      -1,    68,    55,     4,    -1,     4,    -1,    69,    70,    -1,
      70,    -1,    12,    -1,    66,    -1,    73,    12,    -1,    16,
      53,     4,    54,    12,    -1,     4,    56,    73,    12,    -1,
       8,    57,    73,    58,    51,    69,    52,    -1,     8,    57,
      73,    58,    51,    69,    52,     9,    51,    69,    52,    -1,
      10,    53,     4,    56,     3,    55,     4,    24,     3,    55,
       4,    26,     3,    54,    51,    69,    52,    -1,    10,    53,
       4,    56,     3,    55,     4,    23,     3,    55,     4,    27,
       3,    54,    51,    69,    52,    -1,    29,    53,     4,    20,
       3,    55,     3,    54,    51,    69,    52,    -1,    14,    57,
      71,    58,    51,    72,    52,    -1,    73,    -1,    -1,    72,
      73,    13,    51,    69,    52,    -1,    72,    15,    13,    51,
      69,    52,    -1,     3,    -1,     4,    -1,    73,    46,    73,
      -1,    73,    47,    73,    -1,    73,    48,    73,    -1,    73,
      49,    73,    -1,    73,    50,    73,    -1,    73,    59,    73,
      -1,    53,    73,    54,    -1,    73,    20,    73,    -1,    73,
      21,    73,    -1,    73,    24,    73,    -1,    73,    23,    73,
      -1,    35,    73,    -1,    36,    73,    -1,    37,    73,    -1,
      39,    73,    -1,    38,    73,    -1,    40,    73,    -1,    41,
      73,    -1,    42,    53,    73,    55,    73,    54,    -1,    43,
      73,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   113,   116,   117,   122,   129,   130,   136,
     147,   148,   150,   152,   157,   163,   165,   167,   172,   180,
     191,   193,   198,   200,   202,   208,   221,   234,   239,   252,
     261,   272,   282,   287,   295,   297,   306,   319,   321,   332,
     337,   342,   348,   361,   364,   367,   369,   372,   375,   378,
     380,   382,   384,   386,   388,   390,   392,   394,   396
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "VARIABLE", "CHEESE", "FLOATY",
  "CHARACTER", "CHECKIF", "OTHERWISE", "LOOPFOR", "PF", "ENDED", "COLON",
  "BUTTON", "FALLBACK", "VALUE", "ASSIGN", "INC", "DEC", "LT", "GT", "EQ",
  "BSIEQ", "KOMEQ", "MAINPIZZA", "UP", "DOWN", "MAMLA", "KEEPGOING",
  "WORDY", "DOUBLE", "DEF", "HEADER", "IMPORT", "SINWAVE", "COSMIC",
  "TANGENT", "NATURELOG", "LOGARITHM", "ODDEVEN", "FACTORIZEME", "GCD",
  "PRIMEPIZZA", "IFX", "ELSE", "'+'", "'-'", "'*'", "'/'", "'^'", "'{'",
  "'}'", "'('", "')'", "','", "'='", "'['", "']'", "'%'", "$accept",
  "program", "import", "func", "param", "lines", "declare", "type", "id",
  "codes", "after", "Exp_case", "code", "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,    43,    45,    42,    47,
      94,   123,   125,    40,    41,    44,    61,    91,    93,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    64,    64,    64,
      65,    65,    65,    65,    66,    67,    67,    67,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    72,    72,    72,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     4,     0,     8,     0,     3,     1,
       0,     1,     2,     1,     3,     1,     1,     1,     3,     1,
       2,     1,     1,     1,     2,     5,     4,     7,    11,    17,
      17,    11,     7,     1,     0,     6,     6,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     2,     6,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     4,     7,    10,     9,     0,    11,    15,    16,    17,
       0,    13,     0,     0,     0,    37,    38,     0,     0,    22,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,    23,    12,    21,     0,    19,     0,
      10,     8,     0,     0,     0,     0,     0,     0,    38,    50,
      51,    52,    54,    53,    55,    56,     0,    58,     0,    20,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,    45,    46,    47,    49,    48,    39,    40,    41,
      42,    43,    44,    18,     6,    26,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    25,     0,     0,     0,     0,
       0,     0,    57,    27,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
      36,    35,    31,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,    29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     7,    15,    20,    44,    22,    49,    45,
      46,    87,   120,    47
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int16 yypact[] =
{
       4,   -12,    14,    20,    -3,   -46,    28,    41,    48,    24,
      27,   -46,    76,    62,   -46,     0,   -46,   -46,   -46,   -46,
      99,   -46,    78,    32,    80,   -46,    29,    30,    33,   -46,
      34,    36,    37,   548,   548,   548,   548,   548,   548,   548,
      40,   548,   -46,   548,   -46,    21,   -46,   149,   -46,    -2,
      62,   -46,   548,   548,    90,   548,    91,    94,   -46,   573,
     573,   573,   573,   573,   573,   573,   548,   573,   276,   -46,
     -46,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   -46,   102,   150,   200,   327,    54,    50,   573,    58,
      98,   378,   -46,   -31,   -31,   -31,   -31,    22,    22,   -37,
     -37,    55,   573,   -46,   -46,   -46,    68,   118,    71,   114,
     124,   548,    21,    75,   -46,   -46,    77,   429,   201,   127,
     526,   130,   -46,   134,    52,   133,   -46,   579,    93,    97,
     146,   147,   106,   108,   112,    21,   110,   113,    21,    21,
      21,   252,   163,   167,   303,   354,   405,   -46,   148,   151,
     -46,   -46,   -46,   171,   173,   128,   129,   143,   159,    21,
      21,   456,   507,   -46,   -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   -46,   -46,   -46,   131,    -1,   -46,   -46,   -15,
     -45,   -46,   -46,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -6
static const yytype_int16 yytable[] =
{
      69,    59,    60,    61,    62,    63,    64,    65,     4,    67,
      81,    68,    21,    79,     5,    75,    76,    77,    78,    79,
      84,    85,    80,    88,    25,    26,    17,    18,    80,    27,
       8,    28,     9,    29,    91,    30,    -5,    31,     1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    21,
      32,    19,     6,    82,    23,    24,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    16,    10,    17,    18,    11,
      77,    78,    79,    69,    43,   130,   131,    12,    13,   117,
      14,    80,    48,    50,    51,    52,    54,    53,   127,    56,
      57,    55,    19,    66,    86,    89,    69,   118,    90,    69,
      69,    69,    25,    26,    17,    18,   103,    27,   108,    28,
     107,    29,   109,    30,    80,    31,    69,    69,   110,   112,
     141,   113,   114,   144,   145,   146,   115,   116,    32,    19,
     119,   124,   121,   128,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   129,   161,   162,   132,   134,   135,   136,
     137,    42,    43,    25,    26,    17,    18,   138,    27,   139,
      28,    70,    29,   140,    30,   142,    31,   148,   143,    71,
      72,   149,    73,    74,   155,   153,   156,   154,     0,    32,
      19,    83,   157,   158,     0,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   159,    75,    76,    77,    78,    79,
       0,     0,   104,    43,    25,    26,    17,    18,    80,    27,
     160,    28,   105,    29,     0,    30,     0,    31,     0,     0,
      71,    72,     0,    73,    74,     0,     0,     0,     0,     0,
      32,    19,     0,     0,     0,     0,    33,    34,    35,    36,
      37,    38,    39,    40,    41,     0,    75,    76,    77,    78,
      79,     0,     0,   123,    43,    25,    26,    17,    18,    80,
      27,     0,    28,     0,    29,     0,    30,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    32,    19,     0,     0,     0,     0,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    71,    72,     0,    73,
      74,     0,     0,     0,   147,    43,    25,    26,    17,    18,
       0,    27,     0,    28,     0,    29,     0,    30,     0,    31,
       0,     0,    75,    76,    77,    78,    79,     0,     0,     0,
      92,     0,    32,    19,     0,    80,     0,     0,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    71,    72,     0,
      73,    74,     0,     0,     0,   150,    43,    25,    26,    17,
      18,     0,    27,     0,    28,     0,    29,     0,    30,     0,
      31,     0,     0,    75,    76,    77,    78,    79,     0,     0,
       0,     0,     0,    32,    19,   106,    80,     0,     0,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    71,    72,
       0,    73,    74,     0,     0,     0,   151,    43,    25,    26,
      17,    18,     0,    27,     0,    28,     0,    29,     0,    30,
       0,    31,     0,     0,    75,    76,    77,    78,    79,     0,
       0,     0,     0,   111,    32,    19,     0,    80,     0,     0,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    71,
      72,     0,    73,    74,     0,     0,     0,   152,    43,    25,
      26,    17,    18,     0,    27,     0,    28,     0,    29,     0,
      30,     0,    31,     0,     0,    75,    76,    77,    78,    79,
       0,     0,     0,   122,     0,    32,    19,     0,    80,     0,
       0,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,   163,    43,
      25,    26,    17,    18,     0,    27,     0,    28,     0,    29,
       0,    30,     0,    31,     0,     0,     0,     0,     0,    25,
      58,     0,     0,     0,     0,     0,    32,    19,     0,     0,
       0,   125,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    25,    58,     0,     0,     0,     0,     0,     0,   164,
      43,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,   126,    43,
       0,     0,     0,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   133,    71,    72,     0,    73,    74,     0,    71,
      72,    43,    73,    74,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,     0,    75,    76,    77,    78,    79,
       0,     0,    80,     0,     0,     0,     0,     0,    80
};

static const yytype_int16 yycheck[] =
{
      45,    33,    34,    35,    36,    37,    38,    39,    20,    41,
      12,    43,    13,    50,     0,    46,    47,    48,    49,    50,
      52,    53,    59,    55,     3,     4,     5,     6,    59,     8,
      33,    10,     4,    12,    66,    14,    32,    16,    34,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    50,
      29,    30,    32,    55,    54,    55,    35,    36,    37,    38,
      39,    40,    41,    42,    43,     3,    25,     5,     6,    21,
      48,    49,    50,   118,    53,    23,    24,    53,    51,   111,
       4,    59,     4,    51,     4,    56,    53,    57,   120,    53,
      53,    57,    30,    53,     4,     4,   141,   112,     4,   144,
     145,   146,     3,     4,     5,     6,     4,     8,    58,    10,
      56,    12,    54,    14,    59,    16,   161,   162,    20,    51,
     135,     3,    51,   138,   139,   140,    12,     3,    29,    30,
      55,     4,    55,     3,    35,    36,    37,    38,    39,    40,
      41,    42,    43,     9,   159,   160,    13,    54,    51,     3,
       3,    52,    53,     3,     4,     5,     6,    51,     8,    51,
      10,    12,    12,    51,    14,    55,    16,     4,    55,    20,
      21,     4,    23,    24,     3,    27,     3,    26,    -1,    29,
      30,    50,    54,    54,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    51,    46,    47,    48,    49,    50,
      -1,    -1,    52,    53,     3,     4,     5,     6,    59,     8,
      51,    10,    12,    12,    -1,    14,    -1,    16,    -1,    -1,
      20,    21,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    46,    47,    48,    49,
      50,    -1,    -1,    52,    53,     3,     4,     5,     6,    59,
       8,    -1,    10,    -1,    12,    -1,    14,    -1,    16,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    20,    21,    -1,    23,
      24,    -1,    -1,    -1,    52,    53,     3,     4,     5,     6,
      -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,    16,
      -1,    -1,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      54,    -1,    29,    30,    -1,    59,    -1,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    20,    21,    -1,
      23,    24,    -1,    -1,    -1,    52,    53,     3,     4,     5,
       6,    -1,     8,    -1,    10,    -1,    12,    -1,    14,    -1,
      16,    -1,    -1,    46,    47,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    29,    30,    58,    59,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    20,    21,
      -1,    23,    24,    -1,    -1,    -1,    52,    53,     3,     4,
       5,     6,    -1,     8,    -1,    10,    -1,    12,    -1,    14,
      -1,    16,    -1,    -1,    46,    47,    48,    49,    50,    -1,
      -1,    -1,    -1,    55,    29,    30,    -1,    59,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    20,
      21,    -1,    23,    24,    -1,    -1,    -1,    52,    53,     3,
       4,     5,     6,    -1,     8,    -1,    10,    -1,    12,    -1,
      14,    -1,    16,    -1,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    54,    -1,    29,    30,    -1,    59,    -1,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
       3,     4,     5,     6,    -1,     8,    -1,    10,    -1,    12,
      -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    15,    35,    36,    37,    38,    39,    40,    41,    42,
      43,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    13,    20,    21,    -1,    23,    24,    -1,    20,
      21,    53,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    48,    49,    50,    -1,    46,    47,    48,    49,    50,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    34,    61,    62,    20,     0,    32,    63,    33,     4,
      25,    21,    53,    51,     4,    64,     3,     5,     6,    30,
      65,    66,    67,    54,    55,     3,     4,     8,    10,    12,
      14,    16,    29,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    52,    53,    66,    69,    70,    73,     4,    68,
      51,     4,    56,    57,    53,    57,    53,    53,     4,    73,
      73,    73,    73,    73,    73,    73,    53,    73,    73,    70,
      12,    20,    21,    23,    24,    46,    47,    48,    49,    50,
      59,    12,    55,    65,    73,    73,     4,    71,    73,     4,
       4,    73,    54,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,     4,    52,    12,    58,    56,    58,    54,
      20,    55,    51,     3,    51,    12,     3,    73,    69,    55,
      72,    55,    54,    52,     4,    15,    52,    73,     3,     9,
      23,    24,    13,    13,    54,    51,     3,     3,    51,    51,
      51,    69,    55,    55,    69,    69,    69,    52,     4,     4,
      52,    52,    52,    27,    26,     3,     3,    54,    54,    51,
      51,    69,    69,    52,    52
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 112 "1907054.y"
    {printf("\nPizza Program ended successfully\n");;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 116 "1907054.y"
    { printf("\nPizza Topping Header File Is Found!\n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 123 "1907054.y"
    {
		printf("\nPizza Function Ordered!\n");		
	;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 129 "1907054.y"
    { printf("\nNo Parameter Pizza Function Ordered!\n");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 131 "1907054.y"
    {
   		 if(func_here((yyvsp[(3) - (3)].ch))==1) printf("\nParameter on Pizza already on top of pizza!");
   		 else  assign_func((yyvsp[(3) - (3)].ch));
		;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 137 "1907054.y"
    {
		   if(func_here((yyvsp[(1) - (1)].ch))==1)
      			 printf("\nParameter on Pizza already on top of pizza!");
   		 else
      				  assign_func((yyvsp[(1) - (1)].ch));
		;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 173 "1907054.y"
    {
   		 if(isdeclared((yyvsp[(3) - (3)].ch))==1)  printf("\nAlas You Ordered Pasta instead Pizza!\n");
   		 else{  
			assign((yyvsp[(3) - (3)].ch));
			printf("\nYour Pizza Order Done Successful\n"); } 
		;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 181 "1907054.y"
    {
		   if(isdeclared((yyvsp[(1) - (1)].ch))==1) printf("\nAlas You Ordered Pasta instead Pizza!\n");
   		 else{
      				  assign((yyvsp[(1) - (1)].ch));
					   printf("\nYour Pizza Order Done Successful\n"); } 
		;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 203 "1907054.y"
    {
 		     (yyval.paparoni)=(yyvsp[(1) - (2)].mozorella);
 		/*   printf("\nValue of expression: %d at line %d\n",$1,yylineno); */
		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 209 "1907054.y"
    {
			if(isdeclared((yyvsp[(3) - (5)].ch))==0)
			{
				printf("Can't print, Value of the pizza is not declared.\n");
			}
			else 
			{
				printf("\nValue of your pizza variable %s:  %d\t\n",(yyvsp[(3) - (5)].ch), keep[getval((yyvsp[(3) - (5)].ch))]);
			}
 		   
		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 222 "1907054.y"
    {
 		    if(setval((yyvsp[(1) - (4)].ch),(yyvsp[(3) - (4)].mozorella))==0)
  		 	{
  		    	(yyval.paparoni)=0;
				printf("\nNot Specified Order\n");
   			}
    		else
    		{
      			(yyval.paparoni)=(yyvsp[(3) - (4)].mozorella);
   			}
		;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 235 "1907054.y"
    {
   			 printf("\nCondition correct in CHECKIF Pizza\n");
		;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 240 "1907054.y"
    {
 		  f=f+1;
  		  int p=0;
  		  if((yyvsp[(3) - (11)].mozorella))
   			 {
      			  printf("\nCondition correct in CHECKIF Pizza\n");
        			p=1;
    		 }
    		if(p==0)
      		  printf("\nCondition wrong in CHECKIF Pizza\n");
		;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 253 "1907054.y"
    {
 		    int i;
			for(i= (yyvsp[(5) - (17)].paparoni) ; i<= (yyvsp[(9) - (17)].paparoni) ; i+=(yyvsp[(13) - (17)].paparoni))
			{
				printf("Your Toppings in for loop increasing %d\n",i);
			} printf("\n");	 			    
		;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 262 "1907054.y"
    {
 		    int i;
			for(i= (yyvsp[(5) - (17)].paparoni) ; i>= (yyvsp[(9) - (17)].paparoni) ; i-=(yyvsp[(13) - (17)].paparoni))
			{
				printf("Your Toppings in for loop Decreasing %d\n",i);
			}printf("\n");		    
		;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 273 "1907054.y"
    {
			int a = keep[getval((yyvsp[(3) - (11)].ch))], inc = (yyvsp[(7) - (11)].paparoni);
			while((a+=inc)< (yyvsp[(5) - (11)].paparoni))
			{
				printf("While loop is serving your pizza value of your pizza %s : %d\n", (yyvsp[(3) - (11)].ch), a);
			}
		;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 288 "1907054.y"
    {
    		cas = 0;
    		cas_var = (yyvsp[(1) - (1)].mozorella);
		;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 298 "1907054.y"
    {
    		if((yyvsp[(2) - (6)].mozorella) == cas_var)
    			{
        			printf("\nYour Pizza Executed %d\n",(yyvsp[(2) - (6)].mozorella));
        			cas = 1;
   			 }
		;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 307 "1907054.y"
    {
  		  if(cas == 0)
   			 {
    			    cas = 1;
     			   printf("\nDefault Pizza Executed\n");
    			}
		;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 319 "1907054.y"
    { (yyval.mozorella) = (yyvsp[(1) - (1)].paparoni);;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 322 "1907054.y"
    {
  		  if( isdeclared((yyvsp[(1) - (1)].ch)) == 0)
   			 {
    			    (yyval.mozorella)=0;
     			   printf("\nNot Ordered Your Pizza\n");
   			 }
    		else
       			 (yyval.mozorella)=keep[getval((yyvsp[(1) - (1)].ch))];
		;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 333 "1907054.y"
    { 	
			(yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) + (yyvsp[(3) - (3)].mozorella); /*printf("\nAddition value %d\n",$$);*/
		 ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 338 "1907054.y"
    {
  			(yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) - (yyvsp[(3) - (3)].mozorella); /*printf("\nSubtraction value %d\n",$$);*/
		;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 343 "1907054.y"
    {
 			   (yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) * (yyvsp[(3) - (3)].mozorella);
 			   /*printf("\nMultiplication value %d\n",$$);*/
		;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 349 "1907054.y"
    { 	if((yyvsp[(3) - (3)].mozorella))
 			   {
  			      (yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) / (yyvsp[(3) - (3)].mozorella);
     				   /*printf("\nDivision value %d\n",$$);*/
  			  }
   			 else
    			{
      				 (yyval.mozorella) = 0;
       				 printf("\nDivision by zero\t");
    			}
		;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 362 "1907054.y"
    { 	(yyval.mozorella)=pow((yyvsp[(1) - (3)].mozorella),(yyvsp[(3) - (3)].mozorella)); /*printf("\nPower value %d\n",$$);*/;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 365 "1907054.y"
    {	 (yyval.mozorella)=(yyvsp[(1) - (3)].mozorella) % (yyvsp[(3) - (3)].mozorella); /*printf("\nRemainder value %d\n",$$);*/;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 368 "1907054.y"
    { (yyval.mozorella) = (yyvsp[(2) - (3)].mozorella) ;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 370 "1907054.y"
    { (yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) < (yyvsp[(3) - (3)].mozorella); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 373 "1907054.y"
    { (yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) > (yyvsp[(3) - (3)].mozorella); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 376 "1907054.y"
    { (yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) <= (yyvsp[(3) - (3)].mozorella); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 379 "1907054.y"
    { (yyval.mozorella) = (yyvsp[(1) - (3)].mozorella) >= (yyvsp[(3) - (3)].mozorella); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 380 "1907054.y"
    {printf("Value of Sin(%d) is %lf\n",(yyvsp[(2) - (2)].mozorella),sin((yyvsp[(2) - (2)].mozorella)*3.1416/180)); (yyval.mozorella)=sin((yyvsp[(2) - (2)].mozorella)*3.1416/180);;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 382 "1907054.y"
    {printf("Value of Cos(%d) is %lf\n",(yyvsp[(2) - (2)].mozorella),cos((yyvsp[(2) - (2)].mozorella)*3.1416/180)); (yyval.mozorella)=cos((yyvsp[(2) - (2)].mozorella)*3.1416/180);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 384 "1907054.y"
    {printf("Value of Tan(%d) is %lf\n",(yyvsp[(2) - (2)].mozorella),tan((yyvsp[(2) - (2)].mozorella)*3.1416/180)); (yyval.mozorella)=tan((yyvsp[(2) - (2)].mozorella)*3.1416/180);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 386 "1907054.y"
    {printf("Value of Log10(%d) is %lf\n",(yyvsp[(2) - (2)].mozorella),(log((yyvsp[(2) - (2)].mozorella)*1.0)/log(10.0))); (yyval.mozorella)=(log((yyvsp[(2) - (2)].mozorella)*1.0)/log(10.0));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 388 "1907054.y"
    {printf("Value of ln(%d) is %lf\n",(yyvsp[(2) - (2)].mozorella),(log((yyvsp[(2) - (2)].mozorella)))); (yyval.mozorella)=(log((yyvsp[(2) - (2)].mozorella)));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 390 "1907054.y"
    {if((yyvsp[(2) - (2)].mozorella)%2==0) printf("value provided for OddEven function is %d which is even\n",(yyvsp[(2) - (2)].mozorella));else printf("value provided for OddEven function is %d which is odd\n",(yyvsp[(2) - (2)].mozorella));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 392 "1907054.y"
    {int ans = 1; for(int i=1; i<=(yyvsp[(2) - (2)].mozorella); i++){ans*=i;}printf("Factorial of %d is %d\n",(yyvsp[(2) - (2)].mozorella),ans);;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 394 "1907054.y"
    {int a,b; a=(yyvsp[(3) - (6)].mozorella); b=(yyvsp[(5) - (6)].mozorella); while(a!=b){if(a>b)a=a-b;else b=b-a;} (yyval.mozorella)=a; printf("GCD of (%d, %d): %d \n",(yyvsp[(3) - (6)].mozorella), (yyvsp[(5) - (6)].mozorella), a); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 397 "1907054.y"
    {
			int p= (yyvsp[(2) - (2)].mozorella); int q=0; for(int i=2;i*i<=p;i++){if(p%i==0){q=1;break;}} if( q ){(yyval.mozorella)=0; printf("%d is Not prime \n",p);}else{(yyval.mozorella)=1; printf("%d is prime \n",p);}
			
			
		;}
    break;



/* Line 1455 of yacc.c  */
#line 2079 "1907054.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 408 "1907054.y"




int yyerror(char *s)
{
    printf( "%s\n %d", s, yylineno);
}










