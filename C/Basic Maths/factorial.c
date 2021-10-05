// program to factorial of a number

#include <stdio.h>

void main() {
    int factorial = 1, num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (int i=1; i<=num; i++) {
        factorial *= i;
    }
    printf("Factorial of %d is : %d", num, factorial);
}