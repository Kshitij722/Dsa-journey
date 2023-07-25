#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, i = 1;
        cin >> a >> b;
        while (true)
        {
            if (i % 2 != 0)
            {
                a = a - i;
            }
            if (i % 2 == 0)
            {
                b = b - i;
            }
            i++;

            if (b < 0)
            {
                cout << "Limak" << endl;
                break;
            }
            if (a < 0)
            {
                cout << "Bob" << endl;
                break;
            }
        }
    }
    return 0;
}
