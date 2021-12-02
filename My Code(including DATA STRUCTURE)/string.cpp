#include<iostream>
#include<cstdio>
using namespace std;
int main()
{int t;
cin>>t;
for(int i=0;i<t;i++)
{string s;
cin>>s;
int m=0,n=0,p=0,a=0;
 a=s.length();
for(int j=0;j<a;j++)
{ if(s[j]=='A')
   m++;
   else if(s[j]=='B')
    n++;
   else
    p++;
}
if(m+p==n)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
return 0;}
