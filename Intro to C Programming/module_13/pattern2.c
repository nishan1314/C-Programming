#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int s=n-1;
    int k=1;


    for(int i=1;i<=n;i++){
        for (int j = s;j>=1;j--)
        {
            printf(" ");
        }
        s--;

        for(int j=1;j<=k;j++){
            printf("*");
        }
        k+=2;
        printf("\n");
        
    }
    return 0;
}