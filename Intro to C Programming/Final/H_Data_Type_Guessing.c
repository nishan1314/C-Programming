#include <stdio.h>
#include <limits.h>
int main()
{
    double n, k, a;
    scanf("%lf %lf %lf", &n, &k, &a);
    double val = (n * k) / a;
    long long val1 = val;
    double my_res = val - val1;

    if (my_res > 0)
    {
        printf("double");
    }
    else if ((n * k) / a >= INT_MIN && (n * k) / a <= INT_MAX)
    {
        printf("int");
    }
    else if ((n * k) / a > INT_MAX)
    {
        printf("long long");
    }

    return 0;
}