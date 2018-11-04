/* Definition Section */

%{
#include "C++600_headers.h"
%}

%option case-insensitive

digit                                                                           [0-9]
letter                                                                          [a-zA-Z]
alnum                                                                           [a-zA-Z0-9]

/* Rules Section */

/*
    add error handling wherever needed
*/

%%
 /* Key Words */;
"typedef"                                                                       {printf("TOKEN TYPEDEF: %s\n", yytext);}
"char"                                                                          {printf("TOKEN CHAR: %s\n", yytext);}
"int"                                                                           {printf("TOKEN INT: %s\n", yytext);}
"float"                                                                         {printf("TOKEN FLOAT: %s\n", yytext);}
"str"                                                                           {printf("TOKEN STRING: %s\n", yytext);}
"class"                                                                         {printf("TOKEN CLASS: %s\n", yytext);}
"private"                                                                       {printf("TOKEN PRIVATE: %s\n", yytext);}
"protected"                                                                     {printf("TOKEN PROTECTED: %s\n", yytext);}
"public"                                                                        {printf("TOKEN PUBLIC: %s\n", yytext);}
"void"                                                                          {printf("TOKEN VOID: %s\n", yytext);}
"static"                                                                        {printf("TOKEN STATIC: %s\n", yytext);}
"union"                                                                         {printf("TOKEN UNION: %s\n", yytext);}
"enum"                                                                          {printf("TOKEN ENUM: %s\n", yytext);}
"list"                                                                          {printf("TOKEN LIST: %s\n", yytext);}
"continue"                                                                      {printf("TOKEN CONTINUE: %s\n", yytext);}
"break"                                                                         {printf("TOKEN BREAK: %s\n", yytext);}
"if"                                                                            {printf("TOKEN IF: %s\n", yytext);}
"else"                                                                          {printf("TOKEN ELSE: %s\n", yytext);}
"while"                                                                         {printf("TOKEN WHILE: %s\n", yytext);}
"for"                                                                           {printf("TOKEN FOR: %s\n", yytext);}
"switch"                                                                        {printf("TOKEN SWITCH: %s\n", yytext);}
"case"                                                                          {printf("TOKEN CASE: %s\n", yytext);}
"default"                                                                       {printf("TOKEN DEFAULT: %s\n", yytext);}
"return"                                                                        {printf("TOKEN RETURN: %s\n", yytext);}
"length"                                                                        {printf("TOKEN LENGTH: %s\n", yytext);}
"new"                                                                           {printf("TOKEN NEW: %s\n", yytext);}
"cin"                                                                           {printf("TOKEN CIN: %s\n", yytext);}
"cout"                                                                          {printf("TOKEN COUT: %s\n", yytext);}
"main"                                                                          {printf("TOKEN MAIN: %s\n", yytext);}
"this"                                                                          {printf("TOKEN THIS: %s\n", yytext);}

 /* IDENTIFIER */;
\_?\_?{letter}+(\_{1}?{alnum}|{alnum})*\_?                                      {printf("TOKEN ID: %s\n", yytext);}

 /* DATA TYPES */;
{digit}+                                                                        {printf("TOKEN INT: %s\n", yytext);}
  /* Ask if we need %,$...*/;
\'{letter}\'                                                                    {printf("TOKEN CHAR: %s\n", yytext);}
{digit}+\.{digit}+                                                              {printf("TOKEN FLOAT: %s\n", yytext);}
\"{letter}+\"                                                                   {printf("TOKEN STRING: %s\n", yytext);}

 /* OPERATORS */;
\|{2}                                                                           {printf("TOKEN OROP: %s\n", yytext);}
\&{2}                                                                           {printf("TOKEN ANDOP: %s\n", yytext);}
\={2}|\!\=                                                                      {printf("TOKEN EQUOP: %s\n", yytext);}
\>|\>\=|\<|\<\=                                                                 {printf("TOKEN RELOP: %s\n", yytext);}
\+|\-                                                                           {printf("TOKEN ADDOP: %s\n" yytext);}
\*|\/|\%                                                                        {printf("TOKEN MULOP: %s\n" yytext);}
\!                                                                              {printf("TOKEN NOTOP: %s\n" yytext);}
\+{2}|\-{2}                                                                     {printf("TOKEN INCDEC: %s\n" yytext);}
"SIZEOF"                                                                        {printf("TOKEN SIZEOF: %s\n" yytext);}
%%

int main(){
    FILE *fp;

    fp = fopen("test.txt", "r");
    yyin = fp;

    yylex();
    return 0;
}
int yywrap(){}
