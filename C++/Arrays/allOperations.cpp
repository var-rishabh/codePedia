#include <iostream>
#include <string>
using namespace std;

class Array
{
    private:
        int *A;
        int size;
        int length;
        void Swap(int *x, int *y);

    public:
        Array() {
            size = 10;
            length = 0;
            A = new int[size];
        }
        Array (int sz) {
            size = sz;
            length = 0;
            A = new int[size];
        }
        ~Array () {
            delete []A;
        }

        void Display();
        void Append(int x);
        void Insert(int index, int x);
        int Delete(int index);
        int LinearSearch(int ele);
        int BinarySearch(int key);
        int Get(int index);
        void Set(int index, int value);
        int Sum();
        int Average();
        int Max();
        int Min();
        void ReverseType1();
        void ReverseType2();
        void InsertSort(int insert);
        int IsSorted();
        void Rearrange();
        Array* Merge(Array *arr2);
        Array* Union(Array *arr2);
        Array* Intersection(Array *arr2);
        Array* Difference(Array *arr2);
};

void Array::Display() {                                /* -- Display an array */
    cout << "Array : ";
    for (int i = 0; i < length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

void Array::Append(int x) {                         /* -- Adding or Appending element in an array */
    if (length < size) {
        A[length++] = x;
    }
}

void Array::Insert(int index, int x) {              /* -- Inserting element in an array */
    if (index >= 0 && index <= length) {
        for (int i = length; i > index; i--) {
            A[i] = A[i-1];
        }
        A[index] = x;
        length++;
    } else {
        cout << "Wrong Index" << endl;
    }
}

int Array::Delete(int index) {                      /* -- Deleting element in an array */
    int del = A[index];                     
    if (index >= 0 && index <= length) {
        for (int i = index; i < length-1; i++) {
            A[i] = A[i+1];
        }
        length--;
    } else {
        cout << "Wrong Index" << endl;
    }
    return del;
}

void Array::Swap(int *x, int *y) {                                     /* -- swapping two element*/
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int Array::LinearSearch(int ele) {                  /* -- Linear Search of an element in an array */
    for (int i = 0; i < length; i++) {
        if (ele == A[i]) {
            Swap(&A[i], &A[i-1]);
            return i;
        }
    }
    return -1;
}

int Array::BinarySearch(int key) {                  /* -- Binary Search of an element in an array */
    int l = 0;
    int h = length - 1;
    while (l <= h) {
        int mid = (l+h)/2;
        if (key == A[mid]) {
            return mid;
        } else if (key < A[mid]) {
            h = mid -1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int Array::Get(int index) {                          /* -- Get element from an array */
    if (index >= 0 && index < length) {
        return A[index];
    }
    return -1;
}

void Array::Set(int index, int value) {             /* -- Set element from an array */
    if (index >= 0 && index < length) {
        A[index] = value;
    }
}

int Array::Max() {                                     /* -- Max element from an array */
    int max = A[0];
    for (int i = 0; i < length; i++) {
        if (max < A[i]) {
            max = A[i];
        }
    }
    return max;
}

int Array::Min() {                                     /* -- Min element from an array */
    int min = A[0];
    for (int i = 0; i < length; i++) {
        if (min > A[i]) {
            min = A[i];
        }
    }
    return min;
}

int Array::Sum() {                                     /* -- Sum of elements of an array */
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + A[i];
    }
    return sum;
}

int Array::Average() {                                 /* -- Average of elements of an array */
    int sum = 0;
    for (int i = 0; i < length; i++) {
        sum = sum + A[i];
    }
    return sum/length;
}

void Array::ReverseType1() {                          /* -- Reversing an array by using new array */
    int i, j, k;
    int *B = new int[length];
    for (i=length-1, j=0; i>=0; i--, j++) {
        B[j] = A[i];
    }
    for (k = 0; k < length; k++) {
        A[k] = B[k];
    }
}

void Array::ReverseType2() {                          /* -- Reversing an array by swapping elements */
    int i, j;
    for (i=0, j=length-1; i<j; i++, j--) {
        Swap(&A[i], &A[j]);
    }
}

void Array::InsertSort(int insert) {                /* -- Inserting element in a sorted array */
    int i = length - 1;
    if (length == size) {
        return;
    }
    while (i>=0 && A[i]>insert) {
        A[i+1] = A[i];
        i--;
    }
    A[i+1] = insert;
    length++;
}

int Array::IsSorted() {                               /* -- Checking if array is sorted or not */
    for (int i = 0; i < length - 1; i++) {
        if (A[i] > A[i+1])
            return 0;
    }
    return 1;
}

void Array::Rearrange() {
    int i = 0;
    int j = length - 1;
    while (i < j) {
        while (A[i] < 0) i++;
        while (A[j] > 0) j--;
        if (i < j) Swap(&A[i], &A[j]);
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
    Array *arr1;
    
    arr1->Display();

    return 0;
}