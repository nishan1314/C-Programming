#include<stdio.h>

int main(){
    float x,p;
    scanf("%f %f",&x,&p);

    float result=p/(1-1*(x/100));

    printf("%.2f",result);
    return 0;
}