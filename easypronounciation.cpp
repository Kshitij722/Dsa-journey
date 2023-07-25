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
        string s;
        cin >> s;
        if (s.length() < 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
                {
                    if (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u')
                    {
                        if (s[i + 2] != 'a' && s[i + 2] != 'e' && s[i + 2] != 'i' && s[i + 2] != 'o' && s[i + 2] != 'u')
                        {
                            if (s[i + 3] != 'a' && s[i + 3] != 'e' && s[i + 3] != 'i' && s[i + 3] != 'o' && s[i + 3] != 'u')
                            {
                                cout << "NO" << endl;
                                goto end;
                            }
                        }
                    }
                }
            }
            cout << "YES" << endl;
        end:;
        }
    }
    return 0;
}
