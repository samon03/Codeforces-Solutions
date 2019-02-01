#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int n, i, flag = 0;
    char str[102];

    scanf("%d",&n);

    while(n--)
    {
        scanf("%s", str);
        int len = strlen(str);

        if(len > 10)
        {
            for(i = 0; i < len-2; i++)
            {
               flag++;
            }
            printf("%c%d%c\n", str[0], flag, str[len-1]);
            flag = 0;
        }
        else
        {
            puts(str);
        }
    }
    return 0;
}