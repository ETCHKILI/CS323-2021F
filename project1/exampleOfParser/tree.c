#include "parser.tab.h"
#include "tree.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
 
 
struct Node *createLeaf(int tag, char *text)
{
	struct Node *nd=(struct Node*)malloc(sizeof(struct Node));
	nd->ncld=0;
	nd->tag=tag;
	if(tag==ID || tag==NUM)
	{
		nd->value=(char*)malloc(sizeof(char)*strlen(text));
		strcpy(nd->value,text);
	}
	else
		nd->value=NULL;
	return nd;
}
 
struct Node *createNode(int tag, int ncld, struct Node *a[])
{
	int i;
	struct Node *nd=(struct Node*)malloc(sizeof(struct Node));
	nd->ncld=ncld;
	nd->tag=tag;
	nd->value=NULL;
	for(i=0; i<nd->ncld; i++)
		(nd->cld)[i]=a[i];
	return nd;
}
 
struct Node *createEmpty()
{
	struct Node *nd=(struct Node*)malloc(sizeof(struct Node));
	nd->ncld=0;
	nd->tag=EPS;
	nd->value=NULL;
 
	return nd;
}
 
void treePrintLevel(struct Node *nd, int lvl)
{
	int i;
	if(nd!=NULL)
	{
		for(i=0; i<4*lvl; i++)
			printf("-");
		
		if(nd->value==NULL)
			printf("<%d,->\n", nd->tag);
		else 
			printf("<%d,%s>\n", nd->tag, nd->value);
		
		for (i=0; i<nd->ncld; i++) {  
			treePrintLevel((nd->cld)[i], lvl+1);
		}
	}
}
 
void treePrint(struct Node *nd)
{
	treePrintLevel(nd, 0);
}