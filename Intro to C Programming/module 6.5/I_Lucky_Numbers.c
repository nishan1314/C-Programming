#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n >= 10 && n <= 99)
    {
        int a = n % 10;
        int b = n / 10;

        if (a % b == 0 || b % a == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}