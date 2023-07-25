#include <iostream>
using namespace std;
int main()
{
    int t, a, b, c, x, y, z, k;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> k >> x >> y >> z;
        int w = x + y + z;
        if ((a <= x) && (b <= y) && (c <= z) && (k <= w))
        {

            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}