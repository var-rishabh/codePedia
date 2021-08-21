#include <stdio.h>

// program to find area of a circle

void main() {
    float area, radius;
    printf("Enter radius : ");
    scanf("%f", &radius);
    area = 3.14*radius*radius;
    printf("Area is : %.2f", area);
}


//============================================================================
//============================================================================


// program to find area of a square

void main() {
    float area, length;
    printf("Enter length : ");
    scanf("%f", &length);
    area = length*length;
    printf("Area is : %.2f", area);
}


//============================================================================
//============================================================================


// program to find area of a rectangle

void main() {
    float area, length, breadth;
    printf("Enter length : ");
    scanf("%f", &length);
    printf("Enter breadth : ");
    scanf("%f", &breadth);
    area = length*breadth;
    printf("Area is : %.2f", area);
}


//============================================================================
//============================================================================


// program to find area of a cone

void main() {
    float area, radius, slant_height;
    printf("Enter radius : ");
    scanf("%f", &radius);
    printf("Enter slant_height : ");
    scanf("%f", &slant_height);
    area = 3.14*radius*(radius + slant_height);
    printf("Area is : %.2f", area);
}


//============================================================================
//============================================================================


// program to find area of a cylinder

void main() {
    float area, radius, height;
    printf("Enter radius : ");
    scanf("%f", &radius);
    printf("Enter height : ");
    scanf("%f", &height);
    area = 2*3.14*radius*(height + radius);
    printf("Area is : %.2f", area);
}


//============================================================================
//============================================================================
