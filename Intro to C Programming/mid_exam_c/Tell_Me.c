#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        int ix;
        scanf("%d", &ix);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == ix)
            {
                flag++;
                break;
            }
            else
            {
                flag = 0;
            }
        }

        if (flag != 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}