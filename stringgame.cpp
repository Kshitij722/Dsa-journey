#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        int p = 0;
        for (int i = 0; i < N; i += 2)
        {
            if (str[i] == str[i + 1])
            {
                p = 1;
            }
            else
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
