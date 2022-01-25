#include <iostream>
#include <string.h>
using namespace std;

// program to compare two strings using strcmp() function

int main() {
    char string1[20];
    char string2[20];
    cout << "Enter String 1: ";
    cin >> string1;
    cout << "Enter String 2: ";
    cin >> string2;
    int i = strcmp(string1, string2);
    if (i == 0)
        cout << "Both strings are same.";
    else
        cout << "Both strings are not same.";
    return 0;
}