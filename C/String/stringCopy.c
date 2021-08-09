#include <stdio.h>
#include <string.h>


// program to copy a string using strcpy() function

void main() {
    char string1[20];
    char string2[20];
    printf("Enter String 1: ");
    scanf("%s", &string1);
    strcpy(string2, string1);
    printf("Copied string is: %s", string2);
}


// ============================================================================
// ============================================================================


// program to copy a string without using strcpy() function