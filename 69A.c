#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y, z, xsum = 0, ysum = 0, zsum = 0;
    int count = 0;

    scanf("%d", &n);

   while(n--)
   {
       scanf("%d %d %d", &x, &y, &z);
       xsum += x;
       ysum += y;
       zsum += z;

   }
    if(xsum == 0 && ysum == 0 && zsum == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}