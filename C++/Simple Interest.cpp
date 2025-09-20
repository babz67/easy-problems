#include <iostream>
using namespace std;

int main() {
    std::cout << "Enter the amount of money deposited: ";
    long int principal;
    cin >> principal;
    cout << "Enter interest rate (in percentage): ";
    float rate;
    cin >> rate;
    cout << "Enter the time to be deposited (in years): ";
    float time;
    cin >> time;

    float interest = principal + (principal * rate * time) / 100;

    cout << "\nThe total amount after "
         << time
         << " years is "
         << interest
         << endl;
    
    return 0;
}
