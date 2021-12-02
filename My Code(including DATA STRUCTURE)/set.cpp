#include<cstdio>
#include<iostream>
#include<set>
#include<iterator>
using namespace std;
int main()
{set<float>s;
set<float>::iterator it;
int i,n;
cin>>n;
for(i=0;i<n;i++)
{float a;
cin>>a;
s.insert(a);
}
for(it=s.begin();it!=s.end();it++)
{cout<<*it<<"\t";
}
return 0;
}
