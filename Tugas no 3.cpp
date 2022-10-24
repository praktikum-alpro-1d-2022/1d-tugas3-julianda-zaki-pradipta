#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
    float v, i, r;

    //rumus Arus Listrik
    cout << "Mencari Arus Listrik" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> v;

    cout << "Masukkan Hambatan (R) : ";
    cin >> r;

    i = v/r;

    cout << "Nilai Arus Listrik : " << i << endl<<endl<<endl;
    //rumus tegangan
    cout << "Mencari Tegangan" << endl;
    cout << "Masukkan Arus Listrik (I) : ";
    cin >> i;

    cout << "Masukkan Hambatan (R) : ";
    cin >> r;

    v = i * r;

    cout << "Nilai tegangan = " << v << endl<<endl<<endl;

    //rumus Hambatan
    cout << "Mencari Nilai Hambatan" << endl;
    cout << "Masukkan Tegangan (V) : ";
    cin >> v;

    cout << "Masukkan Arus Listrik (I) : ";
    cin >> i;

    r = v/i;

    cout << "Nilai Hambatan = " << r << endl;

    return 0;
}
