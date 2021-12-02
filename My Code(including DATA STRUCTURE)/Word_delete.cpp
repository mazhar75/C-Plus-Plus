#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{string s;
getline(cin,s);
string target="umm ";

int found=-1;
do{
found=s.find(target,found+1);
if(found!=-1)
s=s.substr(0,found)+s.substr(found+target.length());
}while(found!=-1);
cout<<s<<endl;
return 0;
}
