#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main (){
    float p = 90, ts = 90, as = 85;
    float NA;

    cout << "Nilai praktikum = " << p << endl;
    cout << "Nilai uts = " << ts << endl;
    cout << "Nilai uas = " << as << endl;

    NA = (p * 20/100) + (ts * 30/100) + (as * 50/100);

    cout << "Nilai akhirnya adalah = " << NA << endl;

    return 0;
}
