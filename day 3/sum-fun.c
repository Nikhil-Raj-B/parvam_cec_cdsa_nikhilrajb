#include<stdio.h>
// datatye fun_name(parameters)   deleclartion
//  statements for somr operation   definition
int sum(int a,int b){
    return a+b;
}
int main(){
    int op1,op2,add;
     printf("enter two number");
     scanf("%d %d",&op1,&op2);
     add=sum(op1,op2);   //function call
     printf("sum of two number %d and %d:%d",op1,op2,add);
}
