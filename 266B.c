#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, t, i;
    char str[102];

    scanf("%d %d", &n, &t);
    scanf("%s", str);

    while(t--)
    {
        for(i = 0; i < n-1; i++)
        {
            if(str[i] == 'B' && str[i+1] == 'G')
            {
               str[i] = 'G';
               str[i+1] = 'B';
               i++;
            }
        }
    }


    puts(str);
    return 0;
}