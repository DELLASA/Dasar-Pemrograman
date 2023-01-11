//Palindrom
//Programmer: Della Sabrina
//A11.2022.14019

#include<iostream>
using namespace std;

//kamus
int i,n;
string kata;
bool palindrom=true;

//diskripsi
int main()
{
    cout << "Program mengecek bahwa kata tersebut Palindrom atau tidak" << endl;
    cout << "Input Kata :", getline(cin, kata);
    n=kata.length();     //kata.length = untuk menghitung jumlah huruf pada inputan

    i=0;
    do{
        if(kata[i]!=kata[n-i-1]){
            palindrom=false;
            break;
        }
        i=i+1;
    }while (i<n);

    cout << "Hasil:";
    if(palindrom==true){
        cout << "Palindrom";
    }
    else{
        cout << "Bukan Palindrom";
    }


cin.ignore();       //cin.ignore = digunakan agar spasi tidak termasuk dalam inputan

return 0;
}
