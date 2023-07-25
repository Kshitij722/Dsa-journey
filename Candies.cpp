#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int w = 2 * n;
        int a[w];
        for (int i = 0; i < w; i++)
        {
            cin >> a[i];
        }
        int c = 0;
        sort(a, a + w);
        for (int i = 0; i < w; i++)
        {
            if ((a[i] == a[i + 1]) && (a[i] == a[i + 2]))
            {
                cout << "No" << endl;
                goto end;
            }
        }
        cout << "Yes" << endl;
    end:;
    }
    return 0;
}
