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

    if(a[size-1] == x) {
	output[ans++] = size-1;
    }
    
    return ans;
}

// finding length of a string
int strLen(char word[]) {
	if (word[0] == '\0') {
		return 0;
	}
	int newLength = strLen(word + 1);
	return ++newLength;
}

// remove letter from a string
void removeLetter(char word[]) {
	if (word[0] == '\0') {
		return;
	}
	if (word[0] != 'a') {
		removeLetter(word + 1);
	} else {
		int i = 1;
		for (; word[i] != '\0'; i++) {
			word[i - 1] = word[i];
		}
		word[i - 1] = word[i];
		removeLetter(word);
	}
}

// remove consecutive duplicate letter from a string
void removeDuplicate(char word[]) {
	if (word[0] == '\0') {
		return;
	}
	removeDuplicate(word + 1);
	if (word[0] == word[1]) {
		int i = 1;
		for (; word[i] != '\0'; i++) {
			word[i - 1] = word[i];	
		}
		word[i - 1] = word[i];
		removeDuplicate(word);	
	}
}

// merge sort
void mergeSort(int arr[], int start, int end) {
	if (start == end) {
		return;	
	}
	int mid = (start + end) / 2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid + 1, end);

	 
}

int main() {
    cout << "--------------------------------------" << endl;

    int x = 2;
    int a[5] = {5,2,5,5,2};
    int output[5];

	
    char word[100] = "aaabbbbccccddddab";
    removeDuplicate(word);
    
    cout << "--------------------------------------";
    return 0;
}
