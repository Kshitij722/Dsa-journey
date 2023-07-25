#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    int a[10];
    cin >> t;
    while (t--)
    {
        int w = 0;
        int h = 0;
        for (int i = 0; i < 10; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < 10; j++)
        {
            if (j < 5)
            {
                if (a[j] == 1)
                {
                    w += 1;
                }
                else
                {
                    w += 0;
                }
            }
            if(j>=5)
            {
                if (a[j] == 1)
                {
                    h += 1;
                }
            }
        }
         if (w > h)
        {
            cout << 1 << endl;
        }
        if (w < h)
        {
            cout << 2 << endl;
        }
        if (w == h)
        {
            cout << 0 << endl;
        }       
        
    }
    return 0;
}
