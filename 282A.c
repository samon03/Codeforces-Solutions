#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int x = 0;
    scanf("%d\n", &n);
    char str[5];
    for(i = 0; i < n; i++)
    {
        gets(str);
        if((str[1] == '+') && (str[0] == '+' || str[2] == '+'))
        {
                  x++;
        }
        if((str[1] == '-') && (str[0] == '-' || str[2] == '-'))
        {
                  x--;
        }

    }
    printf("%d", x);


    return 0;
}