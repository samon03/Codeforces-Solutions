#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, p , q, x, count = 0, i;
    scanf("%d", &n);
    int arr[n];
    scanf("\n%d", &p);
    int str1[p];
    for(i = 0; i < p; i++)
    {
        scanf("%d", &str1[i]);
        x = str1[i];
        arr[x] = 1;
    }
    scanf("\n%d", &q);
    int str2[q];
     for(i = 0; i < q; i++)
    {
        scanf("%d", &str2[i]);
        x = str2[i];
        arr[x] = 1;
    }
    for(i = 1; i <= n; i++)
    {
        if(arr[i] == 1)
        {
            count = 1;
        }
        else
        {
            count = 0;
            break;
        }

    }
    if(count == 1)
    {
       printf("I become the guy.\n");
    }
    else
    {
       printf("Oh, my keyboard!\n");
    }
    return 0;
}