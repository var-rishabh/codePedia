#include <iostream>
using namespace std;

// program to add all integers from an array

int main() {
    int sum = 0, n;
    cout << "How many number do you want to add? : ";
    cin >> n;
    int numbers[n];
    cout << "Enter numbers : ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    for (int j = 0; j < n; j++) {
        sum = sum + numbers[j];
    }
    cout << "Sum is : " << sum;
    return 0;
}

//============================================================================
//============================================================================