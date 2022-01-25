#include <iostream>
#include <string.h>
using namespace std;


// program to concatenate two strings using strcat() function

int main() {
    char string1[20];
    char string2[20];
    cout << "Enter String 1: ";
    cin >> string1;
    cout << "Enter String 2: ";
    cin >> string2;
    strcat(string1, string2);
    cout << "Concatenated string is: " << string1;
    return 0;
}


// ============================================================================
// ============================================================================


// program to concatenate two strings without using strcat() function

int main() {  
    char string1[20];
    char string2[20];
    int i;
    cout << "Enter String 1: ";
    cin >> string1;
    cout << "Enter String 2: ";
    cin >> string2;
    for (i=0; string1[i]!='\0'; i++);   
    for (int j=0; string2[j]!='\0'; j++) {  
        string1[i]=string2[j];  
        i++;   
    }  
    string1[i]='\0';  
    cout << "Concatenated string is: " << string1;
    return 0;
}

// ============================================================================
// ============================================================================