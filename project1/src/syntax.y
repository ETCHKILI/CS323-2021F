%{
    #include "lex.yy.c"
    void yyerror(const char *s);
    #include "stdio.h"
    #include "stdlib.h"
    #include "string.h"
    
    struct tnode *head;
%}

%union 
{
    struct tnode *nd;
}

%nonassoc <nd> ILLEGAL_TOKEN
%nonassoc <nd> LOWER_ELSE
%nonassoc <nd> ELSE
%token <nd> TYPE STRUCT
%token <nd> IF WHILE RETURN
%token <nd> INT
%token <nd> FLOAT
%token <nd> CHAR
%token <nd> ID
%right <nd> ASSIGN
%left <nd> OR
%left <nd> AND
%left <nd> LT LE GT GE NE EQ

%left <nd> PLUS MINUS
%left <nd> MUL DIV
%right <nd> NOT
%left <nd> LP RP LB RB DOT
%token <nd> SEMI COMMA
%token <nd> LC RC

%type <nd> Program ExtDefList
%type <nd> ExtDef ExtDecList Specifier StructSpecifier VarDec
%type <nd> FunDec VarList ParamDec CompSt StmtList Stmt DefList
%type <nd> Def DecList Dec Args Exp

%%
/* high-level definition */
Program:
    ExtDefList {head=new_tnode("Program",1,$1); $$=head;}
    ;

ExtDefList:
    {$$=new_tnode("ExtDef",0,-1);}
    | ExtDef ExtDefList {$$=new_tnode("ExtDefList",2,$1,$2);} 
    ;

ExtDef:
    Specifier ExtDecList SEMI {$$=new_tnode("ExtDef",3,$1,$2,$3);}
    | Specifier SEMI {$$=new_tnode("ExtDef",2,$1,$2);}
    | Specifier FunDec CompSt {$$=new_tnode("ExtDef",3,$1,$2,$3);}
    | Specifier ExtDecList error { myerror(1, yylineno, "Missing Semi"); }
    | Specifier error { myerror(1, yylineno, "Missing Semi"); }
    ;

ExtDecList:
    VarDec {$$=new_tnode("ExtDecList",1,$1);}
    | VarDec COMMA ExtDecList {$$=new_tnode("ExtDecList",3,$1,$2,$3);}
    | VarDec ExtDecList error { myerror(1, yylineno, "Missing Comma"); }
    ;


/* specifier */
Specifier: 
    TYPE {$$=new_tnode("Specifier",1,$1);}
    | StructSpecifier {$$=new_tnode("Specifier",1,$1);}
    ;
StructSpecifier: 
    STRUCT ID LC DefList RC {$$=new_tnode("StructSpecifier",5,$1,$2,$3,$4,$5);}
    | STRUCT ID {$$=new_tnode("StructSpecifier",2,$1,$2);}
    | STRUCT ID LC DefList error { myerror(1, yylineno, "Missing RC"); }
    ;

/* declarator */
VarDec: 
    ID {$$=new_tnode("VarDec",1,$1);}
    | VarDec LB INT RB {$$=new_tnode("VarDec",4,$1,$2,$3,$4);}
    | VarDec LB INT error %prec LOWER_ELSE { myerror(1, yylineno, "Missing RB"); }
    ;
FunDec: 
    ID LP VarList RP {$$=new_tnode("FunDec",4,$1,$2,$3,$4);}
    | ID LP RP {$$=new_tnode("FunDec",3,$1,$2,$3);}
    | ID LP VarList error { myerror(1, yylineno, "Missing RP"); }
    | ID LP error { myerror(1, yylineno, "Missing RP"); }
    ;
VarList: 
    ParamDec COMMA VarList {$$=new_tnode("VarList",3,$1,$2,$3);}
    | ParamDec VarList error { myerror(1, yylineno, "Missing Comma"); }
    | ParamDec {$$=new_tnode("VarList",1,$1);}
    ;
ParamDec: 
    Specifier VarDec {$$=new_tnode("ParamDec",2,$1,$2);}
    ;  

/* statement */
CompSt: 
    LC DefList StmtList RC {$$=new_tnode("CompSt",4,$1,$2,$3,$4);}
    ;
StmtList: 
    {$$=new_tnode("StmtList",0,-1);}
    | Stmt StmtList {$$=new_tnode("StmtList",2,$1,$2);}
    ;
