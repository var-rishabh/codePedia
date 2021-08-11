#include <stdio.h>

// program to convert kilometre to metre

void main() {
    float km, m;
    printf("Enter kilometres (kms) : ");
    scanf("%f", &km);
    m = km*1000;
    printf("%.2f km = %.2f m", km, m);
}


//============================================================================
//============================================================================


// program to convert metre to kilometre

void main() {
    float km, m;
    printf("Enter metres (ms) : ");
    scanf("%f", &m);
    km = m/1000;
    printf("%.2f m = %.2f km", m, km);
}


//============================================================================
//============================================================================