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
