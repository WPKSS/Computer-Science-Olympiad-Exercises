#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> liczby;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int k = 0;
        liczby.push_back(0);
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		k = k + p;
		liczby.push_back(k);
	}
	sort(liczby.begin(), liczby.end());
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		auto k = lower_bound(liczby.begin(), liczby.end(), p)-liczby.begin();
		if (k < liczby.size() && liczby[k] == p)
		{
			cout << "TAK" << "\n";
		}
		else
		{
			cout << "NIE" << "\n";
		}
	}
	return 0;
}