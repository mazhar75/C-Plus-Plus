#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{char a[20];
char b[20],temp1[30];
char temp2;
int i,j;
scanf("%s %s",a,b);
i=strlen(a);
j=strlen(b);
strcpy(temp1,a);
strcat(a,b);
temp2=temp1[0];
temp1[0]=b[0];
b[0]=temp2;
printf("%d %d\n",i,j);
printf("%s\n%s %s\n",a,temp1,b);
return 0;
}
