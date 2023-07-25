#include <iostream>
#include <string>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[i + 1])
            {
                k += 1;
            }
            else
            {
                continue;
            }
        }
        if (n == 1)
        {
            cout << 1 << endl;
        }
        if ((k == 0) && (n != 1))
        {
            cout << n << endl;
        }
        if (k > 0)
        {
            cout << n - k << endl;
        }
    }

    return 0;
}