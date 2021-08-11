#include <stdio.h>

// program to add two numbers

void main() {
    float num1, num2, sum;
    printf("Enter two numbers to add: ");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    printf("Sum is: %.2f", sum);
}


//============================================================================
//============================================================================


// program to subtract two numbers

void main() {
    int num1, num2, sub;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sub = num1 - num2;
    printf("Subtraction is: %d", sub);
}

//============================================================================
//============================================================================


// program to multiply two numbers

void main() {
    int num1, num2, mul;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    mul = num1 * num2;
    printf("Multiplication is: %d", mul);
}

//============================================================================
//============================================================================


// program to divide two numbers

void main() {
    float num1, num2, div;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    div = num1 / num2;
    printf("Subtraction is: %.3f", div);
}

//============================================================================
//============================================================================