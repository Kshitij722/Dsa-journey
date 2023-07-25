#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                if (s[i + 1] == 'a' || s[i + 1] == 'e' || s[i + 1] == 'i' || s[i + 1] == 'o' || s[i + 1] == 'u')
                {
                    if (s[i + 2] == 'a' || s[i + 2] == 'e' || s[i + 2] == 'i' || s[i + 2] == 'o' || s[i + 2] == 'u')
                    {
                        cout << "Happy" << endl;
                        goto end;
                    }
                }
            }
        }
        cout << "Sad" << endl;
    end:;
    }
    return 0;
}
