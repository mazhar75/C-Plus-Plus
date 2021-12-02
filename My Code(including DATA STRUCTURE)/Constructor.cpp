#include<iostream>
#include<cstdio>
using namespace std;
struct node{
int x;
node(){

int x=0;

cout<<"x is initialized by "<<x<<endl;}
void hello();
node(int);


~node()
{
    cout<<"bye bye!"<<" x >"<<x<<endl;
}

};
node::node(int k)
{
    x=k;
    cout<<"x is initialized by "<<x<<endl;}
void node::hello()
{
    x=x+45;
    cout<<"x is incremented by 45 and x="<<x<<endl;
}

void fun()
{
    node k(20);
    k.hello();
}
int main()
{node a,b(7),*p;
a.hello();
p=new node(12);
p->hello();
fun();

delete p;
return 0;

}




























































