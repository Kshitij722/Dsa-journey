#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[3];
    vector<int> b, c, d;
    while (n--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i];
        }
        b.push_back(a[0]);
        c.push_back(a[1]);
        d.push_back(a[2]);
    }
    int q = 0, w = 0, r = 0;
    for (auto i = b.begin(); i != b.end(); i++)
    {
        q += *i;
    }

    for (auto i = c.begin(); i != c.end(); i++)
    {
        w += *i;
    }

    for (auto i = d.begin(); i != d.end(); i++)
    {
        r += *i;
    }

    if (w == 0 && r == 0 && q == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}