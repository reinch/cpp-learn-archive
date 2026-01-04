#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main() {
	string penghuni[100];

	int jmlKamar;
	cout << "Masukan jumlah kamar : ";
	cin >> jmlKamar;
	cin.get();
	int kamar;

	for (kamar = 0; kamar < jmlKamar; kamar++) {
		cout << "Masukan nama penghuni kamar " << kamar << " : ";
		getline(cin, penghuni[kamar]);
	}
	for (kamar = 0; kamar < jmlKamar; kamar++) {
		cout << "Penghuni kamar - " << kamar << " : " << penghuni[kamar] << endl;
	}

	return 0;
}