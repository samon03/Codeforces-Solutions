#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, count = 1, flag = 0;

    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        if(a[i] > a[i+1])
        {
            if(count > flag)
            {
                flag = count;
            }
            count = 1;
        }
        else
            count++;
    }
    if(count > flag)
    {
        flag = count;
    }
    printf("%d", flag);

    return 0;
}