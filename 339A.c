#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[102];
    char temp1, temp2;
    int i, j;

    gets(str);

   int len = strlen(str);

    for(i = 0; i < len; i=i+2)
    {
        for(j = i+2; j < len; j=j+2)
        {
            if(str[i] > str[j])
            {
                temp1 = str[i];
                str[i] = str[j];
                str[j] = temp1;
            }
        }
    }
    puts(str);

    return 0;
}