#include <iostream>
using namespace std;

// program to find a number is armstrong or not

int main() {
    int num, r, sum = 0, temp;
    cout << "Enter the Number: ";
    cin >> num;
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if (temp == sum)
        cout << "It is an Armstrong number.";
    else
        cout << "It is not an Armstrong number.";
    return 0;
}