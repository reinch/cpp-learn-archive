#include <iostream>
using namespace std;

void matriks() {
	const int jmlbaris = 3;
	const int jmlkolom = 2;
	int matriks[jmlbaris][jmlkolom];
	for (int baris = 1; baris < jmlbaris+1; baris++) {
		for (int kolom = 1; kolom < jmlkolom+1; kolom++) {
			cout << "silahkan isi matriks baris " << baris << " kolom " << kolom << " : ";
			cin >> matriks[baris][kolom];
		}
	}
	for (int baris = 1; baris < jmlbaris + 1; baris++) {
		for (int kolom = 1; kolom < jmlkolom + 1; kolom++) {
			cout << "isi matriks baris " << baris << " kolom " << kolom << "=" << matriks[baris][kolom]<<endl;

		}
	}
}

int main() {
	matriks(); 
	return 0;
}
