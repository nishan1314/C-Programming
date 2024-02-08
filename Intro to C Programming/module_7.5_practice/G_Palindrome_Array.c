#include <stdio.h>

int main()
{
    int n;
    int flag = -1;
    scanf("%d", &n);
    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        int temp = arr1[i];
        arr1[i] = arr1[j];
        arr1[j] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            flag++;
        }
    }

    if (flag == -1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}