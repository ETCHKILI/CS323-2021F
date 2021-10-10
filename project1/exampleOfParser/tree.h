struct Node
{
    int tag;
    char* value;
 
    struct Node *cld[10];
    int ncld;
};
 
struct Node *createLeaf(int tag, char *text);
struct Node *createNode(int tag, int ncld, struct Node *a[]);
struct Node *createEmpty();
void treePrint(struct Node * nd);
 
enum yyNTtype
{
    PRO = 300,  
    BLO = 301, 
    DECLS = 302,  
    DECL = 303,  
    STMTS = 304,  
    STMT = 305,  
    TYP = 306,  
    BASIC = 307,  
    LOC = 308,  
    BEXP = 309,  
    AEXP = 310,  
    JOIN = 311,  
    EQU = 312,  
    REL = 313,  
    TERM = 314,  
    UNY = 315,  
    FAC = 316 
};