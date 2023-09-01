#include <iostream>

using namespace std;

int main()
{
    int n, k, i, last = 0, digit = 0;
    cin >> n >> k;
    if ((n >= 2 && n <= 1000000000) && (k >= 1 && k <= 50))
    {
        for(i = 1; i <= k; i++)
        {
           last = n%10;
           if(last == 0)
           {
              n = n/10;
           }
           else
           {
              n--;
           }
        }

        cout << n << endl;
    }

    return 0;
}
