#include <stdio.h>
#include <string.h>


// program to concatenate two strings using strcat() function

void main() {
    char string1[20];
    char string2[20];
    printf("Enter String 1: ");
    scanf("%s", &string1);
    printf("Enter String 2: ");
    scanf("%s", &string2);
    strcat(string1, string2);
    printf("Concatenated string is: %s", string1);
}


// ============================================================================
// ============================================================================


// program to concatenate two strings without using strcat() function