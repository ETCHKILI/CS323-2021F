CC=gcc
FLEX=flex
BISON=bison
	
.PHONY: clean
.lex: src/lex.l
	$(FLEX) src/lex.l
.syntax: src/syntax.y
	$(BISON) -t -d -v src/syntax.y
splc: .lex .syntax
	$(CC) syntax.tab.c -lfl -ly -o bin/splc
clean:
	@rm -f bin/
