// program to find missing element in a sequencial array

#include <iostream>
using namespace std;

void pair1(int A[], int size, int n) {                          // finding pair of elements
    for (int i = 0; i < size; i++) {          
        for (int j = i+1; j < size; j++) {
            if (A[i] + A[j] == n) {
                cout << A[i] << " + " << A[j] << " = " << n << endl;
            }
        }
    }
}

void pair2(int A[], int size, int n) {                          // finding pair in sorted array
    int i = 0, j = size-1;          
    while (i < j) {
        if (A[i] + A[j] == n) {
            printf("%d + %d = %d\n", A[i], A[j], n);
            cout << A[i] << " + " << A[j] << " = " << n << endl;
            i++;
            j--;
        } else if (A[i] + A[j] < n) {
            i++;
        } else {
            j--;
        }        
    }
}

int main() {
    // int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int A[10] = {1, 3, 8, -10, 16, 7, 5, 2, 9, 132};  // can be only used in pair1

    pair1(A, 10, 10);
    cout << endl;
    // pair2(A, 10, 5);

    return 0;
}