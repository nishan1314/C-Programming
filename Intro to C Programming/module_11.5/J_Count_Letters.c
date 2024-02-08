#include <stdio.h>
int main()
{
    char str;
    int count[26] = {0};
    while (scanf("%c", &str) != EOF)
    {
        int val = str - 'a';
        count[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }
    return 0;
}