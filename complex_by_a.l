/* Definition Section */

%{
#include "C++600_headers.h"
int tokencount = 0;
int linecount = 1;
YYSTYPE yylval;
%}

%option case-insensitive

digit                       [0-9]
letter                      [a-zA-Z]
alnum                       [a-zA-Z0-9]
hex							[a-fA-F0-9]
oct							[0-7]
bin							[0-1]

%x COMMENTS
%x STRINGS
/* Rules Section */

/*
    add error handling wherever needed
*/

%%

"\*"																			{BEGIN(COMMENT);}
<COMMENTS>"*/"																	{BEGIN(INITIAL);}
<COMMENTS>\n																	{++linecount;}
<COMMENTS>.																		{/* do nothing*/}
<COMMENTS><<EOF>>																{yyerror("Premature End of File\n");yyterminate();}

[ \t]+																			{/*	blank space	*/}
[\n]																			{++linecount;}
"typedef"                                                                       {++tokencount; printf("Line %d --> TOKEN TYPEDEF: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_TYPEDEF);}
"char"                                                                          {++tokencount; printf("Line %d --> TOKEN CHAR: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_CHAR);}
"int"                                                                           {++tokencount; printf("Line %d --> TOKEN INT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_INT);}
"float"                                                                         {++tokencount; printf("Line %d --> TOKEN FLOAT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_FLOAT);}
"str"                                                                           {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_STR);}
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
"cout"                                                                          {++tokencount; printf("Line %d --> TOKEN COUT: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_COUNT);}
"main"                                                                          {++tokencount; printf("Line %d --> TOKEN MAIN: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_MAIN);}
"this"                                                                          {++tokencount; printf("Line %d --> TOKEN THIS: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_THIS);}
"sizeof"                                                                        {++tokencount; printf("Line %d --> TOKEN SIZEOF: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(T_SIZEOF);}

/** note that those rules must be checked and redefined according to Dimbot's instructions **/
{digit}+                                                                        {++tokencount; printf("Line %d --> ICONST: %s | TOKEN #%d\n", linecount, yytext, tokencount); yylval.ival = dectoInt(yytext);return(T_ICONST);}
\'{letter}\'                                                                    {++tokencount; printf("Line %d --> CCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount); yylval.strval = yytext;return(T_CCONST);} /* Ask if we need %,$...*/
{digit}+\.{digit}+                                                              {++tokencount; printf("Line %d --> FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount); yylval.dval = dectoReal(yytext);return(T_FCONST);}
0(b|B)1?{bin}+																	{++tokencount; printf("Line %d --> Bin_ICONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.ival = bintoInt(yytext);return(T_ICONST);}
0(o|O)[1-7]{oct}+
0(x|X)[a-fA-F1-9]{hex}+																	{++tokencount; printf("Line %d --> Hex_ICONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(hextoInt(yytext));}
{bin}+\.{bin}+																	{++tokencount; printf("Line %d --> Bin_FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(bintoReal(yytext));}
{hex}+\.{hex}+																	{++tokencount; printf("Line %d --> Hex_FCONST: %s | TOKEN #%d\n", linecount, yytext, tokencount);return(hextoReal(yytext));}
{oct}+\.{oct}+
\"{letter}+\"                                                                   {++tokencount; printf("Line %d --> TOKEN STRING: %s | TOKEN #%d\n", linecount, yytext, tokencount);}

/**	The strings by using the state method. Based on dimbot's Instructions
"\""																			{yymore(); BEGIN(STRINGS);}
<STRINGS>"\""																	{yymore(); ++tokencount; BEGIN(INITIAL);}
<STRINGS>"\\"
<STRINGS>"\n"
<STRINGS>"\\n"
/** etc. on strings **/

\_?\_?{letter}+(\_{1}?{alnum}|{alnum})*\_?                                      {++tokencount; printf("Line %d --> TOKEN ID: %s | TOKEN #%d\n", linecount, yytext, tokencount);yylval.strval = yytext;return(T_ID);}

/* OPERATORS */;
\|{2}                                                                           {printf("TOKEN OROP: %s\n", yytext);}
\&{2}                                                                           {printf("TOKEN ANDOP: %s\n", yytext);}
\={2}|\!\=                                                                      {printf("TOKEN EQUOP: %s\n", yytext);}
\>|\>\=|\<|\<\=                                                                 {printf("TOKEN RELOP: %s\n", yytext);}
\+|\-                                                                           {printf("TOKEN ADDOP: %s\n" yytext);}
\*|\/|\%                                                                        {printf("TOKEN MULOP: %s\n" yytext);}
\!                                                                              {printf("TOKEN NOTOP: %s\n" yytext);}
\+{2}|\-{2}                                                                     {printf("TOKEN INCDEC: %s\n" yytext);}

/** based on Dimbot's Instructions, the EOF must be defined as 0 **/
<<EOF>>																			{return(T_EOF);}

/** final rule **/
.																				{yyerror("illegal character");}
%%

int yywrap(){
	return(1);
}

void yyerror (char const *s)
{
	errorcount++;
	printf("%d errors found with %s at token %s in line %d\n", errorcount, s, yytext, linecount);
	if(MAX_ERRORS == error_count){
		fprintf (stderr, "MAX ERRORS OCCURED!\n", s);
		exit(-1);
	}
}

int dectoInt(char *s){
	int res;
	res = atoi(s);
	return res;
}

int hextoInt(char *s){
	int res;
	res = (int)strtol(&str[2], NULL, 16);
	return res;
}

int bintoInt(char *s){
	int res;
	res = (int)strol(&str[2], NULL, 2);
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
		res = (character[i]-'0')*(1/pow(2,i)) + res;
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
int yywrap(){return(58);}
int yymore(){};
int main(int argc, char *args[]){
    
	if(argc > 1)
		yyin = fopen(args[1], "r");
	else
		yyin = stdin;
	
    while(yylex() != T_EOF){}
	printf("Read %d Lines\n", linecount);
	printf("Recognized %d Lectical Units\n", tokencount);
    return 0;
}