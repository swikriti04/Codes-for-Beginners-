#include <stdio.h>
#include <stdlib.h>

struct node
{
  int num;
  struct node *nextptr;
}
 
stnode, *enode;

int SearchElement(int);
void main()
{
	int n,i,FindElem,FindPlc;
	stnode.nextptr=NULL;
	enode=&stnode;
	
    printf(" Input the number of nodes : ");
    scanf("%d", &n);	
	printf("\n");
	for(i=0;i< n;i++)
	{
		enode->nextptr=(struct node *)malloc(sizeof(struct node));
		printf(" Input data for node %d : ",i+1);
		scanf("%d",&enode->num);
		enode=enode->nextptr;
	}
	enode->nextptr=NULL;
	printf("\n Data entered in the list are :\n");

    enode=&stnode;
	while(enode->nextptr!=NULL)
	{
		printf(" Data = %d\n",enode->num);
		enode=enode->nextptr;
	}

	printf("\n");
	printf(" Input the element to be searched : ");
	scanf("%d",&FindElem);
	FindPlc=SearchElement(FindElem);
	if(FindPlc<=n)
		printf(" Element found at node %d \n\n",FindPlc);
	else
		printf(" This element does not exists in linked list.\n\n");
}
int SearchElement(int FindElem)
{
	int ctr=1;
	enode=&stnode;
	while(enode->nextptr!=NULL)
	{
		if(enode->num==FindElem)
			break;
		else
			ctr++;
			enode=enode->nextptr;
	}
	return ctr;
}
