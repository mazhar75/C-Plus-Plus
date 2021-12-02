#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{

    long long int n;
    long long int x;
    vector< long long int>a;

    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    cin>>x;

    long long int sum=0,i=0;

    for(i;i<n;i++)
    {

        sum+=a[i];}


     long long int s = (x/sum) ;
     long long int k=s*n;
     sum=sum*s;
     for(long long int j=0;j<n;j++)
     {
         sum+=a[j];
         ++k;
         if(sum>x)
         {
             cout<<k<<endl;
             break;
         }
     }



return 0;
}
