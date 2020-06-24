#include<stdio.h>
int g[10][10], visit[10], n;
void dfs(int i)
{
int j;
printf("\n%d",i);
visit[i]=1;
for(j=0;j<n;j++)
if(visit[j]&&g[i][j]==1)
dfs(j);
}
void main()
{
int i,j;
printf("Enter no of vertices: \n");
scanf("%d",&n);
printf("Enter adj matrix of graph: \n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&g[i][j]);
}
}
for(i=0;i<n;i++)
    visit[i]=0;
    dfs(0);
}
