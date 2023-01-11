//judul : Latihan innerloop.cpp menggunakan while dan do while
//memo : Della Sabrina
// 2 Oktober 2022
//Dasar Pemrograman

//kamus
#include <iostream>
using namespace std;
    int angkaloncat;
    int loncatangka;

//diskripsi
int main()
{
    angkaloncat= 10;
    while (angkaloncat>=6)
    {
    //_____________ iner loop _____________
        loncatangka= 1;
        do
        {
            cout << " loncatangkat" << endl;
            cout << "-";
            loncatangka=loncatangka+1;
        }
        while(loncatangka<10);
        //__________________________
        angkaloncat=angkaloncat-1;
        cout << endl;
    }

    return(0);
}
