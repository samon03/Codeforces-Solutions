#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, c = 0, d = 0;
    int a, b;
    scanf("%d", &n);

    while(n--)
    {
       scanf("%d %d", &a, &b);
       c += (b - a);
       if(d < c)
       {
           d = c;
       }
    }
    printf("%d\n", d);


    return 0;
}