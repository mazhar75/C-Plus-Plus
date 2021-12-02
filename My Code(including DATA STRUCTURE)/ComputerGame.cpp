/** Bismillah
Author:Md.Mazharul Islam
SUST
*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,flag=0;
        cin>>n;
       string s1,s2;
       cin>>s1>>s2;
              int j=0;
                while(j!=n)
                {if(s1[j]=='0')
                {
                   flag=1;

                   j++;
                }
                else if(s2[j]=='0')
                {
                    flag=1;
                    j++;

                }

                else
                {
                    flag=0;
                    break;
                }
            }

        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
