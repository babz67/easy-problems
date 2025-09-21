#include <iostream>

using namespace std;

int main() {

    double num1, num2;

    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;

    if (num1 > num2) {
        cout << "\n" <<  num1 << " is greater than " << num2 << endl;
    } else if (num2 > num1) {
        cout << "\n" << num2 << " is greater than " << num1 << endl;
    } else {
        cout << "\nBoth " << num1 << " and " << num2 << " are equal";
    }

    return 0;

}
