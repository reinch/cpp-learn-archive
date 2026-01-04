#include <iostream>
using namespace std;

int main() {
	int max_nama;

	cout << "Masukan banyaknya nama : ";
	cin >> max_nama;

	string nama[100];
	for (int i = 0; i < max_nama; i++)
	{
		cout << "Masukan Nama ke~"<< i+1 << " : ";
		cin >> nama[i];
	}
	cout << endl;
	for (int i = 0; i < max_nama; i++)
	{
		cout << "Nama ke~" << i + 1 << " = " << nama[i] << endl;
	}

	return 0;
}