#include <bits/stdc++.h>
using namespace std;

// PMI (Principle of Mathematical Induction)
// write code for base case
// then do it for k value


int factorial(int n) {
    if (n == 0) {
        return 1;
    };
    return n * factorial(n-1);
}

int fibbonaci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibbonaci(n-1) + fibbonaci(n-2);
}

bool isSorted(int a[], int size) {
    if (size == 0 || size == 1) {
        return true;
    }
    if (a[0] > a[1]) {
        return false;
    }
    bool trueornot = isSorted(a+1, size-1);
    return trueornot;
}

// finding first index of an element in an array 
int test1(int a[], int size, int x) {
    if (size == 0) {
        return -1;
    }
    if (a[0] == x) {
        return 0;
    }
    int ans = test1(a+1, size-1, x);
    if (ans == -1) {
        return -1;
    } else {
        return ans + 1;
    }
}

// finding last index of an element in an array 
int test2(int a[], int size, int x) {
    if (size == 0) {
        return -1;
    }
    int ans = test1(a+1, size-1, x);
    if (a[0] == x) {
        return 0;   
    }
    if (ans == -1) {
        return -1;
    } else {
        return ans + 1;
    }
}

// finding all index of an element in an array 
int test3(int a[], int size, int x, int output[]) {
    if (size == 0) {
        return 0;
    }
    int ans = test3(a+1, size-1, x, output);

    for (int i = ans-1; i >= 0; i--) {
        output[i] = output[i] + 1;
    }
    if (a[0] == x) {
        for (int i = ans-1; i >= 0; i--) {
            output[i + 1] = output[i];
        }
        output[0] = 0;
        ans++;
    }

    return ans;
}

// finding all index of an element in an array in reverse
int test4(int a[], int size, int x, int output[]) {
    if (size == 0) {
        return 0;
    }
    int ans = test4(a, size-1, x, output);

    if (a[size-1] == x) {
        output[ans] = ans;
        ans++;
    }
    
    return ans;
}

int main() {
    cout << "--------------------------------------" << endl;

    int x = 2;
    int a[5] = {5,2,5,5,2};
    int output[5];

    int ans = test4(a, 5, x, output);

    for (int i = 0; i < ans; i++) {
        cout << output[i] << endl;
    }
    
    cout << "--------------------------------------";
    return 0;
}