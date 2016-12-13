#include <iostream>

using namespace std;

int main() {
	int i = 0; // i counter in the matrix
	int j = 0; // j counter in the matrix
	int sz; // size of the array
	int t = 0; // element counter in the array
	int isz; // i-size of the matrix
	int jsz; // j-size of the matrix

	cout << "Vvedite kolichestvo strok:" << endl;
	cin >> isz;
	cout << "Vvedite kolichestvo stolbcov:" << endl;
	cin >> jsz;
	if (isz < 1 || jsz < 1) {
		return -1;
	}
	sz = isz * jsz;
	int iceil = 0; // ceiling
	int ifloor = isz - 1; // floor
	int jlwall = 0; // left wall
	int jrwall = jsz - 1; // right wall
	int *a; // array used for storing the matrix

	a = new int[sz];
	for (; ; ) {
		// left-to-right
		i = iceil;
		for (j = jlwall; j <= jrwall; j++) {
			a[j + i * jsz] = ++t;
		}
		if (++iceil > ifloor) {
			break;
		}
		// going down
		j = jrwall;
		for (i = iceil; i <= ifloor; i++) {
			a[j + i * jsz] = ++t;
		}
		if (--jrwall < jlwall) {
			break;
		}
		// right-to-left
		i = ifloor;
		for (j = jrwall; j >= jlwall; j--) {
			a[j + i * jsz] = ++t;
		}
		if (--ifloor < iceil) {
			break;
		}
		// going up
		j = jlwall;
		for (i = ifloor; i >= iceil; i--) {
			a[j + i * jsz] = ++t;
		}
		if (++jlwall > jrwall) {
			break;
		}
	}
	for (i = 0; i < isz; i++) {
		for (j = 0; j < jsz; j++)
			cout << a[j + i * jsz] << " ";
		cout << endl;
	}
	delete a;
	return 0;
}