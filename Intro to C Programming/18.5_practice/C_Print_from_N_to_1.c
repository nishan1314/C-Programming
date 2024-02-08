#include <stdio.h>
void fun(int n, int t)
{
    if (t <= n)
    {
        fun(n, t + 1);
        if(t==1){
            printf("%d", t);
        }else{
            printf("%d ", t);
        }
        
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    fun(n, 1);
    return 0;
}