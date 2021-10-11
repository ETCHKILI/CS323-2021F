%{
    int htoi(const char* hex_int);
    int lineno = 1;
    void check_int(const char* int_str);
    void myerror(int type, int lineno, const char *msg);

    #include "syntax.tab.h"
    #include "string.h"
    #include "tree.h"
    #include "syntax.tab.h"
%}

digit       [0-9]
letter      [a-zA-Z]
letter_     {letter}|_

dec_int     0|([1-9][0-9]*)
hex_int     0x(0|[1-9a-fA-F][0-9a-fA-F]*)   

float       (0|[1-9][0-9]*)\.[0-9]*[1-9][0-9]*

char        \'.\'
hex_char    \'[\x00-\xFF]\'

id          {letter_}({digit}|{letter_})*
bad_id      {digit}({digit}|{letter_})*

next_line   \n
empty       [ \n\r\t]


%%
"int" | "float" | "char"    { yylval.a = newast("TYPE",0,yylineno); return TYPE; }
"struct"    { yylval.a = newast("TYPE",0,yylineno); return STRUCT; }
"if"        { yylval.a = newast("IF",0,yylineno); return IF; }
"else"      { yylval.a = newast("ELSE",0,yylineno); return ELSE; }
"while"     { yylval.a = newast("WHILE",0,yylineno); return WHILE; }
"return"    { yylval.a = newast("RETURN",0,yylineno); return RETURN; }
"."         { yylval.a = newast("DOT",0,yylineno); return DOT; }
";"         { yylval.a = newast("SEMI",0,yylineno); return SEMI; }
","         { yylval.a = newast("COMMA",0,yylineno); return COMMA; }
"="         { yylval.a = newast("ASSIGN",0,yylineno); return ASSIGN; }
"<"         { yylval.a = newast("LT",0,yylineno); return LT; }
"<="        { yylval.a = newast("LE",0,yylineno); return LE; }
">"         { yylval.a = newast("GT",0,yylineno); return GT; }
">="        { yylval.a = newast("GE",0,yylineno); return GE; }
"!="        { yylval.a = newast("NE",0,yylineno); return NE; }
"=="        { yylval.a = newast("EQ",0,yylineno); return EQ; }
"+"         { yylval.a = newast("PLUS",0,yylineno); return PLUS; }
"-"         { yylval.a = newast("MINUS",0,yylineno); return MINUS; }
"*"         { yylval.a = newast("MUL",0,yylineno); return MUL; }
"/"         { yylval.a = newast("DIV",0,yylineno); return DIV; }
"&&"        { yylval.a = newast("AND",0,yylineno); return AND; }
"||"        { yylval.a = newast("OR",0,yylineno); return OR; }
"!"         { yylval.a = newast("NOT",0,yylineno); return NOT; }
"("         { yylval.a = newast("LP",0,yylineno); return LP; }
")"         { yylval.a = newast("RP",0,yylineno); return RP; }
"["         { yylval.a = newast("LB",0,yylineno); return LB; }
"]"         { yylval.a = newast("RB",0,yylineno); return RB; }
"{"         { yylval.a = newast("LC",0,yylineno); return LC; }
"}"         { yylval.a = newast("RC",0,yylineno); return RC; }

{dec_int}   { 
            check_int(yytext); 
            yylval.int_val = atoi(yytext); 
            return INT; 
            }

{hex_int}   { yylval.int_val = htoi(yytext); return INT; }


{float}     { yylval.float_val = atof(yytext); return FLOAT; }

{char}|{hex_char}   { yylval.string_val = strdup(yytext); return CHAR; }

{id}        { yylval.string_val = strdup(yytext); return ID; }

{next_line} { lineno += 1; }
{empty}     { }

.           { myerror(0, lineno, yytext); }

%%

void check_int(const char* int_str)
{
    int size = (int) strlen(int_str);
    if (size > 10) 
    {
        myerror(0, lineno, "too large integer");
    }

    long long val = atoll(int_str);
    if (val > 2147483647)
    {
        myerror(0, lineno, "too large integer");
    }
}

int htoi(const char* hex_int) 
{
    int size = (int) strlen(hex_int);
    if (size > 10)
    {
        myerror(0, lineno, "too large integer"); /* TODO: call myerror correctly */
    }

    int res = 0;
    int hexdigit;
    for (int i = 2; i < size; ++i)
    {
        if (hex_int[i] >= '0' && hex_int[i] <= '9') {
            hexdigit = hex_int[i] - '0';
            res = 16 * res + hexdigit;
        }
        if (hex_int[i] >= 'A' && hex_int[i] <= 'F') {
            hexdigit = hex_int[i] - 'A' + 10;
            res = 16 * res + hexdigit;
        }
        if (hex_int[i] >= 'a' && hex_int[i] <= 'f') {
            hexdigit = hex_int[i] - 'a' + 10;
            res = 16 * res + hexdigit;
        }
    }

    return res;
}