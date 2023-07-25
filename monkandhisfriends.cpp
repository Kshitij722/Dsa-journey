#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      
int n, m;
    cin >> n >> m;
    vector<long long> v(n + m);
    for (int i = 0; i < n + m; i++)
    {
        cin >> v[i];
    }
    map<long long , long long> mp;
    for (int i = 0; i < n; i++)
    {
        mp[v[i]]++;
    }
    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    for (int i = n; i < n + m; i++)
    {
        if (mp[v[i]] < 1)
        {
            cout << "NO" << endl;
            mp[v[i]]++;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}

    
    return 0;
}