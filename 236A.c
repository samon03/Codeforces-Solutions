#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, count = 0;
    char str[100];
    gets(str);

    int len = strlen(str);

    for(i = 0; i < len; i++)
    {
       for(j = i+1; j < len; j++)
       {
        if(str[i] == str[j])
        {
            str[i] = '\0';
        }
       }
    }
    for(i = 0; i < len; i++)
    {
        if((str[i] >= 97 && str[i] <= 122))
        {
            count++;
        }
    }
    if(count%2 == 0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

    return 0;
}