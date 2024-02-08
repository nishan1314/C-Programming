#include<stdio.h>

int main(){
    char str[1000];
    scanf("%s",str);

     int str_len=0;
     for (int i = 0; str[i]!='\0'; i++)
    {
        str_len++;
    }

      for(int i=0,j=str_len-1;i<(str_len/2);j--,i++){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }


    printf("%s",str);
    
}