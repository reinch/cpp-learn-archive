#include <iostream>
using namespace std;

int main()
{
	int awal, akhir;
	int klpt = 0;

	cout << "Masukkan bilangan awal : ";
	cin >> awal;
	cout << "Masukkan bilangan akhir : ";
	cin >> akhir;
	cout << endl;

	for (int i = awal; i <= akhir; i++)
	{
		if (i % 3 == 0)
		{
			klpt++;
		}
	}
	cout << "Jumlah bilangan kelipatan 3 antara " << awal << " dan " << akhir << " adalah : " << klpt << " bilangan" << endl;
	return 0;
}