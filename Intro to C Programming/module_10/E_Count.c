#include <stdio.h>
#include <string.h>

int main()
{
    char dig[1000001];
    scanf("%s", dig);
    int sum = 0;

    for (int i = 0; i < strlen(dig); i++)
    {
        int dg = dig[i] - 48;

        sum = sum + dg;
    }

    printf("%d", sum);
    return 0;
}