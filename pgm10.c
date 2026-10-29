#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node*lchild;
int data;
struct node*rchild;
}
*root=NULL,*new,*p,*tp,*t;
void create()
{
new=(struct node*)malloc(sizeof(struct node));
printf("enter the data to the node");
scanf("%d",&new->data);
new->lchild=NULL;
new->rchild=NULL;
}
void search(struct node*rt)
{
if(new->data<rt->data)
{
if(rt->lchild==NULL)
rt->lchild=new;
else if(rt->lchild!=NULL)
search(rt->lchild);
}
else if(new->data>rt->data)
{
if(rt->lchild==NULL)
rt->rchild=new;
else if(rt->rchild!=NULL)
search(rt->rchild);
}
else
{
printf("invalid state");
}
}
void insert()
{
create();
if(root==NULL)
root=new;
else
{
search(root);
}
}
void preorder(struct node*rt)
{
if(rt!=NULL)
{
printf("%d->",rt->data);
preorder(rt->lchild);
preorder(rt->rchild);
}
}
void postorder(struct node*rt)
{
if(rt!=NULL)
{
postorder(rt->lchild);
postorder(rt->rchild);
printf("%d->",rt->data);
}
}
void inorder(struct node*rt)
{
if(rt!=NULL)
{
inorder(rt->lchild);
printf("%d->",rt->data);
inorder(rt->rchild);
}
}
void deletenode(struct node*rt)
{
if((rt->lchild==NULL)&&(rt->rchild==NULL))
{
if(rt==p->lchild)
{
p->lchild=NULL;
}
else
{
p->rchild=NULL;
}
free(rt);
}
else if((rt->lchild!=NULL)&&(rt->rchild==NULL))
{
if(rt==root)
{
root=rt->lchild;
}
else if(rt==p->lchild)
{
p->lchild=rt->lchild;
}
else
{
p->rchild=rt->lchild;
}
free(rt);
}
else if((rt->lchild==NULL)&&(rt->rchild!=NULL))
{
if(rt==root)
{
root=rt->rchild;
}
else if(rt==p->lchild)
{
p->lchild=rt->rchild;
}
else
{
p->rchild=rt->rchild;
}
free(rt);
}
else if((rt->lchild!=NULL)&&(rt->rchild!=NULL))
{
t=rt->rchild;
tp=rt;
while(t->lchild!=NULL)
{
tp=t;
t=t->lchild;
}
rt->data=t->data;
if(tp!=rt)
tp->lchild=NULL;
else
tp->rchild=NULL;
free(t);
}
}
void dsearch(struct node*rt,int val)
{
int x=0;
if(val<rt->data)
{
p=rt;
if(rt->lchild!=NULL)
dsearch(rt->lchild,val);
else
x=1;
}
else if(val>rt->data)
{
p=rt;
if(rt->rchild!=NULL)
dsearch(rt->rchild,val);
else
x=1;
}
else if(val==rt->data)
{
deletemode(rt);
}
if(x==1)
printf("element not found");
}
void delete()
{
int val;
printf("enter the value to be deleted");
scanf("%d",&val);
dsearch(root,val);
}
void main()
{
int ch;
do
{
printf("\n1)insert \n2)preorder \n3)postorder \n4)inorder \n5)delete \n6)exit");
printf("\n choose option");
scanf("%d",&ch);
switch(ch)
{
case 1:
insert();
break;
case 2:
if(root==NULL)
printf("tree is empty");
else
preorder(root);
break;
case 3:
if(root==NULL)
printf("tree is empty");
else
postorder(root);
break;
case 4:
if(root==NULL)
printf("tree is empty");
else
inorder(root);
break;
case 5:
delete();
break;
case 6:
exit(0);
default:
printf("wrong choice");
}
}
while(1);
}
