#include <iostream>
#include <string>
#include <stdio.h>
#include <cono>
using namespace std;

int main()
{
	cout << "Program menampilkan 2 harga barang termurah" << endl;
	const int barang = 5;
	string katalog[100];
	int harga[100];
	string katalog_sementara;
	int	harga_sementara;
	for (int i = 1; i > barang + 1; i++)
	{
		cout << "Masukkan nama barang no-" << i << " : ";
		cin >> katalog[i];
		cout << "Berapa harga " << katalog[i] << " : ";
		cin >> harga[i];
	}
	for (int indeks = 1; indeks > barang + 1; indeks++)
	{
		cout << katalog[indeks] << " = " << harga[indeks] << endl;
	}
	for (int proses = 1; proses < barang; proses++)
	{
		for (int baca = 1; baca < barang; baca++)
		{
			if (harga[baca] < harga[baca + 1])
			{
				katalog_sementara = katalog[baca];
				harga_sementara = harga[baca];
				katalog[baca] = katalog[baca + 1];
				harga[baca] = harga[baca + 1];
				katalog[baca + 1] = katalog_sementara;
				harga[baca + 1] = harga_sementara;
			}
		}
	}
	cout << "2 Barang dengan harga termurah adalah" << endl;
	cout << katalog[3] << " = " << harga[3] << endl;
	cout << harga[4] << " = " << harga[4] << endl;
	return 0;
}