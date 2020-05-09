#include <stdio.h> 
#include <string.h> 
int main()
{
char str[90],temp; 
int a=0,b=0;
printf("\nEnter the string:");
gets(str); 
b=strlen(str)-1; 
while(a<b)
{
temp = str[b]; 
str[b]=str[a]; 
str[a]=temp; 
a++;
b--;
}
printf("\n reversed string is: ");
puts(str);
}
