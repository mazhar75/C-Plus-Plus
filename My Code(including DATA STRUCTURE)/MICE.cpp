#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
long long int t;
cin>>t;
for(long long int i=0;i<t;i++)
{long long int n,k;
cin>>n>>k;
vector<long long int>a;
for(long long int j=0;j<k;j++)
{long long int x;
cin>>x;
a.push_back(x);
}
sort(a.begin(),a.end());
long long int y=0,z=0;//y for cat z for mice
for(long long int l=k-1;l>=0;l--)
{
    if((a[l]<n)&&(a[l]>y))
    {

        while(a[l]!=n)
    {
        a[l]++;
        y++;
    }

    ++z;
    }
}
cout<<z<<endl;
}
return 0;
}
