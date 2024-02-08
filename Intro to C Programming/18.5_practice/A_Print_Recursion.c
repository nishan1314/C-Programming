#include <stdio.h>
void fun(int t, int n)
{
    if (t < n)
    {
        printf("I love Recursion\n");
        fun(t + 1, n);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    fun(0, n);
    return 0;
}