#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> x;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int k;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		x.push_back(k);
	}
	sort(x.begin(), x.end());
	for (auto c : x)
	{
		cout << c << " ";
	}
}