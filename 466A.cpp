#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b, x = 0, y = 0;
    int total = 0, divition = 0, f1 = 0;

    cin >> n >> m >> a >> b;

    f1 = m * a;
    x = n%m;
    y = n/m;

    if(f1 > b)
    {
        total = x * a;

        if(total > b)
        {
            total = (y * b) + b;
        }
        else
        {
            total = (y * b) + total;
        }
    }
    else
    {
        total = n * a;
    }

    cout << total << endl;

    return 0;
}
