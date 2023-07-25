#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t, n;

	cin >> t;
	while (t--)
	{
		int a[n];
		cin >> n;
		int c = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];

			if (a[i] >=1000)
	       {
				c += 1;
			}
			
		}
		cout << c << endl;
	}
	return 0;
}
