#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr) {                                /* -- Display an array */
    printf("Array : ");
    for (int i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
}

void Append(struct Array *arr, int x) {                         /* -- Adding or Appending element in an array */
    if (arr->length < arr->size) {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x) {              /* -- Inserting element in an array */
    if (index >= 0 && index <= arr->length) {
        for (int i = arr->length; i > index; i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    } else {
        printf("Wrong Index \n");
    }
}

int Delete(struct Array *arr, int index) {                      /* -- Deleting element in an array */
    int del = arr->A[index];                     
    if (index >= 0 && index <= arr->length) {
        for (int i = index; i < arr->length-1; i++) {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
    } else {
        printf("Wrong Index \n");
    }
    return del;
}

void Swap(int *x, int *y) {                                     /* -- swapping two element*/
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *arr, int ele) {                  /* -- Linear Search of an element in an array */
    for (int i = 0; i < arr->length; i++) {
        if (ele == arr->A[i]) {
            Swap(&arr->A[i], &arr->A[i-1]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array *arr, int key) {                  /* -- Binary Search of an element in an array */
    int l = 0;
    int h = arr->length - 1;
    while (l <= h) {
        int mid = (l+h)/2;
        if (key == arr->A[mid]) {
            return mid;
        } else if (key < arr->A[mid]) {
            h = mid -1;
        } else {
            l = mid + 1;
        }
    }
    return -1;
}

int Get(struct Array arr, int index) {                          /* -- Get element from an array */
    if (index >= 0 && index < arr.length) {
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int value) {             /* -- Set element from an array */
    if (index >= 0 && index < arr->length) {
        arr->A[index] = value;
    }
}

int Max(struct Array arr) {                                     /* -- Max element from an array */
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++) {
        if (max < arr.A[i]) {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr) {                                     /* -- Min element from an array */
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++) {
        if (min > arr.A[i]) {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr) {                                     /* -- Sum of elements of an array */
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
        sum = sum + arr.A[i];
    }
    return sum;
}

int Average(struct Array arr) {                                 /* -- Average of elements of an array */
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
        sum = sum + arr.A[i];
    }
    return sum/arr.length;
}

void ReverseType1(struct Array *arr) {                          /* -- Reversing an array by using new array */
    int i, j, k;
    int *B;
    B = (int *)malloc(arr->length*sizeof(int));
    for (i=arr->length-1, j=0; i>=0; i--, j++) {
        B[j] = arr->A[i];
    }
    for (k = 0; k < arr->length; k++) {
        arr->A[k] = B[k];
    }
}

void ReverseType2(struct Array *arr) {                          /* -- Reversing an array by swapping elements */
    int i, j;
    for (i=0, j=arr->length-1; i<j; i++, j--) {
        Swap(&arr->A[i], &arr->A[j]);
    }
}

void InsertSort(struct Array *arr, int insert) {                /* -- Inserting element in a sorted array */
    int i = arr->length - 1;
    if (arr->length == arr->size) {
        return;
    }
    while (i>=0 && arr->A[i]>insert) {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = insert;
    arr->length++;
}

int IsSorted(struct Array arr) {                               /* -- Checking if array is sorted or not */
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] > arr.A[i+1])
            return 0;
    }
    return 1;
}

void Rearrange(struct Array *arr) {
    int i = 0;
    int j = arr->length - 1;
    while (i < j) {
        while (arr->A[i] < 0) i++;
        while (arr->A[j] > 0) j--;
        if (i < j) Swap(&arr->A[i], &arr->A[j]);
    }
}

// struct Array* Merge(struct Array *arr1, struct Array *arr2) {            /* -- Merging two array */
//     int i, j, k;
//     i = j = k = 0;
//     struct Array *arr3 = new struct Array;
//     while(i<arr1->length && j<arr2->length) {
//         if (arr1->A[i] < arr2->A[j]) {
//             arr3->A[k++] = arr1->A[i++];
//         } else {
//             arr3->A[k++] = arr2->A[j++];
//         }
//     }
//     for (; i < arr1->length; i++) {
//         arr3->A[k++] = arr1->A[i];
//     }
//     for (; j < arr2->length; j++) {
//         arr3->A[k++] = arr2->A[j];
//     }
//     arr3->length = arr1->length + arr2->length;
//     arr3->size = 20;
//     return arr3;
// }

// struct Array* Union(struct Array *arr1, struct Array *arr2) {            /* -- Union of two array */
//     int i, j, k;
//     i = j = k = 0;
//     struct Array *arr3 = new struct Array;
//     while(i<arr1->length && j<arr2->length) {
//         if (arr1->A[i] < arr2->A[j]) {
//             arr3->A[k++] = arr1->A[i++];
//         } else if (arr2->A[j] < arr1->A[i]){
//             arr3->A[k++] = arr2->A[j++];
//         } else {
//             arr3->A[k++] = arr1->A[i++];
//             j++;
//         }
//     }
//     for (; i < arr1->length; i++) {
//         arr3->A[k++] = arr1->A[i];
//     }
//     for (; j < arr2->length; j++) {
//         arr3->A[k++] = arr2->A[j];
//     }
//     arr3->length = k;
//     arr3->size = 20;
//     return arr3;
// }

// struct Array* Intersection(struct Array *arr1, struct Array *arr2) {            /* -- Intersection of two array */
//     int i, j, k;
//     i = j = k = 0;
//     struct Array *arr3 = new struct Array;
//     while(i<arr1->length && j<arr2->length) {
//         if (arr1->A[i] < arr2->A[j]) {
//             i++;
//         } else if (arr2->A[j] < arr1->A[i]){
//             j++;
//         } else if (arr1->A[i] == arr2->A[j]) {
//             arr3->A[k++] = arr1->A[i++];
//             j++;
//         }
//     }
//     arr3->length = k;
//     arr3->size = 20;
//     return arr3;
// }

// struct Array* Difference(struct Array *arr1, struct Array *arr2) {            /* -- Difference of two array */
//     int i, j, k;
//     i = j = k = 0;
//     struct Array *arr3 = new struct Array;
//     while(i<arr1->length && j<arr2->length) {
//         if (arr1->A[i] < arr2->A[j]) {
//             arr3->A[k++] = arr1->A[i++];
//         } else if (arr2->A[j] < arr1->A[i]){
//             arr3->A[k++] = arr2->A[j++];
//         } else if (arr1->A[i] == arr2->A[j]) {
//             i++;
//             j++;
//         }
//     }
//     arr3->length = k;
//     arr3->size = 20;
//     return arr3;
// }

int main() {
    struct Array arr1 = {{1,12,23,34,45,69,81,93,99,100}, 20, 10};
    
    Display(arr1);

    return 0;
}