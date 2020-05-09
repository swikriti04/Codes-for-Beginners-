#include<stdio.h> 
int str_lne(char*);
void main()
{
char str[20]; int size;
printf("\n enter string : ");
gets(str);
size = str_len(str);
printf("string length %s is : %d", str, size);
}
int str_len(char*a)
{
int total = 0; 
while (*a != '\0') 
{ 
total++;
a++;
}
return total;
}
