#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[102], i, j, n;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
         scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
         for(j = 0; j < n; j++)
         {
             if((arr[j] - 1) == i)
             {
                  printf("%d\n", j+1);
             }
         }
    }


    return 0;
}