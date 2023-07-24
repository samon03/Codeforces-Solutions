#include <iostream>

using namespace std;

int main()
{
    int a, b, i, flag = 0;

    cin >> a >> b;

    if((a>=1 && a<=10) && (b>=1 && b<=10))
    {
        for (i=1;;i++)
        {
            a = a * 3;
            b = b * 2;
            flag++;

            if(a>b)
            {
                break;
            }
        }
    }

    cout << flag << endl;

    return 0;
}
