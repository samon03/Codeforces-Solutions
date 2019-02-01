#include <stdio.h>


int main()
{
    int n, temp, grpChild[5]= {0};
    scanf("%d", &n);

    while (n--)
    {
        scanf("%d", &temp);
        grpChild[temp] += 1;
    }

    int count = grpChild[4] + grpChild[3] + grpChild[2] / 2;
    grpChild[1] -= grpChild[3];

    if (grpChild[2] % 2 == 1)
    {
        count += 1;
        grpChild[1] -= 2;
    }
    if (grpChild[1] > 0)
    {
        count += (grpChild[1] + 3) / 4;
    }

    printf("%d\n", count);
    return 0;
}