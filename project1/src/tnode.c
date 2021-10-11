# include<stdio.h>
# include<stdlib.h>
# include<stdarg.h>//变长参数函数所需的头文件
# include<string.h>
# include"tnode.h"

struct tnode *new_tnode(char* name,int num,...)//抽象语法树建立
{
    va_list valist; //定义变长参数列表
    struct tnode *a=(struct tnode*)malloc(sizeof(struct tnode));//新生成的父节点
    struct tnode *temp=(struct tnode*)malloc(sizeof(struct tnode));
    // if(!a) 
    // {
    //     yyerror("out of space");
    //     exit(0);
    // }
    a->name=name;//语法单元名字
    va_start(valist,num);//初始化变长参数为num后的参数

    if(num>0)//num>0为非终结符：变长参数均为语法树结点，孩子兄弟表示法
    {
        temp=va_arg(valist, struct tnode*);//取变长参数列表中的第一个结点设为a的左孩子
        a->left=temp;
        a->line=temp->line;//父节点a的行号等于左孩子的行号

        if(num>=2) //可以规约到a的语法单元>=2
        {
            for(int i=0; i<num-1; ++i)//取变长参数列表中的剩余结点，依次设置成兄弟结点
            {
                temp->right=va_arg(valist,struct tnode*);
                temp=temp->right;
            }
        }
    }
    else //num==0为终结符或产生空的语法单元：第1个变长参数表示行号，产生空的语法单元行号为-1。
    {
        int t=va_arg(valist, int); //取第1个变长参数
        a->line=t;
        //"ID,TYPE,INTEGER，借助union保存yytext的值
        if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE"))||(!strcmp(a->name,"CHAR")))
        {char*t;t=(char*)malloc(sizeof(char* )*40);strcpy(t,yytext);a->str_val=t;}
        else if(!strcmp(a->name,"INT")) {a->int_val=va_arg(valist, int);}
        else if(!strcmp(a->name,"FLOAT")) {a->flt_val=(float) va_arg(valist, double);}
        else {}
    }
    return a;
}

void print_parsetree(struct tnode *a,int level)//先序遍历抽象语法树
{
    if(a!=NULL)
    {
        
        if(a->line!=-1){
            for(int i=0; i<level; ++i)//孩子结点相对父节点缩进2个空格
            printf("  ");
            
            printf("%s ",a->name);
            if((!strcmp(a->name,"ID"))||(!strcmp(a->name,"TYPE"))||(!strcmp(a->name,"CHAR")))printf(":%s ",a->str_val);
            else if(!strcmp(a->name,"INT"))printf(":%d",a->int_val);
            else if(!strcmp(a->name,"FLOAT"))printf(":%f",a->flt_val);
            else
                printf("(%d)",a->line);
                printf("\n");
        }
        

        print_parsetree(a->left,level+1);//遍历左子树
        print_parsetree(a->right,level);//遍历右子树
    }
}
// void yyerror(char*s,...) //变长参数错误处理函数
// {
//     va_list ap;
//     va_start(ap,s);
//     fprintf(stderr,"%d:error:",yylineno);//错误行号
//     vfprintf(stderr,s,ap);
//     fprintf(stderr,"\n");
// }