#include <stdio.h>

int main()
{
    int n, flag = 0;
    long long a;
    scanf("%d", &n);
    long long arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    scanf("%lld", &a);
    for (int j = 0; j < n; j++)
    {
        if (a == arr[j])
        {
            printf("%d", j);
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("-1");
    }

    return 0;
}