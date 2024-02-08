#include <stdio.h>

long long int fun(long long int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long int ans = n * fun(n - 1);
    return ans;
}

long long int main()
{
    long long int n;
    scanf("%lld", &n);

    long long int ans = fun(n);
    printf("%lld", ans);
    return 0;
}