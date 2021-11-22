// program to find missing element in a sequencial array

#include <iostream>
using namespace std;

int Missing1(int A[], int size) {          // finding missing element
    int diff = A[0] - 0;
    for (int i = 0; i < size; i++) {
        if (A[i]-i != diff) {
            return i + diff;
            break;
        }
    }
    return 0;
}

// int Missing2(int A[], int size) {          // finding missing element using hash mapping
//     int newA[size];

// }

void MulMissing(int A[], int size) {          // finding multiple missing element
    int diff = A[0] - 0;
    for (int i = 0; i < size; i++) {
        if (A[i]-i != diff) {
            while (diff < A[i]-i) {
                cout << i + diff << " ";
                diff++;
            }
        }
    }
}


int main() {
    int A[10] = {1, 2, 4, 5, 6, 7, 8, 11, 12, 15};
    // Missing2(A, 10);

    int n[15];
    int l = 1;
    int h = 15;
    
    for (int i = 0; i < 10; i++) {
        n[A[i]]++;
    }
    for (int j = l; j <= h; j++) {
        if (n[j] == 0) cout << j << endl;
    }
}