#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n == 1)
        {
            if (arr[0] == k)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }else{
        for (int i = 0; i < n; i++)
        {
            if ((arr[i] == k) && (i != (n - 1)))
            {
                cout << "Yes" << endl;
                goto end;
            }
        }
        if (arr[n - 1] == k)
        {
            cout << "No" << endl;
            goto end;
        }

        cout << "No" << endl;
    end:;
        }
    }
    return 0;
}
