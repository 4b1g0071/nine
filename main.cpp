#include <iostream>
using namespace std;

int main()
{
	int N, sum, i;
	i = 1;
	sum = 0;
	cin >> N;
	while (i <= N)
	{
		if (i % 3 == 0)
		{
			sum += i;
		}
		i++;
	}
	cout << sum << endl;
	return 0;
}
