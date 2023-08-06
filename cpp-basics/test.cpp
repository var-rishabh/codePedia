#include <bits/stdc++.h>
using namespace std;

string convertString(string str) {
	bool makeCapital = true;
	for(char ch : str) {
		if (ch >= 'a' && ch <= 'z') {
			if (makeCapital) {
				ch = ch - 32;
				makeCapital = false;
			}
		} else if (ch == 32) {
			makeCapital = true;
		}
	}
	return str;
}

int main() {
	string x;
	getline(cin, x);
	cout << convertString(x) << endl;
	return 0;
}
