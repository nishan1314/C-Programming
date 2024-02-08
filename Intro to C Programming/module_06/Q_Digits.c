#include <stdio.h>

int main()
{
    int t_case, val;

    scanf("%d", &t_case);
    while (t_case--)
    {
        scanf("%d", &val);

        int rev = 0;
        do
        {
            int rem = val % 10;
            printf("%d ", rem);
            val = val / 10;
        } while (val != 0);
        printf("\n");
    }

    return 0;
}