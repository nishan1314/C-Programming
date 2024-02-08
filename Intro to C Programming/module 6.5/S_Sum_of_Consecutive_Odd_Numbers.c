
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    while (n--)
    {
        long long a, b, min, max, sum = 0;
        scanf("%lld %lld", &a, &b);

        min = a < b ? a : b;
        max = a > b ? a : b;

        for (int i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
            {
                sum = sum + i;
            }
        }

        printf("%lld\n", sum);
    }

    return 0;
}