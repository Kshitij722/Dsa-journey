#include <iostream>
using namespace std;
int main()
{
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int s[n];

        for (int j = 0; j < n; j++)
        {
            cin >> s[j];
        }
        for (int i = 0; i < n; i++)
        {
            if (k >= s[i])
            {
                cout << "1";
                k = k - s[i];
            }
            else
            {
                cout << "0";
            }
        }

        cout << endl;
    }
}