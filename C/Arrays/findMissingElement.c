// program to find missing element in a sequencial array

#include <stdio.h>

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

void MulMissing(int A[], int size) {          // finding multiple missing element
    int diff = A[0] - 0;
    for (int i = 0; i < size; i++) {
        if (A[i]-i != diff) {
            while (diff < A[i]-i) {
                printf("%d ", i + diff);
                diff++;
            }
        }
    }
}


int main() {
    int A[10] = {1, 2, 4, 5, 6, 7, 8, 9, 12, 13};
    // printf("%d \n", Missing1(A, 10));
    // MulMissing(A, 10);
    return 0;
}