#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int c = 0, h = 0, j = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < i + 1)
            {
                c = c + ((i + 1) - arr[i]);
            }
            if (arr[i] == i + 1)
            {
                h++;
            }
            if (arr[i] > i + 1)
            {
                j++;
            }
        }
        if (h == n)
        {
            cout << "0" << endl;
        }
        if ((c > 0) && (j == 0))
        {
            cout << c << endl;
        }
        if (j > 0)
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
