#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string s1,s2="Hello Universe!";
    getline(cin,s1);//to get input,it is awesome that there has no need to size.
    s2.resize(6);//to resize string;
    s2.at(3)='L';//to replace index
    cout<<s2<<endl<<s2.length()<<endl<<s2.substr(3);
    return 0;
}
