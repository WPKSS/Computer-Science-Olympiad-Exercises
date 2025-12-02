#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

vector<pair<int, char>> dane;

int main()
{
	int otwarte = 0, zamkniete = 0;
	int dlugosc;
	cin >> dlugosc;
	string klamerki;
	cin >> klamerki;
	if (dlugosc % 2 == 1)
	{
		cout << "NIE" << "\n";
		return 0;
	}
	int zagniezdzenie = 0;
	int MAX = -4;
	int flag = 0;
	for (int i = 0; i < klamerki.size(); i++)
	{
		if (klamerki[i] == '{' || klamerki[i] == '[' || klamerki[i] == '(')
		{
			otwarte++;
			zagniezdzenie++;
			dane.push_back(make_pair(i, klamerki[i]));
		}
		else
		{
			zamkniete++;
			char p = dane[dane.size() - 1].second;
			if (klamerki[i] == '}' && p == '{')
			{
				if (zagniezdzenie > MAX)
				{
					MAX = zagniezdzenie;
				}
				zagniezdzenie--;
			}
			else if (klamerki[i] == ')' && p == '(')
			{
				if (zagniezdzenie > MAX)
				{
					MAX = zagniezdzenie;
				}
				zagniezdzenie--;
			}
			else if (klamerki[i] == ']' && p == '[')
			{
				if (zagniezdzenie > MAX)
				{
					MAX = zagniezdzenie;
				}
				zagniezdzenie--;
			}
			else
			{
				cout << "NIE" << "\n";
				flag = 1;
				break;
			}
			dane.pop_back();
		}
	}
	if (flag == 0)
	{
		if (otwarte != zamkniete)
		{
			cout << "NIE" << "\n";
		}
		else
		{
			cout << MAX << "\n";
		}
	}
	return 0;
}