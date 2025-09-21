#include <iostream>

using namespace std;

int main() {
    
    cout << "Enter the dividend: ";
    int dividend {};
    cin >> dividend;
    
    cout << "Enter the divisor: ";
    int divisor {};
    cin >> divisor;


    double remainder = dividend % divisor;

    cout << "\nThe remainder is "
         << remainder
         << endl;

    return 0;

}
