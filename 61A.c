#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[105], str2[105];
    gets(str1);
    gets(str2);

    int i;

    for(i = 0; i < strlen(str1); i++)
    {
        if(str1[i] == str2[i])
        {
            str1[i] = '0';
        }
        else
        {
            str1[i] = '1';
        }
    }
    puts(str1);

    return 0;
}