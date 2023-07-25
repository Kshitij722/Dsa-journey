#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, y, z;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> z;
        if (z >= y)
        {
            cout << x << endl;
        }
        if (z < y)
        {
            if (y % z == 0)
            {
                int w = (y / z);
                cout << w * x << endl;
            }
            else
            {
                cout << ((y / z) + 1) * x << endl;
            }
        }
    }
    return 0;
}
