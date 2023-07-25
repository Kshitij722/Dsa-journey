#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = accumulate(a.begin(), a.end(), 0);
    int total = n + 1;
    vector<int> b;
    for (int i = 1; i < 6; i++)
    {
        if ((sum + i) % total != 1)
        {
            b.push_back(i);
        }
    }
    cout << b.size();
}