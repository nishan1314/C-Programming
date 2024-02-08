#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1001], str2[1001];
    scanf("%s %s", str1, str2);

    int stlen1 = strlen(str1);
    int stlen2 = strlen(str2);

    printf("%d %d\n", stlen1, stlen2);
    printf("%s %s", str1, str2);

    return 0;
}