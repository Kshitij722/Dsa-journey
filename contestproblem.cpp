#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> n;
        int c = 0;
        int w = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a[0] == 'L')
            {
                c += 1;
            }
            else
            {
                w += 1;
            }
        }

        cout << w << " " << c << endl;
    }
    return 0;
}
