// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char ch1[11];
//     scanf("%s", ch1);
//     char ch2[11];
//     scanf("%s", ch2);

//     int sz1 = strlen(ch1);
//     int sz2 = strlen(ch2);
//     printf("%d %d\n", sz1, sz2);
//     printf("%s%s\n", ch1, ch2);

//     int temp = ch1[0];
//     ch1[0] = ch2[0];
//     ch2[0] = temp;

//     printf("%s %s", ch1, ch2);
//     return 0;
// }


#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11];

    scanf("%s", a);
    scanf("%s", b);
    int al = strlen(a);
    int bl = strlen(b);
    printf("%d %d\n", al, bl);

    printf("%s%s\n", a, b);

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    printf("%s %s", a, b);

    return 0;
};