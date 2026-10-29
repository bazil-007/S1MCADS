#include<stdio.h>
int visited[10]={0,0,0,0,0,0,0,0,0,0};
int adj[10][10];
int queue[10];
int front=-1,rear=-1;
void insert(int item)
{
 if(rear==11)
 {
  printf("full");
 }
 else
 {
  rear++;
  queue[rear]=item;
  if(front==-1)
  front++;
 }
}
int delete()
{
 int p;
 if(front==-1)
 {
  return 0;
 }
 else
 {
  p=queue[front];
  front++;
  return(p);
 }
}
void bfs(int s,int v)
{
 int p,i;
 insert(s);
 visited[s]=1;
 p=delete();
 if(p!=0)
 {
  printf("%d",p);
 }     
 while(p!=0)
 {
  for(i=1;i<=v;i++)
 {
   if((adj[p][i]==1)&&(visited[i]==0))
  {
   insert(i);
   visited[i]=1;
  }
 }  
  p=delete();
  if(p!=0)
  {
   printf("%d",p);
  }
 }
}
int main()
{
int i,j,v,s;
printf("enter the number of vertices");
scanf("%d",&v);
printf("enter the adjacency matrix");
for(i=1;i<=v;i++)
{
 for(j=1;j<=v;j++)
 {
  scanf("%d",&adj[i][j]);
 }
}
printf("enter the starting vertex");
scanf("%d",&s);
bfs(s,v);
}
      
