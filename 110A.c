#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[102];
    int i, count = 0;

    gets(arr);

    for(i = 0; i < strlen(arr); i++)
    {
        if(arr[i] == '4' || arr[i] == '7')
        {
            count++;
        }
    }
    if(count == 4 ||count == 7)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}