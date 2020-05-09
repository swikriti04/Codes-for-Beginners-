#include<stdio.h>
#include<malloc.h>
typedef struct node
{
    char s_name[20],s_address[50];
    int s_marks;
    struct node *next;
}s;
s *push(s*);
s *pop(s *);
void display(s *);
int main()
{
    s *top=NULL;
    int ch,x,c=0;
    printf("Enter 1 for push\n");
    printf("Enter 2 for pop\n");
    printf("Enter 3 for display\n");
    do
    {
         printf("Enter your choice: ");
         scanf("%d",&ch);
         switch(ch)
         {
             case 1:
             top=push(top);
             break;
             case 2:
             top=pop(top);
             break;
             case 3:
             display(top);
             break;
         }
         printf("do you want to continue press 1: ");
         scanf("%d",&c);
     }while(c==1);
}
s *push(s *top)
{
    s *p;
    p=(s *)malloc(sizeof(s));
    if(p==NULL)
    {
        printf("no memory allocated");
    }
    else
    {
        printf("\nEnter the student name: ");
        scanf("%s",&p->s_name);
        printf("Enter student address: ");
        scanf("%s",&p->s_address);
        printf("Enter the marks of students: ");
        scanf("%d",&p->s_marks);
        p->next=top;
        top=p;
    }
    return(top);
}
s *pop(s *top)
{
   s *p;
   if(top==NULL)
   {
       printf("nothing to pop");
   }
   else
   {
       printf("\nThe student name is: %s",top->s_name);
       printf("\nThe student address is: %s",top->s_address);
       printf("\nThe marks of the student is: %d",top->s_marks);
       top=top->next;
   }
   return(top);
}
void display(s *top)
{
    if(top==NULL)
    {
        printf("nothing to display");
    }
    else
    {
        while(top!=NULL)
        {
             printf("\nThe student name is: %s",top->s_name);
             printf("\nThe student address is: %s",top->s_address);
             printf("\nThe marks of the student is: %d",top->s_marks);
             top=top->next;
         }
     }
}
