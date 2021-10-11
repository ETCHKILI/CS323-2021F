%{
    #include "lex.yy.c"
    #include "tree.h"
    void yyerror(const char *s);
    #include "stdio.h"
    #include "stdlib.h"
    #include "string.h"

    
    char ofname[40];
%}

%union 
{
    int int_val;
    float float_val;
    char *string_val;
    struct ast* a;
    double d;
}

%token <a> TYPE STRUCT IF ELSE WHILE RETURN
%token <a> DOT SEMI COMMA ASSIGN LT LE GT GE NE EQ 
%token <a> PLUS MINUS MUL DIV AND OR NOT
%token <a> LP RP LB RB LC RC
%token <a> INT FLOAT CHAR ID

%type  <a> Program ExtDefList ExtDef ExtDecList Specifier StructSpecifier VarDec FunDec VarList ParamDec CompSt StmtList Stmt DefList Def DecList Dec Exp Args


%%
/* high-level definition */
Program:
    ExtDefList {$$=newast("Program",1,$1);printf("打印syntax tree:\n");eval($$,0);printf("syntax tree打印完毕!\n\n");}
    ;

ExtDefList:
    ExtDef ExtDefList {$$=newast("ExtDefList",2,$1,$2);}
    | /* allow empty string */ {$$=newast("ExtDef",0,-1);}
    ;

ExtDef:
    Specifier ExtDecList SEMI {$$=newast("ExtDef",3,$1,$2,$3);}
    | Specifier SEMI {$$=newast("ExtDef",2,$1,$2);}
    | Specifier FunDec CompSt {$$=newast("ExtDef",3,$1,$2,$3);}
    ;

ExtDecList:
    VarDec {$$=newast("ExtDecList",1,$1);}
    | VarDec COMMA ExtDecList {$$=newast("ExtDecList",3,$1,$2,$3);}
    ;


/* specifier */
Specifier: 
    TYPE {$$=newast("Specifier",1,$1);}
    | StructSpecifier {$$=newast("Specifier",1,$1);}
    ;
StructSpecifier: 
    STRUCT ID LC DefList RC {$$=newast("StructSpecifier",5,$1,$2,$3,$4,$5);}
    | STRUCT ID {$$=newast("StructSpecifier",2,$1,$2);}
    ;

/* declarator */
VarDec: 
    ID {$$=newast("VarDec",1,$1);}
    | VarDec LB INT RB {$$=newast("VarDec",4,$1,$2,$3,$4);}
    ;
FunDec: 
    ID LP VarList RP {$$=newast("FunDec",4,$1,$2,$3,$4);}
    | ID LP RP {$$=newast("FunDec",3,$1,$2,$3);}
    ;
VarList: 
    ParamDec COMMA VarList {$$=newast("VarList",3,$1,$2,$3);}
    | ParamDec {$$=newast("VarList",1,$1);}
    ;
ParamDec: 
    Specifier VarDec {$$=newast("ParamDec",2,$1,$2);}
    ;
    

/* statement */
CompSt: 
    LC DefList StmtList RC {$$=newast("CompSt",4,$1,$2,$3,$4);}
    ;
StmtList: 
    Stmt StmtList {$$=newast("StmtList",2,$1,$2);}
    | /* allow empty string */ {$$=newast("StmtList",0,-1);}
    ;
Stmt: 
    Exp SEMI {$$=newast("Stmt",2,$1,$2);}
    | CompSt {$$=newast("Stmt",1,$1);}
    | RETURN Exp SEMI {$$=newast("Stmt",3,$1,$2,$3);}
    | IF LP Exp RP Stmt{$$=newast("Stmt",5,$1,$2,$3,$4,$5);}
    | IF LP Exp RP Stmt ELSE Stmt {$$=newast("Stmt",7,$1,$2,$3,$4,$5,$6,$7);}
    | WHILE LP Exp RP Stmt {$$=newast("Stmt",5,$1,$2,$3,$4,$5);}
    ;


/* local definition */
DefList: 
    Def DefList {$$=newast("DefList",2,$1,$2);}
    | /* allow empty string */ {$$=newast("DefList",0,-1);}
    ;
Def: 
    Specifier DecList SEMI {$$=newast("Def",3,$1,$2,$3);}
    ;
DecList: 
    Dec {$$=newast("DecList",1,$1);}
    | Dec COMMA DecList {$$=newast("DecList",3,$1,$2,$3);}
    ;
Dec: 
    VarDec {$$=newast("Dec",1,$1);}
    | VarDec ASSIGN Exp {$$=newast("Dec",3,$1,$2,$3);}
    ;


/* Expression */
Exp: 
    Exp ASSIGN Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp AND Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp OR Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp LT Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp LE Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp GT Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp GE Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp NE Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp EQ Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp PLUS Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp MINUS Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp MUL Exp {$$=newast("Exp",3,$1,$2,$3);}
    | Exp DIV Exp {$$=newast("Exp",3,$1,$2,$3);}
    | LP Exp RP {$$=newast("Exp",3,$1,$2,$3);}
    | MINUS Exp {$$=newast("Exp",2,$1,$2);}
    | NOT Exp {$$=newast("Exp",2,$1,$2);}
    | ID LP Args RP {$$=newast("Exp",4,$1,$2,$3,$4);}
    | ID LP RP {$$=newast("Exp",3,$1,$2,$3);}
    | Exp LB Exp RB {$$=newast("Exp",4,$1,$2,$3,$4);}
    | Exp DOT ID {$$=newast("Exp",3,$1,$2,$3);}
    | ID {$$=newast("Exp",1,$1);}
    | INT {$$=newast("Exp",1,$1);}
    | FLOAT {$$=newast("Exp",1,$1);}
    | CHAR {$$=newast("Exp",1,$1);}
    ;
Args: 
    Exp COMMA Args {$$=newast("Args",3,$1,$2,$3);}
    | Exp {$$=newast("Args",1,$1);}
    

%%

void yyerror(const char *s){
    printf("error!");
}

/* @TODO: rewrite myerror() */
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
void printparsetree(){
    
}

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

    strcpy(ofname, argv[1]);
    char *dot = strrchr(ofname, '.');
    strcpy(dot, ".out");

    yyparse();
    return 0;
}