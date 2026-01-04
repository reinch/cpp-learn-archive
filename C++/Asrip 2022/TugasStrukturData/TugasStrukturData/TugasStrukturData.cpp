#include <iostream>
#include <string>

using namespace std;

struct pasien
{
    string nama;
    int no_antrian;
};

int main() {

    cout << "-------------------------------------" << endl;
    cout << ":       Program Nomor Antrian       :" << endl;
    cout << "-------------------------------------" << endl;

    cout << endl;

    const int pasien_max = 10;
    string nama_pasien[pasien_max];
    int no_antrian_pasien[pasien_max];
    int nomor_antrian = 0;
    char lanjut = 'y';

    do {
        cout << "Masukan nama anda : ";
        cin >> nama_pasien[nomor_antrian];

        no_antrian_pasien[nomor_antrian] = nomor_antrian + 1;
        nomor_antrian++;

        cout << "Nomor antrian : " << nomor_antrian << endl;

        cout << "Lanjutkan antrian? y/n : ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cout << endl;
    cout << "Daftar pasien yang sudah mendaftar" << endl;
    for (int i = 0; i < nomor_antrian; i++)
    {
        pasien info;
        info.nama = nama_pasien[i];
        info.no_antrian = no_antrian_pasien[i];

        cout << "Nama : " << info.nama << endl;
        cout << "Nomor Antrian : " << info.no_antrian << endl;
    }

    return 0;
}
