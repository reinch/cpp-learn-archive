#include <iostream>
using namespace std;

int main() {
	int tinggi = 20;
	cout << "Masukkan Jari - jari lingkaran/alas : ";
	int r;
	cin >> r;
	int luasAlas;
	luasAlas = 3.14 * r * r; 
	int volTabung;
	volTabung = luasAlas * tinggi;
	cout << "Volume tabung" << volTabung; 
	int kelAlas;
	kelAlas = 2 * 3.14 * r;
	int LuasSelimut;
	LuasSelimut = (2 * luasAlas) + (kelAlas * tinggi);
	cout << "Luas selimut tabung=" << LuasSelimut; 
	
	return 0; 


}