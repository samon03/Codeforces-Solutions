#include <stdio.h>
#include <stdlib.h>

int main()
{
    int str[100], n, k, i,count = 0;

    scanf("%d %d", &n, &k);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(str[i] >= str[k-1] && str[i] > 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}