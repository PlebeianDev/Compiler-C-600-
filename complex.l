/* Definition Section */

%{
#include "C++600_headers.h"
%}

digit               [0-9]
identifier          [a-zA-Z]([a-z][0-9])*


/* Rules Section */

%%

{identifier}        {printf("TOKEN ID: %s\n", yytext);}

{digit}+            {printf("TOKEN INT: %s\n", yytext);}
%%

int main(){
    FILE *fp;

    fp = fopen("test.txt", "r");
    yyin = fp;
    
    yylex();
    return 0;
}
int yywrap(){}
