#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[102];
    int i, j, count = 1;

    gets(str);
    int len = strlen(str);

    for(i = 0; i < len; i++)
    {
        if(str[i] == str[i+1])
        {
              count++;
              if(count >= 7)
              {
                   printf("YES\n");
                   return 0;
              }

        }
         else
         {
              count = 1;

         }

    }

    printf("NO\n");
    return 0;
}