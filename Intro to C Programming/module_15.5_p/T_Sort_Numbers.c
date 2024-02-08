#include <stdio.h>

void sorting(int arr[], int size)
{

    int new_arr[size];
    for (int i = 0; i < size; i++)
    {
        new_arr[i] = arr[i];
    }
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", new_arr[i]);
    }
}

int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    sorting(arr, 3);

    return 0;
}