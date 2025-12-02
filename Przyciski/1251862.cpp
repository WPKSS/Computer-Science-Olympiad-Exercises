#include <iostream>
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int>x(n, 0);
	int biggest = 0;
	int stare_biggest = 0;
	for (int i = 0; i < m; i++)
	{
		int p;
		cin >> p;
		if (p == n + 1)
		{
			stare_biggest = biggest;
		}
		else
		{
			if (x[p - 1] < stare_biggest)
			{
				x[p - 1] = stare_biggest;
			}
			x[p - 1]++;
			if (x[p - 1] > biggest)
			{
				biggest = x[p - 1];
			}
		}
	}
	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] < stare_biggest)
		{
			x[i] = stare_biggest;
			cout << x[i] << " ";
		}
		else
		{
			cout << x[i] << " ";
		}
	}
	return 0;
}