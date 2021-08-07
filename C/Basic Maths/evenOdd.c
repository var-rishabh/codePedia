#include <stdio.h>

// program to print n even numbers
void main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Even numbers are: \n");
    for (i=0; i <=num; i+=2) {
        printf("%d\n", i);    
    }
}

//or

void main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Even numbers are: \n");
    for (i=0; i <=num; i++) {
        if (i%2 == 0) {
            printf("%d\n", i);
        }
    }
}


//============================================================================
//============================================================================


// program to print n odd numbers
void main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Odd numbers are: \n");
    for (i=1; i <=num; i+=2) {
        printf("%d\n", i);    
    }
}

//or

void main() {
    int num, i;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Odd numbers are: \n");
    for (i=0; i <=num; i++) {
        if (i%2 != 0) {
            printf("%d\n", i);
        }
    }
}


//============================================================================
//============================================================================


// program to find a number is even or odd
void main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num%2 == 0) {
        printf("%d is Even.", num);
    } else {
        printf("%d is Odd.", num);
    }
}


//============================================================================
//============================================================================