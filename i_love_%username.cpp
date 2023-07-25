#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int mx = 0;
    int mn = 0;
    int flag = 0;
    if(n==1){
        cout<<0;
    }
    else{
    if (a[0] > a[1])
    {
        mx = a[0];
        mn = a[1];
        flag++;
    }
    if (a[0] < a[1])
    {
        mx = a[1];
        mn = a[0];
        flag++;
    }
    if(a[0]==a[1]){
        mx = a[0];
        mn = a[0];
    }

    for (auto i = a.begin(); i != a.end(); i++)
    {

        if (*i > mx)
        {
            flag++;
            mx = *i;
        }
        if (*i < mn)
        {
            flag++;
            mn = *i;
        }
        if (*i<mx && * i> mn)
        {
            flag += 0;
        }
    }
    cout << flag;
    }
    return 0;
}