#include <stdio.h>
int main()
{
   int a;
   long long int c;
   char b;
   scanf("%d",&a);
   scanf("%lld",&c);
   scanf(" %c",&b);

   printf("%d\n%lld\n%c",a,c,b);

    return 0;
}