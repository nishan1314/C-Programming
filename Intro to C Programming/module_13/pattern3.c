#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    // int s=0,k=(n*2)-1;
    int s=0,k=(n*2)-1;

    for(int i=1;i<=n;i++){

        if(s!=0){
            for(int j=1;j<=s;j++){
                printf(" ");
            }
        }
        s++;

        for(int j=1;j<=k;j++){
            printf("*");
            
        }
        k-=2;
        printf("\n");
    }
    return 0;
}