#include<stdio.h>
int main()
{
int c;
int num1,num2;
printf("Enter value of first number:");
scanf("%d",&num1);
printf("Enter the value of second number :");
scanf("%d",&num2);
printf("\nEnter*1* for addition,*2* for subtraction,*3* for multiplication,*4* for division");
printf("\nEnter the operation to be done :");
scanf("%d",&c);
switch(c)
{
case 1:
printf("You have chosen to add two numbers ");
printf("\nThe addition of two numbers is %d",num1+num2);
break;
case 2:
printf(" You ahve chosen to subtract two numbers ");
printf("\nThe difference of two numbers is %d",num1-num2);
break;
case 3:
printf(" You have chosen to multiply two numbers");
printf("\n The product of two numbers is %d",num1*num2);
break;
case 4:
printf(" You have chosen to divide two numbers");
printf("\nThe division of two numbers is %d",num1/num2);
break;
default:
printf("\nEnter appropriate number for operation");
}
return 0;
}
