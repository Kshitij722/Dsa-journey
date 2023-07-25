#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, h = 0;
        cin >> n;
        string a, b;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '1')
            {
                c++;
            }
            if (b[i] == '1')
            {
                h++;
            }
        }
        if (c != h)
        {
            cout << "NO" << endl;
        }
        if (c == h)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
