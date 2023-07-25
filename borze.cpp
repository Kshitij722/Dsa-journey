#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> a;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            a.push_back("0");
        }
        if (s[i] == '-' && s[i + 1] == '.')
        {
            a.push_back("1");
            i += 1;
        }
        if (s[i] == '-' && s[i + 1] == '-')
        {
            a.push_back("2");
            i += 1;
        }
    }
    for (auto i = a.begin(); i != a.end(); i++)
    {
        cout << *i;
    }
}