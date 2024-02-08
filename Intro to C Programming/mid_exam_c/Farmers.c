#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        // n_day=(10*15)/15
        int n_day = (m1 * d) / (m1 + m2);

        // result=15-10
        int result = d - n_day;

        printf("%d\n", result);
    }
    return 0;
}