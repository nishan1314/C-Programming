#include<stdio.h>

int main(){
    int n,s=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=s;j<s+3;j++){
            printf("%d ",j);
        }
        s+=4;
        printf("PUM\n");
    }

    return 0;
}