#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int num;                        
    struct node *nextptr;           
}*snode;

void createNodeList(int n);
void displayList();         

int main()
{
     printf("\n\n Creation and display of Singly Linked List :\n");
    int n;
		
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list : \n");
    displayList();
    return 0;
}
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    snode = (struct node *)malloc(sizeof(struct node));

    if(snode == NULL)
    {
        printf(" Memory can not be allocated.");
    }
    else
    {


        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        snode->num = num;      
        snode->nextptr = NULL;
        tmp = snode;

        for(i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
 
                fnNode->num = num;      
                fnNode->nextptr = NULL; 
 
                tmp->nextptr = fnNode; 
                tmp = tmp->nextptr; 
            }
        }
    }
}
void displayList()
{
    struct node *tmp;
    if(snode == NULL)
    {
        printf(" List is empty.");
    }
    else
    {
        tmp = snode;
        while(tmp != NULL)
        {
           
            printf(" Data = %d\n", tmp->num);   
            tmp = tmp->nextptr;             
        }
    }
} 
