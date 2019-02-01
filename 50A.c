#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, flag = 0, result = 0;

    scanf("%d %d", &m, &n);

    if(m >= 0 && n >= 0)
    {
        flag = m * n;
        result = flag/2;
        printf("%d\n", result);
    }
    return 0;
}