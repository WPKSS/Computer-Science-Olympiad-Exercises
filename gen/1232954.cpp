#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> pp;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int k, p;
	cin >> k >> p;
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		pp.push_back(x);
	}
	int s = 1;
	for (int i = 0; i < k; i++)
	{
		for (int j = s; j < k; j++)
		{
			if (abs(pp[i] - pp[j]) > p)
			{
				cout << j << " ";
				s = j;
				break;
			}
			else if (j == k - 1)
			{
				cout << j + 1 << " ";
				s = j;
				break;
			}
		}
	}
	return 0;
}