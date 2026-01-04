#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	cout << "==================================================" << endl;
	cout << "|     Program konversi mata uang menjadi IDR     |" << endl;
	cout << "==================================================" << endl;
	cout << endl;

	string uang[5] = { "KRW", "MMK", "JPY", "PHP", "THB" };
	double nilai[5] = { 11, 7, 144, 280, 447 };
	double duit;
	double konversi;
	int nomor;
	char yesno = 'y';

	cout << "Kurs mata uang pada 17/12/2022" << endl;
	cout << endl;

	while (yesno == 'y')
	{
		for (int i = 0; i < 5; i++)
		{
			cout << i + 1 << ". " << uang[i] << " = " << nilai[i] << endl;
		}
		cout << endl;
		cout << "Pilih mata uang yang ingin anda konversikan menjadi rupiah : ";
		cin >> nomor;
		cout << endl;

		if (nomor == 1)
		{
			cout << "Masukan nilai mata uang " << uang[0] << " : ";
			cin >> duit;
			konversi = nilai[0] * duit;
			cout << "Hasil konversi " << uang[0] << " ke Rupiah adalah = " << konversi;
		}
		else if (nomor == 2)
		{
			cout << "Masukan nilai mata uang " << uang[1] << " : ";
			cin >> duit;
			konversi = nilai[1] * duit;
			cout << "Hasil konversi "<< uang[1] << " ke Rupiah adalah = " << konversi;
		}
		else if (nomor == 3)
		{
			cout << "Masukan nilai mata uang " << uang[2] << " : ";
			cin >> duit;
			konversi = nilai[2] * duit;
			cout << "Hasil konversi " << uang[2] <<" ke Rupiah adalah = " << konversi;
		}
		else if (nomor == 4)
		{
			cout << "Masukan nilai mata uang " << uang[3] << " : ";
			cin >> duit;
			konversi = nilai[3] * duit;
			cout << "Hasil konversi " << uang[3] << "ke Rupiah adalah = " << konversi;
		}
		else if (nomor == 5)
		{
			cout << "Masukan nilai mata uang " << uang[4] << " : ";
			cin >> duit;
			konversi = nilai[4] * duit;
			cout << "Hasil konversi " << uang[4] << "ke Rupiah adalah = " << konversi;
		}
		else
		{
			cout << "Nomor yang anda masukan salah";
		}
		cout << endl;
		cout << "\nApakah anda ingin mengulangi program lagi? y/n : ";
		cin >> yesno;
	}

	cout << endl;
	cout << "==================================================" << endl;
	cout << "|       Program konversi selesai dijalankan      |" << endl;
	cout << "==================================================" << endl;
	
	return 0;
}