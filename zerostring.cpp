#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, p = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                c++;
            }
            if (s[i] == '1')
            {
                p++;
            }
        }
        if (c == 0)
        {
            cout << 1 << endl;
        }
        else if (p == 0)
        {
            cout << 0 << endl;
        }
        else if (c > p)
        {
            cout << p << endl;
        }
        else if (c == p)
        {
            cout << p << endl;
        }
        else if (p > c)
        {
            cout << c + 1 << endl;
        }
    }
    return 0;
}
