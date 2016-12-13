#include <conio.h>
#include <iostream>
#include <fstream>

using namespace  std;

int n = 0, i = 0;

bool Number(int n)
{
	if (n<1) return false;
	for (int i = 2; i*i <= n; ++i)
		if (n%i == 0) return false;

	return true;
}

int main()
{
	setlocale(0, "");



	ifstream vvod;
	vvod.open("in.txt");
	vvod >> n;
	vvod.close();

	cout << "chislo v file " << n << endl;


	ofstream fout("out.txt");


	for (i = 0; i <= n; ++i) {
		if (Number(i)) {
			//	cout << i << endl;
			fout << i << endl;
		}
	}

	fout.close();

	system("pause");
	return 0;
}