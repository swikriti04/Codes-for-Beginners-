#include <stdio.h>

int sum(int first, int last);
int main()
{
    int first, last, total;
    printf("Enter first limit: ");
    scanf("%d", &first);
    printf("Enter last limit: ");
    scanf("%d", &last);
    
    sum = sum (first, last);
    
    printf("Sum of natural numbers from %d to %d = %d", first, last, total);
    
    return 0;
}
int sum (int first, int last)
{
    if(first == last)
        return first;
    else
        return first + sum(first + 1, last); }
