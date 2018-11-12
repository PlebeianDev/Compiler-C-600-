//reform id numbers... make EOF 0 or -1 and categorize


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define T_EOF         0
#define T_TYPEDEF     1
#define T_CHAR        2
#define T_INT         3
#define T_FLOAT       4
#define T_STRING      5
#define T_CLASS       6
#define T_PRIVATE     7
#define T_PROTECTED   8
#define T_PUBLIC      9
#define T_VOID        10
#define T_STATIC      11
#define T_UNION       12
#define T_ENUM        13
#define T_LIST        14
#define T_CONTINUE    15
#define T_BREAK       16
#define T_IF          17
#define T_ELSE        18
#define T_WHILE       19
#define T_FOR         20
#define T_SWITCH      21
#define T_CASE        22
#define T_DEFAULT     23
#define T_RETURN      24
#define T_LENGTH      25
#define T_NEW         26
#define T_CIN         27
#define T_COUT        28
#define T_MAIN        29
#define T_THIS        30
#define T_CCONST      31
#define T_SCONST      32
#define T_ICONST      33
#define T_FCONST      34
#define T_OROP        35
#define T_ANDOP       36
#define T_EQUOP       37
#define T_RELOP       38
#define T_ADDOP       39
#define T_MULOP       40
#define T_NOTOP       41
#define T_INCDEC      42
#define T_SIZEOP      43
#define T_LPAREN      44
#define T_RPAREN      45
#define T_SEMI        46
#define T_DOT         47
#define T_COMMA       48
#define T_ASSIGN      49
#define T_COLON       50
#define T_LBRACK      51
#define T_RBRACK      52
#define T_REFER       53
#define T_LBRACE      54
#define T_METH        55
#define T_INP         56
#define T_OUT         57
#define T_ID          58

#define STR_BUF		  256

#define YYTYPE_IS_DECLARED
typedef union{
	const char* strval;
	int ival;
	double dval;
}YYSTYPE;

void yyerror (char const *s);
int dectoInt(char *s);
int hextoInt(char *s);
int octtoInt(char *s);
int bintoInt(char *s);
double dectoReal(char *s);
double hextoReal(char *s);
double octtoReal(char *s);
double bintoReal(char *s);
