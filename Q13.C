#include<stdio.h>
int main()
{
int arr[1000],i,num,find,result=0;
printf("Enter the number of elements :");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("Enter the number :");
scanf("%d",&arr[i]);
}
printf("Enter the number to be found :");
scanf("%d",&find);
for(i=0;i<num;i++)
{
	if(arr[i]==find)
	{
	printf("The number is found in the array");
	}
}
return 0;
}
