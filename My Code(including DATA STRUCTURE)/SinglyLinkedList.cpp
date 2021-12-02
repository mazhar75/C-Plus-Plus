#include<iostream>
using namespace std;
struct node{//chach create kora hoise
int val;
node *next;
node()
{
    val=0;
    next=NULL;
}
node(int k)
{
    val=k;
    next=NULL;
}

};
struct List{
    node *head,*tail;
    List();//create constructor
    void insertintohead(int);
    /** a value provided should insert into head
    @param val
    */
    void insertintotail(int);
    /** a value provided should insert into tail
    @param val
    */
    int deletefromhead();
    /** this function shuld delete value from head
    @return int
    */
    int deletefromtail();
    /** this function shuld delete value from head
    @return int
    */
    void reverseList();
    /**this function should reverse the list*/
    void printList();
    /** this function should print the list*/


 };
  List::List(){
   head=NULL;
   tail=NULL;

 }
 void List::insertintohead(int x){
     node *cur=new node(x);
     if(head==NULL)
     {
         head=tail=cur;
         return;
     }
     cur->next=head;
     head=cur;



   }

   void List::insertintotail(int x){
      node *cur=new node(x);
      if(tail==NULL)
      {
          head=tail=cur;
          return;
      }
      tail->next=cur;
      tail=tail->next;


   }

   int List::deletefromhead(){
     if(head==NULL)
     {
         cout<<"underflow"<<endl;
         return -1;
     }
     node *temp=head;
     int ret = temp->val;
    if(head->next==NULL)
     {
         head=tail=NULL;

     }
     else
     {
         head=head->next;
     }
     delete temp;
     return ret;


   }
   void List::reverseList(){
       if(head==NULL)
       {
           cout<<"the list is empty"<<endl;
       }
       else if(head->next==NULL)
       {
           cout<<"the list is already reversed"<<endl;
       }

       else{
       node *temp1=head,*temp2=NULL,*temp3=NULL;

       while(temp1!=NULL)
       {
          temp3=temp1->next;
          temp1->next=temp2;
          temp2=temp1;
          temp1=temp3;

       }
       head=temp2;
    }}

   void List::printList(){
       cout<<"start list ---------"<<endl;
if(head==NULL)
{
    cout<<"Empty list"<<endl;
}
else {node *temp=head;
while(temp!=NULL)
{
    cout<<temp->val<<endl;
    temp=temp->next;

}}

 cout<<"End list -----------"<<endl;


   }
int main()
{   List sl;
    sl.insertintohead(2);
    sl.printList();
    sl.reverseList();
    sl.printList();
    sl.insertintotail(3);
    sl.printList();
    sl.reverseList();
    sl.printList();
    sl.insertintohead(4);
    sl.printList();
    sl.insertintotail(-7);
    sl.printList();
    sl.insertintohead(10);
    sl.printList();
    sl.deletefromhead();
    sl.printList();
    sl.deletefromhead();
    sl.printList();
    sl.deletefromhead();
    sl.printList();
    sl.deletefromhead();
    sl.printList();
    sl.deletefromhead();
    sl.printList();
    sl.deletefromhead();
    sl.printList();



    return 0;
}
