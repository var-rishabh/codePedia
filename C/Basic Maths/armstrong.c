#include <stdio.h>

// program to find a number is armstrong or not

void main() {
    int num, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num > 0)
    {
        r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if (temp == sum)
        printf("It is an Armstrong number.");
    else
        printf("It is not an Armstrong number.");
}