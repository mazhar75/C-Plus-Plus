/** Bismillah
Author:Md.Mazharul Islam
SUST
*/
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
long long int t;
cin>>t;
for(int i=0;i<t;i++)
    {
        long long int a,b,c;

cin >> a >> b >> c;
cout << (a > max(b, c) ? 0 : max(b, c) + 1 - a) << " ";
cout << (b > max(a, c) ? 0 : max(a, c) + 1 - b) << " ";
cout << (c > max(a, b) ? 0 : max(a, b) + 1 - c) << endl;
    }
 return 0;}
