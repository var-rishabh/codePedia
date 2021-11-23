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
    // int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 12};
    int A[10] = {1, 3, 8, -10, 16, 7, 5, 2, 9, 132};
    // printf("%d \n", Missing1(A, 10));
    // MulMissing(A, 10);

    // for (int i = 0; i < 10; i++) {          // finding pair of elements
    //     for (int j = i+1; j < 10; j++) {
    //         if (A[i] + A[j] == 11) {
    //             printf("%d %d \n", A[i], A[j]);
    //         }
    //     }
    // }

    // int i = 0, j = 9;           // finding pair in sorted array
    // int n = 13;
    // while (i < j) {
    //     if (A[i] + A[j] == n) {
    //         printf("%d %d \n", A[i], A[j]);
    //         i++;
    //         j--;
    //     } else if (A[i] + A[j] < n) {
    //         i++;
    //     } else {
    //         j--;
    //     }        
    // }


    // find max and min in one scan

    int max = A[0];
    int min = A[0];
    for (int k = 0; k < 10; k++) {
        if (min > A[k]) min = A[k];
        else if (max < A[k]) max = A[k]; 
    }
    printf("%d %d", max, min);

    return 0;
}