#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()

{int n,i,k;
cin>>n;
for(i=0;i<n;i++)
{
    char s[105];
    scanf("%s",s);
    k=strlen(s);
    if(k>10)
    {
        cout<<s[0]<<(k-2)<<s[k-1]<<endl;
    }
    else
        cout<<s<<endl;


}

return 0;
}
