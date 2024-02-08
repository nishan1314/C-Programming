#include<stdio.h>
int count_odd(int arr[],int size){
    int odd_num=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2!=0){
            odd_num++;
        }
    }

    return odd_num;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    printf("%d",count_odd(arr,n));

    return 0;
}