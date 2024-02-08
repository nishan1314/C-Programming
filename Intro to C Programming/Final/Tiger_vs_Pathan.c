#include <stdio.h>
#include <string.h>

int main()
{
    int c;
    scanf("%d", &c);

    while (c--)
    {
        int n;
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);

        int p = 0, t = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if (str[i] == 'T')
            {
                t++;
            }
            else
            {
                p++;
            }
        }

        if (p > t)
        {
            printf("Pathaan\n");
        }
        else if (t > p)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}