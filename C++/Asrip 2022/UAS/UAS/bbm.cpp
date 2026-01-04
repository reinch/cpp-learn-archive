//Program Estimasi Jumlah Liter BBM

#include <iostream>
using namespace std;

int main()
{
	int km, jmlh_liter;

	cout << "Masukkan jarak yang akan ditempuh (dalam km): ";
	cin >> km;

	//rumus estimasi liter BBM yaitu 1 liter untuk setiap 10 km
	jmlh_liter = km / 10;

	cout << "Jumlah liter BBM yang dibutuhkan untuk menempuh jarak " << km << " km adalah " << jmlh_liter << " liter.";

	return 0;
}