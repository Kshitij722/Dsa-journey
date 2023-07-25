#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n];
        int c = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(n==2){
            if(a[0]==a[1]){
                cout<<0<<endl;  
            }
            else{
                cout<<1<<endl;
            }
        }
        else{
        
        for (int i = 0; i < n; i++)
        {
            for(int j=0;j<n;j++){if(i!=j)
            if (a[i] == a[j])
            {
                c++;
            }
                
        }
        }
        if (c>0)
        {
             cout << n-c << endl;
        }

        if (c == 0)
        {
            cout << n - 1 << endl;
        }
        }
    }
    return 0;
}
