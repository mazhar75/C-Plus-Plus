#include<iostream>
#include<cstdio>
#include<set>
using namespace std;
int main()
{   int l;
    string s;
    cin>>s;
    l=s.length();
    set<char>a;
    for(int i=0;i<l;i++)
    {
        a.insert(s[i]);
    }
    int k=a.size();
    if(k%2==0)
    cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;

}
