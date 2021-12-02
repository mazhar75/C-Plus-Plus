#include<iostream>
#include<cstdio>
#define white 1
#define red 2
#define black 3
using namespace std;
int adj[100][100];
int colour [100];
int node;
int edge;
void dfs_visit(int x)
{colour[x]=red;
cout<<x<<"\t";
for(int i=1;i<=node;i++)
{
    if(adj[x][i]==1)
    {  if(colour[i]==white)
        {dfs_visit(i);}
    }
}
//cout<<x<<"\t";
colour[x]=black;

}
void dfs()
{for(int i=1;i<=node;i++)
    {
        colour[i]=white;
    }
    for(int i=1;i<=node;i++)
    {
        if(colour[i]==white)
            dfs_visit(i);
    }

}
int main()
{
    freopen("dfs.txt","r+",stdin);
cin>>node;
cin>>edge;
int n1,n2;
for(int i=1;i<=edge;++i)
{cin>>n1>>n2;
adj[n1][n2]=1;
adj[n2][n1]=1;}
/**for(int j=1;j<=node;++j)
{
    if(adj[2][j]==1)
        printf("adjacent_node=%d\t",j);
}*/
dfs();
return 0;
}
