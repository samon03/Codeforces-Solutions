#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[102];
    int i, check = 0;

    gets(str);

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == 'H'|| str[i] == 'Q' || str[i] == '9')
        {

             printf("YES");
             return 0;
        }

    }
    printf("NO");

    return 0;
}