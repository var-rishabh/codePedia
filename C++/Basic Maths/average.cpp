#include <iostream>
using namespace std;

// program to find average of three numbers

int main() {
    float num1, num2, num3, avg;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    avg = (num1 + num2 + num3)/3;
    cout << "Average is : " << avg;
    return 0;
}