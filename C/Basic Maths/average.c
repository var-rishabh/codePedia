#include <stdio.h>

// program to find average of three numbers

void main() {
    float num1, num2, num3, avg;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    avg = (num1 + num2 + num3)/3;
    printf("Average is : %.3f", avg);
}