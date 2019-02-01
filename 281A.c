#include <stdio.h>
#include <string.h>


int main()
{
    char str[1000];
    while(gets(str))
    {
        if(str[0] >= 97 && str[0] <= 122)
        {
                str[0] -= 32;
        }
        puts(str);
    }






    return 0;
}