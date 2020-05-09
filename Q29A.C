#include <stdio.h> 
#include <string.h>
void reverse_str(char*, int, int);
int main()
{
char str_arr[150]; printf("ENTER THE STRING:");
scanf("%s", &str_arr);
reverse_str(str_arr, 0, strlen(str_arr)-1); 
printf("\nthe reversed string is: %s",str_arr); return 0;
}
void reverse_str(char *a, int start, int b)
{
char ch;
if (start >= b) 
return;
ch = *(a+start);
*(a+start) = *(a+b);
*(a+b) = ch; 
reverse_str(a, ++start, --b);
}
