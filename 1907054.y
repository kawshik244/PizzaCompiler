
%{
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
    


%}

%union
{
    char *ch;
	char c;
    int paparoni;
    int mozorella;
	double floating;
}
%error-verbose
%token <paparoni>  NUMBER
%token <ch>  VARIABLE
%type  <mozorella>  expression
%type  <paparoni>  after
%type  <paparoni> codes
%type  <paparoni> ENDED
%type  <mozorella> param

%token CHEESE FLOATY CHARACTER CHECKIF OTHERWISE LOOPFOR PF ENDED COLON BUTTON FALLBACK VALUE ASSIGN INC DEC LT GT EQ  BSIEQ KOMEQ MAINPIZZA UP DOWN MAMLA KEEPGOING WORDY DOUBLE DEF HEADER IMPORT SINWAVE COSMIC TANGENT NATURELOG LOGARITHM ODDEVEN FACTORIZEME GCD PRIMEPIZZA

%nonassoc IFX
%nonassoc ELSE
%left LT GT EQ  BSIEQ KOMEQ
%left '+' '-'
%left '*' '/'
%left '^'

%%
program:
        import func MAINPIZZA '{' lines '}'  {printf("\nPizza Program ended successfully\n");}
        | /* NULL */
        ;

import: IMPORT LT HEADER GT { printf("\nPizza Topping Header File Is Found!\n"); }
		| /*empty*/
		;



func: DEF VARIABLE '(' param ')' '{' lines '}'
	{
		printf("\nPizza Function Ordered!\n");		
	};



param	: { printf("\nNo Parameter Pizza Function Ordered!\n");}
	|param ',' VARIABLE
		{
   		 if(func_here($3)==1) printf("\nParameter on Pizza already on top of pizza!");
   		 else  assign_func($3);
		}

	| VARIABLE
		{
		   if(func_here($1)==1)
      			 printf("\nParameter on Pizza already on top of pizza!");
   		 else
      				  assign_func($1);
		}
	;



lines	: /* empty */
    |NUMBER

	| lines codes

	| declare
	;


declare	:
	type id ENDED     
	;


type	:

	CHEESE 

	| FLOATY

	| WORDY
	;


id	:
	id ',' VARIABLE
		{
   		 if(isdeclared($3)==1)  printf("\nAlas You Ordered Pasta instead Pizza!\n");
   		 else{  
			assign($3);
			printf("\nYour Pizza Order Done Successful\n"); } 
		}

	| VARIABLE
		{
		   if(isdeclared($1)==1) printf("\nAlas You Ordered Pasta instead Pizza!\n");
   		 else{
      				  assign($1);
					   printf("\nYour Pizza Order Done Successful\n"); } 
		}
	;


codes: 
	codes after

	| after
	;


after	:
	ENDED

	| declare

	| expression ENDED
		{
 		     $$=$1;
 		/*   printf("\nValue of expression: %d at line %d\n",$1,yylineno); */
		}

	| VALUE '(' VARIABLE ')' ENDED
		{
			if(isdeclared($3)==0)
			{
				printf("Can't print, Value of the pizza is not declared.\n");
			}
			else 
			{
				printf("\nValue of your pizza variable %s:  %d\t\n",$3, keep[getval($3)]);
			}
 		   
		}

	| VARIABLE '=' expression ENDED
		{
 		    if(setval($1,$3)==0)
  		 	{
  		    	$$=0;
				printf("\nNot Specified Order\n");
   			}
    		else
    		{
      			$$=$3;
   			}
		}

	| CHECKIF '[' expression ']' '{' codes '}' %prec IFX
		{
   			 printf("\nCondition correct in CHECKIF Pizza\n");
		}

	| CHECKIF '[' expression ']' '{' codes '}' OTHERWISE '{' codes '}' %prec IFX
		{
 		  f=f+1;
  		  int p=0;
  		  if($3)
   			 {
      			  printf("\nCondition correct in CHECKIF Pizza\n");
        			p=1;
    		 }
    		if(p==0)
      		  printf("\nCondition wrong in CHECKIF Pizza\n");
		}

	| LOOPFOR '(' VARIABLE '=' NUMBER ',' VARIABLE KOMEQ NUMBER ',' VARIABLE UP NUMBER')' '{' codes'}'
		{
 		    int i;
			for(i= $5 ; i<= $9 ; i+=$13)
			{
				printf("Your Toppings in for loop increasing %d\n",i);
			} printf("\n");	 			    
		}
		
	| LOOPFOR '(' VARIABLE '=' NUMBER ',' VARIABLE BSIEQ NUMBER ',' VARIABLE DOWN NUMBER ')' '{' codes'}'
		{
 		    int i;
			for(i= $5 ; i>= $9 ; i-=$13)
			{
				printf("Your Toppings in for loop Decreasing %d\n",i);
			}printf("\n");		    
		}
	   
		    
	
	| KEEPGOING '(' VARIABLE LT NUMBER ',' NUMBER ')' '{' codes '}'
		{
			int a = keep[getval($3)], inc = $7;
			while((a+=inc)< $5)
			{
				printf("While loop is serving your pizza value of your pizza %s : %d\n", $3, a);
			}
		}
	

	| BUTTON '[' Exp_case ']' '{' code '}'
	;


