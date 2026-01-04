#include <iostream>
using namespace std;

int main() {
	float r;
	cout << "masukan jari - jari lingkaran : ";
	cin >> r;
	float tinggi = 20;
	
	float volTabung;
	float luasAlas;
	volTabung = luasAlas*tinggi;
	luasAlas = 3.14 * r * r;

	cout << "Volume tabung = "<< volTabung <<endl;
	
	float kelAlas;
	kelAlas = 2 * 3.14 * r;
	float luasSelimut;
	luasSelimut = (2 * luasAlas) + (kelAlas * tinggi);
	cout << "Luas selimut tabung = " << luasSelimut << endl;

	return 0;
}