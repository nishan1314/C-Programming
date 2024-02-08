#include <stdio.h>
/*1
   21
  321
 4321
54321*/
int main()
{
    int n;
    scanf("%d", &n);
    int s = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }
        s--;

        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}