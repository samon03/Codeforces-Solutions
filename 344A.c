#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, flag = 1;

    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n-1; i++)
    {
        if(arr[i] != arr[i+1])
        {
            flag++;
        }
    }
    printf("%d\n", flag);
    return 0;
}