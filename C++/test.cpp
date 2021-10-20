#include<iostream>
#include<math.h>
using namespace std;

double power(double n, int p) {
    return pow(n,p);
}

struct point {
    int x;
    int y;
};

struct phone {
       int area;         
       int exchange;     
       int number;       
};

int main() {
    // Q - 1
    double num;
    int pow;
    cout << "Enter a number: " ;
    cin >> num;
    cout << "Enter power: ";
    cin >> pow;
    cout << double(power(num,pow));   

    // Q - 2
    struct point X, Y, Z;
    cout << "Enter coordinates for X: ";
    cin >> X.x >> X.y;
    cout << "Enter coordinates for Y: ";
    cin >> Y.x >> Y.y;
    Z.x = X.x + Y.x;
    Z.y = X.y + Y.y;
    cout << "New coordinates are: "<< Z.x << ", " << Z.y;

    // Q - 3
    char word;
    char oper;
    double n1, n2;
    label:
        cout << "Enter first number, an operator and second number : \n";
        cin >> n1 >> oper >> n2;
        switch(oper) {
            case '+':
                cout << "Answer = "<< n1 + n2 << endl;
                break;
            case '-':
                cout << "Answer = " << n1 - n2 << endl;
                break;
            case '*':
                cout << "Answer = " << n1 * n2 << endl;
                break;
            case '/':
                cout << "Answer = " << n1 / n2 << endl;
                break;
            Default:
                cout<<" Answer = 0";	
        }
        cout << "Do Another Calculations (Y/N): ";
    Here:
        cin >> word;
        if (word == 'y' || word == 'Y')
            goto label;
        else if (word == 'n' || word == 'N')
            return 0;
        else {
            cout << "Enter Y/N: ";
            goto Here;
        }

    // Q - 4
    struct phone p1 = { 212, 767, 8900 };  
    struct phone p2;                      
    cout << "Enter your area code, exchange and number: \n";
    cin >> p2.area >> p2.exchange >> p2.number;
    cout << "My number is: (" << p1.area << ") "<< p1.exchange << '-' << p1.number << endl; 
    cout << "Your number is: (" << p2.area << ") "<< p2.exchange << '-' << p2.number;
        
    return 0;    
}

