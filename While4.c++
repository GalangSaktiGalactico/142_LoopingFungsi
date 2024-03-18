#include <iostream>
using namespace std;

inT nTelor, nMie, nAir;
inT hTelor = 2000, hMie = 2800, hAir = 3000;
string nama;

void input()
{
    cout << "Masukkan nama =";
    cin >> nama;
    cout << "Masukkan jumlah Telor =";
    cin >> nTelor;
    cout << "Masukkan jumlah Mie =";
    cin >> nMie;
    cout << "Masukkan jumlah Air =";
    cin >> nAir;
}

int hitungHarga() {
    return(nTelor * nTelor) + (nMie * nMie) + (nAir * nAir);
}

void display() {
    cout << "Nama =" << nama << endl;
    cout << "Jumlah Telor =" << nTelor << endl;
    cout << "Jumlah Mie =" << nMie << endl;
    cout << "Jumlah Air Mineral =" << nAir << endl;
    cout << "Total Harga Rp." << hitungHarga() << endl;

}

int main() {

    char pilihan;
    do
    {
        input();
        display();

        cout << "Apakah anda ingin mengulangi (y/n) ?";
        cin >> pilihan;

        system("cls");
        
    } while ( pilihan == 'y' || pilihan == 'y');
    
}