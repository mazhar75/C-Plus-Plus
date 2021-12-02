#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{vector<char>a;
vector<char>::iterator it;

int i;
unsigned int n;
cin>>n;
char c;
for(i=0;i<n;i++)
{cin>>c;
a.push_back(c);
}
sort(a.begin(),a.end());
for(it=a.begin();it!=a.end();it++)
{cout<<*it;}
return 0;
}
