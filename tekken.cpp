#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
         if (a == 0)
        {
            cout << "NO" << endl;
        }
        else{
            if (a > abs(b - c))
            {
                cout << "YES" << endl;
            }
            if(a<= abs(b-c))
            {
                cout << "NO" << endl;
            }
        }
       
    }
    return 0;
}
