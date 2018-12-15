all: comp

syntax.tab.c syntax.tab.h:	syntax.y
	bison -d syntax.y

lex.yy.c: complex.l syntax.tab.h
	flex complex.l

comp: lex.yy.c syntax.tab.c syntax.tab.h hashtbl.c
	gcc -o comp syntax.tab.c lex.yy.c hashtbl.c -lm

clean:
	rm comp syntax.tab.c lex.yy.c syntax.tab.h
