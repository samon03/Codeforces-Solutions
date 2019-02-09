#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, v, w, x, y, z;
    scanf("%d %d %d", &a, &b, &c);

    v = a + b + c;
    w = a + b * c;
    x = a * (b + c);
    y = a * b * c;
    z = (a + b)* c;

    if(w >= v && w >= x && w >= y && w >= z)
    {
          printf("%d\n", w);
    }
    else if(x >= v && x >= w && x >= y && x >= z)
    {
          printf("%d\n", x);
    }
    else if(y >= v && y >= x && y >= x && y >= z)
    {
          printf("%d\n", y);
    }
    else if(z >= v && z >= w && z >= x && z >= y)
    {
          printf("%d\n", z);
    }
    else if(v >= z && v >= w && v >= x && v >= y)
    {
          printf("%d\n", v);
    }
    return 0;
}