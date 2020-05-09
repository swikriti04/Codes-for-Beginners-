#include<stdio.h>
int main()
{
int n,arr[50],largest,i,index;
printf("Enter the number of elements to be entered in array :");
scanf("%d",&n);
for(i=0;i<n;i++){
	printf("Enter the number of position %d :",i);
	scanf("%d",&arr[i]);
	}
largest=arr[0];
for(i=0;i<n;i++){
	if(arr[i]>largest){
		largest=arr[i];
		index=i;
		}}
printf("The largest number in array is %d ",largest);
printf("\nThe index of %d is %d ",largest,index);
return 0;
}
