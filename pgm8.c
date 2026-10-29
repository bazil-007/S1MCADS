#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
int data;
struct node*next;
}
*new,*head=NULL,*h,*l,*sl;
void create()
{
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data to the node");
scanf("%d",&new->data);
new->next=NULL;
}
void enqueue()
{
create();
if(head==NULL)
{
head=new;
}
else
{
h=head;
while(h->next!=NULL)
{
h=h->next;
}
h->next=new;
}
count++;
}
void display()
{
if(head==NULL)
printf("list is empty");
else
{
h=head;
printf("linked list elements are");
while(h!=NULL)
{
printf("%d->",h->data);
h=h->next;
}
//printf("%d",h->data);
}
}
void dequeue()
{
if(head==NULL)
printf("list is empty");
else
{
h=head;
head=head->next;
printf("deleted element is %d",h->data);
free(h);
count--;
}
}
void main()
{
int ch=0;
do
{
printf("\nchoose option\n");
printf("1)enqueue \n2)dequeue \n3)display \n4)exit \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
enqueue();
break;
case 2:
dequeue();
break;
case 3:
display();
break;
case 4:
printf("exiting");
break;
default:
printf("wrong choice");
}
}
while(ch!=4);
}

