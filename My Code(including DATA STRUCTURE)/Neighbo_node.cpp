#include<iostream>
#include<cstdio>
using namespace std;
int adj[100][100];
int main()
{
   freopen("Neighbor_node.txt","r+",stdin);

cin>>edge;
int n1,n2;
for(int i=1;i<=edge;++i)
{cin>>n1>>n2;
adj[n1][n2]=1;
adj[n2][n1]=1;}
for(int j=1;j<=node;++j)
{
    if(adj[1][j]==1)
        printf("adjacent_node=%d\t",j);
}
return 0;
}
