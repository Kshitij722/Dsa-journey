#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6][6];
    int ans;
    int p, o;
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6; j++)
        {
            if (a[i][j] == 1)
            {

                p = abs(3 - i);
                o = abs(3 - j);
                ans = p + o;
            }
        }
    }
    cout << ans;
}
