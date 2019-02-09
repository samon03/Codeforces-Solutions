#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, x, count = 0;
    char str[100];
    char check[] = "hello";
    gets(str);

    int len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == check[x])
        {
           x++;
           count++;
        }
    }
    if(count == 5)
    {
          printf("YES\n");
    }
    else
    {
          printf("NO\n");
    }

    return 0;
}