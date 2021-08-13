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


// program to convert celcius to fahrenheit

void main() {
    float celcius, fahrenheit;
    printf("Enter temperature in celcius : ");
    scanf("%f", &celcius);
    fahrenheit = (9*celcius + 160)/5;
    printf("%.2f celcius = %.2f fahrenheit", celcius, fahrenheit);
}


//============================================================================
//============================================================================


// program to convert fahrenheit to celcius

void main() {
    float celcius, fahrenheit;
    printf("Enter temperature in fahrenheit : ");
    scanf("%f", &fahrenheit);
    celcius = (5*fahrenheit -160)/9;
    printf("%.2f fahrenheit = %.2f celcius", fahrenheit, celcius);
}


//============================================================================
//============================================================================