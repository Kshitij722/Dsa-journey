#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 7 == 0)
        {
            cout << n / 7 << endl;
        }
        else
        {
            int w = n % 7;
            int j = n / 7;
            if (w == 6)
            {
                cout << j + 1 << endl;
            }
            else
            {
                cout << j << endl;
            }
        }
    }
    return 0;
}