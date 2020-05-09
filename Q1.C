#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,dis,root1,root2;
    printf("Enter coefficient of x2 :");
    scanf("%f",&a);
    printf("Enter the coefficient of x : ");
    scanf("%f",&b);
    printf("Enter the value of constant :");
    scanf("%f",&c);
    root1=((-b)+pow((b*b)-(4*a*c),0.5))/(2*a);
    root2=((-b)-pow((b*b)-(4*a*c),0.5))/(2*a);
    printf("The roots of the quadratic equation is : %f and %f ",root1,root2);
    dis=(b*b)-(4*a*c);
    if(dis<0){
	printf("\nThe roots are imaginary");}
    else if(dis>0){
	printf("\nThe roots are real");}
    else if(root1==root2){
	printf("\nThe roots are equal");}
return 0;
}
