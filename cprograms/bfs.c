#include<stdio.h>
int a[20][20],visited[20],q[20],i,j,n,r=-1,f=0;
void bfs(int v)
{
for(i=1;i<=n;i++)
if(a[v][i]&&!visited[i])
{
q[++r]=i;;
}
if(f<=r)
{
visited[q[f]]=1;
bfs(q[++f]);
}
}
int main()
{
int v;
printf("enter number  of vertices\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
q[i]=0;
visited[i]=0;

}
printf("enter data matrix\n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the starting vertices\n");
scanf("%d",&v);
bfs(v);
printf("reaching vertices\n");
for(i=1;i<=n;i++)
{
if(visited[i])
{
printf("%d\n",i);
}
else
{
printf("not reachable\n");
break;
}
}
}

