#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main (){
    //rumus sisi miring no 1

    double a = 5, t = 7;
    double sisi_miring;

    cout << "Nilai Alas : " << a << endl;
    cout << "Nilai tinggi : " << t << endl;

    sisi_miring = sqrt ( pow(a,2) + pow(t,2) );

    cout << "Nilai sisi miring : " << sisi_miring << endl;

    return 0;
}
