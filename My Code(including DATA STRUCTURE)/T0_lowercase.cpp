#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int l=s.length();
    for(int i=0;i<l;i++)
        {
            if((s[i]>=65)&&(s[i]<=90)) {
            s[i]=s[i]+32;
            }
            else if((s[i]>=97)&&(s[i]<=122)) {
                s[i]=s[i]-32;
            }
        }
        cout<<s<<endl;



        return 0;
}
