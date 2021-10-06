#include <stdio.h>

//  program to find the factors of a number

void main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Factors are: \n");
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d \n", i);
        }
    }
}