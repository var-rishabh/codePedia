#include <stdio.h>
#include <string.h>

void main() {
    char string1[20];
    int len;
    printf("Enter any name: ");
    scanf("%s", &string1);
    len =  strlen(string1);
    printf("Length of name is: %d", len);
}