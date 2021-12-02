/**Bismillah
Author:Md.mazharul Islam
SUST*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {  vector<int>a;
       for(int j=0;j<5;j++)
       {
           int x;
           cin>>x;
           a.push_back(x);

       }
       int india=0,england=0;
      for(int j=0;j<5;j++)
      {
          if(a[j]==1)
            india++;
          else if(a[j]==2)
            england++;
      }
      if(india>england)
        cout<<"INDIA"<<endl;
      else if(india<england)
        cout<<"ENGLAND"<<endl;
      else
        cout<<"DRAW"<<endl;
    }
    return 0;
}
