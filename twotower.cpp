#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

string solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int cons = 0;
    if (s.size() == 1 && t.size() == 1)
    {
        return "yes";
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            cons++;
        }
    }
    for (int i = 1; i < t.size(); i++)
    {
        if (t[i] == t[i - 1])
        {
            cons++;
        }
    }
    if (cons == 0)
    {
        return "yes";
    }
    if (cons == 1 && t[t.size() - 1] != s[s.size() - 1])
    {
        return "yes";
    }
    return "no";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string ans = solve();
        cout << ans <<endl;
        }
}