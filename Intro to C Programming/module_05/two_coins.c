#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int have = a+b;

    if(have>=c){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}