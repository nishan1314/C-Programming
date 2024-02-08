#include <stdio.h>

int main()
{
    int a, b, flag = -1;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {
        int lucky = 0;
        int n = i;
        while (n)
        {
            if (n % 10 != 4 && n % 10 != 7)
            {
                lucky++;
            
            }
            n = n / 10;
        }

        if (lucky == 0)
        {
            printf("%d ", i);
            flag++;
        }
    }

    if (flag == -1)
    {
        printf("-1");
    }

    return 0;
}

