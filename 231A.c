#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, a, b, c, i, sum = 0, count = 0;

   scanf("%d", &n);

   while(n--)
   {
       scanf("%d %d %d", &a, &b, &c);
       sum = a + b + c;
       if(sum > 0 && sum > 1)
       {
           count++;
       }
   }
   printf("%d\n", count);

    return 0;
}