/**Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{ freopen("adjacency_list.txt","r+",stdin);
  int node,edge;
  cin>>node>>edge;
  vector<int>a[node];
  int n1,n2;//n1 and n2 denote neighbour nodes
  for(int i=0;i<edge;i++)
  {
      cin>>n1>>n2;
      a[n1].push_back(n2);
      a[n2].push_back(n1);


  }
  cout<<a[3][0]<<endl;
  for(int i=0;i<node;i++)
  {
      for(int j=0;j<a[i].size();j++)
      {cout<<a[i][j]<<" ";
      }
      cout<<endl;
  }
 return 0;
}
