#include<iostream>
#include<cstdio>
using namespace std;
int main(){
for(int i=0;i<10;i++)
    {
        cout<<"SORRY"<<endl;
    }
    cout<<" "<<endl;
    for(int i=0;i<24;i++)
    {    if(i<10)
        {cout<<"SORRY"<<endl;}
        else if((i>9)&&(i<14))
            cout<<"SORRY ";
        else if((i>13)&&(i<24))
            cout<<"SORRY"<<endl;

    }
}
