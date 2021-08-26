#include <stdio.h>
#include <string.h>


// program to find string length using strlen() function

void main() {
    char string[20];
    int len;
    printf("Enter a string: ");
    scanf("%s", &string);
    len =  strlen(string);
    printf("Length of string is: %d", len);
}


// ============================================================================
// ============================================================================


// program to find string length without using strlen() function


void main() {
    char string[20];
    int len = 0;
    printf("Enter a string: ");
    scanf("%s", &string);
    for (int i=0; string[i] != '\0'; i++) {
        len++;
    }
    printf("Length of string is: %d", len);
}