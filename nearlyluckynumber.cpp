#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int count = 0;
    for (long i = 0; i < a.length(); i++)
    {
        if (a[i] == '4' || a[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}