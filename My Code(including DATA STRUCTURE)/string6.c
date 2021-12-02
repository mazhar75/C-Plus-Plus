#include<stdio.h>
#include<string.h>
int main()

{char s[1000010];
scanf("%[^\n]",s);
int i,n,count=0;
n=strlen(s);
for(i=0;i<n;i++)
{if(((s[i]==32)&&(((s[i+1]>=65)&&(s[i+1]<=90))||((s[i+1]>=97)&&(s[i+1]<=122))))||((s[i]==32)&&(((s[i+2]>=65)&&(s[i+2]<=90))||((s[i+2]>=97)&&(s[i+2]<=122)))))
count++;
else
    continue;
}
printf("%d\n",count+1);
return 0;
}
