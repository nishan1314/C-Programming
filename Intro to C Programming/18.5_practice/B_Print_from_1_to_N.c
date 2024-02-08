#include <stdio.h>
void fun(int n, int t)
{
    if (t <= n)
    {   
        printf("%d\n", t);
        fun(n, t + 1);
       
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    fun(n, 1);
    return 0;
}