#include<stdio.h>
#include<stdlib.h>
int main(){
  int t;
  scanf("%d",&t);
  while(t--){
    double matrix[2][2],s=0,temp;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            scanf("%lf",&matrix[i][j]);
    }
    s=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    if(s==0.00)
        printf("undefined");
    else
    {
       temp=matrix[1][1];
       matrix[1][1]=matrix[0][0]/s;
       matrix[0][0]=temp/s;
       matrix[0][1]=-matrix[0][1]/s;
       matrix[1][0]=-matrix[1][0]/s;


    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            {
                printf("%.02lf ",matrix[i][j]);
            }
            printf("\n");
    }
    }


  }



return 0;
}
