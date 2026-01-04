#include <iostream>
using namespace std;

int main() {

	cout << "program menampilkan 2 harga barang termurah\n" << endl;
	const int barang = 5;
	string katalog[barang];
	int harga[barang];
	string katalog_sementara;
	int harga_sementara;
	for (int i = 0; i < barang; i++)
	{
		cout << "masukkan nama barang no-" << i + 1 << " : ";
		cin >> katalog[i];
		cout << "berapa harga " << katalog[i] << " : ";
		cin >> harga[i];
		cout << endl;
	}
	for (int indeks = 0; indeks < barang; indeks++)
	{
		cout << katalog[indeks] << " = " << harga[indeks] << endl;
	}
	for (int proses = 0; proses < barang; proses++)
	{
		for (int baca = 0; baca < barang; baca++)
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
	cout << "\n2 barang dengan harga termurah adalah" << endl;
	cout << katalog[3] << " = " << harga[3] << endl;
	cout << katalog[4] << " = " << harga[4] << endl;

	return 0;
}