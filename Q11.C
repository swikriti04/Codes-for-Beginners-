#include<stdio.h>
int main()
{
int arr[1000],num,sum=0,i,j;
float avg;
printf("Enter the number of elements to be in the array :");
scanf("%d",&num);
for(i=0;i<num;i++)
{
printf("Enter the number :");
scanf("%d",&arr[i]);
}
printf("The array is...");
for(i=0;i<num;i++)
{
printf("%d  ",arr[i]);
}
for(j=0;j<num;j++)
{
sum+=arr[j];
}
avg=sum/num;
printf("\nThe sum of the numbers is %d",sum);
printf("\nThe average of the numbers is %.2lf",avg);
return 0;
}
