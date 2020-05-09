#include<stdio.h>
int main()
{
int arr[1000],i,j,k,temp,num;
printf("Enter the number of elements to be in the array :");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("Enter the element :");
scanf("%d",&arr[i]);
}
printf("The array is.....");
for(i=0;i<num;i++)
{
printf("%d  ",arr[i]);
}
for(i=0;i<num;i++)
{
for(j=0;j<num-i-1;j++)
{
if(arr[j]>arr[j+1])
{
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
printf("The sorted array is...");
for(i=0;i<num;i++)
{
printf("%d  ",arr[i]);
}
return 0;
}
