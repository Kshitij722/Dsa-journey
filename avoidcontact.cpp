#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y;
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (y == 0)
        {
            cout << x << endl;
        }
        if ((x > y) && (y != 0))
        {
            int w = x - y;
            int j = y * 2;
            cout << j + w << endl;
        }
        if (y == x)
        {
            cout << (y * 2) - 1 << endl;
        }
    }
    return 0;
}
