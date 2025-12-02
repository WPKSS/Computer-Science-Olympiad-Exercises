#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	int MAX = -100;
	string pp;
	for (int i = 0; i < n; i++)
	{
		int p;
		cin >> p;
		if (p > MAX)
		{
			pp = 'A' + i;
			MAX = p;
		}
		else if (p == MAX)
		{
			pp += 'A' + i;
		}
	}
	cout << pp;
	return 0;
}