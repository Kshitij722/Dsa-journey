#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string d = a + b;
        int n;
        cin >> n;
        string s, c;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            // cout<<endl;
            s += c;
        }
        set<char> h, j;
        for (int i = 0; i < d.length(); i++)
        {
            h.insert(d[i]);
        }
        for (int i = 0; i < s.length(); i++)
        {
            j.insert(s[i]);
        }
        for (auto i : j)
        {
            auto it = h.find(i);
            if (it == h.end())
            {
                cout << "NO" << endl;
                goto end;
            }
        }
        cout << "YES" << endl;
    end:;
        // for(auto i:h){
        //     cout<<i;
        // }
        // cout<<endl;
        // for(auto it : j){
        //     cout<<it;
        // }
        // cout<<endl;
    }
    return 0;
}