Exp_case :
	expression
		{
    		cas = 0;
    		cas_var = $1;
		}
	;


code: /* empty */

	| code expression COLON '{' codes'}'
		{
    		if($2 == cas_var)
    			{
        			printf("\nYour Pizza Executed %d\n",$2);
        			cas = 1;
   			 }
		}

	| code FALLBACK COLON '{' codes '}'
		{
  		  if(cas == 0)
   			 {
    			    cas = 1;
     			   printf("\nDefault Pizza Executed\n");
    			}
		}
	;



expression:
	NUMBER		   		  { $$ = $1;}

	| VARIABLE
		{
  		  if( isdeclared($1) == 0)
   			 {
    			    $$=0;
     			   printf("\nNot Ordered Your Pizza\n");
   			 }
    		else
       			 $$=keep[getval($1)];
		}
	
	| expression '+' expression	  	
		 { 	
			$$ = $1 + $3; /*printf("\nAddition value %d\n",$$);*/
		 }

	| expression '-' expression	 	  
		{
  			$$ = $1 - $3; /*printf("\nSubtraction value %d\n",$$);*/
		}

	| expression '*' expression
		{
 			   $$ = $1 * $3;
 			   /*printf("\nMultiplication value %d\n",$$);*/
		}

	| expression '/' expression	 	  
		{ 	if($3)
 			   {
  			      $$ = $1 / $3;
     				   /*printf("\nDivision value %d\n",$$);*/
  			  }
   			 else
    			{
      				 $$ = 0;
       				 printf("\nDivision by zero\t");
    			}
		}

	| expression '^' expression 		
		{ 	$$=pow($1,$3); /*printf("\nPower value %d\n",$$);*/}

	| expression '%' expression 		
		{	 $$=$1 % $3; /*printf("\nRemainder value %d\n",$$);*/}

	| '(' expression ')'		  
    		 { $$ = $2 ;}
	| expression LT expression	
		{ $$ = $1 < $3; }

	| expression GT expression	
		{ $$ = $1 > $3; }

	| expression KOMEQ expression  
		{ $$ = $1 <= $3; }

	| expression BSIEQ expression   
 		 { $$ = $1 >= $3; }
	| SINWAVE expression 			{printf("Value of Sin(%d) is %lf\n",$2,sin($2*3.1416/180)); $$=sin($2*3.1416/180);}

    | COSMIC expression 			{printf("Value of Cos(%d) is %lf\n",$2,cos($2*3.1416/180)); $$=cos($2*3.1416/180);}

    | TANGENT expression 			{printf("Value of Tan(%d) is %lf\n",$2,tan($2*3.1416/180)); $$=tan($2*3.1416/180);}

    | LOGARITHM expression 			{printf("Value of Log10(%d) is %lf\n",$2,(log($2*1.0)/log(10.0))); $$=(log($2*1.0)/log(10.0));}

	| NATURELOG expression 			{printf("Value of ln(%d) is %lf\n",$2,(log($2))); $$=(log($2));}

	|ODDEVEN expression         {if($2%2==0) printf("value provided for OddEven function is %d which is even\n",$2);else printf("value provided for OddEven function is %d which is odd\n",$2);}

	|FACTORIZEME expression           {int ans = 1; for(int i=1; i<=$2; i++){ans*=i;}printf("Factorial of %d is %d\n",$2,ans);}
	
	|GCD '(' expression ',' expression ')'    {int a,b; a=$3; b=$5; while(a!=b){if(a>b)a=a-b;else b=b-a;} $$=a; printf("GCD of (%d, %d): %d \n",$3, $5, a); }

	|PRIMEPIZZA expression            
		{
			int p= $2; int q=0; for(int i=2;i*i<=p;i++){if(p%i==0){q=1;break;}} if( q ){$$=0; printf("%d is Not prime \n",p);}else{$$=1; printf("%d is prime \n",p);}
			
			
		}

	;




%%



int yyerror(char *s)
{
    printf( "%s\n %d", s, yylineno);
}









