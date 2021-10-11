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


struct tnode *new_tnode(char* name,int num,...);

int check_terminate(const char* name);

void print_parsetree(struct tnode*,int level);