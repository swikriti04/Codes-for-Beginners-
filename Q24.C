#include<stdio.h> 
int fibo(int);
 int main(void)
{    
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);       
    
    for(int num = 0; num < a; num++)
    {
        printf("%d ", fibo(num));
    }
    return 0;
}
 int fibo(int num)
{    
    if(num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fibo(num-1) + fibo(num-2);
    }
}
