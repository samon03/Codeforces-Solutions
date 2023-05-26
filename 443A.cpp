#include <iostream>
#include <sstream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str, newstr = "";
    int i, j, k, len, charlen, newlen, ch_alen;

    getline(cin, str);

    char* demo = &str[0];
    len = str.length();
    char last = str[len - 1];
    charlen = strlen(demo);

    if(str[0] == '{' && last == '}')
    {
        sort(demo, demo + strlen(demo));

        for(i=0; i<charlen; i++)
        {
            if(demo[i] >= 'a' && demo[i] <= 'z')
            {
                newstr = newstr + demo[i];
            }
        }
    }

    char* ch_a = &newstr[0];
    ch_alen = strlen(ch_a);
    int count = 0;

    for(j=0; j<ch_alen; j++)
    {
        if(ch_a[j] != ch_a[j+1])
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}
