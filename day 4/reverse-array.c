#include<stdio.h>
int main(){
    int size;
    printf("enter the number of  element:");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elments of an array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     printf("orginal array  elments are as follows");
    for(int i=0;i<size;i++){
        scanf("%d\t",&arr[i]);
    }
    printf("\nreveresrd array elements are as follows:\n");
    for(int i=0;i<size;i-- ){
        printf("%d\t",arr[i]);
    }

}