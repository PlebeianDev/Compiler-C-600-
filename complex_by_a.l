/* Definition Section */

%{
#include "C++600_headers.h"
int tokencount = 0;
int linecount = 1;
%}

digit                       [0-9]
letter                      [a-zA-Z]
alnum                       [a-zA-Z0-9]
hex							[a-fA-F0-9]


/* Rules Section */

/*
    add error handling wherever needed
*/

%%
\n																				{++linecount;}
"typedef"                                                                       {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"char"                                                                          {++tokencount; printf("Line %d --> TOKEN CHAR: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"int"                                                                           {++tokencount; printf("Line %d --> TOKEN INT: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"float"                                                                         {++tokencount; printf("Line %d --> TOKEN FLOAT: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"str"                                                                           {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"class"                                                                         {++tokencount; printf("Line %d --> TOKEN CLASS: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"private"                                                                       {++tokencount; printf("Line %d --> TOKEN PRIVATE: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"protected"                                                                     {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"public"                                                                        {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"void"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"static"                                                                        {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"union"                                                                         {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"enum"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"list"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"continue"                                                                      {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"break"                                                                         {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"if"                                                                            {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"else"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"while"                                                                         {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"for"                                                                           {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"switch"                                                                        {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"case"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"default"                                                                       {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"return"                                                                        {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"length"                                                                        {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"new"                                                                           {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"cin"                                                                           {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"cout"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"main"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"this"                                                                          {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);}

.																				{}
\_?\_?{letter}+(\_{1}?{alnum}|{alnum})*\_?                                      {++tokencount; printf("Line %d --> TOKEN ID: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
{digit}+                                                                        {++tokencount; printf("Line %d --> TOKEN INT: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'{letter}\'                                                                    {++tokencount; printf("Line %d --> TOKEN CHAR: %s | TOKEN #%d\n", linecount, yytext, tokencount);} /* Ask if we need %,$...*/
{digit}+\.{digit}+                                                              {++tokencount; printf("Line %d --> TOKEN FLOAT: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\"{letter}+\"                                                                   {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);}

"="																				{++tokencount; printf("Line %d --> TOKEN ASSIGN: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"+"
%%

int yywrap(){}
int main(int argc, char *args[]){
    FILE *fp;

    fp = fopen(args[1], "r");
    yyin = fp;

    yylex();
	printf("Read %d Lines\n", linecount);
	printf("Recognized %d Lectical Units\n", tokencount);
    return 0;
}
int yywrap(){}
