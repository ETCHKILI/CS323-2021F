extern int yylineno;
extern char* yytext;

struct tnode
{
    int line; 
    char* name;
    struct tnode *left;
    struct tnode *right;
    union
    {
        char* str_val;
        int int_val;
        float flt_val;
    };
};

/*构造抽象语法树,变长参数，name:语法单元名字；num:变长参数中语法结点个数*/
struct tnode *new_tnode(char* name,int num,...);

/*遍历抽象语法树，level为树的层数*/
void print_parsetree(struct tnode*,int level);