#include<stdio.h>
int stack[50]; 
int top = -1;
void push(int a)
{
stack[++top] = a;
}
int pop()
{
return stack[top--];
}
int main()
{
char exp[50]; char *e;
int num1, num2, num3, num;
printf("enter expression : ");
scanf("%s" , exp); e = exp; 
while(*e != '\0')
{
if(isdigit(*e))
{
num = *e - 48; 
push(num);
}
else
{
num1 = pop();
num2 = pop(); 
switch(*e)
{
case '+':
{
num3 = num1 + num2; 
break;
}
case '-':
{
num3 = num2 - num1; 
break;
}
case '*':
{
num3 = num1 * num2; 
break;
}
case '/':
{
num3 = num2 / num1; 
break;
}
}
push(num3);
} 
e++;
}
printf("\n expression result is %s = %d\n\n", exp, pop()); 
return 0;
}
