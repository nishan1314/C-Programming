#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);

    getchar();

    while (t--)
    {
        char str1[51], str2[51];
        scanf("%s %s", str1, str2);
        int a = strlen(str1);
        int b = strlen(str2);

        int max = a > b ? a : b;

        for (int i = 0; i < max; i++)
        {
            if (i < a)
            {
                printf("%c", str1[i]);
            }
            if (i < b)
            {
                printf("%c", str2[i]);
            }
        }

        printf("\n");
    }

    return 0;
}