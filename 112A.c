#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[102], str2[102];
    int i, j;

    gets(str1);
    gets(str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for(i = 0; i < len1; i++)
    {
        str1[i] = tolower(str1[i]);
        str2[i] = tolower(str2[i]);

        if(str1[i] > str2[i])
        {
             printf("1\n");
             return 0;
        }
        else if(str1[i] < str2[i])
        {
             printf("-1\n");
             return 0;
        }
    }
    if(strcmp(str1, str2) == 0)
    {
        printf("0\n");
    }

    return 0;
}