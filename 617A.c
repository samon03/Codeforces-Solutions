#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, steps = 5, total;

    while(scanf("%d", &x))
    {
        if(x % steps == 0)
        {
            printf("%d", x/steps);
            return 0;
        }
        else
        {
            printf("%d", ((x/steps)+1));
            return 0;
        }
    }
    return 0;
}