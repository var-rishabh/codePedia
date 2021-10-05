#include <iostream>
using namespace std;

// program to swap two variables

int main() {
    int x, y, temp;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    cout << "Before swapping x = " << x << " and y = " << y << endl;
    temp = x;
    x = y;
    y = temp;
    cout << "After swapping x = " << x << " and y = " << y << endl;
    return 0;
}