Stmt: 
    Exp SEMI {$$=new_tnode("Stmt",2,$1,$2);}
    | CompSt {$$=new_tnode("Stmt",1,$1);}
    | RETURN Exp SEMI {$$=new_tnode("Stmt",3,$1,$2,$3);}
    | IF LP Exp RP Stmt %prec LOWER_ELSE {$$=new_tnode("Stmt",5,$1,$2,$3,$4,$5);}
    | IF LP Exp RP Stmt ELSE Stmt {$$=new_tnode("Stmt",7,$1,$2,$3,$4,$5,$6,$7);}
    | WHILE LP Exp RP Stmt {$$=new_tnode("Stmt",5,$1,$2,$3,$4,$5);}
    | WHILE LP Exp error Stmt {myerror(1,yylineno,"Missing RP");}
    | RETURN Exp error {myerror(1,yylineno,"Missing SEMI");}
    | IF LP Exp error Stmt {myerror(1,yylineno,"Missing RP");}
    | IF error Exp RP Stmt {myerror(1,yylineno,"Missing LP");}
    ;

/* local definition */
DefList: 
    {$$=new_tnode("DefList",0,-1);}
    | Def DefList {$$=new_tnode("DefList",2,$1,$2);}
    ;
Def: 
    Specifier DecList SEMI {$$=new_tnode("Def",3,$1,$2,$3);}
    | Specifier DecList error {myerror(1,yylineno,"Missing SEMI");}
    | error DecList SEMI {myerror(1,yylineno,"Missing Specifier");}
    ;
DecList: 
    Dec {$$=new_tnode("DecList",1,$1);}
    | Dec COMMA DecList {$$=new_tnode("DecList",3,$1,$2,$3);}
    | Dec DecList error {myerror(1,yylineno,"Missing Comma");}
    ;
Dec: 
    VarDec {$$=new_tnode("Dec",1,$1);}
    | VarDec ASSIGN Exp {$$=new_tnode("Dec",3,$1,$2,$3);}
    ;


/* Expression */
Exp: 
    Exp ASSIGN Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp AND Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp OR Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp LT Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp LE Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp GT Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp GE Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp NE Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp EQ Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp PLUS Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp MINUS Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp MUL Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | Exp DIV Exp {$$=new_tnode("Exp",3,$1,$2,$3);}
    | LP Exp RP {$$=new_tnode("Exp",3,$1,$2,$3);}
    | LP Exp error {myerror(1,yylineno,"Missing RP");}
    | MINUS Exp {$$=new_tnode("Exp",2,$1,$2);}
    | NOT Exp {$$=new_tnode("Exp",2,$1,$2);}
    | ID LP Args RP {$$=new_tnode("Exp",4,$1,$2,$3,$4);}
    | ID LP Args error {myerror(1,yylineno,"Missing RP");}
    | ID LP RP {$$=new_tnode("Exp",3,$1,$2,$3);}
    | ID LP error   {myerror(1,yylineno,"Missing RP");}
    | Exp LB Exp RB {$$=new_tnode("Exp",4,$1,$2,$3,$4);}
    | Exp LB Exp error  {myerror(1,yylineno,"Missing RB");}
    | Exp DOT ID {$$=new_tnode("Exp",3,$1,$2,$3);}
    | ID {$$=new_tnode("Exp",1,$1);}
    | INT {$$=new_tnode("Exp",1,$1);}
    | FLOAT {$$=new_tnode("Exp",1,$1);}
    | CHAR {$$=new_tnode("Exp",1,$1);}
    | Exp ILLEGAL_TOKEN Exp {$$=new_tnode("Exp",2,$1,$2);}
    | ILLEGAL_TOKEN {$$=new_tnode("Exp",1,$1);}
    ;
Args: 
    Exp COMMA Args {$$=new_tnode("Args",3,$1,$2,$3);}
    | Exp {$$=new_tnode("Args",1,$1);}
    | Exp Args error {myerror(1,yylineno,"Missing Comma");}
    

%%

void yyerror(const char *s){
    printf("%s\n",s);
}

void myerror(int type, int line, const char *msg){
    error_occur = 1;
    FILE *fp = fopen(ofname, "a+");
    if (type == 0) {
        fprintf(fp, "Error type A at Line %d: %s\n", line, msg);
    }
    if (type == 1) {
        fprintf(fp, "Error type B at Line %d: %s\n", line, msg);
    }
    fclose(fp);
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
    FILE *fp = fopen(ofname, "w");
    fclose(fp);

    yyparse();

    if(!error_occur){
        print_parsetree(head,0);
    }
    return 0;
}