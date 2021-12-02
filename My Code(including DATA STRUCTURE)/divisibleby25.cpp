/**Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
     int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long int number;
        cin>>number;
        if(number%25==0)
            cout<<0<<endl;
       else{
        while(number%25!=0)
        {
            if((number%10!=0)&&(number%10!=5))
            {
                number=number/10;
                k++;
            }
            else if(number%10==0)
            {    digit[i]=number/10;

                   if(number%10==0)




            }
        }
       }
    }
}
