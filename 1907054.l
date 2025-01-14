%{
#include "1907054.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int varindex(char *var);
yylineno=1;

%}

IDENTIFIER [a-zA-Z][a-zA-Z0-9]*[_]?[a-zA-Z0-9]*
DIGIT [0-9]
header					"import"[ ]*+[^\n]+[.h][ ]*


%%
['](.*|\n)*[']  printf("\nComment detected\n");
"cheese"               { return CHEESE; }
"floaty"             { return FLOATY;}
"mainpizza"				{return MAINPIZZA;}
"wordy"            {return WORDY;}

"checkif"    {return CHECKIF;}
"otherwise"    {return OTHERWISE;}
"loopfor"    {return LOOPFOR;}
"keepgoing" {return KEEPGOING;}
"sinwave"			   {return SINWAVE;}
"cosmic"            {return COSMIC;}
"tangent"            {return TANGENT;}
"naturelog"			   {return NATURELOG;}
"logrithm" 		   {return LOGARITHM;}
"OddEven"  	   {return ODDEVEN;}
"factorizeme"  	   {return FACTORIZEME;}


":"             { return COLON; }
"button"        { return BUTTON;}
"fallback"       { return FALLBACK;}
"value"		    { return VALUE;}
"up"            { return UP;}
"down"          { return DOWN;}
"mamla"          { return MAMLA;}
"Def"           { return DEF;}
"gcdpizza"      {return GCD;}
"primepizza"    {return PRIMEPIZZA;}

[[]        { return '['; }
[]]        { return ']'; }
[{]        { return '{'; }
[}]        { return '}'; }
[(]        { return '('; }
[)]        { return ')'; }
[;]        { return ENDED;}


"="      {return '=';}
"+"      {return '+';}
"-"      {return '-';}
"*"      {return '*'; }
"/"      {return '/';}
"^"     {return '^'; }
"%"      {return '%'; }


"=="    {return ASSIGN;}
"<"      {return LT;}
">"      {return GT;}
"<="    {return KOMEQ;}
">="    {return BSIEQ;}
"++"    {return INC; }
"--"    {return DEC;}   
","      {return ',';}
[ \t]*	;
[\n]    {yylineno++;}

\"(\\.|[^"\\])*\" {yylval.ch = strdup(yytext);return WORDY;}

[+-]?[0-9]*[.][0-9]+([eE][+-]?[0-9]+)? {yylval.floating = atof(yytext); return DOUBLE;}

"#include" { return IMPORT; }
{IDENTIFIER}".h" { return HEADER; }

{IDENTIFIER} {
			yylval.ch = strdup(yytext);
 			return VARIABLE;
 			}

"-"?{DIGIT}+ {
	yylval.paparoni=atoi(yytext);
	return NUMBER;
	}

"-"?{DIGIT}+?"."{DIGIT}+ {
	yylval.paparoni=atoi(yytext);
	return NUMBER;
	}



%%

int yywrap()
{
	return 1;
}

int main()
{
	yyin = freopen("in.txt","r",stdin);
	//yyout = freopen("out.txt","w",stdout);
	yyparse();

}

