#include<stdio.h> 
#define MAX 50
int stack[MAX],choice , n , top ,x ,i; 
void push(void);
void pop(void); 
void display(void); 
void peek(void); 
int main()
{
top=-1;
printf("\n enter the size of stack:");
scanf("%d", &n);
printf("\n\t stack operations used in this array");
printf("\n\t 	");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5.EXIT"); 
do{
printf("\n enter the choice:");
scanf("%d",&choice); switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop(); 
break;
}
case 3:
{
display(); 
break;
}
case 4:
{
peek(); 
break;
}
case 5:
{
printf("\n\t exit "); 
break;
}
default:
{
printf ("\n\t entered number is wrong");
}}}
while(choice!=5); 
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\t stack overflow");
}
else
{
printf("enter a number to be pushed:");
scanf("%d",&x); top++; stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t stack is under flow");
}
else
{
printf("\n\t element which popped is %d",stack[top]); 
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n THE ELEMENTS IN STACK \n"); 
for(i=top; i>=0; i--)
printf("\n %d",stack[i]);
printf("\n next choice");
}
else
{
printf("\n empty stack");
}
}
void peek()
{
printf("\n peek element is %d",stack[top]);
}
