#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int m;
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int new_arr[n+m];

    for(int i=0;i<n;i++){
        new_arr[i]=arr1[i];
    }

    for(int i=n,j=0;i<n+m,j<m;i++,j++){
        new_arr[i]=arr2[j];
    }


    for(int i=0;i<n+m;i++){
        printf("%d ",new_arr[i]);
    }
    return 0;
}