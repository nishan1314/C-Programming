#include<stdio.h>
void fun(int i,int x){

    if(i<=x){
        printf("%d ",i);
        fun(i+1,x);
    }
    
}
int main(){
    int n;
    scanf("%d",&n);
    fun(1,n);
    return 0;
}