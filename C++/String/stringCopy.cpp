#include <iostream>
#include <string.h>
using namespace std;

// program to copy a string using strcpy() function

int main() {
    char string1[20];
    char string2[20];
    cout << "Enter String 1: ";
    cin >> string1;
    strcpy(string2, string1);
    cout << "Copied string is: " << string2;
    return 0;
}


// ============================================================================
// ============================================================================


// program to copy a string without using strcpy() function