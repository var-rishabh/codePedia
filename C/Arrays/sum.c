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