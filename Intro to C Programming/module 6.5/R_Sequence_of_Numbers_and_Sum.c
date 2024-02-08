#include <stdio.h>


int main()
{
    int n, m;

    while (scanf("%d %d", &n, &m)!=EOF)
    {
        if (n <= 0 || m <= 0)
        {
            break;
        }
        else
        {
            int min = n < m ? n : m;
            int max = n > m ? n : m;
            int sum = 0;
            for (int i = min; i <= max; i++)
            {
                printf("%d ", i);
                sum = sum + i;
            }
            printf("sum =%d\n", sum);
        }
    }

    return 0;
}
