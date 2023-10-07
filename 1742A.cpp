#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, a = 0, b = 0, c = 0;

    cin >> t;
    string store[t];

    for(i=0; i<t; i++)
    {
       cin >> a >> b >> c;

         if((a == b + c) || (b == c + a) || (c == a + b))
         {
             store[i] = "Yes";
         }
         else
         {
            store[i] = "No";
         }
    }

    for(j = 0; j < t; j++)
    {
        cout << store[j] << endl;
    }

    return 0;
}
