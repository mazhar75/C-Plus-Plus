#include<iostream>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
int main(){

vector<int>a;
vector<int>::iterator it1;
int i,n;
int x,y;
cin>>n;
for(i=0;i<n;i++)
{
    cin>>x;
    a.push_back(x);
}
cin>>y;
sort(a.begin(),a.end());
for(i=0;i<n;i++)
{
    printf("a[%d]=%d\n",i,a[i]);
}
int j,k;
j=0;
k=(n-1);
while(j<k)
{
    int m=(j+k)/2;
    if(y>a[m])
    {
        j=m+1;

    }

  else
    k=m;
}

 if(y==a[j])
  {
      cout<<"Found,position->"<<j<<endl;

  }
  else
    cout<<"Not found"<<endl;
return 0;
}
