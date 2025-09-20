#include <iostream>

using namespace std;


int main() {
    
    cout << "Enter a number: ";
    int num {};
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << "\n"
                 << num
                 << " is an even number."
                 << endl;
        } else if (num % 2 != 0) {
            cout << "\n"
                 << num
                 << " is an odd number."
                 << endl;
        }
    } else if (num == 0){
        cout << "\nZero is either odd nor even."
             << endl;
    } else {
        cout << "\nPlease enter a postive number."
             << endl;
    }
    return 0;
}
