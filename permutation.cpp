#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
typedef long long ll;

// To remove all non alphanumeric characters from a string str;
void removeNonAlNum(string &str)
{
    auto it = remove_if(str.begin(), str.end(), [](char const &c)
                        { return !isalnum(c); });
    str.erase(it, str.end());
}

// To convert all string into lowercase
void lowercase(string &str)
{
    for (auto &i : str)
    {
        i = tolower(i);
    }
}

// Solve your answer here
void solve()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    ll sum = 0;
    ll last = 1;
    for (int i = 1; i <= n; i++)
    {
        ll multiply = last * m[i];
        multiply = multiply % mod;
        sum += multiply;
        last = multiply;
        sum = sum % mod;
    }
    cout << sum << endl;
    // for(auto it=mp.begin();it!=mp.end();it++){
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();

    }
}