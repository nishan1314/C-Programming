#include<stdio.h>

int main(){
    int n_values,even_count=0,odd_count=0,pos_count=0,neg_count=0;
    scanf("%d",&n_values);

    while(n_values--){
        int values;
        scanf("%d",&values);

       if(values<0){
        neg_count++;
       }
        if(values>0){
        pos_count++;
       }
        if(values%2==0){
        even_count++;
       }
        if(values%2!=0){
        odd_count++;
       }
  
    } 

     printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even_count,odd_count, pos_count,neg_count);
    return 0;
}