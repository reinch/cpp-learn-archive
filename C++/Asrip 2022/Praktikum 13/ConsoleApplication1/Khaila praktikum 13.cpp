#include <iostream>
using namespace std;

void nokamar(int jmlkamar) {
	string penghuni[100];
	for (int kamar = 1; kamar < jmlkamar+1; kamar++) {
		cout << "masukkan nama penghuni kamar " << kamar <<"-";
		cin >> penghuni[kamar];
	}
	for (int kamar = 1; kamar < jmlkamar+1; kamar++) {
		cout << "penghuni kamar " << kamar << ":" << penghuni[kamar]<<endl;

	}
}

int main() {
	int jmlkamar;
	cout << "masukkan jumlah kamar : ";
	cin >> jmlkamar;

	nokamar(jmlkamar);

	return 0;
}