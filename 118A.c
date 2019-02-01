#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int i;
    int size = strlen(str);
    for(i = 0; i < size; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'|| str[i] == 'y')
        {
           continue;
        }
        else
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y')
                {
                    continue;
                }
                printf(".%c", str[i]);
            }
            else
                printf(".%c", str[i]);
        }
    }


    return 0;
}