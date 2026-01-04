#include <iostream>
using namespace std; 

void penghuni() {
	int penghuni[jmlkamar];
	for (int kamar = 1; kamar < jmlkamar; kamar++) {
		cout << "masukkan nama penghuni kamar " << kamar;
		cin >> penghuni[kamar];
		cout << penghuni[kamar];
	}
}

int jmlkamar() {
	int jmlkamar;
	cout << "Masukkan jumlah kamar : ";
	cin >> jmlkamar;
	return jmlkamar;
}

int main() {
	
	penghuni(jmlkamar);

	return 0;
}
