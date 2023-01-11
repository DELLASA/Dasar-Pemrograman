//judul : Latihan Looping tapi bukan seperti Looping
//memo : Della Sabrina
// 2 Oktober 2022
//Dasar Pemrograman

//kamus
#include <iostream>
using namespace std;
char yt;

//diskripsi
int main()
{
    awal:
    cout << "uji coba ulang YA atau TIDAK" << endl;
    cout << endl;

    cout << "Data Lagi? ketik (y/t)";
    cin >> yt;
    cout << endl;
    if (yt=='Y'| yt=='y')
    {
        goto awal;
    }
    //-------------------

    if (yt=='T'| yt=='t')
    {
        goto akhir;
    }
    akhir:

    return(0);
}
