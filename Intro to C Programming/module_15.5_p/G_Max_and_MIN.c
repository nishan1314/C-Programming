#include<stdio.h>

void min_max_find(int arr[],int size){
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
   for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
   }

   printf("%d %d",min,max);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    min_max_find(arr,n);

    return 0;
}