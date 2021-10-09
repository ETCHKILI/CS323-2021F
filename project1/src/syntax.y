%{
    #include "lex.yy.c"

    void yyerror(const char *s);
    #include "stdio.h"
    #include "stdlib.h"
    #include "string.h"

    
    char ofname[40]; // output-file name
%}

%union 
{
    int int_val;
    float float_val;
    char *string_val;
}

%token TYPE STRUCT IF ELSE WHILE RETURN
%token DOT SEMI COMMA ASSIGN LT LE GT GE NE EQ 
%token PLUS MINUS MUL DIV AND OR NOT
%token LP RP LB RB LC RC
%token INT FLOAT CHAR ID



%%
/* high-level definition */
Program:
    ExtDefList
    ;

ExtDefList:
    ExtDef ExtDefList
    | /* allow empty string */
    ;

ExtDef:
    Specifier ExtDecList SEMI
    | Specifier SEMI
    | Specifier FunDec CompSt
    ;

ExtDecList:
    VarDec
    | VarDec COMMA ExtDecList
    ;


/* specifier */
Specifier: 
    TYPE
    | StructSpecifier
    ;
StructSpecifier: 
    STRUCT ID LC DefList RC
    | STRUCT ID
    ;

/* declarator */
VarDec: 
    ID
    | VarDec LB INT RB
    ;
FunDec: 
    ID LP VarList RP
    | ID LP RP
    ;
VarList: 
    ParamDec COMMA VarList
    | ParamDec
    ;
ParamDec: 
    Specifier VarDec
    ;
    

/* statement */
CompSt: 
    LC DefList StmtList RC
    ;
StmtList: 
    Stmt StmtList
    | /* allow empty string */
    ;
Stmt: 
    Exp SEMI
    | CompSt
    | RETURN Exp SEMI
    | IF LP Exp RP Stmt
    | IF LP Exp RP Stmt ELSE Stmt
    | WHILE LP Exp RP Stmt
    ;


/* local definition */
DefList: 
    Def DefList
    | /* allow empty string */
    ;
Def: 
    Specifier DecList SEMI
    ;
DecList: 
    Dec
    | Dec COMMA DecList
    ;
Dec: 
    VarDec
    | VarDec ASSIGN Exp
    ;


/* Expression */
Exp: 
    Exp ASSIGN Exp
    | Exp AND Exp
    | Exp OR Exp
    | Exp LT Exp
    | Exp LE Exp
    | Exp GT Exp
    | Exp GE Exp
    | Exp NE Exp
    | Exp EQ Exp
    | Exp PLUS Exp
    | Exp MINUS Exp
    | Exp MUL Exp
    | Exp DIV Exp
    | LP Exp RP
    | MINUS Exp
    | NOT Exp
    | ID LP Args RP
    | ID LP RP
    | Exp LB Exp RB
    | Exp DOT ID
    | ID
    | INT
    | FLOAT
    | CHAR
    ;
Args: 
    Exp COMMA Args
    | Exp
    

%%

void yyerror(const char *s){
    printf("error!");
}

void myerror(int type, int lineno, const char *msg){
    FILE *fp = fopen(ofname, "a+");
    if (type == 0) {
        fprintf(fp, "Error type A at Line %d: %s", lineno, msg);
    }
    if (type == 1) {
        fprintf(fp, "Error type B at Line %d: %s", lineno, msg);
    }
}

/* @TODO: print the parse tree */


int main(int argc, char **argv)
{
    if(argc != 2) {
        fprintf(stderr, "Usage: %s <file_path>\n", argv[0]);
        exit(-1);
    }
    else if(!(yyin = fopen(argv[1], "r"))) {
        perror(argv[1]);
        exit(-1);
    }

    /* get the output-file name */
    strcpy(ofname, argv[1]);
    char *dot = strrchr(ofname, '.');
    strcpy(dot, ".out");
    fopen(ofname, "w");

    yyparse();
    return 0;
}