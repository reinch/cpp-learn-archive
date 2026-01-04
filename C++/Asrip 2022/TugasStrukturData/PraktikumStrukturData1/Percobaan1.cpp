#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int awal, akhir;

	cout << "Nilai Awal : "; cin >> awal;
	cout << "Nilai Akhir : "; cin >> akhir;
	do
	{
		if (awal % 2 == 0)
		{
			cout << awal << " Sebagai Nilai Genap" << endl;
		}
		else
		{
			cout << awal << " Sebagai Nilai Ganjil" << endl;
		}
		awal++;
	} while (awal <= akhir);
	
	return 0;
}