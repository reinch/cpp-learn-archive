#include <iostream>
#include <string>

using namespace std;

// membuat struktur untuk menyimpan data pelanggan
struct Pelanggan {
    string nama;
    int nomor_antrian;
};

int main() {

    cout << "Program"
        // inisialisasi array untuk menyimpan data pelanggan
        Pelanggan daftar_pelanggan[10];

    int nomor_antrian_terakhir = 0;
    char lanjutkan;

    do {
        // membaca nama pelanggan
        string nama;
        cout << "Masukkan nama Anda : ";
        cin >> nama;

        // menambahkan pelanggan ke dalam array
        daftar_pelanggan[nomor_antrian_terakhir].nama = nama;
        daftar_pelanggan[nomor_antrian_terakhir].nomor_antrian = nomor_antrian_terakhir + 1;
        nomor_antrian_terakhir++;

        // menampilkan nomor antrian pelanggan
        cout << "Nomor antrian Anda adalah : " << nomor_antrian_terakhir << endl;

        // memeriksa apakah ada pelanggan selanjutnya
        cout << "Lanjutkan (y/n)? ";
        cin >> lanjutkan;
    } while (lanjutkan == 'y');

    // menampilkan daftar pelanggan yang telah mendaftar
    cout << endl;
    cout << "Daftar pelanggan yang telah mendaftar: " << endl;
    for (int i = 0; i < nomor_antrian_terakhir; i++) {
        cout << "Nomor antrian: " << daftar_pelanggan[i].nomor_antrian << endl;
        cout << "Nama: " << daftar_pelanggan[i].nama << endl;
    }

    return 0;
}
