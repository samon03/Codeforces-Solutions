#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, x;

    scanf("%d %d", &n , &m);

    if(n < m)
    {
       x = n;
    }
    else
    {
        x = m;
    }

    if(x%2 == 0)
    {
       printf("Malvika");
    }
    else
    {
        printf("Akshat");
    }

    return 0;
}