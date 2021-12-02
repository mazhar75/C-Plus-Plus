#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
struct student{
int age;
char first_name[100];
char last_name[100];
int skill;
};
int main()
{struct student a;
cin>>a.age;
cin>>a.first_name;
cin>>a.last_name;
cin>>a.skill;
printf("%d %s %s %d\n",a.age,a.first_name,a.last_name,a.skill);
return 0;

}
