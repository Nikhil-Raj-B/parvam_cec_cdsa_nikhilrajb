#include<stdio.h>
int main(){

    int num,fac;
     printf("enter the number");
      scanf("%d",&num);
     for(int i=1;i<=num;i++){
     fac=fac*i;
     }
     printf("factorial of %d: %d",num,fac);
}


