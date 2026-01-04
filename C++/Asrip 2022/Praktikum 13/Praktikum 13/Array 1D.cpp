#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

void penghuni(int jmlKamar) {
    cout << "\n";
    string penghuni[100];
    for (int kamar = 1; kamar < jmlKamar + 1; kamar++)
    {
        cout << "Masukan nama penghuni kamar no-" << kamar << " : ";
        cin >> penghuni[kamar];
    }
    cout << "\n";
    for (int kamar = 1; kamar < jmlKamar + 1; kamar++)
    {
        cout << "Penghuni kamar no-" << kamar << " : " << penghuni[kamar] << endl;
    }
}
int func_kamar(int jmlKamar) {
    cout << "Masukan jumlah kamar : ";
    cin >> jmlKamar;
    return(jmlKamar);
}

int main() {
    int jmlKamar = 0;
    penghuni(func_kamar(jmlKamar));

    return 0;
}