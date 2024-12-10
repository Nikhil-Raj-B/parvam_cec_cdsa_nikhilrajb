#include<stdio.h>
int fac(int num){
    if(num==0 || num==1){
        return 1;
    }
    return num*fac(num-1);  => 3 * fact(2) => 3 * 2 * fact
}
int main(){
    int number,result;
    printf(" enter a number to find the factorial");
    scanf("%d",&number);
    result=fac(number);
    printf("the factorial of %d:%d",number,result);

}