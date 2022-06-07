#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct group
{
	short num{};
	string side;
	string position;
};
void show_airpl(const vector<string>&);
enum alf { A = 0, B = 1, C = 2, D = 4, E = 5, F = 6 } place;


int main()
{
	int n;
	cin >> n; cin.get();
	vector<string> airplane(n);

	for (auto& i : airplane)
		getline(cin, i);

	int m;
	cin >> m;
	vector<group> vec_group(m);

	for (auto& i : vec_group)
	{
		cin >> i.num;
		cin >> i.side;
		cin >> i.position;
	}

	string temp_group;
	string temp_airp;
	for (int g = 0; g < m; g++)
	{
		for (int i = 0; i < n; i++)
		{
			if (vec_group.at(g).side == "right")
			{
				if (vec_group.at(g).position == "window")
				{
					switch (vec_group.at(g).num)
					{
					case 1:
						if (airplane.at(i)[F] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'F' << endl;
							airplane.at(i)[F] = 'X';
							show_airpl(airplane);
							airplane.at(i)[F] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 2:
						if (airplane.at(i)[E] == '.' && airplane.at(i)[F] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'E'
								<< ' ' << i + 1 << 'F' << endl;
							airplane.at(i)[E] = 'X';
							airplane.at(i)[F] = 'X';
							show_airpl(airplane);
							airplane.at(i)[E] = '#';
							airplane.at(i)[F] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 3:
						if (airplane.at(i)[D] == '.' && airplane.at(i)[E] == '.' && airplane.at(i)[F] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'D' << ' ' << i + 1 << 'E'
								<< ' ' << i + 1 << 'F' << endl;
							airplane.at(i)[D] = 'X';
							airplane.at(i)[E] = 'X';
							airplane.at(i)[F] = 'X';
							show_airpl(airplane);
							airplane.at(i)[D] = '#';
							airplane.at(i)[E] = '#';
							airplane.at(i)[F] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					}
				}
				else
				{
					switch (vec_group.at(g).num)
					{
					case 1:
						if (airplane.at(i)[D] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'D' << endl;
							airplane.at(i)[D] = 'X';
							show_airpl(airplane);
							airplane.at(i)[D] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 2:
						if (airplane.at(i)[D] == '.' && airplane.at(i)[E] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'D'
								<< ' ' << i + 1 << 'E' << endl;
							airplane.at(i)[D] = 'X';
							airplane.at(i)[E] = 'X';
							show_airpl(airplane);
							airplane.at(i)[D] = '#';
							airplane.at(i)[E] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 3:
						if (airplane.at(i)[D] == '.' && airplane.at(i)[E] == '.' && airplane.at(i)[F] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'D' << ' ' << i + 1 << 'E'
								<< ' ' << i + 1 << 'F' << endl;
							airplane.at(i)[D] = 'X';
							airplane.at(i)[E] = 'X';
							airplane.at(i)[F] = 'X';
							show_airpl(airplane);
							airplane.at(i)[D] = '#';
							airplane.at(i)[E] = '#';
							airplane.at(i)[F] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					}
				}
			}
			else
			{
				if (vec_group.at(g).position == "window")
				{
					switch (vec_group.at(g).num)
					{
					case 1:
						if (airplane.at(i)[A] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'A' << endl;
							airplane.at(i)[A] = 'X';
							show_airpl(airplane);
							airplane.at(i)[A] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 2:
						if (airplane.at(i)[A] == '.' && airplane.at(i)[B] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'A'
								<< ' ' << i + 1 << 'B' << endl;
							airplane.at(i)[A] = 'X';
							airplane.at(i)[B] = 'X';
							show_airpl(airplane);
							airplane.at(i)[A] = '#';
							airplane.at(i)[B] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 3:
						if (airplane.at(i)[A] == '.' && airplane.at(i)[B] == '.' && airplane.at(i)[C] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'A' << ' ' << i + 1 << 'B'
								<< ' ' << i + 1 << 'C' << endl;
							airplane.at(i)[A] = 'X';
							airplane.at(i)[B] = 'X';
							airplane.at(i)[C] = 'X';
							show_airpl(airplane);
							airplane.at(i)[A] = '#';
							airplane.at(i)[B] = '#';
							airplane.at(i)[C] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					}
				}
				else
				{
					switch (vec_group.at(g).num)
					{
					case 1:
						if (airplane.at(i)[C] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'C' << endl;
							airplane.at(i)[C] = 'X';
							show_airpl(airplane);
							airplane.at(i)[C] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 2:
						if (airplane.at(i)[B] == '.' && airplane.at(i)[C] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'B'
								<< ' ' << i + 1 << 'C' << endl;
							airplane.at(i)[B] = 'X';
							airplane.at(i)[C] = 'X';
							show_airpl(airplane);
							airplane.at(i)[B] = '#';
							airplane.at(i)[C] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					case 3:
						if (airplane.at(i)[A] == '.' && airplane.at(i)[B] == '.' && airplane.at(i)[C] == '.')
						{
							cout << "Passengers can take seats: " << i + 1 << 'A' << ' ' << i + 1 << 'B'
								<< ' ' << i + 1 << 'C' << endl;
							airplane.at(i)[A] = 'X';
							airplane.at(i)[B] = 'X';
							airplane.at(i)[C] = 'X';
							show_airpl(airplane);
							airplane.at(i)[A] = '#';
							airplane.at(i)[B] = '#';
							airplane.at(i)[C] = '#';
							break;
						}
						else
						{
							if (n - 1 == i)
							{
								cout << "Cannot fulfill passengers requirements" << endl;
								break;
							}
							continue;
						}
					}

				}
			}
			break;
		}

	}
	return 0;
}

void show_airpl(const vector<string>& airpl)
{
	for (auto& i : airpl)
		cout << i << endl;
}