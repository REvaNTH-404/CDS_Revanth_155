#include <iostream>
using namespace std;

//  This program demonstrates the use of different storage classes in C++:
// auto, register, static, and extern

// Extern variable (global scope)
int externVar = 50;

// Function to demonstrate static storage class
void showStatic() {
    static int s = 0;  // Static variable retains its value across function calls
    s++;
    cout << "Static variable: " << s << endl;
}

int main() {
    // Auto variable (default local variable)
    int a = 5;
    cout << "Auto variable: " << a << endl;

    // Register variable (suggests fast-access storage)
    register int r = 10;
    cout << "Register variable: " << r << endl;

    // Demonstrate static variable behavior
    showStatic();
    showStatic();

    // Use of extern variable
    cout << "Extern variable: " << externVar << endl;

    return 0;
}