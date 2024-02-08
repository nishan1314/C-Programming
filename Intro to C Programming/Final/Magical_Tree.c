#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        int t = 5;

        for (int i = 1; i <= n; i += 2)
        {
            t++;
        }

        int s = t - 1;
        int k = 1;

        for (int i = 1; i <= t; i++)
        {
            for (int j = s; j >= 1; j--)
            {
                printf(" ");
            }
            s--;

            for (int j = 1; j <= k; j++)
            {
                printf("*");
            }
            k += 2;
            printf("\n");
        }

        int x = 5;
        int p = n;
        int q = 5;

        for (int i = 1; i <= x; i++)
        {
            for (int j = q; j >= 1; j--)
            {
                printf(" ");
            }

            for (int j = 1; j <= p; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }

    return 0;
}