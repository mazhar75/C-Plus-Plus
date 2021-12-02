#include<iostream>
#include<cstdio>
#include<queue>
#define white 1
#define red 2
#define black 3
using namespace std;
int adj[100][100];
int color [100];
int parent [100];
int dis[100];
int node;
int edge;

void bfs(int startingNode)
{for(int i=0;i<node;i++)
    {
        color[i]=white;
        dis[i]=INT_MIN;
        parent[i]=-1;
    }
    dis[startingNode]=0;
    parent[startingNode]=-1;
    queue<int>q;
    q.push(startingNode);
    while(!q.empty())
    {
        int x;
        x=q.front();
        q.pop();
        color[x]=red;
        cout<<x<<"\t";
        for(int i=0;i<node;i++)
      {
        if(adj[x][i]==1)
          {  if(color[i]==white)
              //x er neighbour i;
              //x num node ta hocche i num node er parent;
              {dis[i]=dis[x]+1;
              parent[i]=x;
              q.push(i);}
          }
     }


    }


}
int main()
{
    freopen("bfs.txt","r+",stdin);
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
bfs(7 );
return 0;
}
