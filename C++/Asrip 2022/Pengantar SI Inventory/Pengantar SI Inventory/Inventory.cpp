#include <iostream>
#include <string>
using namespace std;

int main()
{
	string barang[5] = { "Beras", "Minyak Goreng", "Gula", "Daging Sapi", "Telur" };
	//double harga[5] = { 11500, 18000, 10500, 133600, 30000 };
	float	stock[5] = { 88, 40, 70, 31, 51 };

	cout << "--------------------------------------------" << endl;
	cout << ":          Program Inventory Out           :" << endl;
	cout << "--------------------------------------------\n" << endl;

	cout << "Daftar Stock Dari Setiap Barang : \n" << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << i+1 << ". " << barang[i] << " = " << stock[i] << "kg" << endl;
	}
	
	char ulang = 'y';
	int nomor;
	int sold;

	cout << endl;

	while (ulang == 'y')
	{
		cout << "Nomor berapa yang telah terjual = ";
		cin >> nomor;
		if (nomor == 1)
		{
			cout << "Berapa Beras yang terjual (kg) = ";
			cin >> sold;
			stock[0] = stock[0] - sold;
			cout << endl;
		}
		else if (nomor == 2)
		{
			cout << "Berapa Minyak Goreng yang terjual (kg) = ";
			cin >> sold;
			stock[1] = stock[1] - sold;
			cout << endl;
		}
		else if (nomor == 3)
		{
			cout << "Berapa Gula yang terjual (kg) = ";
			cin >> sold;
			stock[2] = stock[2] - sold;
			cout << endl;
		}
		else if (nomor == 4)
		{
			cout << "Berapa Daging Sapi yang terjual (kg) = ";
			cin >> sold;
			stock[3] = stock[3] - sold;
			cout << endl;
		}
		else if (nomor == 5)
		{
			cout << "Berapa Telur yang telah terjual (kg) = ";
			cin >> sold;
			stock[4] = stock[4] - sold;
			cout << endl;
		}
		else
		{
			cout << "Nomor yang anda masukan tidak tersedia" << endl;
		}
		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << ". " << barang[i] << " = " << stock[i] << "kg" << endl;
		}
		cout << endl;
		if (stock[0] < 5)
		{
			cout << "Stock Beras kurang dari 5kg sisa " << "(" << stock[0] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[1] < 5)
		{
			cout << "Stock Minyak Goreng kurang dari 5kg sisa " << "(" << stock[1] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[2] < 5)
		{
			cout << "Stock Gula kurang dari 5kg sisa " << "(" << stock[2] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[3] < 5)
		{
			cout << "Stock Daging Sapi kurang dari 5kg sisa " << "(" << stock[3] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[4] < 5)
		{
			cout << "Stock Telur kurang dari 5kg sisa " << "(" << stock[4] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}

		cout << "Apakah ada barang yang terjual lagi? y/n : ";
		cin >> ulang;
		if (ulang == 'n')
		{
			break;
		}
		cout << endl;
		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << ". " << barang[i] << " = " << stock[i] << "kg" << endl;
		}
		cout << endl;
		if (stock[0] < 5)
		{
			cout << "Stock Beras kurang dari 5kg sisa " << "(" << stock[0] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[1] < 5)
		{
			cout << "Stock Minyak Goreng kurang dari 5kg sisa " << "(" << stock[1] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[2] < 5)
		{
			cout << "Stock Gula kurang dari 5kg sisa " << "(" << stock[2] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[3] < 5)
		{
			cout << "Stock Daging Sapi kurang dari 5kg sisa " << "(" << stock[3] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
		if (stock[4] < 5)
		{
			cout << "Stock Telur kurang dari 5kg sisa " << "(" << stock[4] << "kg" << ")" << " segera hubungi supplier!" << endl;
		}
	}

	cout << "\n----------------------------------------------------"<< endl;
	cout << ":          Program Inventory Out Selesai!          :"<< endl;
	cout << "----------------------------------------------------"<< endl;

	return 0;
}