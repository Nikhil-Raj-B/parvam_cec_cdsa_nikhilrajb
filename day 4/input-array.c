#include<stdio.h>
int main(){
    int size;
    printf("enter the size of the array\n:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of an array:\n");
    for(int i=0;i<=size;i++){
        scanf("%d",&arr[i]);
    }
     printf("elements of an array:\n");
    for(int i=0;i<=size;i++){
        printf("the elements in the index arr[%d]:%d\n",i,arr[i]);
    }
}
