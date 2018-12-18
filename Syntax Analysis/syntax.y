/*-----      STATEMENTS       -----*/
%{
    //#include "C++600_headers.h"
    #include "hashtbl.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <math.h>
    #define STR_BUF	256
    
    extern int yylex();
    extern char *yytext;
    extern FILE* yyin;

    extern int linecount, tokencount, errorcount;
    extern char buffer[STR_BUF], *buffer_ptr;

    /* Hashtable components */
    
    int scope = 0;
    int error_distinction = 0;
    HASHTBL *hashtbl;

    void yyerror (const char *s);
%}

/* Error handling starts from the bottom, else causes red/red conflicts */
%error-verbose

%union YYSTYPE{
    int ival;
    double dval;
    char* strval;
};

%token<ival> T_ICONST
%token<dval> T_FCONST
%token<strval> T_CCONST T_SCONST
%token<strval> T_EOF T_TYPEDEF T_CHAR T_INT T_FLOAT
%token<strval> T_STRING T_CLASS T_PRIVATE T_PROTECTED T_PUBLIC
%token<strval> T_VOID T_STATIC T_UNION T_ENUM T_LIST
%token<strval> T_CONTINUE T_BREAK T_IF T_ELSE T_WHILE
%token<strval> T_FOR T_SWITCH T_CASE T_DEFAULT T_RETURN
%token<strval> T_LENGTH T_NEW T_CIN T_COUT T_MAIN
%token<strval> T_THIS T_OROP T_ANDOP T_EQUOP T_RELOP
%token<strval> T_ADDOP T_MULOP T_NOTOP T_INCDEC T_SIZEOP
%token<strval> T_LPAREN T_RPAREN T_SEMI T_DOT T_COMMA
%token<strval> T_ASSIGN T_COLON T_LBRACK T_RBRACK T_REFER
%token<strval> T_LBRACE T_RBRACE T_METH T_INP T_OUT
%token<strval> T_ID T_LISTFUNC

%left T_COMMA
%left T_OROP
%left T_ANDOP
%left T_EQUOP
%left T_RELOP
%left T_ADDOP
%left T_MULOP
%right T_SIZEOP T_NOTOP

/* Use of fake token to resolve dangling else as in lab-example*/
%nonassoc LOWER_THAN_ELSE
%nonassoc T_ELSE

%type <strval> program global_declaration global_declarations typedef_declaration typename standard_type listspec dims dim enum_declaration
%type <strval> enum_body id_list initializer init_value expression variable general_expression assignment expression_list constant listexpression
%type <strval> init_values class_declaration class_body parent members_methods access member_or_method member var_declaration variabledefs variabledef
%type <strval> anonymous_union union_body fields field method short_func_declaration short_par_func_header func_header_start parameter_types
%type <strval> pass_list_dims nopar_func_header union_declaration global_var_declaration init_variabledefs init_variabledef func_declaration full_func_declaration
%type <strval> full_par_func_header class_func_header_start func_class parameter_list pass_variabledef nopar_class_func_header decl_statements declarations decltype
%type <strval> statements statement expression_statement if_statement if_tail while_statement for_statement optexpr switch_statement switch_tail decl_cases
%type <strval> casestatements casestatement single_casestatement return_statement io_statement in_list in_item out_list out_item comp_statement main_function main_header

%start program

/*-----         RULES         -----*/
%%
program:                            global_declarations main_function
                                    ;
global_declarations:                global_declarations global_declaration
                                    | %empty {}
                                    ;
global_declaration:                 typedef_declaration
                                    | enum_declaration
                                    | class_declaration
                                    | union_declaration
                                    | global_var_declaration
                                    | func_declaration
                                    ;
