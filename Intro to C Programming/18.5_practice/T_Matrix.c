#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sum_pri = 0, sum_sec = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum_pri += arr[i][j];
            }
            if (i + j == n - 1)
            {
                sum_sec += arr[i][j];
            }
        }
    }

  

    int sum = abs(sum_pri-sum_sec);
    printf("%d", sum);

    return 0;
}