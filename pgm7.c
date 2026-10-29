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
void push()
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
void pop()
{
if(head==NULL)
printf("list is empty");
else
{
l=head;
sl=head;
while(l->next!=NULL)
{
sl=l;
l=l->next;
}
sl->next=NULL;
printf("deleted element is %d",l->data);
free(l);
count--;
}
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
}
}
void search()
{
int se,i,f=0;
h=head;
if(head==NULL)
printf("list is empty");
else
printf("enter the data to be searched");
scanf("%d",&se);
i=0;
while(h!=NULL)
{
i++;
if(h->data==se)
{
printf("element%d is found at %d",se,i);
f++;
}
h=h->next;
}
if(f==0)
{
printf("element is not found");
}
}
void main()
{
int ch;
do
{
printf("\n choose option\n");
printf("\n1)push \n2)pop \n3)search \n4)display \n5)exit\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
search();
break;
case 4:
display(0);
break;
case 5:
exit(0);
default:
printf("wrong choice");
}
}
while(1);
} 
