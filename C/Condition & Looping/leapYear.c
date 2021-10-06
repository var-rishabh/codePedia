#include <stdio.h>

// program to find a year is leap year or not

void main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                printf("Yes! it is a leap year.");
            } else {
                printf("No! it is not a leap year.");
            }
        } else {
            printf("Yes! it is a leap year.");
        }
    } else {
        printf("No! it is not a leap year.");
    }
}