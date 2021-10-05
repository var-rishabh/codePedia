// program to factorial of a number

#include <iostream>
using namespace std;

int main() {
    int factorial = 1, num;
    cout << "Enter a number : ";
    cin >> num;
    for (int i=1; i<=num; i++) {
        factorial *= i;
    }
    cout << "Fcatorial of " << num << " is " << factorial;
    return 0;
}