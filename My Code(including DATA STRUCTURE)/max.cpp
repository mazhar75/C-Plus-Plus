#include<iostream>
#include<cstdio>
using namespace std;
long long int max(long long int a, long long int b,long long int c,long long int d)
{long long int p,q,r,s,x=0;
p=a*c;q=a*d;r=b*c;s=b*d;

long long int a1[4]={p,q,r,s};

x=a1[0];
for(int i=1;i<4;i++)
{if(x<a1[i])
 x=a1[i];

}
return x;
}
int main()
{long long int a,b,c,d;
cin>>a>>b>>c>>d;
cout<<max(a,b,c,d)<<endl;
return 0;
}