typedef_declaration:                T_TYPEDEF typename listspec T_ID                            {hashtbl_insert(hashtbl, $4, NULL, scope); scope++;}
                                    dims T_SEMI                                                 {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
typename:                           standard_type
                                    | T_ID                                                      {hashtbl_insert(hashtbl, $1, NULL, scope);}
                                    ;
standard_type:                      T_CHAR
                                    | T_INT
                                    | T_FLOAT
                                    | T_STRING
                                    | T_VOID
                                    ;
listspec:                           T_LIST
                                    | %empty {}
                                    ;
dims:                               dims dim
                                    | %empty {}
                                    ;
dim:                                T_LBRACK T_ICONST T_RBRACK
                                    | T_LBRACK T_RBRACK
                                    ;
enum_declaration:                   T_ENUM T_ID                                                 {hashtbl_insert(hashtbl, $2, NULL, scope); scope++;}
                                    enum_body                                                   {hashtbl_get(hashtbl, scope);scope--;}
                                    T_SEMI
                                    ;
enum_body:                          T_LBRACE id_list T_RBRACE
                                    ;
id_list:                            id_list T_COMMA T_ID initializer                            {hashtbl_insert(hashtbl, $3, NULL, scope);}
                                    | T_ID                                                      {hashtbl_insert(hashtbl, $1, NULL, scope);}
                                    initializer
                                    ;
initializer:                        T_ASSIGN init_value
                                    | %empty {}
                                    ;
init_value:                         expression
                                    | T_LBRACE init_values T_RBRACE
                                    ;
expression:                         expression T_OROP expression
                                    | expression T_ANDOP expression
                                    | expression T_EQUOP expression
                                    | expression T_RELOP expression
                                    | expression T_ADDOP expression
                                    | expression T_MULOP expression
                                    | T_NOTOP expression
                                    | T_ADDOP expression
                                    | T_SIZEOP expression
                                    | T_INCDEC variable
                                    | variable T_INCDEC
                                    | variable
                                    | variable T_LPAREN expression_list T_RPAREN
                                    | T_LENGTH T_LPAREN general_expression T_RPAREN
                                    | T_NEW T_LPAREN general_expression T_RPAREN
                                    | constant
                                    | T_LPAREN general_expression T_RPAREN
                                    | T_LPAREN standard_type T_RPAREN
                                    | listexpression
                                    ;
variable:                           variable T_LBRACK general_expression T_RBRACK
                                    | variable T_DOT T_ID                                       {hashtbl_insert(hashtbl, $3, NULL, scope);}
                                    | T_LISTFUNC T_LPAREN general_expression T_RPAREN
                                    | decltype T_ID                                             {hashtbl_insert(hashtbl, $2, NULL, scope);}
                                    | T_THIS
                                    ;
general_expression:                 general_expression T_COMMA general_expression
                                    | assignment
                                    ;
assignment:                         variable T_ASSIGN assignment
                                    | expression
                                    ;
expression_list:                    general_expression
                                    | %empty {}
                                    ;
constant:                           T_CCONST
                                    | T_ICONST
                                    | T_FCONST
                                    | T_SCONST
                                    ;
listexpression:                     T_LBRACK expression_list T_RBRACK
                                    ;
init_values:                        init_values T_COMMA init_value
                                    | init_value
                                    ;
class_declaration:                  T_CLASS T_ID                                                {hashtbl_insert(hashtbl, $2, NULL, scope); scope++;}
                                    class_body
                                    T_SEMI                                                      {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
class_body:                         parent T_LBRACE members_methods T_RBRACE
                                    ;
parent:                             T_COLON T_ID                                                {hashtbl_insert(hashtbl, $2, NULL, scope);}
                                    | %empty {}
                                    ;
members_methods:                    members_methods access member_or_method
                                    | access member_or_method
                                    ;
access:                             T_PRIVATE T_COLON
                                    | T_PROTECTED T_COLON
                                    | T_PUBLIC T_COLON
                                    | %empty {}
                                    ;
member_or_method:                   member
                                    | method
                                    ;
member:                             var_declaration
                                    | anonymous_union
                                    ;
var_declaration:                    typename variabledefs T_SEMI
                                    ;
variabledefs:                       variabledefs T_COMMA variabledef
                                    | variabledef
                                    ;
variabledef:                        listspec T_ID dims                                          {hashtbl_insert(hashtbl, $2, NULL, scope);}
                                    ;
anonymous_union:                    T_UNION                                                     {scope++;}
                                    union_body                                                  {hashtbl_get(hashtbl, scope); scope--;}
                                    T_SEMI
                                    ;
union_body:                         T_LBRACE fields T_RBRACE
                                    ;
fields:                             fields field
                                    | field
                                    ;
field:                              var_declaration
                                    ;
method:                             short_func_declaration
                                    ;
short_func_declaration:             short_par_func_header T_SEMI                                {hashtbl_get(hashtbl, scope); scope--;}
                                    | nopar_func_header T_SEMI                                  {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
short_par_func_header:              func_header_start T_LPAREN parameter_types T_RPAREN
                                    ;
func_header_start:                  typename listspec T_ID                                      {hashtbl_insert(hashtbl, $3, NULL, scope); scope++;}
                                    ;
parameter_types:                    parameter_types T_COMMA typename pass_list_dims
                                    | typename pass_list_dims
                                    ;
pass_list_dims:                     T_REFER
                                    | listspec dims
                                    ;
nopar_func_header:                  func_header_start T_LPAREN T_RPAREN
                                    ;
union_declaration:                  T_UNION T_ID                                                {hashtbl_insert(hashtbl, $2, NULL, scope); scope++;}
                                    union_body
                                    T_SEMI                                                      {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
global_var_declaration:             typename init_variabledefs T_SEMI
                                    ;
init_variabledefs:                  init_variabledefs T_COMMA init_variabledef
                                    | init_variabledef
                                    ;
init_variabledef:                   variabledef initializer
                                    ;
func_declaration:                   short_func_declaration
                                    | full_func_declaration
                                    ;
full_func_declaration:              full_par_func_header T_LBRACE decl_statements T_RBRACE      {hashtbl_get(hashtbl, scope); scope--;}
                                    | nopar_class_func_header T_LBRACE decl_statements T_RBRACE {hashtbl_get(hashtbl, scope); scope--;}
                                    | nopar_func_header T_LBRACE decl_statements T_RBRACE       {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
full_par_func_header:               class_func_header_start T_LPAREN parameter_list T_RPAREN
                                    | func_header_start T_LPAREN parameter_list T_RPAREN
                                    ;
class_func_header_start:            typename listspec func_class T_ID                           {hashtbl_insert(hashtbl, $4, NULL, scope); scope++;}
                                    ;
func_class:                         T_ID T_METH                                                 {hashtbl_insert(hashtbl, $1, NULL, scope);}
                                    ;
parameter_list:                     parameter_list T_COMMA typename pass_variabledef
                                    | typename pass_variabledef
                                    ;
pass_variabledef:                   variabledef
                                    | T_REFER T_ID                                              {hashtbl_insert(hashtbl, $2, NULL, scope);}
                                    ;
nopar_class_func_header:            class_func_header_start T_LPAREN T_RPAREN
                                    ;
decl_statements:                    declarations statements
                                    | declarations
                                    | statements
                                    | %empty {}
                                    ;
declarations:                       declarations decltype typename variabledefs T_SEMI
                                    | decltype typename variabledefs T_SEMI
                                    ;
decltype:                           T_STATIC
                                    | %empty {}
                                    ;
statements:                         statements statement
                                    | statement
                                    ;
statement:                          expression_statement
                                    | if_statement
                                    | while_statement
                                    | for_statement
                                    | switch_statement
                                    | return_statement
                                    | io_statement
                                    | comp_statement
                                    | T_CONTINUE T_SEMI
                                    | T_BREAK T_SEMI
                                    | T_SEMI
                                    ;
expression_statement:               general_expression T_SEMI
                                    ;
if_statement:                       T_IF T_LPAREN                                               {scope++;}
                                    general_expression T_RPAREN statement                       {hashtbl_get(hashtbl, scope); scope--;}
                                    if_tail
                                    ;
if_tail:                            T_ELSE                                                      {scope++;}
                                    statement                                                   {hashtbl_get(hashtbl, scope); scope--;}
                                    | %empty %prec LOWER_THAN_ELSE                              {}
                                    ;
while_statement:                    T_WHILE T_LPAREN                                            {scope++;}
                                    general_expression T_RPAREN statement                       {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
for_statement:                      T_FOR T_LPAREN                                              {scope++;}
                                    optexpr T_SEMI optexpr T_SEMI optexpr T_RPAREN statement    {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
optexpr:                            general_expression
                                    | %empty {}
                                    ;
switch_statement:                   T_SWITCH T_LPAREN                                           {scope++;}
                                    general_expression T_RPAREN switch_tail                     {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
switch_tail:                        T_LBRACE decl_cases T_RBRACE
                                    | error decl_cases T_RBRACE                                 {error_distinction = 2; yyerror("Missing {"); yyerrok;}
                                    | T_LBRACE decl_cases error                                 {error_distinction = 2; yyerror("Missing }"); yyerrok;}
                                    | single_casestatement
                                    ;
decl_cases:                         declarations casestatements
                                    | declarations
                                    | casestatements
                                    | %empty {}
                                    ;
casestatements:                     casestatements casestatement
                                    | casestatement
                                    ;
casestatement:                      T_CASE constant T_COLON casestatement
                                    | T_CASE constant T_COLON                                   {scope++;}
                                    statements                                                  {hashtbl_get(hashtbl, scope); scope--;}
                                    | T_DEFAULT T_COLON                                         {scope++;}
                                    statements                                                  {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
single_casestatement:               T_CASE constant T_COLON single_casestatement
                                    | T_CASE constant T_COLON                                   {scope++;}
                                    statement                                                   {hashtbl_get(hashtbl, scope); scope--;}
                                    ;
return_statement:                   T_RETURN optexpr T_SEMI
                                    | T_RETURN optexpr error                                    {error_distinction = 2; yyerror("Missing ;"); yyerrok;}
                                    ;
io_statement:                       T_CIN T_INP in_list T_SEMI
                                    | T_CIN T_INP in_list error                                 {error_distinction = 2; yyerror("Missing ;"); yyerrok;}
                                    | T_COUT T_OUT out_list T_SEMI
                                    | T_COUT T_OUT out_list error                               {error_distinction = 2; yyerror("Missing ;"); yyerrok;}
                                    ;
in_list:                            in_list T_INP in_item
                                    | in_item
                                    ;
in_item:                            variable
                                    ;
out_list:                           out_list T_OUT out_item
                                    | out_item
                                    ;
out_item:                           general_expression
                                    ;
comp_statement:                     T_LBRACE decl_statements T_RBRACE
                                    ;
main_function:                      main_header
                                    T_LBRACE decl_statements T_RBRACE                           {hashtbl_get(hashtbl, scope); scope--;}
                                    | error decl_statements T_RBRACE                            {error_distinction = 2; yyerror("Missing {"); yyerrok;}
                                    | T_LBRACE decl_statements error                            {error_distinction = 2; yyerror("Missing }"); yyerrok;}
                                    ;
main_header:                        T_INP T_MAIN T_LPAREN T_RPAREN                              {scope++;}
                                    | T_INP T_MAIN error T_RPAREN                               {error_distinction = 2; yyerror("Missing ("); yyerrok;}
                                    | T_INP T_MAIN T_LPAREN error                               {error_distinction = 2; yyerror("Missing )"); yyerrok;}
                                    ;

%%

/*-----     USER FUNCTIONS    -----*/

void yyerror (const char *s){
    errorcount++;
    if(error_distinction == 1){// an unrecognizable character.
		printf("Error in l.%d | Token #%d \033[1;31m %s: %s\n \033[0m \n", linecount, tokencount+errorcount, yytext, s);
        error_distinction = 0;
    }else if(error_distinction == 0){// unacceptable characters in strings.
		*buffer_ptr = '\0';   // terminate the error causing string so you can print it.
        printf("Error in l.%d | Token #%d \033[1;31m \"%s\": %s\n \033[0m \n", linecount, tokencount+errorcount, buffer, s);
	}
    else{// premature end for comments; mainly for multiline comments;
        printf("Error in l.%d |\033[1;31m %s \033[0m \n", linecount, s);
        error_distinction = 0;
    }
    /* if(MAX_ERRORS <= 0) return; */
    if(errorcount == 5){
        printf("Reached maximum number of errors! Exiting Analyzer\n");
        exit(-1); // terminate the whole analyzing process;
    }
}

int main(int argc, char *args[]){

    hashtbl = hashtbl_create(10, NULL);
    if(!hashtbl){
        printf("Error creating hashtable!\n"); 
        exit(EXIT_FAILURE);
    }

    if(argc > 1){
      yyin = fopen(args[1], "r");
      if(yyin == NULL){
          printf("Error opening file !\n");
          return -1;
      }
    }
    else{
      yyin = stdin;
    }

    do {
      yyparse();
    } while(!feof(yyin));

    hashtbl_get(hashtbl, scope); //scope 0 hashtbl
    hashtbl_destroy(hashtbl); //free the mem of hashtbl

    fclose(yyin);
    return 0;
}
