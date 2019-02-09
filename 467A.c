#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, sum, count = 0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d", &a, &b);
        sum = b - a;

        if(sum != 0 && sum > 1)
        {
           count++;
        }
    }
    printf("%d\n", count);
    return 0;
}