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
    // worst and average time complexity = O(n^2)
    // best time complexity = O(n)
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0;
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;
        }
    }
    return arr;
}

vector<int> insertionSort(vector<int> arr, int n) {
    // worst and average time complexity = O(n^2)
    // best time complexity = O(n)
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            swap(arr[j - 1], arr[j]);
            j--;
        }
    }
    return arr;
}

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int l = low;
    int r = high;
    while (l < r) {
        while (arr[l] <= pivot && l <= high - 1) {
            l++;
        }
        while (arr[r] > pivot && r >= low + 1) {
            r--;
        }
        if (l < r) {
            swap(arr[l], arr[r]);
        }
    }
    swap(arr[low], arr[r]);
    return r;
}

void quickSort(vector<int> &arr, int low, int high) {
    // worst and average time complexity = O(nlogn)
    // best time complexity = O(n)
    if (low < high) {
        int part = partition(arr, low, high);
        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }
}

void merge(vector<int> &arr, int l, int mid, int r) {
    int left = l;
    int right = mid + 1;
    vector<int> temp;
    while (left <= mid && right <= r) {
        if (arr[left] < arr[right]) {
            temp.push_back(arr[left]);
            ++left;
        } else {
            temp.push_back(arr[right]);
            ++right;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        ++left;
    }
    while (right <= r) {
        temp.push_back(arr[right]);
        ++right;
    }
    for (int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int> &arr, int l, int r) {
    // best, worst and average time complexity = O(nlogn)
    if (l == r) return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int main() {
    vector<int> arr = { 44, 55, 99, 33, 22, 11, 77, 88, 66, 111 };
    cout << "\nOld Array: " << endl;
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << endl;

    // vector<int> result = selectionSort(arr, 10);
    // vector<int> result = bubbleSort(arr, 10);
    // vector<int> result = insertionSort(arr, 10);
    quickSort(arr, 0, 9);
    // mergeSort(arr, 0, 9);

    cout << "\nNew Array: " << endl;
    for (auto i : arr) {
        cout << i << " ";
    }
    return 0;
}