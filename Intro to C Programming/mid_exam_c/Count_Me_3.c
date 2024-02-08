#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
   
    while (t--)
    {
        char str[10001];
        scanf("%s",str);
        int c_alfa=0,c_small=0,digit=0;
        for(int i=0;i<strlen(str);i++){
            if(str[i]>='a' && str[i]<='z'){
                c_small++;
            }else if(str[i]>='A' && str[i]<='Z'){
                c_alfa++;
            }else if(str[i]>='0' && str[i]<='9'){
                digit++;
            }
        }

        printf("%d %d %d\n",c_alfa,c_small,digit);

    }
  
    
    return 0;
}