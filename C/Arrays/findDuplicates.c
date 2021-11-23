// program to find the duplicates in an program

#include <stdio.h>

int main() {
    int A[10] = {11, 22, 33, 33, 44, 55, 66, 66, 66, 66};
    int lD = 0;
    for (int i = 0; i < 10; i++) {
        if (A[i] == A[i+1] && A[i] != lD) {
            printf("%d ", A[i]);
            lD = A[i];
        }
    }
    return 0;
}