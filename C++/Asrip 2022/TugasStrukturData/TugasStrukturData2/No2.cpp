#include <iostream>
#include <string>

using namespace std;

struct perusahaan
{
    string nama;
    int npk;
    string tugas[2];
};

int main()
{
    cout << "--------------------------------------" << endl;
    cout << ":       Program Input Karyawan       :" << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;

    perusahaan karyawan[3];
    int jml_karyawan = 3;

    for (int i = 0; i < jml_karyawan; i++)
    {
        cout << "Masukkan nama karyawan " << i + 1 << ": ";
        getline(cin, karyawan[i].nama);
        cout << "Masukkan NPK karyawan " << i + 1 << ": ";
        cin >> karyawan[i].npk;
        cin.ignore(); // saya menggunakan ini supaya tidak error saat beda tipe data
        cout << "Masukkan dua tugas untuk karyawan " << i + 1 << ":" << endl;
        getline(cin, karyawan[i].tugas[0]); // getline dipakai ketika input dari keyboad nanti mengandung spasi pada string
        getline(cin, karyawan[i].tugas[1]);
        cout << endl;
    }

    for (int i = 0; i < jml_karyawan; i++)
    {
        cout << "Karyawan " << i + 1 << endl;
        cout << "Nama: " << karyawan[i].nama << endl;
        cout << "NPK: " << karyawan[i].npk << endl;
        cout << "Tugas 1: " << karyawan[i].tugas[0] << endl;
        cout << "Tugas 2: " << karyawan[i].tugas[1] << endl << endl;
    }

    return 0;
}
