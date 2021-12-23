#include <stdio.h>
// program to find the duplicates in a sorted array

void Duplicate1(int A[]) {
    int j;
    for (int i = 0; i < 9 ; i++) {
        if (A[i] == A[i+1] ) {
            j = i + 1;
            while (A[j] == A[i]) j++;
            printf("%d - %d\n", A[i], j-i);
            i = j - 1;
        }
    }
}


// program to find the duplicates in a unsorted array

// void Duplicate2(int A[]) {
//     for (int i = 0; i < 9; i++) {
//         int count = 1;
//         if (A[i] != -1) {
//             for (int j = i+1; i < 10; j++) {
//                 if (A[i] == A[j]) {
//                     count++;
//                     A[j] = -1;
//                 }
//             }
//             if (count > 1) {
//                 printf("%d - %d\n", A[i], count);
//             }
//         }
//     }
// }

int main() {
    int A[10] = {11, 22, 33, 33, 44, 55, 66, 66, 66, 66};
    Duplicate1(A);
    
    // int B[10] = {22, 11, 33, 22, 44, 66, 66, 55, 66, 22};
    // Duplicate2(B);
    return 0;
}