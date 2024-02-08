#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    getchar();

    while (n--)
    {
        char str[100001];
        scanf("%s", str);
        int flag = 0;
        for (int i = 0; i < strlen(str); i++)
        {
            if ((str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0') || (str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1'))
            {
                flag++;
            }
        }
        if (flag > 0)
        {
            printf("Good\n");
        }
        else
        {
            printf("Bad\n");
        }
    }

    return 0;
}