#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            arr[j] = 0;
        }
        else if (arr[j] < 0)
        {
            arr[j] = 2;
        }
        else
        {
            arr[j] = 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%lld ", arr[i]);
    }
    return 0;
}