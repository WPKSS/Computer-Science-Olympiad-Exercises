#include <iostream>
#include <vector>
using namespace std;

vector<int> owoce;
vector<long long> suma;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> m >> n;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		owoce.push_back(p);
	}
	suma.push_back(owoce[0]);
	for (int i = 0; i < n-1; i++)	
	{
		suma.push_back(suma[i] + owoce[i + 1]);
	}
	for (int i = 0; i < m; i++)
	{
		int a, b;
		cin >> a >> b;
		if (a - 2 < 0)
		{
			cout << suma[b - 1] << "\n";
		}
		else
		{
			cout << suma[b - 1] - suma[a - 2] << "\n";
		}
	}
	return 0;
}