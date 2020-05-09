#include<stdio.h> 
int main()
{
char string1[50],string2[60],*a,*b; int i,equal = 0;
printf("enter the first string: ");
scanf("%s",string1);
printf("enter the second string: "); 
scanf("%s",string2);
a = string1; 
b = string2;
while(*a == *b)
{
if ( *a == '\0' || *b == '\0' ) 
break;
a++; 
b++;
}

if( *a == '\0' && *b == '\0' ) 
printf("\n\nentered strings are equal."); 
else
printf("\n\nentered string are not equal");
}
