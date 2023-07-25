#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, d, risk = 0, safe = 0;
    cin >> n >> d;
    vector<int> s(n);
    vector<int> g;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i]
    }
    if (d == 1)
    {
        cout << n << endl;
    }
    else
    {

        for (auto i = s.begin(); i != s.end(); i++)
        {
            if (*i >= 80 || *i <= 9)
            {
                g.push_back(*i);
            }
        }
        if (g.size() % d == 0)
        {
            risk = g.size() / d;
        }
        if (g.size() % d != 0)
        {
            risk = (g.size() / d) + 1;
        }
        if ((n - g.size()) % d == 0)
        {
            safe = (n - g.size()) / d;
        }
        if ((n - g.size()) % d != 0)
        {

            safe = ((n - g.size()) / d) + 1;
        }
        cout << risk + safe << endl;
    }
}
int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
