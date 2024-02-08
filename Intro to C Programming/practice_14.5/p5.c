#include<stdio.h>
char small_to_capital(char ch){
    char st=ch;
    if(st>='a' && st<='z'){
        return st-32;
    }else{
        return 0;
    }
}

int main(){
    char x;
    scanf("%c",&x);
    if(small_to_capital(x)!=0){
        printf("%c",small_to_capital(x));
    }else{
        printf("Please enter small letter");
    }
    
    return 0;
}