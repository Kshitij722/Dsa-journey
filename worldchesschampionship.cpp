#include <iostream>
using namespace std;

int main()
{
  int t, x;
  cin >> t;
  while (t--)
  {
    cin >> x;
    char a[14];
    for (int i = 0; i < 14; i++)
    {
      cin >> a[i];
    }
    int w = 0, s = 0, d = 0;

    for (int j = 0; j < 14; j++)
    {
      if (a[j] == 'C')
      {
        w += 1;
      }
      if (a[j] == 'D')
      {
        s += 1;
      }
      if (a[j] == 'N')
      {
        d += 1;
      }
    }
    int q = (w * 2) + (s * 1);
    int r = (d * 2) + (s * 1);
    if (q > r)
    {
      cout << 60 * x << endl;
    }
    if (r > q)
    {
      cout << 40 * x << endl;
    }
    if (q == r)
    {
      cout << 55 * x << endl;
    }
  }
  return 0;
}
