#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main()
{
    int l,k=0,m;
    char c=NULL;

    string s;
    cin>>s;
    l=s.length();
    m=l;


     for(int i=0;i<l;i++)
       {



        for(int j=1; j<l; j++)
        {            if((s[i]==s[j])&&(s[i]!=c))
                         {++k;

                         }
        }
        c=s[i];
        m=m-k;
        cout<<m<<endl;
        }



    cout<<m<<endl<<l<<endl;
    if(k%2==0)
        cout<<"CHAT WITH HER!"<<endl;

    else
        cout<<"IGNORE HIM!"<<endl;


    return 0;
}
