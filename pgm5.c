#include<stdlib.h>
#include<stdio.h>
int rear=-1,front=-1;
int data,queue[10],size,i;
void enqueue()
{
if((front==0)&&(rear==size-1)||(rear==front-1))
{
printf("\n the queue is full");
}
else
{
rear=(rear+1)%size;
printf("\n enter the data:");
scanf("%d",&data);
queue[rear]=data;
printf("\n the element is inserted\n");
if(front==-1)
{
front=0;
}
}
}
void dequeue()
{
if(front==-1)
{
printf("the queue is empty");
}
else
{
if(front==rear)
{
printf("the deleted is %d\n",queue[front]);
front=-1;
rear=-1;
}
else
{
printf("\n the deleted element is %d \n",queue[front]);
front=(front+1)%size;
}
}
}
void display()
{
if(front==-1)
{
printf("the queue is empty");
}
else
{
if(front<=rear)
{
printf("\n elements are");
for(i=front;i<=rear;i++)
{
printf("\t %d",queue[i]);
}
}
else
{
for(i=front;i<=size-1;i++)
{
printf("\t %d",queue[i]);
}
for(i=0;i<=rear;i++)
{
printf("\t %d",queue[i]);
}
}
}
}
int main()
{
int ch;
printf("enter the size");
scanf("%d",&size);
do
{
printf("\n enter your choice\n1.for insert\n2.for delete\n3.for display\n4.exit\n");
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
