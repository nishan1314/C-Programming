#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int i, j;
    for (j = 0; j < n; j++)
    {
        if (arr[j] < min)
        {
            min = arr[j];
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            break;
        }
    }

    printf("%d %d", min, i + 1);

    return 0;
}