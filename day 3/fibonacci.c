#include<stdio.h>
int fib(int num){
    if(num==0){
        return 0;
    }else if(num==1){
        return 1;
    }else{
        return fib(num-1)+fib(num-2);
    }
}
int main(){
    int number,i;
     printf("enter the range to print the fibonacci series:");
     scanf("%d",&number);
     printf("the fibonacci series from 0 to %d is :\n",number);
     for (i=0;i<number;i++){
        printf("%d\t",fib(i));
     }

}