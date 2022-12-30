#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int integer;
    long long1; // by default int long
                // by default int long long
    char character;
    float floatnumber;
    double doublenumber;
    cin >> integer;
    cin >> long1;

    cin >> character;
    cin >> floatnumber;
    cin >> doublenumber;
    cout << integer << endl;
    cout << setprecision(20) << long1 << endl;

    cout << character << endl;
    cout << setprecision(20) << floatnumber << endl;
    cout << setprecision(20) << doublenumber << endl;
    return 0;
}