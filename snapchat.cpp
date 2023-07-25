#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0, count = 0;
        cin >> n;
        int a[n], b[n];
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
            if (a[i] != 0 && b[i] != 0)
            {
                c++;
                count = max(count, c);
            }
            else
            {

                c = 0;
            }
        }
        cout << count << endl;
    }
    return 0;
}
