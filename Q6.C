#include<stdio.h>
int main()
{
int num,i,factorial=1;
printf("Enter a number to find the factorial :");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
factorial*=i;
}
printf("The factorial of the number %d is %d",num,factorial);
return 0;
}
