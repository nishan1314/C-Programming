#include <stdio.h>

int main()
{
    long long n, first = 0, sec = 1, third;
    scanf("%lld", &n);

    if (n == 1)
    {
        printf("0");
    }
    else if (n == 2)
    {
        printf("1");
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            third = first + sec;
            first = sec;
            sec = third;
        }

        printf("%lld", third);
    }
    return 0;
}