//judul : mencari nilai rata rata dari 5 bilangan
//Della 12 September 2022

#include <iostream>
using namespace std;

//kamus
int main ()
{
    int bil1;
    int bil9;
    int bilangan;
    int angka;
    int value;
    float hslratarata;

//diskripsi
    cout << "masukan bil1" <<endl; cin >> bil1;
    cout << "masukan bil9" <<endl; cin >> bil9;
    cout << "masukan bilangan" <<endl; cin >> bilangan;
    cout << "masukan angka" << endl; cin >> angka;
    cout << "masukan value" << endl; cin >> value;

    hslratarata = (bil1 + bil9 + bilangan + angka + value)/5;
    cout << hslratarata << endl;

    cout << bil1 << "&" << bil9 << "&" << bilangan << "&" << angka << "&" << value << endl;
    cout << "adalah" << hslratarata;

    //kondisi
    if (hslratarata>= 95)
    {
        cout << "sempurna";
    }
    else
    {
        cout << "bagus";
    }
}
