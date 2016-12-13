#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  

#define DIM1  3
#define DIM2  3

int ary[DIM1][DIM2] = {
	{ 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 }
};

using namespace std;

int n = 0, cl = 0, f = 0, k = 0;

int show_1() {
	if (f == 1) {
		cout << endl;
		cout << "povorot na " << k << " gradusov" << endl << endl;
	}
	else { cout << "pervonachalnoe znachenie massiva" << endl << endl; }


	for (int i = 0; i < DIM1; i++) {
		for (int j = 0; j < DIM2; j++) {
			cout << setw(4) << ary[i][j];
		}
		cout << endl;
	}


	f = 0;
	return 0;
}

int deg_90() {
	cout << endl;
	cout << "povorot na " << k << " gradusov" << endl << endl;

	for (int i = 0; i <DIM1; i++) {
		for (int j = 2; j >= 0; j--) {
			cout << setw(4) << ary[j][i];
		}
		cout << endl;
	}

	return 0;
}

int deg_180() {
	cout << endl;
	cout << "povorot na " << k << " gradusov" << endl << endl;


	for (int i = 2; i >= 0; i--) {
		for (int j = 2; j >= 0; j--) {
			cout << setw(4) << ary[i][j];
		}
		cout << endl;
	}

	return 0;
}

int deg_270() {
	cout << endl;
	cout << "povorot na " << k << " gradusov" << endl << endl;
	for (int i = 2; i >= 0; i--) {
		for (int j = 0; j <DIM2; j++) {
			cout << setw(4) << ary[j][i];
		}
		cout << endl;


	}

	return 0;
}

int main()
{
	setlocale(0, "");

	show_1();

	cout << "vvedite chislo dlya kolichestva povorotov na 90 gratusov" << endl;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cl++;
		if (cl == 5) { cl = 1; }
	}

	k = 90 * cl;

	switch (cl)
	{
	case 1: {deg_90();
		break; }

	case 2: {deg_180();
		break; }

	case 3: {deg_270();
		break; }

	case 4: {f = 1; show_1();
		break; }

	default: {
		break; }
	}

	system("pause");
	return 0;
}