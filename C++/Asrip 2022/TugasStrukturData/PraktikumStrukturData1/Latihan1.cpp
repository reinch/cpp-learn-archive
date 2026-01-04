#include <iostream>
using namespace std;

int main()
{
	int awal;
	int akhir;

	cout << "Masukkan bilangan awal : ";
	cin >> awal;
	cout << "Masukkan bilangan akhir : ";
	cin >> akhir;
	cout << endl;

	int simpan = 0;
	for (int i = awal; i <= akhir; i++)
	{
		if (i % 3 == 0)
		{
			simpan++;
		}
	}
	cout << "Jumlah bilangan kelipatan 3 antara " << awal << " dan " << akhir << " adalah : " << simpan << " bilangan" << endl;
	return 0;
}