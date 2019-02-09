#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, i;
    bool count = false;
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    scanf("%d", &n);

    for(i = 0; i < 14; i++)
    {
         if((n % arr[i]) == 0)
         {
             count = true;
         }
     }
    if(count == true)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");

    return 0;
}