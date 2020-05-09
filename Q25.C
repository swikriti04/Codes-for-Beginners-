#include<stdio.h>
int main()
{
struct student
{
int roll_num; char name[86]; int fee;
char DOB[105];
};
struct student stu[90]; int a,b;
printf("\n Enter number of students");
scanf("%d",&a); for(b=0;b<a;b++)
{
printf("\nenter the roll number");
scanf("%d",&stu[b].roll_num);
 printf("\n ENTER THE NAME"); 
scanf("%s",&stu[b].name); 
printf("\n ENTER THE FEE"); 
scanf("%d",&stu[b].fee); 
printf("\n ENTER THE DOB");
 scanf("%s",&stu[b].DOB);
}
for(b=0;b<a;b++)
{
printf("\n Details of the student are %d",b+1);
printf("\n ROLL NO = %d",stu[b].roll_num);
 printf("\n NAME = %s",stu[b].name); 
printf("\n FEE = %d",stu[b].fee);
 printf("\n DOB = %s",stu[b].DOB);
}}
