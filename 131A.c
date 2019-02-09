#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s[102];
    int i, check = 1;

    gets(s);
    int len = strlen(s);

    for ( i = 1; i < len; ++i)
    {
        if (s[i] >= 'a')
        {
            check = 0;
            break;
        }
    }

    if (check)
    {
        for (i = 0; i < len; ++i)
        {
            if (s[i] >= 'a')
            {
                s[i] -= ('a' - 'A');
            }
            else
            {
                s[i] += ('a' - 'A');
            }
        }
}

    puts(s);
    return 0;
}