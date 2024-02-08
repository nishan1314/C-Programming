#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int cand = a - b;

    if (cand >= 0)
    {
        printf("%d", cand);
    }
    else
    {
        printf("0");
    }
    return 0;
}