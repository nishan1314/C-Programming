#include <stdio.h>
void fun(int arr[], int size, int idx, long long int val)
{
    if (idx < size)
    {

        val += arr[idx];
        fun(arr, size, idx + 1, val);
    }

    if (idx == size)
    {
        printf("%lld", val);
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
    fun(arr, n, 0, 0);

    return 0;
}