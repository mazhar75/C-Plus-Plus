#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<fstream>
using namespace std;
class myclass{
public:
    string name;
    long int reg;
    string district;
    string contact;

};
int main()
{ofstream MyWrittefile("student_information_class.txt");
MyWrittefile.close();
freopen("student_information_class.txt","r+",stdin);
vector<myclass>student;
int n;
cin>>n;


for(int i=0;i<n;i++)
{    string a;
     long int b;
     string c;
     string d;
     cin>>a>>b>>c>>d;
     myclass A;//B,C,D;//,b,c,d;
     A.name=a;
     A.reg=b;
     A.district=c;
     A.contact=d;

    student.push_back(A);
    //student.push_back(B);
    //student.push_back(C);
    //student.push_back(D);

}
for(auto i:student)
{
    cout<<i.name<<endl<<i.reg<<endl<<i.district<<endl<<i.contact<<endl;
}

return 0;
}
