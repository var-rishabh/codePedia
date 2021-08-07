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



// program to add n number of integers
void main() {
    int num, sum=0, i, n;
    printf("How many number do you want to add? : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum = sum + num;
    }
    printf("Sum is: %d", sum);
}



//============================================================================
//============================================================================