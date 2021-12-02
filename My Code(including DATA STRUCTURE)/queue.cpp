#include<iostream>
#include<cstdio>
#include<queue>
using namespace std;
int main()
{     freopen("queue.txt","r+",stdin);
    freopen("queue_output.txt","w+",stdin);
     queue<int>q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        int y=q.front();
        printf("%d ",y);
        q.pop();
    }
}
