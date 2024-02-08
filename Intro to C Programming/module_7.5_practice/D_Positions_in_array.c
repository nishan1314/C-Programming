#include <stdio.h>
#define ll long long

int main()
{
    int n;
    scanf("%d", &n);
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (ll j = 0; j < n; j++)
    {
        if (arr[j] <= 10)
        {
            printf("A[%lld] = %lld\n", j, arr[j]);
        }
    }
    return 0;
}