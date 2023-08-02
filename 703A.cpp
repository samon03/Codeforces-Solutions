#include <iostream>

using namespace std;

int main()
{
    int n, m, c, i, flag1 = 0, flag2 = 0, flag3 = 0;
    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> m >> c;

        if((c >= 1 && c <= 6) && (m >= 1 && m <= 6))
        {
            if(m > c)
            {
                flag1++;
            }
            else if(c > m)
            {
                flag2++;
            }
            else
            {
                flag3++;
            }
        }
    }

    if(flag1 > flag2)
    {
        cout << "Mishka" << endl;
    }
    else if(flag1 < flag2)
    {
        cout << "Chris" << endl;
    }
    else if(flag1 == flag2)
    {
        cout << "Friendship is magic!^^" << endl;
    }

    return 0;
}
