#include <stdio.h>

int main()
{
    int in_pass;
    while (scanf("%d", &in_pass) != EOF)
    {
        if (in_pass == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
            continue;
        }
    }

    return 0;
}