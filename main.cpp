#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "Tugas Mencari Luas Lingkaran" << endl;
    cout << "soal:" <<endl;
    cout << "luas lingkaran dengan diameter 32m adalah.. (n=3,14)" <<endl;
    cout << "jari - jari = 1/2 x 32cm" <<endl;
    float a, b, c, jawaban;
    a=1;
    b=2;
    c=32;
    jawaban = a / b * c;
    cout << "jari - jari= " << jawaban <<endl;

    //rumus
    float phi, r, hasil;
    phi = 3.14;
    r = 16;
    hasil = phi * r * r;
    cout << "maka luas lingkaran = " <<hasil <<endl;



    return 0;
}
