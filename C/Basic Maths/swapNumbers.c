#include <stdio.h>

// program to swap two variables

void main() {
    int x, y, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swapping x = %d and y = %d \n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("After swapping x = %d and y = %d", x, y);
}