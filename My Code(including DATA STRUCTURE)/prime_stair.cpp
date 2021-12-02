/** Bismillah
Author:Md.Mazharul Islam
SUST*/
// TLE khaisi! eita seive formula diye korte hobe.
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int prime( int x)
{   int flag=0;
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        {flag=0;
        break;}
        else
        flag=1;
    }
      return flag;
}
int main(){
 int t;
cin>>t;
for( int i=0;i<t;i++)
    {
         int x,y,a=0;
        cin>>x>>y;
        while(x<y)
        {
           int p=prime(x+2);

           if(p==1)
            {x=x+2;
            ++a;}
           else if(p==0)
           { x=x+1;
           ++a;

           }
        }
        cout<<a<<endl;
    }
    return 0;
}
