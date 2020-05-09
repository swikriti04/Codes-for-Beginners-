#include<stdio.h>
int main()
{
int marks;
printf("Enter the marks :");
scanf("%d",&marks);
if(marks>=90 && marks<=100){
	printf("Grade A");}
else if(marks>=80 && marks<90){
	printf("Grade B");}
else if(marks>=70 && marks<60){
	printf("Grade C");}
else if(marks>=60 && marks<40){
	printf("Grade D");}
else if(marks<40 && marks>0){
	printf("Grade F");}
else{
	printf("Invalid number");}
return 0;
}

