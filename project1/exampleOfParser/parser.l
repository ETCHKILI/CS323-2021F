%{
#include "parser.tab.h"
#include "tree.h"
#include <string.h>
 
int line=1; 
int tempTag;
int getTag(char *);
 
%}
 
DIGIT 	[0-9]
LETTER	[A-Za-z]
SPACE	\ |\t
LINE	\n
NUM	{DIGIT}+
ID	{LETTER}({LETTER}|{DIGIT})*
 
 
%%
 
{LINE}	{line++;}
{SPACE}	{}
 
[=]	{yylval=createLeaf(SET,yytext); return SET;}
[!]	{yylval=createLeaf(NOT,yytext); return NOT;}
[+]	{yylval=createLeaf(ADD,yytext); return ADD;}
[-]	{yylval=createLeaf(SUB,yytext); return SUB;}
[*]	{yylval=createLeaf(MUL,yytext); return MUL;}
[/]	{yylval=createLeaf(DIV,yytext); return DIV;}
[>]	{yylval=createLeaf(GT,yytext); return GT;}
[<]	{yylval=createLeaf(LT,yytext); return LT;}
[>][=]	{yylval=createLeaf(GE,yytext); return GE;}
[<][=]	{yylval=createLeaf(LE,yytext); return LE;}
[=][=]	{yylval=createLeaf(EQ,yytext); return EQ;}
[!][=]	{yylval=createLeaf(NE,yytext); return NE;}
[&][&]	{yylval=createLeaf(AND,yytext); return AND;}
[|][|]	{yylval=createLeaf(OR,yytext); return OR;}
 
[;]	{yylval=createLeaf(SC,yytext); return SC;}
[(]	{yylval=createLeaf(LP,yytext); return LP;}
[)]	{yylval=createLeaf(RP,yytext); return RP;}
[{]	{yylval=createLeaf(LB,yytext); return LB;}
[}]	{yylval=createLeaf(RB,yytext); return RB;}
\[	{yylval=createLeaf(LSB,yytext); return LSB;}
\]	{yylval=createLeaf(RSB,yytext); return RSB;}
 
{NUM}	{
		yylval=createLeaf(NUM,yytext); 
		return NUM;
	}
{ID}	{
		tempTag=getTag(yytext); 
		yylval=createLeaf(tempTag,yytext);
		return tempTag;
	}
 
.	{printf("lexical error: line %d, %s\n", line, yytext);}
 
%%
 
int getTag(char *s)
{
	if(strcmp(s,"if")==0)
		return IF;
	else if(strcmp(s,"else")==0)
		return ELSE;
	else if(strcmp(s,"while")==0)
		return WHILE;
	else if(strcmp(s,"do")==0)
		return DO;
	else if(strcmp(s,"break")==0)
		return BREAK;
	else if(strcmp(s,"true")==0)
		return TRUE;
	else if(strcmp(s,"false")==0)
		return FALSE;
	else if(strcmp(s,"int")==0)
		return INT;
	else if(strcmp(s,"bool")==0)
		return BOOL;
	else 
		return ID;
}