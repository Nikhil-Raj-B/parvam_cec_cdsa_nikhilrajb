#include<stdio.h>
int main(){
    int num,no;
    printf("enter a number to get tables and number limit");
    scanf("%d %d",&num,&no);
    for(int i=1;i<=no;i++)
    printf("%dx%d:%d\n",num,i,i*no);


}