//DFS CODE 

//header file
#include<stdio.h>
#include<conio.h>

//dfs function

int a[20][20],reach[20],n;

void DFS(int v)
{
    int i;
    reach[v]=1;
    for(i=1;i<=n;i++)
    if(a[v][i]&& !reach[i])
    {
        printf("\n %d->%d ",v,i);
        DFS(i);
    }
}
 
//main function

 void main(){
 int i,j,count=0;
 
 //taking number of nodes
 
 printf("Enter no of vertices");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
{
    reach[i]=0;
    for(j=1;j<=n;j++)
    a[i][j]=0;
}

//taking adjacency matrix

printf("\n Enter the adjacency matrix:\n");
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
scanf("%d",&a[i][j]);

 //printing the dfs
 DFS(1);
 printf("\n");
 for(i=1;i<=n;i++)
 {
     if(reach[i])
     count++;
 }
 
 //connected not connected
 if(count==n)
 printf("\nGraph is connected ");
 else
 printf("\n Graph is not connected");
 }






