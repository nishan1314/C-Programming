#include <stdio.h>

int main()
{
    int n, s1, s2, k1, k2;
    scanf("%d", &n);
    s1 = (n*2)-3;
    s2 = n - 1;
    k2 = 1, k1 = 1;
    for (int i = 1; i <= (n * 2)-1; i++)
    {
        if (i > n)
        {
            for (int j = 1; j <= k1; j++)
            {
                printf(" ");
            }
            k1++;

            for (int j = 1; j <= s1; j++)
            {
                printf("*");
            }
            printf("\n");
            s1 -= 2;
        }
        else
        {
            for (int j = 1; j <= s2; j++)
            {
                printf(" ");
            }
            s2--;

            for (int j = 1; j <= k2; j++)
            {
                printf("*");
            }
            printf("\n");
            k2 += 2;
        }
    }
    return 0;
}