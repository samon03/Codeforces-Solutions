#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, arr[1000], i, j, sum1 = 0, sum2 = 0, len = 0;

    cin >> t;

    string store[t];

    for(i=0; i<t; i++)
    {
       cin >> arr[i];
    }


    int number, x, y, n, m;

    for(int j = 0; j < t; j++)
    {
        number = arr[j];

        int firstThreeDigits = number;

        for (int p = 0; p < 3 && firstThreeDigits >= 0; p++)
        {
            int digit = firstThreeDigits % 10;
            firstThreeDigits /= 10;
        }

        int sum = 0, sum2 =0;
        int temp = firstThreeDigits;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        y = number  % 1000;

        while(y>0)
        {
            m=y%10;
            sum2=sum2+m;
            y /= 10;
        }

        if(sum == sum2)
        {
            store[j] = "YES";
        }
        else
        {
            store[j] = "NO";
        }

    }

    for(int g = 0; g < t; g++)
    {
        cout << store[g] << endl;
    }

    return 0;
}
