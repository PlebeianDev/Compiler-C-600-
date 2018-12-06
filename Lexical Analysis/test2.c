#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define print_expr "Error l.%d | Token #%d [id: %d] : %s\n"
struct error_history{
	char *form;
	int current_line;
	int current_token_number;
	int current_token_id;
	char *current_token;
};// end of struct

typedef struct error_history eh;

// global values simulating the yytext, errorcount, tokencount, linecount variables
char *yytext = "nikos";
int errorcount = 5;
int tokencount = 45;
int linecount = 8;

int yyerror(int token_code);

// declare a global array of structs eh
eh em[5];

int main(int argc, char *args[]){

	yyerror(45);
	return(0);
}// end of main

int yyerror(int token_code){
	int i;
	for(i = 0; i < 10; i++)
		printf("==");
	putchar('\n');
	errorcount++;
	// em = (eh*)malloc(sizeof(eh));
	em[4].form = strdup(print_expr);
	em[4].current_line = linecount;
	em[4].current_token_number = tokencount;
	em[4].current_token_id = token_code;
	em[4].current_token = strdup(yytext);
	if(errorcount > 5){
		printf(em[4].form, em[4].current_line, em[4].current_token_number, em[4].current_token_id, em[4].current_token);
		exit(0);
	}
	else
		exit(0);
}// end of yyerror
