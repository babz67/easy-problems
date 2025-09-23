#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double exponent, base;
    
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    
    double num = pow(base, exponent);

    cout << "\n"
         << base
         << " raised to "
         << exponent
         << " is "
         << num << endl;

}
