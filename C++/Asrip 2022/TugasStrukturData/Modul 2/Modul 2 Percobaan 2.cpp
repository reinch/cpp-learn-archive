#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	int a[4];
	int i;
	a[0] = 5;
	a[1] = 9;
	a[2] = 11;
	a[3] = 20;
	for (i = 0; i <= 3; i++){
		cout << "a[" << i << "] = " << a[i] << endl;
}

return 0;
}/*program ini akan terjadi kesalahan dibeberapa titik :1. inisialiasi besar array yang salah dimana besar array adalah 3 tapi diisikan sampai 4 kali2. pada perulangan for terjadi error karena kurung kurawal buka tidak ada.3. lalu pada kondisi for i = 0 maka hanya akan menampiilkan 0 - 2 dan ke 3 tidak ditampilkan untuk menampilkan bisa menggunakan <= 3 atau < 4*/