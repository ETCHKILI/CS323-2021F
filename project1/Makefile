CC=gcc
FLEX=flex
BISON=bison
	
.PHONY: clean
.lex: src/lex.l
	$(FLEX) --yylineno src/lex.l
.syntax: src/syntax.y
	$(BISON) -t -d -v src/syntax.y
splc: .lex .syntax src/tnode.c
	$(CC) syntax.tab.c src/tnode.c -lfl -ly -o bin/splc
clean:
	@rm -f bin/
