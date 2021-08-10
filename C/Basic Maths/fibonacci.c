// program to print fibonacci series

#include<stdio.h>
#include<conio.h>

void main() {
    int num1 = 0, num2 = 1, n3, i, number;
    printf("Enter a number :");
    scanf("%d",&number);
    printf("Fibonacci Series is :");
    printf("\n%d %d", num1, num2); 
    for(i = 2; i<number; ++i) {
        n3 = num1 + num2;
        printf(" %d", n3);
        num1 = num2;
        num2 = n3;
    }
}