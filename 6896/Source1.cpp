#include <iostream>
using namespace std;

int happy()
{
	char serial[6] = { 0 };
	int sum = 0;
	int i, j, k;
	for (i = 0; i <= 999999; i++)
	{
		for (k = i, j = 0; j < 6; j++, k /= 10)
		{
			serial[j] = k % 10;
		}
		if (serial[0] + serial[1] + serial[2] == serial[3] + serial[4] + serial[5])
		{
			++sum;
		}
	}
	return sum;
}

int main()
{
	setlocale(0, "");
	int sum = happy();
	cout << "Количество счастливых билетов: " << sum << endl;
	system("pause");
	return 0;
}
