#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{char s[1010];
scanf("%s",s);
int i,n,flag=1;
n=strlen(s);
for(int i=0;i<(n+1)/2;i++)
{if(s[i]!=s[n-i-1])
{cout<<"NO"<<endl;
flag=0;
break;}
}
if(flag==1)
{cout<<"YES"<<endl;}
return 0;

}
