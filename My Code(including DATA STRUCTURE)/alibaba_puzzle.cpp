#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
long long int a,b,c,d;
cin>>a>>b>>c>>d;
if(((a*b+c)==d)||((a*c+b)==d)||((b*c+a)==d))
{
cout<<"YES"<<endl;
}
else if(((a*b-c)==d)||((a*c-b)==d)||((b*c-a)==d)||((c-a*b)==d)||((b-a*c)==d)||((a-b*c)==d))
{cout<<"YES"<<endl;
}

else if(((a-(b+c))==d)||((b-(c+a))==d)||((c-(b+a))==d)||((b+c-a)==d)||((a+b-c)==d)||((c+a-b)==d))
{cout<<"YES"<<endl;}
else
{cout<<"NO"<<endl;}
return 0;


}
