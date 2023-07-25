#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if ((a == 0 && b == 1) || (a == 0 && c == 1) || (a == 1 && b == 0) || (b == 0 && c == 1) || (a == 1 && c == 0) || (b == 1 && c == 0))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
