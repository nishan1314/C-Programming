#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    getchar();

    while (n--)
    {
        char str[101];
        scanf("%s", str);
        int count = strlen(str) - 2;
        if (strlen(str) > 10)
        {
            printf("%c%d%c", str[0], count, str[strlen(str) - 1]);
        }
        else
        {
            printf("%s", str);
        }

        printf("\n");
    }

    return 0;
}