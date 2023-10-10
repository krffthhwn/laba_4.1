#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, i;
	double S;

	N = 15;
	S = 0;
	i = 1;
	while (i <= N)
		{
			S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
			i++;
		}
		cout << S << endl;
	S = 0;
	i = 1;
		do {
			S+= (sin(10 * i) + cos(10 / i)) / sqrt(i);
			i++;
		} while (i <= N);
		cout << S << endl;
		S = 0;
		for (i = 1; i <= N; i++)
				{
					S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
				}
		cout << S << endl;
		S = 0;
		for (i = 15; i >= 1; i--)
			{
				S += (sin(10 * i) + cos(10 / i)) / sqrt(i);
			}
		cout << S << endl;
		return 0;
}