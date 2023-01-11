 //Judul: Input 5 Bilangan
//Author: Della Sabrina
//A11.2022.14019
//Dasar Pemrograman

#include <iostream>
using namespace std;

//kamus
int a, b, c, d, e;

// diskripsi
int main() {
  cout << "Program Inputan 5 Bilangan"<<endl;
  cout << "===================================="<<endl;
  cout << "Masukkan angka dari Bilangan A B C D E" << endl;
  cout << "Bilangan A= ";
  cin >> a;
  cout << "Bilangan B= ";
  cin >> b;
  cout << "Bilangan C= ";
  cin >> c;
  cout << "Bilangan D= ";
  cin >> d;
  cout << "Bilangan E= ";
  cin >> e;
  if ((a < b) && (b < c) && (c < d) && (d < e)) // 1
  {
    cout << a << " " << b << " " << c << " " << d << " " << e << endl;
  } else if ((a < b) && (b < c) && (c < e) && (e < d)) // 2
  {
    cout << a << " " << b << " " << c << " " << e << " " << d << endl;
  } else if ((a < b) && (b < d) && (d < c) && (c < e)) { // 3
    cout << a << " " << b << " " << d << " " << c << " " << e << endl;
  } else if ((a < b) && (b < d) && (d < e) && (e < c)) { // 4
    cout << a << " " << b << " " << d << " " << e << " " << c << endl;
  } else if ((a < c) && (c < b) && (b < d) && (d < e)) { // 5
    cout << a << " " << c << " " << b << " " << d << " " << e << endl;
  } else if ((a < c) && (c < d) && (d < b) && (b < e)) { // 6
    cout << a << " " << c << " " << d << " " << b << " " << e << endl;

  } else if ((a < c) && (c < e) && (e < d) && (d < b)) { // 7
    cout << a << " " << c << " " << e << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < c) && (c < b)) { // 8
    cout << a << " " << e << " " << d << " " << c << " " << b << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 9
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 10
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;

  }

  else if ((a < d) && (d < b) && (b < c) && (c < e)) { // 11
    cout << a << " " << d << " " << b << " " << c << " " << e << endl;
  } else if ((a < d) && (d < e) && (e < b) && (b < c)) { // 12
    cout << a << " " << d << " " << e << " " << b << " " << c << endl;

  } else if ((a < d) && (d < c) && (c < e) && (e < b)) { // 13

    cout << a << " " << d << " " << c << " " << e << " " << b << endl;

  } else if ((a < d) && (d < e) && (e < b) && (b < c)) { // 14
    cout << a << " " << d << " " << e << " " << b << " " << c << endl;
  } else if ((a < d) && (d < b) && (b < c) && (c < e)) { // 15
    cout << a << " " << d << " " << b << " " << c << " " << e << endl;

  } else if ((a < d) && (d < c) && (c < e) && (e < b)) { // 16
    cout << a << " " << d << " " << c << " " << e << " " << b << endl;
  } else if ((a < d) && (d < e) && (e < b) && (b < c)) { // 17
    cout << a << " " << d << " " << e << " " << b << " " << c << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 18
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;

  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 19
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < d) && (d < c) && (c < b)) { // 20
    cout << a << " " << e << " " << d << " " << c << " " << b << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 21
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 22
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;

  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 23
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 24
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 25
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 26
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 27
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 28
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 29
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 30
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 31
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 32
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 33
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 34

    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 35
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 36
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 37

    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 38
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 39

    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 40
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 41

    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 42
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 43
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 44
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 45
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 46
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 47
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 48
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 49
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 50

    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 51
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 52
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 53
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 54
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 55

    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 56
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 57
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 58
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 59

    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 60
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 61
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 62
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 63

    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 64

    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 65
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 66
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 67
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  }

  else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 68
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 69
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 70
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 71
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 72

    cout << a << " " << e << " " << b << " " << d << " " << c << endl;

  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 73
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 74
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 75
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 76
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 77
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 78
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 79
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 80
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 81
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 82
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 83
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 84

    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 85
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 86
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 87
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 88

    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 89
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 90
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 91
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 92

    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 93
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 94
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 95
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 96
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 97
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 98
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 99
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 100
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 101
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 102
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 103

    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 104
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 105
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 106
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 107
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 108
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 109

    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 110

    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 111
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 112
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 113
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 114

    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 115
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 116

    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 117
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  } else if ((a < e) && (e < c) && (c < d) && (d < b)) { // 118
    cout << a << " " << e << " " << c << " " << d << " " << b << endl;
  } else if ((a < e) && (e < d) && (d < b) && (b < c)) { // 119
    cout << a << " " << e << " " << d << " " << b << " " << c << endl;
  } else if ((a < e) && (e < b) && (b < d) && (d < c)) { // 120
    cout << a << " " << e << " " << b << " " << d << " " << c << endl;
  }

  if (a > b && a > c && a > d) {
    cout << "Bilangan A terbesar yaitu " << a;
  } else if (b > a && b > c && b > d) {
    cout << "Bilangan B terbesar yaitu " << b;

  } else if (c > a && c > b && c > d) {
    cout << "Bilangan C terbesar yaitu " << c;
  } else if (d > a && d > b && d > c) {
    cout << "Bilangan D terbesar yaitu " << d;
  }
  cout << endl;
  if (a < b && a < c && a < d) {
    cout << "Bilangan A Terkecil yaitu " << a;

  } else if (b < a && b < c && b < d) {
    cout << "Bilangan B Terkecil yaitu " << b;

  } else if (c < a && c < b && c < d) {
    cout << "Bilangan C Terkecil yaitu " << c;

  } else if (d < a && d < b && d < c) {
    cout << "Bilangan D Terkecil yaitu " << d;

  } else if (e < a && d < b && d < c) {
    cout << "Bilangan E Terkecil yaitu " << e;
  }
}
