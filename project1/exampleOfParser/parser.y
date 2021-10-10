%{
 
#include "tree.h"
#include <stdio.h>
#include <stdlib.h>
 
struct Node *cldArray[10];
int cldN;
int nTag;
 
void yyerror (char const *s);
int yylex();
 
%}
 
//set attribute type
%define api.value.type {struct Node *}
 
/* declare tokens */
%token  IF 256  ELSE 257  WHILE 258  DO 259  BREAK 260   TRUE 261  FALSE 262  INT 263  BOOL 264  AND 265  OR 266  NOT 267  EQ 268  NE 269  GT 270  GE 271  LT 272  LE 273  SET 274  ADD 275  SUB 276  MUL 277  DIV 278  SC 279  LP 280  RP 281  LB 282  RB 283  LSB 284  RSB 285  ID 286  NUM 287 
 
%token  EPS 317
   
   
   	
%%
 
program: block {nTag=PRO; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray); treePrint($$);};
 
block: LB decls stmts RB {nTag=BLO; cldN=4; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; $$=createNode(nTag, cldN, cldArray);};
 
decls: {nTag=DECLS; cldN=1; cldArray[0]=createEmpty(); $$=createNode(nTag, cldN, cldArray);}
  | decls decl {nTag=DECLS; cldN=2; cldArray[0]=$1; cldArray[1]=$2; $$=createNode(nTag, cldN, cldArray);};
 
stmts: {nTag=STMTS; cldN=1; cldArray[0]=createEmpty(); $$=createNode(nTag, cldN, cldArray);}
  | stmts stmt {nTag=STMTS; cldN=2; cldArray[0]=$1; cldArray[1]=$2; $$=createNode(nTag, cldN, cldArray);};
 
decl: type ID SC {nTag=DECL; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);};
 
type: type LSB NUM RSB {nTag=TYP; cldN=4; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; $$=createNode(nTag, cldN, cldArray);}
  | basic {nTag=TYP; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
basic: INT {nTag=BASIC; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);}
  | BOOL {nTag=BASIC; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
stmt: loc SET bexpr SC {nTag=STMT; cldN=4; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; $$=createNode(nTag, cldN, cldArray);}
  | IF LP bexpr RP stmt {nTag=STMT; cldN=5; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; cldArray[4]=$5; $$=createNode(nTag, cldN, cldArray);}
  | IF LP bexpr RP stmt ELSE stmt {nTag=STMT; cldN=7; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; cldArray[4]=$5; cldArray[5]=$6; cldArray[6]=$7; $$=createNode(nTag, cldN, cldArray);}
  | WHILE LP bexpr RP stmt {nTag=STMT; cldN=5; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; cldArray[4]=$5; $$=createNode(nTag, cldN, cldArray);}
  | DO stmt WHILE LP bexpr RP SC {nTag=STMT; cldN=7; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; cldArray[4]=$5; cldArray[5]=$6; cldArray[6]=$7; $$=createNode(nTag, cldN, cldArray);}
  | BREAK SC {nTag=STMT; cldN=2; cldArray[0]=$1; cldArray[1]=$2; $$=createNode(nTag, cldN, cldArray);}
  | block {nTag=STMT; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
loc: loc LSB aexpr RSB {nTag=LOC; cldN=4; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; cldArray[3]=$4; $$=createNode(nTag, cldN, cldArray);}
  | ID {nTag=LOC; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
bexpr: bexpr OR join {nTag=BEXP; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | join {nTag=BEXP; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
join: join AND equality {nTag=JOIN; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | equality {nTag=JOIN; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
equality: equality EQ rel {nTag=EQU; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | equality NE rel {nTag=EQU; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | rel {nTag=EQU; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
rel: aexpr LT aexpr {nTag=REL; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);} 
  | aexpr LE aexpr {nTag=REL; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | aexpr GT aexpr {nTag=REL; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | aexpr GE aexpr {nTag=REL; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | aexpr {nTag=REL; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
aexpr: aexpr ADD term {nTag=AEXP; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | aexpr SUB term {nTag=AEXP; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | term {nTag=AEXP; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
term: term MUL unary {nTag=TERM; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | term DIV unary {nTag=TERM; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | unary {nTag=TERM; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
unary: NOT unary {nTag=UNY; cldN=2; cldArray[0]=$1; cldArray[1]=$2; $$=createNode(nTag, cldN, cldArray);}
  | SUB unary {nTag=UNY; cldN=2; cldArray[0]=$1; cldArray[1]=$2; $$=createNode(nTag, cldN, cldArray);}
  | factor {nTag=UNY; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
factor: LP bexpr RP {nTag=FAC; cldN=3; cldArray[0]=$1; cldArray[1]=$2; cldArray[2]=$3; $$=createNode(nTag, cldN, cldArray);}
  | loc {nTag=FAC; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
  | NUM {nTag=FAC; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
  | TRUE {nTag=FAC; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
  | FALSE {nTag=FAC; cldN=1; cldArray[0]=$1; $$=createNode(nTag, cldN, cldArray);};
 
 
 
%%
 
int main()
{
  	yyparse();
  	return 0;
}
 
void yyerror (char const *s)
{
  	fprintf (stderr, "%s\n", s);
}