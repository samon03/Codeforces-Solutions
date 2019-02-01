#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[5][5];
    int i, j, count = 0;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {

             if(arr1[i][j] != 0)
             {
                 count = abs(i-2)+abs(j-2);
             }
        }
    }
    printf("%d\n", count);
    return 0;
}