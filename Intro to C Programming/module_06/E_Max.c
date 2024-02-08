#include <stdio.h>

int main()
{
    int n, val, max=0;
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &val);
        if(val>max){
            max=val;
        }
       
    }

    printf("%d",max);

    return 0;
}