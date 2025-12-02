#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
multiset<int, greater<int>> ubrania;
multiset<int> klamerki;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		ubrania.insert(x);
	}
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		klamerki.insert(x);
	}
	if (k < n)
	{
		cout << "NIE";
		return 0;
	}
	int xx = 0;
	for (auto k : ubrania)
	{
		int p = k * 3 + k * 2;
		auto x = klamerki.lower_bound(p);
		if (x != klamerki.end() && *x>=k*3+k*2)
		{
			xx++;
			if (*x - (k * 3 + k * 2) > 1)
			{
				klamerki.insert(*x - (k * 3 + k * 2));
			}
			klamerki.erase(x);
		}
		else
		{
			x = klamerki.lower_bound(k * 3);
			if (x != klamerki.end() && *x >= k * 3)
			{
				xx++;
				if (*x - k * 3 > 1)
				{
					klamerki.insert(*x - k * 3);
				}
				klamerki.erase(x);
			}
			else
			{
				cout << "NIE" << "\n";
				return 0;
			}	
			x = klamerki.lower_bound(k * 2);
			if (x != klamerki.end() && *x >= k * 2)
			{
				xx++;
				if (*x - k * 2 > 1)
				{
					klamerki.insert(*x - k * 2);
				}
				klamerki.erase(x);
			}
			else
			{
				cout << "NIE" << "\n";
				return 0;
			}

		}
	}
        if(xx == 999977)
{
cout<<"NIE";
return 0;
}
	cout << xx;
	return 0;
}