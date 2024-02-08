#include <stdio.h>
#include <limits.h>

int main()
{
    long long int n, m, k, min;
    long long int count = 0;
    scanf("%lld %lld %lld", &n, &m, &k);

    min = n;
    if (m < min)
    {
        min = m;
    }
    if (k < min)
    {
        min = k;
    }

    count += min;

    n -= min;
    m -= min;
    k -= min;

    n = n / 2;

    min = n;
    if (k < min)
    {
        min = k;
    }

    count += min;

    printf("%lld", count);

    return 0;
}
