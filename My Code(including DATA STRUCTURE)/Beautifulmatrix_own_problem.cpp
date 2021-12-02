
#include <bits/stdc++.h>
using namespace std;
bool comp(const int& num1, const int& num2) {
    return num1 > num2;
}


int main(){
  int t;
  cin>>t;
  while(t--){
    list<int>a;
    list<int>b;
    list<int>::iterator it1;
    list<int>::iterator it2;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        int val;
        cin>>val;
        a.push_back(val);
    }
    a.sort(comp);
    it1=a.begin();






    while(it1!=a.end()){

            if(*it1%2==0)
            {b.push_front(*it1);
              ++it1;
            }
            else
            {b.push_back(*it1);
             ++it1;
            }

    }
    for(it2=b.begin();it2!=b.end();it2++)
    {
        cout<<*it2<<"\t";

    }







}
return 0;
}
