#include <iostream>
#include <string>
using namespace std;

long long M = 1000000000 + 696969;

long long pow(long long base, long long power)
{
	if (power == 0)return 1;
	if (power % 2 == 0)
	{
		long long result = pow(base, power / 2) % M;
		return result % M * result % M;
	}
	else return base % M *pow(base, power - 1) % M;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long a, b, c, d;
	cin >> a >> b >> c >> d;
	a = a % M;
	b = b % M;
	c = c % M;
	d = d % M;
	long long k1 = ((a % M) * (b % M)) % M;
	long long k2 = ((c % M) * (d % M)) % M;
	long long k3 = pow(k2, M-2);
	long long result = ((k1 % M) * (k3 % M)) % M;
	cout << result<<"\n";
	return 0;
}