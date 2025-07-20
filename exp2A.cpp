/*To write a C++ program that demonstrates the use of the 
sizeof operator by allowing the user to input values of different 
primitive data types and displaying both the input value and its 
corresponding memory size in bytes.*/

#include <iostream>
using namespace std;

int main() {
    char c;
    int i;
    float f;
    double d;
    bool b;
    long l;
    long long ll;

    cout << "Enter a character: ";
    cin >> c;
    cout << "Value: " << c << ", Size: " << sizeof(c) << " byte" << endl;

    cout << "\nEnter an integer: ";
    cin >> i;
    cout << "Value: " << i << ", Size: " << sizeof(i) << " bytes" << endl;

    cout << "\nEnter a float: ";
    cin >> f;
    cout << "Value: " << f << ", Size: " << sizeof(f) << " bytes" << endl;

    cout << "\nEnter a double: ";
    cin >> d;
    cout << "Value: " << d << ", Size: " << sizeof(d) << " bytes" << endl;

    cout << "\nEnter a boolean (0 or 1): ";
    cin >> b;
    cout << "Value: " << b << ", Size: " << sizeof(b) << " byte" << endl;

    cout << "\nEnter a long integer: ";
    cin >> l;
    cout << "Value: " << l << ", Size: " << sizeof(l) << " bytes" << endl;

    cout << "\nEnter a long long integer: ";
    cin >> ll;
    cout << "Value: " << ll << ", Size: " << sizeof(ll) << " bytes" << endl;

    return 0;
}