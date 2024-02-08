#include<stdio.h>

int main(){
    int t_amount;
    scanf("%d",&t_amount);

    if(t_amount>1000){
        printf("I will buy Punjabi\n");
        int rem_amount=t_amount-1000;
    if(rem_amount>=500){
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes");
    }

    }else{
        printf("Bad luck!");
    }

    return 0;
}