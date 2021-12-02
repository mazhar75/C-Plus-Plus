#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
map<string,int>m;
map<string,int>::iterator it;

int n;
cin>>n;
for(int i=0;i<n;i++)
{
    string a;
    int b;
    cin>>a>>b;
    m[a]=b;
}

for(it=m.begin();it!=m.end();it++)
{cout<<it->first<<" "<<it->second<<endl;
}
return 0;
}
