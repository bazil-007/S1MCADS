#include<stdlib.h>
#include<stdio.h>
int top=-1;
int stack[5],data,i,size;
void push()
{
if(top==size-1)
{
printf("stack is full");
}
else
{
printf("\n Enter the data:");
scanf("%d",&data);
top++;
stack[top]=data;
printf("\n The elements is inserted");
}
}
void pop()
{
if(top==-1)
{
printf("\n stack is underflow");
}
else
{
printf("\n poped is %d",stack[top]);
top--;
}
}
void display()
{
if(top==-1)
{
printf("\n underflow");
}
else
{
printf("\n The elements in stack are:");
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
}
}
int main()
{
int ch;
printf("\n Enter the array size:");
scanf("%d",&size);
do
{
printf("\nEnter your choice\n1.For push\n2.For pop\n3.For display\n4.For exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
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
