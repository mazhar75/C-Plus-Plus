#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{char s[100005];
scanf("%s",s);
int k=strlen(s);
for(int i=0;i<k;i++)
{if(s[i]==44)
s[i]=32;
else if((s[i]>=65)&&(s[i]<=90))
{s[i]=s[i]+32;}
else if((s[i]>=97)&&(s[i]<=122))
{s[i]=s[i]-32;}
}
printf("%s",s);
return 0;

}
