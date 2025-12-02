#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<pair<int, string>> papa;
int main()
{
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		string xd;
		cin >> xd;
		papa.push_back(make_pair(xd.length(), xd));
	}
	sort(papa.begin(), papa.end());
	for (int i = 0; i < papa.size(); i++)
	{
		cout << papa[i].second << "\n";
	}
	return 0;
}