#include <bits/stdc++.h>

int main()
{
	std::ios_base::sync_with_stdio(0);
	std::cin.tie(0);
	long long a = 0;
	long long b = 1;
	long long c = 1;
	int n;
	std::cin >> n;
	for (int i = 0; i <= n; i++)
	{
		if (i == 0)
		{
			continue;
		}
		else if (i == 1)
		{
			continue;
		}
		else if (i == 2)
		{
			continue;
		}
		else if (i % 3 == 0)
		{
			a = b + c;
		}
		else if (i % 3 == 1)
		{
			b = a + c;
		}
		else if (i % 3 == 2)
		{
			c = a + b;
		}
	}
	if (n % 3 == 0)
	{
		std::cout << a;
	}
	else if (n % 3 == 1)
	{
		std::cout << b;
	}
	else if (n % 3 == 2)
	{
		std::cout << c;
	}
	return 0;
}