#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int i = 1;
    set<char> h;
    while (i != 1000)
    {

        string b = to_string(a + i);
        for (int i = 0; i < b.length(); i++)
        {
            h.insert(b[i]);
        }

        if (h.size() == 4)
        {
            cout << stoi(b) << endl;

            break;
        }
        h.clear();

        i++;
    }
}