#include <stdio.h>
void fun(int arr[], int size, int idx)
{
    if (size % 2 == 0)
    {
        if (idx < size)
        {
            if ((idx + 1) % 2 == 0)
            {
                printf("%d ", arr[idx]);
            }
            fun(arr, size, idx + 1);
        }
    }
    else
    {
        if (idx < size)
        {
            if ((idx + 1) % 2 != 0)
            {
                printf("%d ", arr[idx]);
            }
            fun(arr, size, idx + 1);
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    fun(arr, n, 0);
    return 0;
}