#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int y, i;
   scanf("%d", &y);

   for(i = y; i <= 9012; i++)
   {
       y = y + 1;
       int a = y / 1000;
       int b = (y / 100)%10;
       int c = (y / 10)%10;
       int d = y%10;

       if(a != b && b != c && b != d && c != a && c != d && d != a)
       {
            printf("%d%d%d%d\n", a, b, c, d);
            break;
        }

   }

   return 0;

}