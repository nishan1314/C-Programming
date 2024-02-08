#include<stdio.h>

int main(){
    int x,digit;
    scanf("%d",&x);

    while(x){
         digit=x%10;
        x=x/10;

    }

    if(digit%2==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
}