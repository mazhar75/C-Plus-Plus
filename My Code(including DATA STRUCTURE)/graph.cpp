/** Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<vector>
using namespace std;
long long int fun1(long long int c)
{ long long int m=0;
  m=max(m,c);

  return m;

}
long long int fun2(long long int c)
{ long long int l=0;
  l=min(l,c);

  return l;

}



int main()
{
    int t;

    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int n,e;//n=node,e=edge;
        cin>>n>>e;
         vector<long long int>a[n];
        long long int x,y;
        for(long long int j=0;j<e;j++)
        {
          cin>>x>>y;
          a[x].push_back(y);
          a[y].push_back(x);



        }
        long long int m=0,l=0;
        for(long long int j=0;j<n;j++)
        {   long long int c=0;
            for(long long int k=0;k<a[j].size();k++)
            {
                if(j>k)
                    ++c;
            }
            m=fun1(c);
            l=fun2(c);
        }
        cout<<m-l<<endl;
        for(long long int i=0;i<n;i++)
        {
            cout<<i<<" "<<endl;
        }
    }
    return 0;
}
