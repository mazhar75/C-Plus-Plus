#include<iostream>
#include<string>
using namespace std;
int main()
{string s1,s2;
int a,k=0;
cin>>s1>>s2;
a=s1.length();
for(int i=0;i<a;i++)
{
    {
        if((s1[i]>=97)&&(s1[i]<=123))
        {
            s1[i]=s1[i]-32;
        }
        if((s2[i]>=97)&&(s2[i]<=123))
        {
            s2[i]=s2[i]-32;
        }
    }
    if(s1[i]==s2[i])
{
    k=0;
}

else if(s1[i]>s2[i])
{k=1;
break;}
else
{k=-1;
break;}
}
cout<<k<<endl;
return 0;
}
