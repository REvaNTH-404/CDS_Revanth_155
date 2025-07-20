#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;

    if (x > 0 && y > 0)
        cout << "Point is in Quadrant I" << endl;
    else if (x < 0 && y > 0)
        cout << "Point is in Quadrant II" << endl;
    else if (x < 0 && y < 0)
        cout << "Point is in Quadrant III" << endl;
    else if (x > 0 && y < 0)
        cout << "Point is in Quadrant IV" << endl;
    else if (x == 0 && y == 0)
        cout << "Point is at Origin" << endl;
    else if (x == 0)
        cout << "Point lies on Y-axis" << endl;
    else
        cout << "Point lies on X-axis" << endl;

    return 0;
}
