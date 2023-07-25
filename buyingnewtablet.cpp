#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, b, w, h, p;
        cin >> n >> b;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> w >> h >> p;
            if (p <= b)
            {
                if (w * h > c)
                {
                    c = w * h;
                }
            }
        }
        if (c)
        {
            cout << c << endl;
        }
        if (c == 0)
        {
            cout << "no tablet" << endl;
        }
    }
    return 0;
}
