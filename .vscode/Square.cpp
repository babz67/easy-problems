#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double num;

    cout << "Enter a number: ";
    cin >> num;

    double square = pow(num, 2);

    cout << "\nThe square of "
         << num
         << " is "
         << square
         << endl;

    return 0;

}
