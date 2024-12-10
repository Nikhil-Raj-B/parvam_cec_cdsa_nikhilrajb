#include<stdio.h>
int main (){
    int num,sum=0,digit;
     printf("enter any number to get sum of digits");
     scanf("%d",&num);
     printf("sum of %d:",num);
    do{
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    } while (num>0);
    printf("%d",sum);
    
}
// d=456%10     6
// s=0+6        6
// n=456/10     45
  
// d=45%10      5
// s=6+5        11
// n=45/10      4

// d=4%10       4
// s=11+4       15

