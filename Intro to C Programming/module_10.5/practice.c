#include<stdio.h>
#include<string.h> 
int main(){
    char str[10];
    getchar();
    while(scanf("%s",str)!=EOF){
        printf("%s ",strrev(str));
    }
    return 0;
}