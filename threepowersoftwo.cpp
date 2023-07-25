#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        if (s == "1" || s == "10")
        {
            cout << "NO"<<endl;;
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '1')
                {
                    ans++;
                }
            }
            if (ans <= 3)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}