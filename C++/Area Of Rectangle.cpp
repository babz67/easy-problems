#include <iostream>
using namespace std;

int main() {
 
    cout << "Enter length of rectangle: ";
    double length;
    cin >> length;
    
    cout << "Enter width of rectangle: ";
    double width;
    cin >> width;

    double area = length * width;
    cout << "The area of the rectangle is " << area << " sq.units" << endl;

    return 0;

}
