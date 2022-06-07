#include<iostream>
using namespace std;

int main()
{
	int n{};
	bool breaker = true;
	cin >> n;
	int* pa = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> pa[i];
		if (0 != i)
			if (pa[i - 1] > pa[i])
			{
				cout << -1;
				breaker = false;
				break;
			}
	}

	if (breaker)
		cout << pa[n - 1] - pa[0];

	delete[]pa;
	return 0;
}