#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    fgets(str,1000,stdin);

    int count=1;

    for(int i=0;i<strlen(str);i++){
        if(str[i]==' '){
            count++;
        }
    }

    printf("%d",count);
    return 0;
}