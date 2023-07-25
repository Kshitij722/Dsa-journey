#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int s[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            ans = max(s[i], ans);
        }
        cout << ans << endl;
    }
    return 0;
}
