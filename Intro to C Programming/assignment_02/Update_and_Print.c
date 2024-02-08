#include <stdio.h>

int main()
{
    int n;
    int idx;
    int u_value;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    
    scanf("%d %d", &idx, &u_value);

    for (int i = 0; i < n; i++)
    {
        if (i == idx)
        {
            arr[i] = u_value;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}