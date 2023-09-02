#include <iostream>

using namespace std;

int main()
{
    int a, b, i, pairs = 0, left = 0, wear = 0;
    cin >> a >> b;
    if(a >= 1 && b <= 100)
    {
        if(a>b)
        {
           pairs = b;
           wear = a - b;
           left = wear/2;
        }
        else if(b>a)
        {
           pairs = a;
           wear = b - a;
           left = wear/2;
        }
        else if(a == b || b == a)
        {
            pairs = a;
            left = 0;
        }

        cout << pairs << " " << left << endl;
    }

    return 0;
}
