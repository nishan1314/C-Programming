#include<stdio.h>

void fun(int arr[],int size,int idx){
    if(idx<size){
        printf("%d ",arr[idx]);
        fun(arr,size,idx+1);
    }
    
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    int idx=0;
    fun(arr,n,idx);
    return 0;
}