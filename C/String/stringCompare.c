#include <stdio.h>
#include <string.h>


// program to compare two strings using strcmp() function

void main() {
    char string1[20];
    char string2[20];
    printf("Enter String 1: ");
    scanf("%s", &string1);
    printf("Enter String 2: ");
    scanf("%s", &string2);
    int i = strcmp(string1, string2);
    if (i == 0)
        printf("Both strings are same.");
    else
        printf("Both strings are not same.");
}


// ============================================================================
// ============================================================================

