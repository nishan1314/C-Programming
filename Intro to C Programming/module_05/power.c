#include<stdio.h>

int main(){
    int a,b,result=1;
    scanf("%d %d",&a,&b);

    for(int i=1;i<=b;i++){
        result=a*result;
    }
    printf("%d",result);

    return 0;
}