#include <iostream>
using namespace std;


// program to find the duplicates in a sorted array

void Duplicate1(int A[], int size) {
    int j;
    for (int i = 0; i < size ; i++) {
        if (A[i] == A[i+1] ) {
            j = i + 1;
            while (A[j] == A[i]) j++;
            cout << A[i] << " - " << j-i << endl;   
            i = j - 1;
        }
    }
}


// program to find the duplicates in a unsorted array

// void Duplicate2(int A[], int size) {
//     for (int i = 0; i < size; i++) {
//         int count = 1;
//         if (A[i] != -1) {
//             for (int j = i+1; i < size; j++) {
//                 if (A[i] == A[j]) {
//                     count++;
//                     A[j] = -1;
//                 }
//             }
//             if (count > 1) {
//                 cout << A[i] << " - " << count << endl; 
//             }
//         }
//     }
// }

int main() {
    int A[10] = {11, 22, 33, 33, 44, 55, 66, 66, 66, 66};
    Duplicate1(A, 10);
    
    // int A[10] = {22, 11, 33, 22, 44, 66, 66, 55, 66, 22};
    // Duplicate2(A, 10);
    return 0;
}