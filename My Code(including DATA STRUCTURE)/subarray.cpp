#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        vector<int>a;
        for(int j=1;j<=n;j++)
        {   int x;
             x=j;
             a.push_back(x);

        }
       int s=1,j=2;
       s=s&a[j];
       while(j<=n)
        {
            if(s<=0)
            {
                j++;
            }
            else if(s>0)
            {
                ++a;
            }


        }


    }
}
