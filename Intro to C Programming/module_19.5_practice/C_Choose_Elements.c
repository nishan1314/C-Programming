#include <stdio.h>
#define ll long long int
int main()
{
    ll n, k;
    scanf("%lld %lld", &n, &k);

    
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            scanf("%lld", &arr[i]);
        }

        for (ll i = 0; i < n - 1; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    ll temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        ll sum = 0;

        for (ll i = 0; i < k; i++)
        {
            if(arr[i]<0){
                break;
            }
            sum = sum + arr[i];
        }

        printf("%lld", sum);
    

    return 0;
}