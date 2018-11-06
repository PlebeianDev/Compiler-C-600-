//reform id numbers... make EOF 0 or -1 and categorize


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define T_TYPEDEF     0
#define T_CHAR        1
#define T_INT         2
#define T_FLOAT       3
#define T_STRING      4
#define T_CLASS       5
#define T_PRIVATE     6
#define T_PROTECTED   7
#define T_PUBLIC      8
#define T_VOID        9
#define T_STATIC      10
#define T_UNION       11
#define T_ENUM        12
#define T_LIST        13
#define T_CONTINUE    14
#define T_BREAK       15
#define T_IF          16
#define T_ELSE        17
#define T_WHILE       18
#define T_FOR         19
#define T_SWITCH      20
#define T_CASE        21
#define T_DEFAULT     22
#define T_RETURN      23
#define T_LENGTH      24
#define T_NEW         25
#define T_CIN         26
#define T_COUT        27
#define T_MAIN        28
#define T_THIS        29
#define T_CCONST      30
#define T_SCONST      31
#define T_ICONST      32
#define T_FCONST      33
#define T_OROP        34
#define T_ANDOP       35
#define T_EQUOP       36
#define T_RELOP       37
#define T_ADDOP       38
#define T_MULOP       39
#define T_NOTOP       40
#define T_INCDEC      41
#define T_SIZEOP      42
#define T_LPAREN      43
#define T_RPAREN      44
#define T_SEMI        45
#define T_DOT         46
#define T_COMMA       47
#define T_ASSIGN      48
#define T_COLON       49
#define T_LBRACK      50
#define T_RBRACK      51
#define T_REFER       52
#define T_LBRACE      53
#define T_METH        54
#define T_INP         55
#define T_OUT         56
#define T_EOF         -1
#define T_ID          57

#define YYTYPE_IS_DECLARED
typedef union{
	const char* strval;
	int ival;
	double dval;
}YYSTYPE;