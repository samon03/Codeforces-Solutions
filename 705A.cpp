#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;

    for(i=0; i<n; i++)
    {

        if(i == 0)
        {
             cout << "I hate" << " ";
        }
        else if(i == 1)
        {
            cout << "that I love" << " ";
        }
        else if(n > 2)
        {
            if(i%2 == 0)
            {
               if(i > 0)
               {
                  cout << "that I hate" << " ";
               }
               else if(i == 0)
               {
                  cout << "I hate" << " ";
               }
            }
            else if (i%2 != 0)
            {
                if(i > 1)
                {
                  cout << "that I love" << " ";
                }
                else if(i == 1)
                {
                  cout << "I love" << " ";
                }
            }
        }
    }
    cout << "it" << endl;
    return 0;
}
