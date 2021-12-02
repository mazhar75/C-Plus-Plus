/** Bismillah
Author: Md.Mazharul Islam
SUST*/
#include <bits/stdc++.h>
//#include<iostream>
//#include<vector>
using namespace std;
int main(){
int n,temp;
cin>>n;
vector<int>a;
vector<int>b;
for(int i=0;i<n;i++){
int x;
cin>>x;
a.push_back(x);
}
for(int i=0;i<n;i++)
{

  b[i]=a[n-1-i];
}
for(int i=0;i<n;i++){
cout<<b[i]<<" ";
}
return 0;

}
