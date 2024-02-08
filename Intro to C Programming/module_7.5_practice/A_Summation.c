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
    long long sum = 0;
    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }

    if (sum >= 0)
    {
        printf("%lld", sum);
    }
    else
    {
        printf("%lld", sum * -1);
    }

    return 0;
}