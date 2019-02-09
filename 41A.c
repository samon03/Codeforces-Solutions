#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[105], t[105], flag;
    int i = 0 , j;

    gets(s);
    gets(t);

    j = strlen(s) - 1;

    while(i < j)
    {
        flag = s[i];
        s[i] = s[j];
        s[j] = flag;

        i++;
        j--;
    }
    if(strcmp(s, t) == 0)
    {
            printf("YES\n");
            fflush(stdout);
    }
    else
    {
            printf("NO\n");
             fflush(stdout);
    }

    return 0;
}