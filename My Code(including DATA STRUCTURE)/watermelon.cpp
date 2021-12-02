#include<iostream>
#include<cstdio>

using namespace std;
int main()
{  freopen("watermelon.txt","r+",stdin);
    int a[5][5],k=0,l=0,p=0,q=0;
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        cin>>a[i][j];
    }
}
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {if(a[i][j]==1)
        {
            p=i;
            q=j;

        }
           }}


     while(p!=2)
    {if(p<2)
     {
         ++p;
         ++k;
     }
     else if(p>2)
     {
         --p;
         ++k;
     }}


     while(q!=2){
    if(q<2)
     {
         ++q;
         ++l;
     }
     else if(q>2)
     {
         --q;
         ++l;
     }

    }

 cout<<l+k<<endl;
 return 0;}




