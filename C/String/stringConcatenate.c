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

void main() {  
    char string1[20];
    char string2[20];
    int i;
    printf("Enter String 1: ");  
    scanf("%s", &string1);  
    printf("Enter String 2: ");  
    scanf("%s", &string2);  
    for (i=0; string1[i]!='\0'; i++);   
    for (int j=0; string2[j]!='\0'; j++) {  
        string1[i]=string2[j];  
        i++;  
    }  
    string1[i]='\0';  
   printf("Concatenated string is: %s", string1);  
}

// ============================================================================
// ============================================================================