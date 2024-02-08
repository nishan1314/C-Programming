#include <stdio.h>

int main(){
int i;
int count=0;
for(i=5;i<=50;i=i+5){
count++;

if(count==3){
    printf("%d",i);
    break;
}

}



   
return 0;
}