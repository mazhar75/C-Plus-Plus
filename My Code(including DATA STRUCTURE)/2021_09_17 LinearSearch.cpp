#include<iostream>
#include<cstdio>
#include<vector>
#include<iterator>
using namespace std;
int main(){

vector<float>a;
vector<float>::iterator it;
int i,n;
float x,y;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>x;
    a.push_back(x);
}
cin>>y;

for(it=a.begin();it!=a.end();it++)
{
 cout<<*it<<endl;
 if(*it==y)
 {
     cout<<"Found"<<endl;
      break;
 }
else
    cout<<"Not found"<<endl;
}


return 0;
}
