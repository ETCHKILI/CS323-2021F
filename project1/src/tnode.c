# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>
# include<string.h>
# include"tnode.h"

extern char ofname[40];

struct tnode *new_tnode(char* name,int num,...)
{
    va_list valist; 
    struct tnode *a=(struct tnode*)malloc(sizeof(struct tnode));
    struct tnode *temp=(struct tnode*)malloc(sizeof(struct tnode));
    // if(!a) 
    // {
    //     yyerror("out of space");
    //     exit(0);
    // }
    a->name=name;
    va_start(valist,num);

    if(num>0)
    {
        temp=va_arg(valist, struct tnode*);
        a->left=temp;
        a->line=temp->line;

        if(num>=2) 
        {
            for(int i=0; i<num-1; ++i)
            {
                temp->right=va_arg(valist,struct tnode*);
                temp=temp->right;
            }
        }
    }
    else 
    {
        int t=va_arg(valist, int); 
        a->line=t;
        
        if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE"))||(!strcmp(a->name,"CHAR")))
        {char*t;t=(char*)malloc(sizeof(char* )*40);strcpy(t,yytext);a->str_val=t;}
        else if(!strcmp(a->name,"INT")) {a->int_val=va_arg(valist, int);}
        else if(!strcmp(a->name,"FLOAT")) {a->flt_val=(float) va_arg(valist, double);}
        else {}
    }
    return a;
}

void print_parsetree(struct tnode *a,int level)
{
    if(a!=NULL)
    {
        FILE *fp = fopen(ofname, "a+");
        if(a->line!=-1){
            for(int i=0; i<level; ++i)
            fprintf(fp, "  ");
            
            fprintf(fp, "%s",a->name);
            if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE"))||(!strcmp(a->name,"CHAR")))fprintf(fp, ": %s",a->str_val);
            else if(!strcmp(a->name,"INT"))fprintf(fp, ": %d",a->int_val);
            else if(!strcmp(a->name,"FLOAT"))fprintf(fp, ": %f",a->flt_val);
            else if(check_terminate(a->name)){}
            else {fprintf(fp, " (%d)",a->line);}
            fprintf(fp, "\n");
        }
        fclose(fp);
        print_parsetree(a->left,level+1);
        print_parsetree(a->right,level);
    } 
}
// void yyerror(char*s,...) 
// {
//     va_list ap;
//     va_start(ap,s);
//     fprintf(stderr,"%d:error:",yylineno);
//     vfprintf(stderr,s,ap);
//     fprintf(stderr,"\n");
// }

int check_terminate(const char* s) 
{
    return
    !strcmp(s,"STRUCT") || !strcmp(s,"IF") || !strcmp(s,"ELSE")
    || !strcmp(s,"WHILE") || !strcmp(s,"RETURN") || !strcmp(s,"DOT") || !strcmp(s,"SEMI") 
    || !strcmp(s,"COMMA") || !strcmp(s,"ASSIGN") || !strcmp(s,"LT") || !strcmp(s,"LE") 
    || !strcmp(s,"GT") || !strcmp(s,"GE") || !strcmp(s,"NE") || !strcmp(s,"EQ") 
    || !strcmp(s,"PLUS") || !strcmp(s,"MINUS") || !strcmp(s,"MUL") || !strcmp(s,"DIV") 
    || !strcmp(s,"AND") || !strcmp(s,"OR") || !strcmp(s,"NOT") || !strcmp(s,"LP") 
    || !strcmp(s,"RP") || !strcmp(s,"LB") || !strcmp(s,"RB") || !strcmp(s,"LC") 
    || !strcmp(s,"RC") ;

}