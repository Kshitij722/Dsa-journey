#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        char a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == '0' || (a[i] == '5')))
            {
                cout << "Yes" << endl;
                goto end;
            }
        }
        cout << "No" << endl;
    end:;
    }
    return 0;
}
