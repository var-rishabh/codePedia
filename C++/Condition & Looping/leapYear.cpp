#include <iostream>
using namespace std;

// program to find a year is leap year or not

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                cout << "Yes! it is a leap year.";
            } else {
                cout << "No! it is not a leap year.";
            }
        } else {
            cout << "Yes! it is a leap year.";
        }
    } else {
        cout << "No! it is not a leap year.";
    }
    return 0;
}