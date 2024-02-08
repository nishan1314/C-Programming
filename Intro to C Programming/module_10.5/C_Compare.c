#include<stdio.h>
#include<string.h>
int main(){
    char str1[21],str2[21];
    scanf("%s",str1);
    scanf("%s",str2);

    int v = strcmp(str1,str2);

    if(v>0){
        printf("%s",str2);
    }else if(v<0){
        printf("%s",str1);
    }else{
        printf("%s",str1);
    }
    return 0;
}