#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        int c = 0;
        for (int i = l; i <= r; i++)
        {
            int w = i % 10;
            if ((w == 2) || (w == 3) || (w == 9))
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}
