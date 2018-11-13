/* Definition Section */

%{
#include "C++600_headers.h"

void yyerror (char const *s);

int tokencount = 0;
int linecount = 1;

char buffer[STR_BUF];
char* buffer_ptr;

%}

%option case-insensitive

digit                                                                           [0-9]
letter                                                                          [a-zA-Z]
alnum                                                                           [a-zA-Z0-9]
hex                                                                             [a-fA-F0-9]
bin                                                                             [0-1]
ascii                                                                           [ !"#$%&'()*+,-./:;<=>?@\[\\\]^_`{|}~]
whitespace                                                                      [ \t]

%x LINE_COMMENT
%x COMMENT
%x STRING

/* Rules Section */

/*
    RETURN THE CODES
    FIX yyerror
    ADD act codes and funcs
*/

%%
 /* Key Words */;
"typedef"                                                                       {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_TYPEDEF);}
"char"                                                                          {++tokencount; printf("Line %d --> TOKEN CHAR: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_CHAR);}
"int"                                                                           {++tokencount; printf("Line %d --> TOKEN INT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_INT);}
"float"                                                                         {++tokencount; printf("Line %d --> TOKEN FLOAT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_FLOAT);}
"str"                                                                           {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_STRING);}
"class"                                                                         {++tokencount; printf("Line %d --> TOKEN CLASS: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_CLASS);}
"private"                                                                       {++tokencount; printf("Line %d --> TOKEN PRIVATE: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_PRIVATE);}
"protected"                                                                     {++tokencount; printf("Line %d --> TOKEN PROTECTED: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_PROTECTED);}
"public"                                                                        {++tokencount; printf("Line %d --> TOKEN PUBLIC: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_PUBLIC);}
"void"                                                                          {++tokencount; printf("Line %d --> TOKEN VOID: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_VOID);}
"static"                                                                        {++tokencount; printf("Line %d --> TOKEN STATIC: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_STATIC);}
"union"                                                                         {++tokencount; printf("Line %d --> TOKEN UNION: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_UNION);}
"enum"                                                                          {++tokencount; printf("Line %d --> TOKEN ENUM: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_ENUM);}
"list"                                                                          {++tokencount; printf("Line %d --> TOKEN LIST: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_LIST);}
"continue"                                                                      {++tokencount; printf("Line %d --> TOKEN CONTINUE: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_CONTINUE);}
"break"                                                                         {++tokencount; printf("Line %d --> TOKEN BREAK: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_BREAK);}
"if"                                                                            {++tokencount; printf("Line %d --> TOKEN IF: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_IF);}
"else"                                                                          {++tokencount; printf("Line %d --> TOKEN ELSE: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_ELSE);}
"while"                                                                         {++tokencount; printf("Line %d --> TOKEN WHILE: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_WHILE);}
"for"                                                                           {++tokencount; printf("Line %d --> TOKEN FOR: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_FOR);}
"switch"                                                                        {++tokencount; printf("Line %d --> TOKEN SWITCH: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_SWITCH);}
"case"                                                                          {++tokencount; printf("Line %d --> TOKEN CASE: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_CASE);}
"default"                                                                       {++tokencount; printf("Line %d --> TOKEN DEFAULT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_DEFAULT);}
"return"                                                                        {++tokencount; printf("Line %d --> TOKEN RETURN: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_RETURN);}
"length"                                                                        {++tokencount; printf("Line %d --> TOKEN LENGTH: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_LENGTH);}
"new"                                                                           {++tokencount; printf("Line %d --> TOKEN NEW: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_NEW);}
"cin"                                                                           {++tokencount; printf("Line %d --> TOKEN CIN: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_CIN);}
"cout"                                                                          {++tokencount; printf("Line %d --> TOKEN COUT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_COUT);}
"main"                                                                          {++tokencount; printf("Line %d --> TOKEN MAIN: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_MAIN);}
"this"                                                                          {++tokencount; printf("Line %d --> TOKEN THIS: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_THIS);}
"sizeof"                                                                        {++tokencount; printf("Line %d --> TOKEN SIZEOF: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_SIZEOP);}

  /* IDENTIFIER */;
\_*{letter}+(\_{1}?{alnum}|{alnum})*\_?                                         {++tokencount; printf("Line %d --> TOKEN ID: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_ID);}

 /* DATA TYPES */;
 /* put atoi return in print*/
{digit}+                                                                        {++tokencount; printf("Line %d --> TOKEN ID: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'{letter}\'                                                                    {++tokencount; printf("Line %d --> TOKEN INT: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
{digit}+\.{digit}+                                                              {++tokencount; printf("Line %d --> TOKEN FLOAT: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\"{letter}+\"                                                                   {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);}

 /* CCONST */;
\'\\n\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'\\f\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'\\t\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'\\r\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'\\b\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'\\v\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
\'{ascii}\'|\'{alnum}\'                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);}

 /* OPERATORS */;
"||"                                                                            {++tokencount; printf("Line %d --> TOKEN OROP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"&&"                                                                            {++tokencount; printf("Line %d --> TOKEN ANDOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"=="|"!="                                                                       {++tokencount; printf("Line %d --> TOKEN EQUOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
">="|"<="|">"|"<"                                                               {++tokencount; printf("Line %d --> TOKEN RELOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"++"|"--"                                                                       {++tokencount; printf("Line %d --> TOKEN INCDEC: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"+"|"-"                                                                         {++tokencount; printf("Line %d --> TOKEN ADDOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"*"|"/"|"%"                                                                     {++tokencount; printf("Line %d --> TOKEN MULOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"!"                                                                             {++tokencount; printf("Line %d --> TOKEN NOTOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}

 /* Other char-Tokens*/;
"("                                                                             {++tokencount; printf("Line %d --> TOKEN LPAREN: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
")"                                                                             {++tokencount; printf("Line %d --> TOKEN RPAREN: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
";"                                                                             {++tokencount; printf("Line %d --> TOKEN SEMI: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"."                                                                             {++tokencount; printf("Line %d --> TOKEN COLON: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
","                                                                             {++tokencount; printf("Line %d --> TOKEN COMMA: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"="                                                                             {++tokencount; printf("Line %d --> TOKEN ASSIGN: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"::"                                                                            {++tokencount; printf("Line %d --> TOKEN METH: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
":"                                                                             {++tokencount; printf("Line %d --> TOKEN COLON: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"["                                                                             {++tokencount; printf("Line %d --> TOKEN LBRACK: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"]"                                                                             {++tokencount; printf("Line %d --> TOKEN RBRACK: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"{"                                                                             {++tokencount; printf("Line %d --> TOKEN LBRACE: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"}"                                                                             {++tokencount; printf("Line %d --> TOKEN RBRACE: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"&"                                                                             {++tokencount; printf("Line %d --> TOKEN REFER: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
">>"                                                                            {++tokencount; printf("Line %d --> TOKEN INP: %s | TOKEN #%d\n", linecount, yytext, tokencount);}
"<<"                                                                            {++tokencount; printf("Line %d --> TOKEN OUT: %s | TOKEN #%d\n", linecount, yytext, tokencount);}

 /* Comments */;
"/*"                                                                            {BEGIN(COMMENT);}
<COMMENT>"*/"                                                                   {BEGIN(INITIAL);}
<COMMENT>"\n"                                                                   {++linecount;}
<COMMENT>.                                                                      {}
<COMMENT><<EOF>>                                                                {printf("COMMENT ERROR");}

"//"                                                                            {BEGIN(LINE_COMMENT);}
<LINE_COMMENT>"\n"                                                              {++linecount; BEGIN(INITIAL);}
<LINE_COMMENT>.																	{}
<LINE_COMMENT><<EOF>>                                                           {printf("LINE COMMENT ERROR");}

 /* SCONST */;
\"                                                                              {buffer_ptr = buffer; BEGIN(STRING);}
<STRING>\"                                                                      {*buffer_ptr = '\0'; BEGIN(INITIAL); {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);}}
<STRING>\n                                                                      {/* yyerror */}
<STRING>\\n                                                                     {*buffer_ptr++; *buffer_ptr = '\n';}
<STRING>\\f                                                                     {*buffer_ptr++; *buffer_ptr = '\f';}
<STRING>\\t                                                                     {*buffer_ptr++; *buffer_ptr = '\t';}
<STRING>\\r                                                                     {*buffer_ptr++; *buffer_ptr = '\r';}
<STRING>\\b                                                                     {*buffer_ptr++; *buffer_ptr = '\b';}
<STRING>\\v                                                                     {*buffer_ptr++; *buffer_ptr = '\v';}
<STRING>\\\n                                                                    {++linecount;}
<STRING>\\
<STRING><<EOF>>                                                                 {/* yyerror */}

<<EOF>>																			{return(T_EOF);}
{whitespace}                                                                    {}
\n																				{++linecount;}
.                                                                               {}
%%

/* void yyerror (char const *s){
	errorcount++;
	printf("%d errors found with %s at token %s in line %d\n", errorcount, s, yytext, linecount);
	if(MAX_ERRORS == error_count){
		fprintf (stderr, "MAX ERRORS OCCURED!\n", s);
		exit(-1);
	}
} */

int main(int argc, char *args[]){
  if(argc > 1){
      yyin = fopen(args[1], "r");
  }
  else{
      yyin = stdin;
  }

  while(yylex() != T_EOF){}
  printf("Read %d Lines\n", linecount);
  printf("Recognized %d Lectical Units\n", tokencount);
  return 0;
}
int yywrap(){}
