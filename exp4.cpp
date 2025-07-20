#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Input from user
    cout << "Enter first integer (a): ";
    cin >> a;
    cout << "Enter second integer (b): ";
    cin >> b;

    // Bitwise operations
    cout << "\nBitwise Operations Results:\n";
    cout << "---------------------------\n";
    cout << "a & b  (AND)        = " << (a & b) << endl;
    cout << "a | b  (OR)         = " << (a | b) << endl;
    cout << "a ^ b  (XOR)        = " << (a ^ b) << endl;
    cout << "~a     (NOT a)      = " << (~a) << endl;
    cout << "~b     (NOT b)      = " << (~b) << endl;
    cout << "a << 1 (LEFT SHIFT) = " << (a << 1) << endl;
    cout << "b >> 1 (RIGHT SHIFT)= " << (b >> 1) << endl;

    return 0;
}
