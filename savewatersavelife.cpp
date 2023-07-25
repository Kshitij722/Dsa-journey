#include <iostream>
using namespace std;
int main()
{
    int t, h, x, y, c;
    cin >> t;
    while (t--)
    {
        cin >> h >> x >> y >> c;
        int w = y + (y / 2);
        int j = h * w;
        if (j > c)
        {
            cout << "NO" << endl;
        }
        if (j <= c)
        {
            cout << "YES" << endl;
        }
    }
}