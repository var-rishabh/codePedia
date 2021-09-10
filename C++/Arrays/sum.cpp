#include <iostream>
using namespace std;

// program to add n number of integers

int main() {
    int num, sum = 0, i, n;
    cout << "How many number do you want to add? : ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum = sum + num;
    }
    cout << "Sum is : " << sum;
    return 0;
}

//============================================================================
//============================================================================