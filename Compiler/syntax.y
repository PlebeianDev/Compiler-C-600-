/*-----      STATEMENTS       -----*/
%{
    #include "C++600_headers.h"
    extern int yylex();
    extern int yyparse();
    extern FILE* yyin;
    //define yyerror in here or in header
%}

%typedef union{
    int ival;
    double dval;
    const char* strval;
}YYSTYPE

%token<ival> T_ICONST
%token<dval> T_FCONST
%token<strval> T_CCONST, T_SCONST
%token<strval> T_EOF, T_TYPEDEF, T_CHAR, T_INT, T_FLOAT
%token<strval> T_STRING, T_CLASS, T_PRIVATE, T_PROTECTED, T_PUBLIC
%token<strval> T_VOID, T_STATIC, T_UNION, T_ENUM, T_LIST
%token<strval> T_CONTINUE, T_BREAK, T_IF, T_ELSE, T_WHILE
%token<strval> T_FOR, T_SWITCH, T_CASE, T_DEFAULT, T_RETURN
%token<strval> T_LENGTH, T_NEW, T_CIN, T_COUT, T_MAIN
%token<strval> T_THIS, T_OROP, T_ANDOP, T_EQUOP, T_RELOP
%token<strval> T_ADDOP, T_MULOP, T_NOTOP, T_INCDEC, T_SIZEOP
%token<strval> T_LPAREN, T_RPAREN, T_SEMI, T_DOT, T_COMMA
%token<strval> T_ASSIGN, T_COLON, T_LBRACK, T_RBRACK, T_REFER
%token<strval> T_LBRACE, T_RBRACE, T_METH, T_INP, T_OUT
%token<strval> T_ID, T_LISTFUNC

%type<ival> iexpr
%type<dval> dexpr
%type<strval> expr

/*-----         RULES         -----*/
%%
program:                            global_declarations main_function
                                    ;
global_declarations:                global_declarations global_declaration
                                    | /*ε*/
                                    ;
global_declaration:                 typedef_declaration
                                    | enum_declaration
                                    | class_declaration
                                    | union_declaration
                                    | global_var_declaration
                                    | func_declaration
                                    ;
typedef_declaration:                T_TYPEDEF typename listspec T_ID dims T_SEMI
                                    ;
typename:                           standard_type
                                    | T_ID
                                    ;
standard_type:                      T_CHAR
                                    | T_INT
                                    | T_FLOAT
                                    | T_STRING
                                    | 

%%

/*-----     USER FUNCTIONS    -----*/
