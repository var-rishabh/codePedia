#include <iostream>
using namespace std;

//  program to find the factors of a number

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factors are: \n";
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}