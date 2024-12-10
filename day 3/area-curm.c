#include<stdio.h>
#define PI 3.14
float area(float rad){
    return PI * rad * rad;
}
float curm(float rad){
    return 2*PI*rad;
}
int main(){
    float rad,result;
    printf("enter the radius");
    scanf("%f",&rad);
    result=area(rad);
    printf("area is:%f\n",result);
    result=curm(rad);
    printf("curcumfarance is :%f\n",result);



}
