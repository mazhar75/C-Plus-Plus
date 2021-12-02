#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){

int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int n,m,k,c=0,d=0;
    cin>>n>>m>>k;
    vector<bool>a;
    for(int j=0;j<n;j++)
    {
        bool x;
        cin>>x;
        a.push_back(x);
    }
    for(int b=0;b<n;b++)
    {
        if(a[b]==1)
        {
          ++c;
        }
    }
    int l=0;
    while(a[l]!=0)
    {
        ++d;
        ++l;
    }
    if(c==n)
        cout<<100<<endl;
    else if((c<n)&&(d>=m))
        cout<<k<<endl;
    else
        cout<<0<<endl;

}




return 0;
}
