#include<stdio.h>
int main()
{
char str[90],copy_str[80]; 
char*pstr,*pcopy_str;
pstr=str;
pcopy_str=copy_str;	
printf("\n enter the string");
gets(str);
while(*pstr!='\0')
{
*pcopy_str=*pstr; 
pstr++,pcopy_str++;
}
*pcopy_str='\0';
printf("\n copied string is:");
pcopy_str= copy_str; 
while(*pcopy_str!='\0')
{
printf("%c",*pcopy_str);
pcopy_str++;
}
}
