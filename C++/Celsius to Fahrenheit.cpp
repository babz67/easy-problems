#include <iostream>
using namespace std;

int main() {

    double celsius, fahrenheit;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0/5.0) + 32;
    
    cout << "\n"
         << celsius
         << " degree Celsius is "
         << fahrenheit
         << " degree Fahrenheit."
         << endl;
    
    return 0;
}
