#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            int w = i * i + 1;
            int s = sqrt(w);
            if (s == w)
            {
                continue;
            }
            else
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
