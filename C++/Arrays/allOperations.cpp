#include <iostream>
#include <string>
using namespace std;

struct Array {
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr) {                                /* -- Display an array */
    cout << "Array : ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void Append(struct Array *arr, int x) {                         /* -- Adding or Appending element in an array */
    if (arr->length < arr->size) {
        arr->A[arr->length++] = x;
    }
}

// Array* Array::Merge(Array arr2) {                              /* -- Merging two array */
//     int i, j, k;
//     i = j = k = 0;
//     Array *arr3 = new Array(length + arr2.length);
//     while(i<length && j<arr2.length) {
//         if (A[i] < arr2.A[j]) {
//             arr3->A[k++] = A[i++];
//         } else {
//             arr3->A[k++] = arr2.A[j++];
//         }
//     }
//     for (; i < length; i++) {
//         arr3->A[k++] = A[i];
//     }
//     for (; j < arr2.length; j++) {
//         arr3->A[k++] = arr2.A[j];
//     }
//     arr3->length = length + arr2.length;
//     return arr3;
// }

// Array* Array::Union(Array arr2) {            /* -- Union of two array */
//     int i, j, k;
//     i = j = k = 0;
//     struct Array *arr3 = new struct Array;
//     while(i<length && j<arr2.length) {
//         if (A[i] < arr2.A[j]) {
//             arr3->A[k++] = A[i++];
//         } else if (arr2.A[j] < A[i]){
//             arr3->A[k++] = arr2.A[j++];
//         } else {
//             arr3->A[k++] = A[i++];
//             j++;
//         }
//     }
//     for (; i < length; i++) {
//         arr3->A[k++] = A[i];
//     }
//     for (; j < arr2.length; j++) {
//         arr3->A[k++] = arr2.A[j];
//     }
//     arr3->length = k;
//     arr3->size = 20;
//     return arr3;
// }

// Array* Array::Intersection(Array arr2) {            /* -- Intersection of two array */
//     int i, j, k;
//     i = j = k = 0;
//     struct Array *arr3 = new struct Array;
//     while(i<length && j<arr2.length) {
//         if (A[i] < arr2.A[j]) {
//             i++;
//         } else if (arr2.A[j] < A[i]){
//             j++;
//         } else if (A[i] == arr2.A[j]) {
//             arr3->A[k++] = A[i++];
//             j++;
//         }
//     }
//     arr3->length = k;
//     arr3->size = 20;
//     return arr3;
// }

// Array* Array::Difference(Array arr2) {            /* -- Difference of two array */
//     int i, j, k;
//     i = j = k = 0;
//     struct Array *arr3 = new struct Array;
//     while(i<length && j<arr2.length) {
//         if (A[i] < arr2.A[j]) {
//             arr3->A[k++] = A[i++];
//         } else if (arr2.A[j] < A[i]){
//             arr3->A[k++] = arr2.A[j++];
//         } else if (A[i] == arr2.A[j]) {
//             i++;
//             j++;
//         }
//     }
//     arr3->length = k;
//     arr3->size = 20;
//     return arr3;
// }

int main() {
    struct Array arr1 = {{1,3,5,1,2,4,8}, 10, 7};
    
    Append(&arr1, 45);
    Display(arr1);

    return 0;
}