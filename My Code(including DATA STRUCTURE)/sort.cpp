#include<iostream>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{vector<int>a;
vector<int>::iterator it;
int n,i,val;
cin>>n;
for(i=0;i<n;i++)
{cin>>val;
a.push_back(val);
}
sort(a.begin(),a.end());
it=a.begin();
for(;it<a.end();it++)
{printf("%d ",*it);
}


}
