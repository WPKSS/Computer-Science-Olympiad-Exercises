#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int papiez(int kod, vector<int>& pref)
{
	int beg = 1, end = pref.size() - 1;
	while (beg <= end)
	{
		int tmp = (beg + end) / 2;
		if (pref[tmp - 1] < kod && kod <= pref[tmp])
		{
			return tmp;
		}
		else if (kod <= pref[tmp - 1])
		{
			end = tmp - 1;
		}
		else
		{
			beg = tmp + 1;
		}
	}
	return -1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, m;
	cin >> n >> m;
	vector<int> prefA(n + 1, 0);
	vector<int> prefB(m + 1, 0);
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		prefA[i + 1] = prefA[i] + x;
	}
	for (int i = 0; i < m; i++)
	{
		int x;
		cin >> x;
		prefB[i + 1] = prefB[i] + x;
	}
	int z;
	cin >> z;
	while (z--)
	{
		int day, month;
		char c;
		cin >> day >> month >> c;
		int kod;
		if (c == 'A')
		{
			kod = prefA[month - 1] + day;
			int m = papiez(kod, prefB);
			cout << kod - prefB[m - 1] << " " << m << "\n";
		}
		if (c == 'B')
		{
			kod = prefB[month - 1] + day;
			int m = papiez(kod, prefA);
			cout << kod - prefA[m - 1] << " " << m << "\n";
		}
	}
	return 0;
}