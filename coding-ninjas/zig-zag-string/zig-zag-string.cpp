// You are given a string ‘STR’ of size ‘N’ and an integer ‘M’ 
// (the number of rows in the zig-zag pattern of ‘STR’). 
// Your task is to return the string formed by concatenating all ‘M’ rows 
// when string ‘STR’ is written in a row-wise zig-zag pattern.

// Input
// 2
// 7 3
// ABCDEFG
// 5 2
// NINJA

// Output
// AEBDFCG
// NNAIJ

#include <bits/stdc++.h>
using namespace std;

string zigZagString(string str, int n, int m) {
    vector<string> rows(m, "");

    int row = 0;
    bool down = true;
    
    for (int i = 0; i < n; i++) {
        rows[row].push_back(str[i]);
        if (row == 0) {
            down = true;
        } else if (row == m - 1) {
            down = false;
        }
        if (down) {
            row++;
        } else {
            row--;
        }
    }

    string result;
    for (int i = 0; i < m; i++) {
        result += rows[i];
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string str;
        cin >> str;

        string result = zigZagString(str, n, m);
        cout << result << endl;
    }

    return 0;
}
