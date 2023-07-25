#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve()
{
    ll n, m;
    cin >> n;
    map<ll, ll> mp1, mp2;
    for (ll i = 1; i <= n; i++)
    {
        ll inp;
        cin >> inp;
        mp1[inp] = i;
        mp2[inp] = n - i + 1;
    }
    cin >> m;
    vector<ll> v(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    ll sum1 = 0, sum2 = 0;
    for (ll i = 0; i < m; i++)
    {
        sum1 += mp1[v[i]];
        sum2 += mp2[v[i]];
    }
    cout << sum1 << " " << sum2 << endl;
}

int main()
{

solve();
}
