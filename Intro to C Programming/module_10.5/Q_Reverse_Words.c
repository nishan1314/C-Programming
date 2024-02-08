#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000001];
    int flag = 0;
    while (scanf("%s", str) != EOF)
    {
        strrev(str);
        if (flag)
        {
            printf(" ");
        }
        flag = 1;
        printf("%s", str);
    }

    return 0;
}