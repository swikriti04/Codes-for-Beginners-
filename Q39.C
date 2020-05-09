#include<stdio.h> 
#define MAX 50
int queue[MAX];
int front=-1,rear=-1; 
void insert(void);
int delete_element(void); 
int peep(void);
void display(void); 
int main()
{
int option, val; 
do{
printf("\n\n*****MAIN MENU*****"); 
printf("\n 1. ENQUEUE");
printf("\n 2. DEQUEUE");
printf("\n 3. PEEK");
printf("\n 4. DISPLAY THE QUEUE");
printf("\n 5. EXIT");
printf("\n ********************"); 
printf("\n\n PRESS YOUR OPTION"); 
scanf("%d", &option);
switch(option)
{
case 1:
insert(); 
break;
case 2:
val=delete_element(); 
if(val!=-1)
printf("\n Deleted number is %d", val); 
break;
case 3:
val= peep(); 
if(val!=-1)
printf("\n first value in the queue is %d", val);
break;
case 4:
display(); 
break;
}
}while(option!=5); 
return 0;
}
void insert()
{
int num;
printf("\n Enter the  number to enqueue");
scanf("%d", &num); 
if(rear==MAX-1) 
printf("\n OVER-FLOW");
else if(front==-1&&rear==-1) 
front=rear=0;
else
rear++; 
queue[rear]=num;
}
int delete_element()
{
int val;
if(front==-1 || front>rear)
{
printf("\n underflow"); 
return -1;
}
else
{
val=queue[front]; front++; 
if(front>rear) 
front=rear=-1; 
return val;
}
}
int peep()
{
if(front==-1 || front> rear)
{
printf("\n empty queue"); 
return -1;
}
else
{
return queue[front];
}
}
void display()
{
int i; printf("\n");
if(front==-1 || front > rear) 
printf("\n empty queue"); 
else
{
for(i=front;i<=rear;i++) 
printf("\t %d", queue[i]);
}
}
