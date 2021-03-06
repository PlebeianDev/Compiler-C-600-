/* Definition Section */

%{
//#include "C++600_headers.h"
#include "syntax.tab.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define STR_BUF 256
/*
struct error_history{
  char *form;
  char *message;
  int current_line;
  int current_tokencount;
  char *current_token;
};
typedef struct error_history eh; */

int tokencount = 0;
int linecount = 1;
int errorcount = 0;

/* eh em[5]; */

char buffer[STR_BUF];
char* buffer_ptr;
YYSTYPE yylval;

extern int error_distinction;
extern void yyerror (const char *s);
int dectoInt(char *s);
int hextoInt(char *s);
int octtoInt(char *s);
int bintoInt(char *s);
double dectoReal(char *s);
double hextoReal(char *s);
double octtoReal(char *s);
double bintoReal(char *s);
%}

%option case-insensitive

digit                                                                           [0-9]
letter                                                                          [a-zA-Z]
alnum                                                                           [a-zA-Z0-9]
hex                                                                             [a-fA-F0-9]
bin                                                                             [0-1]
oct                                                                             [0-7]
ascii                                                                           [!"#$%&'()*+,-./:;<=>?@\[\\\]^_`{|}~]
whitespace                                                                      [ \t]

%x LINE_COMMENT
%x COMMENT
%x STRING

 /* FUNCTION FOR EXPONENTIAL ELEMENTS | ERROR HANDLING, YYLESS */;

/* Rules Section */
%%
 /* Key Words */;
"typedef"                                                                       {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_TYPEDEF);}
"char"                                                                          {++tokencount; printf("Line %d --> TOKEN CHAR: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_CHAR);}
"int"                                                                           {++tokencount; printf("Line %d --> TOKEN INT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_INT);}
"float"                                                                         {++tokencount; printf("Line %d --> TOKEN FLOAT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_FLOAT);}
"string"                                                                        {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_STRING);}
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

 /* list func */
[C](([A][D]*)|([D]+))[R]							                            {++tokencount; printf("Line %d --> LISTFUNC: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_LISTFUNC);}

 /* IDENTIFIER */;
\_*{letter}+(\_{1}?{alnum}|{alnum})*\_?                                         {++tokencount; printf("Line %d --> TOKEN ID: %s | TOKEN #%d\n", linecount, yytext, tokencount); yylval.strval = strdup(yytext); return(T_ID);}

 /* DATA TYPES */;
 /* Floating point */
0(x|X)([a-fA-F1-9]{hex}*)?[.]((0*[a-fA-F1-9]+{hex}*)|0)				            {++tokencount; printf("Line %d --> Hex_FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.dval = hextoReal(yytext);printf("TOKEN literal value: %.2lf\n", hextoReal(yytext));return(T_FCONST);}
0(o|O)([1-7]{oct}*)?[.]((0*[1-7]+{oct}*)|0)                                     {++tokencount; printf("Line %d --> Oct_FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.dval = octtoReal(yytext);printf("TOKEN literal value: %.2lf\n", octtoReal(yytext));return(T_FCONST);}
0(b|B)(1{bin}*)?[.]((0*1+{bin}*)|0)										     	{++tokencount; printf("Line %d --> Bin_FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.dval = bintoReal(yytext);printf("TOKEN literal value: %.2lf\n", bintoReal(yytext));return(T_FCONST);}
([1-9]{digit}*)?[.]((0*[1-9]+{digit}*)|0)					                    {++tokencount; printf("Line %d --> FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.dval = dectoReal(yytext);printf("TOKEN literal value: %.2lf\n", dectoReal(yytext));return(T_FCONST);}

 /* Integers */
0(x|X)[a-fA-F1-9]{hex}* 							                            {++tokencount; printf("Line %d --> Hex_ICONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.ival= hextoInt(yytext);printf("TOKEN literal value: %d\n", hextoInt(yytext));return(T_ICONST);}
0(o|O)[1-7]{oct}*								                                {++tokencount; printf("Line %d --> Oct_ICONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.ival= octtoInt(yytext);printf("TOKEN literal value: %d\n", octtoInt(yytext));return(T_ICONST);}
0(b|B)1{bin}*									                                {++tokencount; printf("Line %d --> Bin_ICONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.ival = bintoInt(yytext);printf("TOKEN literal value: %d\n", bintoInt(yytext));return(T_ICONST);}
0|[1-9]{digit}*									                                {++tokencount; printf("Line %d --> ICONST: %s | TOKEN #%d\n", linecount, yytext, tokencount); yylval.ival = dectoInt(yytext);printf("TOKEN literal value: %d\n", dectoInt(yytext));return(T_ICONST);}

 /* exponential elements */
([1-9]{digit}*)?[.]((0*[1-9]+{digit}*)|0)([E]([+-]?)(([1-9]{digit}*)|0))?		{++tokencount; printf("Line %d --> EXP_FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_FCONST);}
0|[1-9]{digit}*([E]([+-]?)(([1-9]{digit}*)|0))?									{++tokencount; printf("Line %d --> EXP_FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_FCONST);}

 /* CCONST */;
\'\\n\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = strdup(yytext); return(T_CCONST);}
\'\\f\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = strdup(yytext); return(T_CCONST);}
\'\\t\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = strdup(yytext); return(T_CCONST);}
\'\\r\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = strdup(yytext); return(T_CCONST);}
\'\\b\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = strdup(yytext); return(T_CCONST);}
\'\\v\'                                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = strdup(yytext); return(T_CCONST);}
\'{ascii}\'|\'{alnum}\'                                                         {++tokencount; printf("Line %d --> TOKEN CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = strdup(yytext); return(T_CCONST);}

 /* OPERATORS */;
"||"                                                                            {++tokencount; printf("Line %d --> TOKEN OROP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_OROP);}
"&&"                                                                            {++tokencount; printf("Line %d --> TOKEN ANDOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_ANDOP);}
"=="|"!="                                                                       {++tokencount; printf("Line %d --> TOKEN EQUOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_EQUOP);}
">="|"<="|">"|"<"                                                               {++tokencount; printf("Line %d --> TOKEN RELOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_RELOP);}
"++"|"--"                                                                       {++tokencount; printf("Line %d --> TOKEN INCDEC: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_INCDEC);}
"+"|"-"                                                                         {++tokencount; printf("Line %d --> TOKEN ADDOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_ADDOP);}
"*"|"/"|"%"                                                                     {++tokencount; printf("Line %d --> TOKEN MULOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_MULOP);}
"!"                                                                             {++tokencount; printf("Line %d --> TOKEN NOTOP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_NOTOP);}

 /* Other char-Tokens*/;
"("                                                                             {++tokencount; printf("Line %d --> TOKEN LPAREN: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_LPAREN);}
")"                                                                             {++tokencount; printf("Line %d --> TOKEN RPAREN: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_RPAREN);}
";"                                                                             {++tokencount; printf("Line %d --> TOKEN SEMI: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_SEMI);}
"."                                                                             {++tokencount; printf("Line %d --> TOKEN COLON: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_DOT);}
","                                                                             {++tokencount; printf("Line %d --> TOKEN COMMA: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_COMMA);}
"="                                                                             {++tokencount; printf("Line %d --> TOKEN ASSIGN: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_ASSIGN);}
"::"                                                                            {++tokencount; printf("Line %d --> TOKEN METH: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_METH);}
":"                                                                             {++tokencount; printf("Line %d --> TOKEN COLON: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_COLON);}
"["                                                                             {++tokencount; printf("Line %d --> TOKEN LBRACK: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_LBRACK);}
"]"                                                                             {++tokencount; printf("Line %d --> TOKEN RBRACK: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_RBRACK);}
"{"                                                                             {++tokencount; printf("Line %d --> TOKEN LBRACE: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_LBRACE);}
"}"                                                                             {++tokencount; printf("Line %d --> TOKEN RBRACE: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_RBRACE);}
"&"                                                                             {++tokencount; printf("Line %d --> TOKEN REFER: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_REFER);}
">>"                                                                            {++tokencount; printf("Line %d --> TOKEN INP: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_INP);}
"<<"                                                                            {++tokencount; printf("Line %d --> TOKEN OUT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_OUT);}

 /* Comments */;
"/*"                                                                            {BEGIN(COMMENT);}
<COMMENT>"*/"                                                                   {BEGIN(INITIAL);}
<COMMENT>"\n"                                                                   {++linecount;}
<COMMENT>.                                                                      {/* this part is ignored */}
<COMMENT><<EOF>>                                                                {error_distinction = 2; yyerror("fatal error: MULTI LINE COMMENT ERROR\n");yyterminate();}

"//"                                                                            {BEGIN(LINE_COMMENT);}
<LINE_COMMENT>"\n"                                                              {++linecount; BEGIN(INITIAL);}
<LINE_COMMENT>.																	{}
<LINE_COMMENT><<EOF>>                                                           {error_distinction = 2; yyerror("fatal error: LINE COMMENT ERROR\n");yyterminate(); /* since it can't continue if it is not terminated*/}

 /* SCONST */;
\"                                                                              {BEGIN(STRING); buffer_ptr = buffer;}
<STRING>\"                                                                      {BEGIN(INITIAL); *buffer_ptr = '\0'; ++tokencount; printf("Line %d --> TOKEN SCONST: %s | TOKEN #%d\n", linecount, buffer, tokencount); yylval.strval = strdup(buffer); return(T_SCONST);}
<STRING>\n                                                                      {yyerror("fatal error: illegal linefeed in string");yyterminate();}
<STRING>\\n                                                                     {*buffer_ptr++ = '\n'; /* *buffer_ptr++; */}
<STRING>\\f                                                                     {*buffer_ptr++ = '\f'; /* *buffer_ptr++; */}
<STRING>\\t                                                                     {*buffer_ptr++ = '\t'; /* *buffer_ptr++; */}
<STRING>\\r                                                                     {*buffer_ptr++ = '\r'; /* *buffer_ptr++; */}
<STRING>\\b                                                                     {*buffer_ptr++ = '\b'; /* *buffer_ptr++; */}
<STRING>\\v                                                                     {*buffer_ptr++ = '\v'; /* *buffer_ptr++; */}
<STRING>\\\\                                                                    {*buffer_ptr++ = '\\'; /* *buffer_ptr++; */}
<STRING>\\\"                                                                    {*buffer_ptr++ = '"'; /* *buffer_ptr++; */}
<STRING>\\\n                                                                    {linecount++;}
<STRING>\\({alnum}|_)?                                                          {*buffer_ptr++ = yytext[1]; /* *buffer_ptr++; */}
<STRING>[^\\\n\"]+                                                              {char *token_index = yytext; while (*token_index){ *buffer_ptr++ = *token_index++; /* *buffer_ptr++; *token_index++; */ }}
<STRING><<EOF>>                                                                 {error_distinction = 0; yyerror("fatal error: missing \"\t");yyterminate();}

<<EOF>>										                                    {return(T_EOF);}
{whitespace}*                                                                   {}
\n										                                        {++linecount;}
.                                                                               {error_distinction = 1; yyerror("Invalid token"); yyless(1); /*since we want to reenter the token, without the character who is causing the error*/}
%%

 /* to be remade */

int dectoInt(char *s){
	int res;
	res = atoi(s);
	return res;
}

int hextoInt(char *s){
	int res;
	res = (int)strtol(&s[2], NULL, 16);
	return res;
}

int octtoInt(char *s){
	int res;
	res = (int)strtol(&s[2], NULL, 8);
	return res;
}


int bintoInt(char *s){
	int res;
	res = (int)strtol(&s[2], NULL, 2);
	return res;
}

double dectoReal(char *s){
	int res;
	res = atof(s);
	return res;
}

double hextoReal(char *s){
	double res;
	int len_r, i;
	char *character;
	character = strchr(s, '.');
	len_r = strlen(character) - 1;
	res = (int)strtol(&s[2], &character, 16);
	for(i = 0; i <= len_r; i++){
        if(character[i] <= '9')
            res = (character[i]-'0')*(1/pow(16,i)) + res;
        else
            res = (character[i]-'A')*(1/pow(16,i)) + res;
	}
	return res;
}

double octtoReal(char *s){
	double res;
	int len_r, i;
	char *character;
	character = strchr(s, '.');
	len_r = strlen(character) - 1;
	res = (int)strtol(&s[2], &character, 8);
	for(i = 0; i <= len_r; i++){
		res = (character[i]-'0')*(1/pow(8,i)) + res;
	}
	return res;
}

double bintoReal(char *s){
	double res;
	int len_r, i;
	char *character;
	character = strchr(s, '.');
	len_r = strlen(character) - 1;
	res = (int)strtol(&s[2], &character, 2);
	for(i = 1; i <= len_r; i++){
		res = (character[i]-'0')*(1/pow(2,i)) + res;
	}
	return res;
}

int yywrap(){}
