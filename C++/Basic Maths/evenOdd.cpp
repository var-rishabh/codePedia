#include <iostream>
using namespace std;

// program to print n even numbers

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Even numbers are: " << endl;
    for (i=0; i <=num; i+=2) {
        cout << i << endl;
    }
    return 0;
}

// or

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Even numbers are: " << endl;
    for (i=0; i <=num; i++) {
        if (i%2 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}


//============================================================================
//============================================================================


// program to print n odd numbers

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Odd numbers are: " << endl;
    for (i=1; i <=num; i+=2) {
        cout << i << endl;    
    }
    return 0;
}

// or

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Odd numbers are: " << endl;
    for (i=0; i <=num; i++) {
        if (i%2 != 0) {
            cout << i << endl;
        }
    }
    return 0;
}


//============================================================================
//============================================================================


// program to find a number is even or odd

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num%2 == 0) {
        cout << num << " is Even.";
    } else {
        cout << num << " is Odd.";
    }
    return 0;
}


//============================================================================
//============================================================================