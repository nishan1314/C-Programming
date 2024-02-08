#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int m, a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long int temp = a * b * c;
        long long int val;
        if (m % temp == 0)
        {
            val = m / temp;
            printf("%lld\n", val);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}