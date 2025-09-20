#include <iostream>
using namespace std;

int main() {
    
    short int a {1};
    short int b {2};

    cout << "Initially a = "
         << a
         << " and b = "
         << b
         << "\nSwapping now..."
         << endl;
    
    swap(a,b);

    cout << "\nAfter swapping a "
         << "becomes "
         << a
         << " and b becomes "
         << b
         << endl;
         
         
    return 0;

}

