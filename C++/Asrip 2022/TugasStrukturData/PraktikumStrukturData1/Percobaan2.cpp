#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int i, jml;

    cout << "Jumlah bilangan genap 1-100 adalah : ";
    jml = 0;
    i = 1;
    do
    {
        if (i % 2 == 0)
        {
            jml = jml + 1;
        }
        i++;
    } while (i <= 100);
    cout << jml << " bilangan" << endl;

    return 0;
}
