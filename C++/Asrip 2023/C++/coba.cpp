#include <iostream>
using namespace std;

int main(){
    char lagi = 'y';
    while (lagi == 'y')
    {
    cout << "Masukkan barang yang akan dijual : ";
    cin >> barang;

    cout << "Apakah anda ingin memasukkan barang lagi? : ";
    cin >> lagi;
    cout << endl;
    } 

    return 0;
}