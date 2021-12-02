#include<iostream>
#include<cstdio>
#include<vector>
#include<iterator>
#define n 100000
using namespace std;
int main()

{int x[n],primes[n+1];
int i,j;
for(i=2;i<=n;i++)
{primes[i]=i;}
i=2;
while(i*i<=n)
{if(primes[i]!=0)
for(j=2;j<=n;j++)
{if(primes[i]*j>n)
break;
else
primes[primes[i]*j]=0;}
i++;}
for(i=2;i<=n;i++)
{if(primes[i]!=0)
    printf("%d\n",primes[i]);
}
return 0;


}
