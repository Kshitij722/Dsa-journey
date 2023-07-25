#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, x, a, b;
    cin >> t;
    while (t--)
    {
        cin >> x >> a >> b;
        int w = a + ((100 - x) * b);
        cout << w * 10 << endl;
    }
    return 0;
}
