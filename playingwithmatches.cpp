#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    int a, b, w, s = 0, p;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        w = a + b;
        while (w != 0)
        {
            p = w % 10;
            if ((p == 0) || (p == 6) || (p == 9))
            {
                s = s + 6;
            }
            if ((p == 1))
            {
                s = s + 2;
            }
            if ((p == 2) || (p == 3) || (p == 5))
            {
                s = s + 5;
            }
            if (p == 4)
            {
                s = s + 4;
            }
            if (p == 7)
            {
                s = s + 3;
            }
            if (p == 8)
            {
                s = s + 7;
            }
            w = w / 10;
        }
        cout << s << endl;
        s = 0;
    }
    return 0;
}
