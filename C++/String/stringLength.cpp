#include <iostream>
#include <string.h>
using namespace std;

// program to find string length using strlen() function

int main() {
    char string[20];
    int len;
    cout << "Enter a string: ";
    cin >> string;
    len =  strlen(string);
    cout << "Length of string is: " << len;
    return 0;
}


// ============================================================================
// ============================================================================


// program to find string length without using strlen() function

int main() {
    char string[20];
    int len = 0;
    cout << "Enter a string: ";
    cin >> string;
    for (int i=0; string[i] != '\0'; i++) {
        len++;
    }
    cout << "Length of string is: " << len;
    return 0;
}