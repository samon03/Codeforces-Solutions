#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[102];
    int n, i, count = 0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }

    }
    printf("%d\n", count);

    return 0;
}