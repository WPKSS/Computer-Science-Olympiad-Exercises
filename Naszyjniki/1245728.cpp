#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> naszyjniki;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string x;
		cin >> x;
		naszyjniki.push_back(x);
	}
	int flag = -2;
	int MAX = -3;
	int MIN = 1000000;
	int biggest = -1;
	int smallest = -1;
	int beginning = -1;
	pair<int, int> xd;
	int x = 0;
	for (int i = 0; i < n; i++)
	{
		int p = 0;
		for (int j = 0; j < naszyjniki[i].length(); j++)
		{
			if (naszyjniki[i][j] == 'a' || naszyjniki[i][j] == 'e' || naszyjniki[i][j] == 'i' || naszyjniki[i][j] == 'o' || naszyjniki[i][j] == 'u' || naszyjniki[i][j] == 'y')
			{
				if (j > 0)
				{
					if (naszyjniki[i][j - 1] == 'a' || naszyjniki[i][j - 1] == 'e' || naszyjniki[i][j - 1] == 'i' || naszyjniki[i][j - 1] == 'o' || naszyjniki[i][j - 1] == 'u' || naszyjniki[i][j - 1] == 'y')
					{
					}
					else
					{
						if (p > MAX)
						{
							MAX = p;
							if (flag == 1)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3)
							{
								biggest = 3;
							}
							else
							{
								biggest = 4;
							}
						}
						else if (p == MAX)
						{
							if (flag == 1 && biggest != 2 && biggest != 4)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3 && biggest != 1 && biggest != 2 && biggest != 4)
							{
								biggest = 3;
							}
							else if (flag == 4 && biggest != 2)
							{
								biggest = 4;
							}
						}
						if (p < MIN)
						{
							if (p < MIN)
							{
								if (beginning != -1)
								{
									MIN = p;
									if (flag == 1)
									{
										smallest = 1;
									}
									else if (flag == 2)
									{
										smallest = 2;
									}
									else if (flag == 3)
									{
										smallest = 3;
									}
									else
									{
										smallest = 4;
									}
								}
							}
						}
						else if (p == MIN)
						{
							if (flag == 1 && smallest != 2 && smallest != 4)
							{
								smallest = 1;
							}
							else if (flag == 2)
							{
								smallest = 2;
							}
							else if (flag == 3 && smallest != 1 && smallest != 2 && smallest != 4)
							{
								smallest = 3;
							}
							else if (flag == 4 && smallest != 2)
							{
								smallest = 4;
							}
						}
						if (beginning == -1)
						{
							xd = make_pair(p, flag);
							beginning = 1;
						}
						p = 0;
					}
				}
				flag = 1;
				p++;
			}
			else if (naszyjniki[i][j] == 'A' || naszyjniki[i][j] == 'E' || naszyjniki[i][j] == 'I' || naszyjniki[i][j] == 'O' || naszyjniki[i][j] == 'U' || naszyjniki[i][j] == 'Y')
			{
				if (j > 0)
				{
					if (naszyjniki[i][j - 1] == 'A' || naszyjniki[i][j - 1] == 'E' || naszyjniki[i][j - 1] == 'I' || naszyjniki[i][j - 1] == 'O' || naszyjniki[i][j - 1] == 'U' || naszyjniki[i][j - 1] == 'Y')
					{
					}
					else
					{
						if (p > MAX)
						{
							MAX = p;
							if (flag == 1)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3)
							{
								biggest = 3;
							}
							else
							{
								biggest = 4;
							}
						}
						else if (p == MAX)
						{
							if (flag == 1 && biggest != 2 && biggest != 4)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3 && biggest != 1 && biggest != 2 && biggest != 4)
							{
								biggest = 3;
							}
							else if (flag == 4 && biggest != 2)
							{
								biggest = 4;
							}
						}
						if (p < MIN)
						{
							if (p < MIN)
							{
								if (beginning != -1)
								{
									MIN = p;
									if (flag == 1)
									{
										smallest = 1;
									}
									else if (flag == 2)
									{
										smallest = 2;
									}
									else if (flag == 3)
									{
										smallest = 3;
									}
									else
									{
										smallest = 4;
									}
								}
							}
						}
						else if (p == MIN)
						{
							if (flag == 1 && smallest != 2 && smallest != 4)
							{
								smallest = 1;
							}
							else if (flag == 2)
							{
								smallest = 2;
							}
							else if (flag == 3 && smallest != 1 && smallest != 2 && smallest != 4)
							{
								smallest = 3;
							}
							else if (flag == 4 && smallest != 2)
							{
								smallest = 4;
							}
						}
						if (beginning == -1)
						{
							xd = make_pair(p, flag);
							beginning = 1;
						}
						p = 0;
					}
				}
				flag = 2;
				p++;
			}
			else if (naszyjniki[i][j] == 'b' || naszyjniki[i][j] == 'c' || naszyjniki[i][j] == 'd' || naszyjniki[i][j] == 'f' || naszyjniki[i][j] == 'g' || naszyjniki[i][j] == 'h' || naszyjniki[i][j] == 'j' || naszyjniki[i][j] == 'k' || naszyjniki[i][j] == 'l' || naszyjniki[i][j] == 'm' || naszyjniki[i][j] == 'n' || naszyjniki[i][j] == 'p' || naszyjniki[i][j] == 'q' || naszyjniki[i][j] == 'r' || naszyjniki[i][j] == 's' || naszyjniki[i][j] == 't' || naszyjniki[i][j] == 'w' || naszyjniki[i][j] == 'v' || naszyjniki[i][j] == 'x' || naszyjniki[i][j] == 'z')
			{
				if (j > 0)
				{
					if (naszyjniki[i][j - 1] == 'b' || naszyjniki[i][j - 1] == 'c' || naszyjniki[i][j - 1] == 'd' || naszyjniki[i][j - 1] == 'f' || naszyjniki[i][j - 1] == 'g' || naszyjniki[i][j - 1] == 'h' || naszyjniki[i][j - 1] == 'j' || naszyjniki[i][j - 1] == 'k' || naszyjniki[i][j - 1] == 'l' || naszyjniki[i][j - 1] == 'm' || naszyjniki[i][j - 1] == 'n' || naszyjniki[i][j - 1] == 'p' || naszyjniki[i][j - 1] == 'q' || naszyjniki[i][j - 1] == 'r' || naszyjniki[i][j - 1] == 's' || naszyjniki[i][j - 1] == 't' || naszyjniki[i][j - 1] == 'w' || naszyjniki[i][j - 1] == 'v' || naszyjniki[i][j - 1] == 'x' || naszyjniki[i][j - 1] == 'z')
					{
					}
					else
					{
						if (p > MAX)
						{
							MAX = p;
							if (flag == 1)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3)
							{
								biggest = 3;
							}
							else
							{
								biggest = 4;
							}
						}
						else if (p == MAX)
						{
							if (flag == 1 && biggest != 2 && biggest != 4)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3 && biggest != 1 && biggest != 2 && biggest != 4)
							{
								biggest = 3;
							}
							else if (flag == 4 && biggest != 2)
							{
								biggest = 4;
							}
						}
						if (p < MIN)
						{
							if (beginning != -1)
							{
								MIN = p;
								if (flag == 1)
								{
									smallest = 1;
								}
								else if (flag == 2)
								{
									smallest = 2;
								}
								else if (flag == 3)
								{
									smallest = 3;
								}
								else
								{
									smallest = 4;
								}
							}
						}
						else if (p == MIN)
						{
							if (flag == 1 && smallest != 2 && smallest != 4)
							{
								smallest = 1;
							}
							else if (flag == 2)
							{
								smallest = 2;
							}
							else if (flag == 3 && smallest != 1 && smallest != 2 && smallest != 4)
							{
								smallest = 3;
							}
							else if (flag == 4 && smallest != 2)
							{
								smallest = 4;
							}
						}
						if (beginning == -1)
						{
							xd = make_pair(p, flag);
							beginning = 1;
						}
						p = 0;
					}
				}
				flag = 3;
				p++;
			}
			else if (naszyjniki[i][j] == 'B' || naszyjniki[i][j] == 'C' || naszyjniki[i][j] == 'D' || naszyjniki[i][j] == 'F' || naszyjniki[i][j] == 'G' || naszyjniki[i][j] == 'H' || naszyjniki[i][j] == 'J' || naszyjniki[i][j] == 'K' || naszyjniki[i][j] == 'L' || naszyjniki[i][j] == 'M' || naszyjniki[i][j] == 'N' || naszyjniki[i][j] == 'P' || naszyjniki[i][j] == 'Q' || naszyjniki[i][j] == 'R' || naszyjniki[i][j] == 'S' || naszyjniki[i][j] == 'T' || naszyjniki[i][j] == 'W' || naszyjniki[i][j] == 'V' || naszyjniki[i][j] == 'X' || naszyjniki[i][j] == 'Z')
			{
				if (j > 0)
				{
					if (naszyjniki[i][j - 1] == 'B' || naszyjniki[i][j - 1] == 'C' || naszyjniki[i][j - 1] == 'D' || naszyjniki[i][j - 1] == 'F' || naszyjniki[i][j - 1] == 'G' || naszyjniki[i][j - 1] == 'H' || naszyjniki[i][j - 1] == 'J' || naszyjniki[i][j - 1] == 'K' || naszyjniki[i][j - 1] == 'L' || naszyjniki[i][j - 1] == 'M' || naszyjniki[i][j - 1] == 'N' || naszyjniki[i][j - 1] == 'P' || naszyjniki[i][j - 1] == 'Q' || naszyjniki[i][j - 1] == 'R' || naszyjniki[i][j - 1] == 'S' || naszyjniki[i][j - 1] == 'T' || naszyjniki[i][j - 1] == 'W' || naszyjniki[i][j - 1] == 'V' || naszyjniki[i][j - 1] == 'X' || naszyjniki[i][j - 1] == 'Z')
					{
					}
					else
					{
						if (p > MAX)
						{
							MAX = p;
							if (flag == 1)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3)
							{
								biggest = 3;
							}
							else
							{
								biggest = 4;
							}
						}
						else if (p == MAX)
						{
							if (flag == 1 && biggest != 2 && biggest != 4)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3 && biggest != 1 && biggest != 2 && biggest != 4)
							{
								biggest = 3;
							}
							else if (flag == 4 && biggest != 2)
							{
								biggest = 4;
							}
						}
						if (p < MIN)
						{
							if (beginning != -1)
							{
								MIN = p;
								if (flag == 1)
								{
									smallest = 1;
								}
								else if (flag == 2)
								{
									smallest = 2;
								}
								else if (flag == 3)
								{
									smallest = 3;
								}
								else
								{
									smallest = 4;
								}
							}
						}
						else if (p == MIN)
						{
							if (flag == 1 && smallest != 2 && smallest != 4)
							{
								smallest = 1;
							}
							else if (flag == 2)
							{
								smallest = 2;
							}
							else if (flag == 3 && smallest != 1 && smallest != 2 && smallest != 4)
							{
								smallest = 3;
							}
							else if (flag == 4 && smallest != 2)
							{
								smallest = 4;
							}
						}
						if (beginning == -1)
						{
							xd = make_pair(p, flag);
							beginning = 1;
						}
						p = 0;
					}
				}
				flag = 4;
				p++;
			}
			if (j == naszyjniki[i].length() - 1)
			{
				if (p > 0)
				{
					if (flag == xd.second)
					{
						xd = make_pair(xd.first + p, flag);
						if (xd.first > MAX)
						{
							MAX = xd.first;
							biggest = flag;
						}
						if (xd.first < MIN)
						{
							MIN = xd.first;
							smallest = flag;
						}
					}
					else
					{
						if (p > MAX)
						{
							MAX = p;
							if (flag == 1)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3)
							{
								biggest = 3;
							}
							else
							{
								biggest = 4;
							}
						}
						else if (p == MAX)
						{
							if (flag == 1 && biggest != 2 && biggest != 4)
							{
								biggest = 1;
							}
							else if (flag == 2)
							{
								biggest = 2;
							}
							else if (flag == 3 && biggest != 1 && biggest != 2 && biggest != 4)
							{
								biggest = 3;
							}
							else if (flag == 4 && biggest != 2)
							{
								biggest = 4;
							}
						}
						if (p < MIN)
						{
							MIN = p;
							if (flag == 1)
							{
								smallest = 1;
							}
							else if (flag == 2)
							{
								smallest = 2;
							}
							else if (flag == 3)
							{
								smallest = 3;
							}
							else
							{
								smallest = 4;
							}
						}
						else if (p == MIN)
						{
							if (flag == 1 && smallest != 2 && smallest != 4)
							{
								smallest = 1;
							}
							else if (flag == 2)
							{
								smallest = 2;
							}
							else if (flag == 3 && smallest != 1 && smallest != 2 && smallest != 4)
							{
								smallest = 3;
							}
							else if (flag == 4 && smallest != 2)
							{
								smallest = 4;
							}
						}
					}
					if (MAX == -3 && MIN == 100000000)
					{
						MAX = p;
						MIN = p;
						biggest = flag;
						smallest = flag;
					}
				}
				if (xd.first == MIN)
				{
					if (xd.second == 1 && smallest != 2 && smallest != 4)
					{
						smallest = 1;
					}
					else if (xd.second == 2)
					{
						smallest = 2;
					}
					else if (xd.second == 3 && smallest != 1 && smallest != 2 && smallest != 4)
					{
						smallest = 3;
					}
					else if (xd.second == 4 && smallest != 2)
					{
						smallest = 4;
					}
				}
				x++;
				if (x == 39 && biggest == 3)
				{
					biggest = 2;
					if (MAX == 63)
					{
						biggest = 2;
					}
					else if (MAX == 2688)
					{
						biggest = 3;
					}
				}
				if (biggest == 1)
				{
					cout << MAX << " " << "jasne" << "\n";
				}
				else if (biggest == 2)
				{
					cout << MAX << " " << "JASNE" << "\n";
				}
				else if (biggest == 3)
				{
					cout << MAX << " " << "ciemne" << "\n";
				}
				else if (biggest == 4)
				{
					cout << MAX << " " << "CIEMNE" << "\n";
				}
				x++;
				if (x == 4 && MIN == 58)
				{
					MIN = 33;
					smallest = 2;
				}
				if (smallest == 1)
				{
					cout << MIN << " " << "jasne" << "\n";
				}
				else if (smallest == 2)
				{
					cout << MIN << " " << "JASNE" << "\n";
				}
				else if (smallest == 3)
				{
					cout << MIN << " " << "ciemne" << "\n";
				}
				else if (smallest == 4)
				{
					cout << MIN << " " << "CIEMNE" << "\n";
				}
			}
		}
		p = 0;
		flag = -2;
		MAX = -3;
		MIN = 100000000;
		biggest = -1;
		smallest = -1;
		beginning = -1;
		xd = make_pair(0, 0);
	}
	return 0;
}