/* Definition Section */

%{
#include "C++600_headers.h"
%}

digit                       [0-9]
letter                      [a-zA-Z]

/* Rules Section */

/*
    add error handling wherever needed
*/

%%
"typedef"                   {printf("TOKEN TYPEDEF: %s\n", yytext);}
"char"                      {printf("TOKEN CHAR: %s\n", yytext);}
"int"                       {printf("TOKEN INT: %s\n", yytext);}
"float"                     {printf("TOKEN FLOAT: %s\n", yytext);}
"str"                       {printf("TOKEN STRING: %s\n", yytext);}
"class"                     {printf("TOKEN CLASS: %s\n", yytext);}
"private"                   {printf("TOKEN PRIVATE: %s\n", yytext);}
"protected"                 {printf("TOKEN PROTECTED: %s\n", yytext);}
"public"                    {printf("TOKEN PUBLIC: %s\n", yytext);}
"void"                      {printf("TOKEN VOID: %s\n", yytext);}
"static"                    {printf("TOKEN STATIC: %s\n", yytext);}
"union"                     {printf("TOKEN UNION: %s\n", yytext);}
"enum"                      {printf("TOKEN ENUM: %s\n", yytext);}
"list"                      {printf("TOKEN LIST: %s\n", yytext);}
"continue"                  {printf("TOKEN CONTINUE: %s\n", yytext);}
"break"                     {printf("TOKEN BREAK: %s\n", yytext);}
"if"                        {printf("TOKEN IF: %s\n", yytext);}
"else"                      {printf("TOKEN ELSE: %s\n", yytext);}
"while"                     {printf("TOKEN WHILE: %s\n", yytext);}
"for"                       {printf("TOKEN FOR: %s\n", yytext);}
"switch"                    {printf("TOKEN SWITCH: %s\n", yytext);}
"case"                      {printf("TOKEN CASE: %s\n", yytext);}
"default"                   {printf("TOKEN DEFAULT: %s\n", yytext);}
"return"                    {printf("TOKEN RETURN: %s\n", yytext);}
"length"                    {printf("TOKEN LENGTH: %s\n", yytext);}
"new"                       {printf("TOKEN NEW: %s\n", yytext);}
"cin"                       {printf("TOKEN CIN: %s\n", yytext);}
"cout"                      {printf("TOKEN COUT: %s\n", yytext);}
"main"                      {printf("TOKEN MAIN: %s\n", yytext);}
"this"                      {printf("TOKEN THIS: %s\n", yytext);}


/*{letter}({letter}|digit)*   {printf("TOKEN ID: %s\n", yytext);} /* refactor */
^_{2}|[a-zA-Z]([a-zA-Z]|[0-9])*([_a-zA-Z0-9]|[_0-9])[a-zA-Z0-9]+[a-zA-Z0-9](_$|_)?([a-zA-Z0-9]$)? {printf("TOKEN ID: %s\n", yytext);}	/* check it out
{digit}+                    {printf("TOKEN INT: %s\n", yytext);}
\'{letter}\'                {printf("TOKEN CHAR: %s\n", yytext);} /* Ask if we need %,$...*/
{digit}+\.{digit}+          {printf("TOKEN FLOAT: %s\n", yytext);}
\"{letter}+\"               {printf("TOKEN STRING: %s\n", yytext);}
%%

int main(){
    FILE *fp;

    fp = fopen("test.txt", "r");
    yyin = fp;

    yylex();
    return 0;
}
int yywrap(){}
