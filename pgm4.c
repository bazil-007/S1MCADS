#include<stdlib.h>
#include<stdio.h>
int front=-1,rear=-1;
int queue[15],data,i,size;
void enqueue()
{
if(rear==size-1)
{
printf("\n the queue is full");
}
else
{
printf("\n enter the data to be inserted:");
scanf("%d",&data);
rear++;
queue[rear]=data;
printf("the element is inserted");
if(front==-1)
{
front=0;
}
}
}
void dequeue()
{
if((front==-1)||(front>rear))
{
printf("\n the queue is empty");
}
else
{
printf("%d is deleted",queue[front]);
front++;
}
}
void display()
{
if(front==-1)
{
printf("\n the queue is empty");
}
else
{
printf("\n the elements are:");
for(i=front;i<=rear;i++)
{
printf("\t%d",queue[1]);
}
}
}
int main()
{
int ch;
printf("\n enter the array size:");
scanf("%d",&size);
do
{
printf("\n1.for enqueue\n2.for dequeue\n3.for display\n4.exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
default:
printf("invalid");
}
}
while(1);
}















