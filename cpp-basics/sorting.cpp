#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

vector<int> selectionSort(vector<int> arr, int n) {
    // best, worst, average time complexity = O(n^2)
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
}

vector<int> bubbleSort(vector<int> arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    return arr;
}

int main() {
    vector<int> arr = { 44, 55, 99, 33, 22, 11, 77, 88, 66, 111 };
    cout << "Old Array: " << endl;
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // vector<int> result = selectionSort(arr, 10);
    vector<int> result = bubbleSort(arr, 10);

    cout << "New Array: " << endl;
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}