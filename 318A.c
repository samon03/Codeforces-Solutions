#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long n, k, flag, ans;
    scanf("%I64d %I64d", &n, &k);
    if(n % 2 == 0)
    {
        flag = n / 2;
    }
    else
    {
        flag = (n / 2) + 1;
    }

    if(k > flag)
    {
        ans = (k - flag) * 2;
    }
    else
    {
        ans = (2 * k) - 1;
    }

    printf("%I64d\n", ans);

    return 0;
}