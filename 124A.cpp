#include <iostream>

using namespace std;

int main()
{
    int n, a, b, position = 0, temp = 0;
    cin >> n >> a >> b;
    position = n-a-1;
    if(a >= 0 && (n > b) && (n <= 100))
    {
        if(position > b)
        {
            temp = b + 1;
        }
        else
        {
            temp = position + 1;
        }
    }
    cout << temp << endl;
    return 0;
}
