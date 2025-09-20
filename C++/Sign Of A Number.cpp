#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int num {};
    cin >> num;

    if (num < 0) {
        cout << "\n"
             << num
             << " is a negative number."
             << endl;
    } else if (num > 0) {
        cout << "\n"
             << num
             << " is a positive number."
             << endl;
    } else {
        cout << "\nYour number is zero."
             << endl;
    }

    return 0;
}

