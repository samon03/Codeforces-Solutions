#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, j, k, even = 0, odd = 0, num[100];
    cin >> n;

    for(i=1; i<=n; i++)
    {
        if(n >= 3 && n <= 100)
        {
           cin >> num[i];
           if(num[i]%2 == 0)
           {
              even++;
           }
           else
           {
               odd++;
           }
        }

    }

    for(j=1; j <= n; j++)
    {
           if(even > odd)
           {
               if(num[j]%2 != 0)
               {
                   k=j;
               }
           }
           else
           {
               if(num[j]%2 == 0)
               {
                   k=j;
               }
           }
    }
    cout << k << endl;
    return 0;
}
