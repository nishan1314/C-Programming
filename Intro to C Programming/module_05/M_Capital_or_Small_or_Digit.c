#include<stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);

        if(ch>=65 && ch<=90){
        printf("ALPHA\nIS CAPITAL");
        
        }else if(ch>=97 && ch<=122){
              printf("ALPHA\nIS SMALL");
        }else if(ch>=48 && ch<=57){
            printf("IS DIGIT");
        }
   
}