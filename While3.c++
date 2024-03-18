#include <iostream>
using namespace std;

int main()
{
    int x;
    srand(time(0));

    do {
        cout << "Perulangan dengan Do..While" << endl;
        x = rand() % 10;
        cout << "Nilai x =" << x << endl;
    } while (x > 4);

    char pilihan;

    do {
        string nama;

        cout << "Masukkan nama =";
        cin >> nama;

        cout << "Apakah anda ingin mengulangi lagi? (y/n)";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'y');
}

