#include<bits/stdc++.h>
using namespace std;

int main() {
    // in stack
    int a[10] = { 0,1,2,3,4,5,6,7 };
    for (auto i : a) {
        // cout << *(a+i) << endl;
        // cout << a[i] << endl;
        // cout << i[a] << endl;
    }

    // in heap
    int* p;
    p = new int[10];
    p[0] = 14;
    free(p);

    // in c
    p = (int*)malloc(10 * sizeof(int));
    delete[]p;

    // multi-dimensional array in heap and pointer in stack
    int* A[3];
    A[0] = new int[3];
    A[1] = new int[3];
    A[2] = new int[3];
    A[2][2] = 150;
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << A[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    free(A);

    int arr[5];
    // cout << arr << endl;    // giving address of arr first element
    // cout << &arr << endl;    // giving address of arr first element

    // 2D array
    int** np = new int* [5];
    for (int i = 0; i < 5; i++) {
        np[i] = new int[10];
    }
    for (int i = 0; i < 5; i++) {
        delete[] np[i];
    }
    delete[] np;

    return 0;
}