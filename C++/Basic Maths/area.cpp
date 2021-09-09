#include <iostream>
using namespace std;

// program to find area of a circle

int main() {
    float area, radius;
    cout << "Enter radius : ";
    cin >> radius;
    area = 3.14*radius*radius;
    cout << "Area is : " << area;
    return 0;
}


//============================================================================
//============================================================================


// program to find area of a square

int main() {
    float area, length;
    cout << "Enter length : ";
    cin >> length;
    area = length*length;
    cout << "Area is : " << area;
    return 0;
}


//============================================================================
//============================================================================


// program to find area of a rectangle

int main() {
    float area, length, breadth;
    cout << "Enter length : ";
    cin >> length;
    cout << "Enter breadth : ";
    cin >> breadth;
    area = length*breadth;
    cout << "Area is : " << area;
    return 0;
}


//============================================================================
//============================================================================


// program to find area of a cone

int main() {
    float area, radius, slant_height;
    cout << "Enter radius : ";
    cin >> radius;
    cout << "Enter slant_height : ";
    cin >> slant_height;
    area = 3.14*radius*(radius + slant_height);
    cout << "Area is : " << area;
    return 0;
}


//============================================================================
//============================================================================


// program to find area of a cylinder

int main() {
    float area, radius, height;
    cout << "Enter radius : ";
    cin >> radius;
    cout << "Enter height : ";
    cin >> height;
    area = 2*3.14*radius*(height + radius);
    cout << "Area is : " << area;
    return 0;
}


//============================================================================
//============================================================================