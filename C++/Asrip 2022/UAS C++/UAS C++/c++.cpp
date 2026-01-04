#include <iostream>
using namespace std;

int main()
{
	int jarak, kecepatan, effisiensi_kapal, waktu_tempuh, bahan_bakar;
	float waktu;
	char yesno = 'y';
	
	if (yesno = 'y')
	{
		cout << "Masukan jarak yang akan ditempuh (km) : ";
		cin >> jarak;
		cout << "Masukan kecepatan rata-rata yang diinginkan (km/jam) : ";
		cin >> kecepatan;
		effisiensi_kapal = 10; //1 liter bbm akan dapat menempuh 10km;
		waktu = jarak / kecepatan;
		bahan_bakar = jarak / effisiensi_kapal;

		cout << "Waktu tempuh adalah : " << waktu << " jam" << endl;
		cout << "Bahan bakar yang diperlukan adalah : " << bahan_bakar << " liter" << endl;
		cout << "Apakah anda ingin mengulang program lagi y/n : ";
		cin >> yesno;
	}
	
	return 0;
}