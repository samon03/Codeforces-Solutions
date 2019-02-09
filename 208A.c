#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[202];
    int i;
    gets(str);

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B')
        {

            str[i] = ' ';
            str[i+1] = ' ';
            str[i+2] = ' ';

        }
        else
            printf("%c", str[i]);
    }
    return 0;
}