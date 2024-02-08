// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str[100001];
//     scanf("%s", str);

//     for (int i = 0; i < strlen(str); i++)
//     {
//         if (str[i] >= 65 && str[i] <= 90)
//         {
//             str[i] = str[i] + 32;
//         }
//         else if (str[i] >= 97 && str[i] <= 122)
//         {
//             str[i] = str[i] - 32;
//         }
//         else if (str[i] == ',')
//         {
//             str[i] = ' ';
//         }
//     }

//     printf("%s", str);
//     return 0;
// }



#include <stdio.h>
#include <string.h>


int main()
{
    char a[100001];
    scanf("%s", a);
    int size = strlen(a);
    for (int i = 0; i < size; i++)
    {
        if (a[i] == ',')
        {
            printf(" ");
        }
        else
        {
            if (a[i] >= 97 && a[i] <= 122)
            {
                printf("%c", a[i] - 32);
            }
            else
            {
                printf("%c", a[i] + 32);
            }
        }
    }

    return 0;
};