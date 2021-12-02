#include<iostream>
#include<utility>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
vector<pair<int,string>>v;
vector<pair<int,string>>::iterator it;
int i,n;
cin>>n;
for(i=0;i<=n;i++)
{int a;
string b;
cin>>a>>b;
v.push_back(make_pair(a,b));
}
for(it=v.begin();it!=v.end();it++)
{cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}

