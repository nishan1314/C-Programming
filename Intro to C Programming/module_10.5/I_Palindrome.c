#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%s", str);

    // int size = strlen(str);
    char str2[1001];
    strcpy(str2, str);
    strrev(str2);

    if (strcmp(str, str2) == 0)
        printf("YES");
    else
        printf("NO");

    // for (int i = 0; i < size / 2; i++)
    // {
    //     if (str[i] != str[size - i - 1])
    //     {
    //         printf("NO\n");
    //         return 0;
    //     }
    // }

    // printf("YES\n");
}