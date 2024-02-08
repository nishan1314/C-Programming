#include<stdio.h>

int sum(int x,int y){
    int result=x+y;
    return result;
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
    return 0;
}