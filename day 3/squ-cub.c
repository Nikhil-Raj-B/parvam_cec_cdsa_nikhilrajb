#include<stdio.h>
int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}
int main(){
    int num, result;
    printf("enter the nnumber to find the square and cube");
    scanf("%d",num);
    result=square(num);
    printf("square of %d:%d",num,result);
    result=cube(num);
    printf("cune of %d:%d",num,result);

}