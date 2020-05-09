#include<stdio.h>
int fact(int num);
int main() {
    int num;
    printf("Enter a integer: ");
    scanf("%d",&num);
    printf("Factorial of %d = %d", num, fact(num));
    return 0;
}

int fact(int num) {
    if (num>=1)
        return num*fact(num-1);
    else
        return 1;
}
