#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, m , a;
    double flagRow, flagCol, total;

    scanf("%d %d %d", &n, &m, &a);

    if(n%a == 0)
    {
        flagRow = ceil(n/a);
    }
    else
    {
        flagRow = ceil(n/a);
        flagRow++;
    }
    if(m%a == 0)
    {
        flagCol = ceil(m/a);
    }
    else
    {
        flagCol = ceil(m/a);
        flagCol++;
    }

    total = flagRow * flagCol;

    printf("%.0lf\n",total);

    return 0;
}