#include<iostream>
using namespace std;
struct node
{
    int val;
    node *next;
    node(){
    val=0;
    next=NULL;
    }
    node(int k){
    val = k;
    next = NULL;
    }
};
struct singlylinkedlist{
node *head,*tail;
singlylinkedlist();
void insertintohead(int);
void insertintotail(int);
int deletefromhead();
void printlist();

};
singlylinkedlist::singlylinkedlist()
{
    head=NULL;
    tail=NULL;
}
void singlylinkedlist::insertintohead(int x)
{
    node *cur=new node(x);
    if(head==NULL)
    {
        head=tail=cur;return;
    }
    cur->next=head;
    head=cur;
}
void singlylinkedlist::insertintotail(int x)
{node *cur=new node(x);
if(tail == NULL)
{
    head=tail=cur;
    return;
}
tail->next=cur;
tail=tail->next;

}
int singlylinkedlist::deletefromhead()
{if(head==NULL)
{
    cout<<"Underflow"<<endl;
    return -1;
}
node *temp=head;
int ret = temp->val;
if(head->next==NULL)
{
    head=tail=NULL;
}
else{
    head=head->next;
}
delete temp;
return ret;

}
void singlylinkedlist::printlist()
{cout<<"start list ---------"<<endl;
if(head==NULL)
{
    cout<<"Empty list"<<endl;
}
node *temp=head;
while(temp!=NULL)
{
    cout<<temp->val<<endl;
    temp=temp->next;

}

 cout<<"End list -----------"<<endl;
}

int main()
{singlylinkedlist sl;
sl.insertintohead(59);
sl.printlist();
sl.insertintotail(90);
sl.printlist();
sl.insertintohead(10);
sl.printlist();
sl.insertintotail(0);
sl.printlist();
sl.deletefromhead();
sl.printlist();
sl.deletefromhead();
sl.printlist();
sl.deletefromhead();
sl.printlist();
sl.deletefromhead();
sl.printlist();
sl.deletefromhead();
sl.printlist();
return 0;

}
