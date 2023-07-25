#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {

        cin >> n;
        cin >> s;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == s[i + 1])
            {
                x += 1;
            }
            else
            {
                x += 0;
            }
        }

        cout << x << endl;
    }
    return 0;
}
