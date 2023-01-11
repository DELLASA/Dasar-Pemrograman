//judul : Latihan Looping While 3
//memo : Della Sabrina
// 2 Oktober 2022
//Dasar Pemrograman

//kamus
#include <iostream>
#include <string.h>
using namespace std;

char ulangi[2];
int counter;

//diskripsi
int main()
{
    strcpy(ulangi,"y");
    counter = 0;
    do
    {
        cout << "Apakah kamu mau mengulang?\n" << endl;
        cout << "Jawab (y/t):";
        cin >> ulangi;

        counter = counter+1;
    }
    while(strcmp(ulangi,"y")==0);

    cout << "__________" << endl;
    cout << "Perulangan Berakhir ... !\n" << endl;

    return(0);
}
