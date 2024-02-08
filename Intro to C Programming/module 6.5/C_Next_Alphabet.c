#include <stdio.h>

int main()
{
    char ch, new_ch;
    scanf("%c", &ch);

    if (ch == 'z')
    {
        new_ch = 'a';
        printf("%c", new_ch);
    }
    else
    {
        new_ch = ch + 1;
        printf("%c", new_ch);
    }

    return 0;
}