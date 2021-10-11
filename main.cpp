#include <iostream>

using namespace std;

int main()
{
    string nama;
    int golongan,total;
    int pokok,tunjangan;
    cout << "+++status jumlah gaji+++" << endl;
    cout << "nama anda : " << endl;
    getline(cin,nama);
    cout << "masukan golongan kerja anda(1,2,3):" << endl;
    cin >> golongan;

    if(golongan == 1)pokok = 1000000,tunjangan=500000;
    if(golongan == 2)pokok = 1500000,tunjangan=500000;
    if(golongan == 3)pokok = 2000000,tunjangan=300000;
    else if(golongan <1 || golongan >3){
        cout<<endl;
        cout << "+++maaf,data golongan salah+++" << endl;
        return 0;
    }

    total += pokok  + tunjangan;

    cout<<endl;
    cout << "+++menampilkan hasil+++" << endl;
    cout << "gaji pokok anda : " << pokok << endl;
    cout << "tunjangan anda : " << tunjangan << endl;
    cout << "----------------------------" << endl;
    cout << "total : " << total << endl;

    return 0;
}
