%{
    #include "syntax.tab.h"
    #include "string.h"

    int htoi(const char* hex_int);

    int lineno = 1;
%}

digit       [0-9]
letter      [a-zA-Z]
letter_     {letter}|_

dec_int     0|([1-9][0-9]*)
hex_int     0x(0|[1-9a-fA-F][0-9a-fA-F]*)   

float 

char        \'.\'
hex_char    \\0x

id          {letter_}+({digit}|{letter_})*

next_line   \n
empty       [ \n\r\t]


%%

"struct"    { return STRUCT; }
"if"        { return IF; }
"else"      { return ELSE; }
"while"     { return WHILE; }
"return"    { return RETURN; }
"."         { return DOT; }
";"         { return SEMI; }
","         { return COMMA; }
"="         { return ASSIGN; }
"<"         { return LT; }
"<="        { return LE; }
">"         { return GT; }
">="        { return GE; }
"!="        { return NE; }
"=="        { return EQ; }
"+"         { return PLUS; }
"-"         { return MINUS; }
"*"         { return MUL; }
"/"         { return DIV; }
"&&"        { return AND; }
"||"        { return OR; }
"!"         { return NOT; }
"("         { return LP; }
")"         { return RP; }
"["         { return LB; }
"]"         { return RB; }
"{"         { return LC; }
"}"         { return RC; }

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

.           { yyerror(); }

%%

void check_int(const char* int_str)
{
    int size = (int) strlen(int_str);
    if (size > 10) 
    {
        yyerror();
    }

    long long val = atoll(int_str);
    if (val > 2147483647)
    {
        yyerror();
    }
}

int htoi(const char* hex_int) 
{
    int size = (int) strlen(hex_int);
    if (size > 10)
    {
        yyerror(); /* TODO: call yyerror correctly */
    }

    int res = 0;
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