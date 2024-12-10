#include<stdio.h>
int main (){
    int num=20;
    printf("the value of number:%d\n",num);
    printf("the addrress of number(%d):%p\n",&num);
    int*ptr=&num;  // datatype * pointer_variable=&rreference
    printf("the address of pointer:%p\n",ptr);
    printf("the value of pointer:%d\n",*ptr);
    ptr=100;
    *ptr=50;
    printf("the new value of pointer:%d\n",*ptr);
    printf("the new address of pointer:%d\n",ptr);
}