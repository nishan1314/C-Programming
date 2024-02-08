#include <stdio.h>
int my_len(char str_len[])
{
    int i;
    for (i = 0; str_len[i] != '\0'; i++)
        ;

    return i;
}
int main()
{
    char str[100000];
    scanf("%s", str);

    my_len(str);

    printf("%d",my_len(str));

    return 0;
}