#include <stdio.h>
#include <ctype.h>
#include <string.h>

void fun(char str[], int idx, int count)
{
    if (idx < strlen(str))
    {
        char ch = tolower(str[idx]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            count++;
        }
        fun(str, idx + 1, count);
    }
    else
    {
        printf("%d", count);
    }
}
int main()
{
    char str[201];
    fgets(str, 201, stdin);

    fun(str, 0, 0);
    return 0;
}