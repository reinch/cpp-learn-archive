#include <iostream>
using namespace std;

void namapenghui(int jmlkamar, string penghuni[10]) {
	int kamar = 0;
	while (kamar < jmlkamar) {
		cout << "penhuni kamar" << kamar + 1 << "= ";
		cin >> penghuni[kamar];
		kamar++;
	}
}
int main() {
	string penghuni[10];
	int jmlkamar;
	cout << "masukan jmlkamr=";
	cin >> jmlkamar;
	cout << endl;

	namapenghui(jmlkamar, penghuni);
	cout << endl;
	return 0;
}