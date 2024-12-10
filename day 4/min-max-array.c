#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements:");
    scanf("%d",&size);
    int arrofnum[size];
    printf("enter %d elements into the array:",size);
    for(int i=0;i<size;i++){
        scanf("%d", &arrofnum[i]);
    }
    int max,min;
    max=min=arrofnum[0];
    for(int i=0;i<size;i++){
         if(arrofnum[i]>max){
            max=arrofnum[i];
        }
        if(arrofnum[i]<min){
            max=arrofnum[i];
        }

    printf("the largest elements in the given arrayis:%d",max);
     printf("the smallsest elements in the given arrayis:%d",min);
        
    }
}