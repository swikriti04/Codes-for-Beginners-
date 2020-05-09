#include<stdio.h>
int fibo(int);

int main()
{
int num,i=0,result;
printf("Enter the number for which fibonacci's should be given :");
scanf("%d", &num);
for(i=0; i<num; ++i)
{
	result= fibo(i);
	printf("%d\t", result);
}
return 0;
}
int fibo(int a)
{
if(a==0)
	{
	return 0;
	}
else if(a==1)
	{
	return 1;
	}
else
	{
	return ( fibo(a-1) + fibo(a-2));
	}
}
