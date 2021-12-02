#include<iostream>
#include<cstdio>
using namespace std;
int adj[100][100];
int main()
{int node,edge;
cout<<"Enter the number of nodes:"<<endl;
cin>>node;
cout<<"Enter the number of edges:"<<endl;
cin>>edge;
int n1,n2;
for(int i=1;i<=edge;++i)
{cin>>n1>>n2;
adj[n1][n2]=1;
adj[n2][n1]=1;}
for(int j=1;j<=node;++j)
{
    for(int k=1;k<=node;++k)
       {
         printf("%d\t",adj[j][k]);
       }
       puts(" ");
}
return 0;
}
/**
4 4
1 2
1 3
1 4
2 3
*/
