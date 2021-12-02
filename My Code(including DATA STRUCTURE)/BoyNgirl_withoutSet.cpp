#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
string s;
cin>>s;
int k=0,m=0,l=s.length();
//here k=number of uppercase letter
//m=number of lawercase letter
for(int i=0;i<l;i++)
{
    if((s[i]>=65)&&(s[i]<=90))
    {
        ++k;
    }
    else if((s[i]>=97)&&(s[i]<=122))
    {
        ++m;
    }

}
for(int i=0;i<l;i++)
{
    if((m>=k)&&(s[i]>=65)&&(s[i]<=90))
    {
        s[i]=s[i]+32;
    }
    else if((m<k)&&(s[i]>=97)&&(s[i]<=122))
    {
        s[i]=s[i]-32;
    }

}
cout<<s<<endl;
  return 0;
}
