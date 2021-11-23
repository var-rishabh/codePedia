#include <iostream>
using namespace std;


// program to find the duplicates in a sorted array

void Duplicate1(int A[]) {
    int lD = 0;
    for (int i = 0; i < 10; i++) {
        if (A[i] == A[i+1] && A[i] != lD) {
            cout << A[i] << " ";
            lD = A[i];
        }
    }
}

void Duplicate2(int A[]) {
    int j;
    for (int i = 0; i < 9 ; i++) {
        if (A[i] == A[i+1] ) {
            j = i + 1;
            while (A[j] == A[i]) j++;
            cout << A[i] << " - " << j-i << endl;   
            i = j - 1;
        }
    }
}


// program to find the duplicates in a unsorted array

void Duplicate3(int A[]) {
    for (int i = 0; i < 9; i++) {
        int count = 1;
        if (A[i] != -1) {
            for (int j = i+1; i < 10; j++) {
                if (A[i] == A[j]) {
                    count++;
                    A[j] = -1;
                }
            }
            if (count > 1) {
                cout << A[i] << endl; 
                cout << count << endl; 
            }
        }
    }
}

int main() {
    int A[10] = {22, 11, 33, 22, 44, 66, 66, 55, 66, 22};
    Duplicate2(A);
    return 0;
}