#include<stdio.h>
int main(){
    int size;
    printf("enter the size of an array");
    scanf("%d",&size);
    int arr[size];
    printf("enter the elements of rthe array");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int target=0,count=0;
    printf("enter the elements which need to be found\n");
    scanf("%d",&target);
    printf("the target element %d is found at indices: ",target);
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            printf("%d\t",i);
            count++;
        }

    }
    printf("\nthe target element %d count in  index:%d",target,count);
}