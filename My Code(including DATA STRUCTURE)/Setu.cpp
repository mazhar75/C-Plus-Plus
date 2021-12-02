#include<iostream>
#include<cstdio>
using namespace std;
int main()
{   char s1[10],s2[10];
    int t;
    long int m,sum=0;
    cin>>t;

    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;

        for(int j=1;j<=(n/2);j++)
        {
            scanf("%s %ld",s1,&m);
            sum=sum+m;
            scanf("%s",s2);
             cout<<"case "<<i<<":"<<endl;
             cout<<sum<<endl;


        }


        sum=0;
    }
    return 0;
}
