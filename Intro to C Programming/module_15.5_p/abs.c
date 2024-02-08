#include<stdio.h>

void my_abs(int x){
    if(x==0){
        printf("0");
    }else if(x>0){
        printf("%d",x);
    }else{
        printf("%d",(x*-1));
    }
}

int main(){
    int n;
    scanf("%d",&n);
    my_abs(n);
    return 0;
}