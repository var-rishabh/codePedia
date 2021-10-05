#include <iostream>
#include <iomanip>
using namespace std;

// program to convert kilometre to metre

int main() {
    float km, m;
    cout << "Enter kilometres (kms) : ";
    cin >> km;
    m = km*1000;
    cout << fixed << setprecision(2);
    cout << km << " km = " << m << " m";
    return 0;
}


//============================================================================
//============================================================================


// program to convert metre to kilometre

int main() {
    float km, m;
    cout << "Enter metres (ms) : ";
    cin >> m;
    km = m/1000;
    cout << fixed << setprecision(2);
    cout << m << " m = " << km << " km";
    return 0;
}


//============================================================================
//============================================================================


// program to convert celcius to fahrenheit

int main() {
    float celcius, fahrenheit;
    cout << "Enter temperature in celcius : ";
    cin >> celcius;
    fahrenheit = (9*celcius + 160)/5;
    cout << fixed << setprecision(2);
    cout << celcius << " celcius = " << fahrenheit << " fahrenheit";
    return 0;
}


//============================================================================
//============================================================================


// program to convert fahrenheit to celcius

int main() {
    float celcius, fahrenheit;
    cout << "Enter temperature in fahrenheit : ";
    cin >> fahrenheit;
    celcius = (5*fahrenheit -160)/9;
    cout << fixed << setprecision(2);
    cout << fahrenheit << " fahrenheit = " << celcius << " celcius";
    return 0;
}


//============================================================================
//============================================================================