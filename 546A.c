#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[20];
    int k, n, w, i, sum = 0, result = 0, total;

    scanf("%d %d %d", &k, &n, &w);

    for(i = 1; i <= w; i++)
    {
        sum = sum + (i * k);
    }
    result = sum - n;
    if(sum <= n)
    {
        printf("0\n");
    }
    else
    {
        printf("%d\n", result);
    }

    return 0;
}