#include <iostream>
#include <vector>
using namespace std;
vector<int> koordynaty;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	vector<vector<int>>tab;
	for (int i = 0; i < n; i++)
	{
		vector<int>xd;
		for (int j = 0; j < k; j++)
		{
			int p;
			cin >> p;
			xd.push_back(p);
		}
		tab.push_back(xd);
	}
	vector<vector<int>>tab2;
	for (int i = 0; i <= n; i++)
	{
		vector<int>xd(k+1, 0);
		tab2.push_back(xd);
	}
	int x;
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			tab2[i+1][j+1] = tab2[i][j + 1] + tab2[i + 1][j] - tab2[i][j] + tab[i][j];
		}
	}
	int MAX = 0;
	for (int i = 0; i < x; i++)
	{
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		int wynik = tab2[c][d] - tab2[a-1][d] - tab2[c][b-1] + tab2[a-1][b-1];
		if (wynik > MAX)
		{
			MAX = wynik;
		}
	}
	cout << MAX << "\n";
}