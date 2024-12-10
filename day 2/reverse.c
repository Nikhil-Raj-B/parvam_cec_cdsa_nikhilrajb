#include<stdio.h>
int main(){
    int num,rev=0,org;
    printf("enter a number");
    scanf("%d",&num);
    org = num;
    printf("entered number %d:",num);
    while(num>0){
        rev=rev*10 + num%10;
        num=num/10;

    }printf("revereserd number %d:\n",rev);
    if(org==rev)
     {
        printf("number is palindrome");
     }
     else
     {
        printf("number is not palindrome");
     }
}
//time complicity