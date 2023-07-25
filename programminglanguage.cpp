#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b, x, y, p, q;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> x >> y >> p >> q;
        if (((a == x) && (b == y)) || ((b == x) && (a == y)))
        {
            cout << 1 << endl;
            goto end;
        }
        if (((a == p) && (b == q)) || ((b == p) && (a == q)))
        {
            cout << 2 << endl;
            goto end;
        }
        else
        {
            cout << 0 << endl;
        }
    end:;
    }
    return 0;
}
