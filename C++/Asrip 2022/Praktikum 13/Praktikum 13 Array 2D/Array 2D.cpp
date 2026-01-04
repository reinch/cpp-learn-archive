#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void matriks() {
	const int jmlBaris = 3;
	const int jmlKolom = 2;
	int matriks[jmlBaris][jmlKolom];
	for (int baris = 1; baris < jmlBaris + 1; baris++) {
		for (int kolom = 1; kolom < jmlKolom + 1; kolom++) {
			cout << "Silahkan isi matriks baris -" << baris << " ,kolom -" << kolom << " : ";
			cin >> matriks[baris][kolom];
		}
	}
	cout << endl;
	for (int baris = 1; baris < jmlBaris + 1; baris++) {
		for (int kolom = 1; kolom < jmlKolom + 1; kolom++) {
			cout << "Isi matriks baris -" << baris << " ,kolom -" << kolom << " = " << matriks[baris][kolom] << endl;
		}

	}
	for (int baris = 1; baris < jmlBaris+1; baris++){
		cout <<endl;
		for (int  kolom = 1; kolom < jmlKolom+1; kolom++)
		{
			cout << matriks[baris][kolom]<<" ";
		}
	}
}
int main() {
	
	matriks();
	
	return 0;
} 