#include <iostream>
using namespace std;

int happy()
{
	int sum = 0;
	int a, b, c, d, e, f;
	int aa;
	for (a = 0; a <= 9; ++a)
	{
		for (b = 0; b <= 9; ++b)
		{
			for (c = 0; c <= 9; ++c)
			{
				aa = a + b + c;
				for (d = 0; d <= 9; ++d)
				{
					for (e = 0; e <= 9; ++e)
					{
						for (f = 0; f <= 9; ++f)
						{
							if (aa == d + e + f)
							{
								sum++;
							}
						}
					}
				}
			}
		}
	}
	return sum;
}
int main()
{
	setlocale(0, "");
	int sum=happy();
    cout << "Количество счастливых билетов: " << sum << endl;
	system("pause");
	return 0;
}