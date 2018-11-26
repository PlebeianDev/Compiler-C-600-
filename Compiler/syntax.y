/*-----      STATEMENTS       -----*/
%{
    #include "C++600_headers.h"
    int yylex(void);
    void yyerror(char const *s);

    int linecount = 0, tokencount = 0;

%}

%typedef union{
    int ival;
    double dval;
    const char* strval;
}YYSTYPE

%token<ival> T_INT, T_ENUM, T_LENGTH, T_ICONST
%type<ival> int_exp
%left T_ADDOP
%left T_MULOP
%left T_OROP
%left T_ANDOP
%left T_EQUOP

%token<dval> T_FCONST
%token<strval> T_CCONST, T_SCONST
%token T_TYPEDEF, T_CHAR, T_STRING, T_CLASS, T_PRIVATE
%token T_PROTECTED, T_PUBLIC, T_STATIC, T_UNION, T_LIST
%token T_CONTINUE, T_BREAK, T_IF, T_ELSE, T_WHILE
%token T_FOR, T_SWITCH, T_DEFAULT, T_RETURN, T_NEW
%token T_CIN, T_COUT, T_MAIN, T_THIS, T_ID
%token T_OROP, T_ANDOP, T_EQUOP, T_ADDOP, T_MULOP
%token T_INCDEC, T_SIZEOP, T_LISTFUNC, T_LPAREN, T_RPAREN
%token T_SEMI, T_DOT, T_COMMA, T_ASSIGN, T_COLON
%token T_LBRACK, T_RBRACK, T_REFER, T_LBRACE, T_RBRACE
%token T_METH, T_INP, T_OUT, T_EOF

 /* %left...? */;

/*-----         RULES         -----*/
%%
input:              /* EMPTY STRING */
                    | int_exp {/* Some feedback */}
                    ;
int_exp:            T_ICONST {$$ = $1;}
                    | int_exp T_ADDOP int_exp {$$ = $1 + $3;}
                    | int_exp T_MULOP int_exp {$$ = $1 * $3;}
                    ;

%%

/*-----     USER FUNCTIONS    -----*/

void yyerror (char const *s){
	printf("Error\n|Line %d| Token #%d| %s\n", linecount, tokencount, s);
	/* 	It must display the line number where the error occured, display the line itself
		and use the yyless() operation to redefine the input buffer of lex, retry to read
		the new word and if it fails it will yyterminate() the analyzer.
	*/
}
