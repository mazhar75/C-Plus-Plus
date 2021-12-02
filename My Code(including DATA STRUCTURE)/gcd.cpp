#include<iostream>
#include<cstdio>
using namespace std;
  int gcd( int a, int b)
{

if(a==0)
return b;
else
return gcd(b%a,a);
}
int main()
{
    int a,b;
     cin>>a>>b;
     long int c=((a*b)/gcd(a,b));

    cout<<c<<endl;
    return 0;
}
