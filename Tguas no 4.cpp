#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main (){
    float a = 5, b = 10, c = 20;
    float y;

    cout <<"menilai persamaan"<<endl;
    cout<< "-----------------"<<endl;

    cout << "Nilai a = " << a << endl;
    cout << "Nilai b = " << b << endl;
    cout << "Nilai c = " << c << endl;

    cout << "Selesai kan persamaan berikut y = ab^2 + 0.5b - c " << endl;
    cout << "y = 5(10)^2 + 0.5(10) - 20" << endl;
    y = (a * b * b) + 0.5 * b - c;

    cout << "Nilai y = " << y << endl;

    return 0;
}
