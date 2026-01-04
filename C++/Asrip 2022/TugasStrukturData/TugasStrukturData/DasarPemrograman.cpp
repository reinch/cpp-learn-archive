/*
Nama : Muhammad Zubair Raihan
Kelas : 1A
NPM : 2213030105
*/
#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    int npm;
    string nama;
    string kelas;
    string gender;
    string agama;
    int usia;
    float berat_badan;
    string status_kawin;
};

int main() {
    const int jml_mhs = 2;
    Mahasiswa mahasiswa[jml_mhs];

    for (int i = 0; i < jml_mhs; i++) {
        cout << "Data Mahasiswa " << i + 1 << endl;
        cout << "Masukkan NPM: ";
        cin >> mahasiswa[i].npm;
        cin.ignore();
        cout << "Masukkan nama: ";
        getline(cin, mahasiswa[i].nama);
        cout << "Masukkan kelas: ";
        getline(cin, mahasiswa[i].kelas);
        cout << "Masukkan gender (l/p): ";
        cin >> mahasiswa[i].gender;
        cout << "Masukkan agama: ";
        cin >> mahasiswa[i].agama;
        cout << "Masukkan usia: ";
        cin >> mahasiswa[i].usia;
        cout << "Masukkan berat badan: ";
        cin >> mahasiswa[i].berat_badan;
        cin.ignore();
        cout << "Masukkan status kawin (kawin/belum kawin): ";
        getline(cin, mahasiswa[i].status_kawin);
        cout << endl;
    }

    cout << endl;
    cout << "Data Mahasiswa" << endl;
    cout << "-------------" << endl;
    for (int i = 0; i < jml_mhs; i++) {
        cout << "Mahasiswa " << i + 1 << endl;
        cout << "NPM: " << mahasiswa[i].npm << endl;
        cout << "Nama: " << mahasiswa[i].nama << endl;
        cout << "Kelas: " << mahasiswa[i].kelas << endl;
        cout << "Gender: " << mahasiswa[i].gender << endl;
        cout << "Agama: " << mahasiswa[i].agama << endl;
        cout << "Usia: " << mahasiswa[i].usia << endl;
        cout << "Berat badan: " << mahasiswa[i].berat_badan << endl;
        cout << "Status kawin: " << mahasiswa[i].status_kawin << endl;
        cout << endl;
    }

    return 0;
}
