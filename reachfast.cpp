#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t, x, y, n, j, w;
	cin >> t;
	while (t--)
	{
		cin >> x >> y >> n;
		if (x == y)
		{
			cout << "0" << endl;
		}
		if ((x - y) < n && (y - x) < n && (x != y))
		{
			cout << "1" << endl;
		}
		else
		{
			if (x > y)
			{
				j = (x - y) / n;
				w = (x - y) % n;
				if (w == 0)
				{
					cout << j << endl;
				}
				else
				{

					cout << j + 1 << endl;
				}
			}
			if (x < y)
			{

				j = (y - x) / n;
				w = (y - x) % n;
				if (w == 0)
				{
					cout << j << endl;
				}
				else
				{

					cout << j + 1 << endl;
				}
			}
		}
	}
	return 0;
}
