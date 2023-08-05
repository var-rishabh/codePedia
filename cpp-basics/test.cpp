#include <bits/stdc++.h>
using namespace std;

int main() {
	char x;
	cin >> x;
	if ((int)x >= 65 && (int)x <= 90) {
		cout << 1;
	} else if ((int)x >= 97 && (int)x <= 122) {
		cout << 0;
	} else {
		cout << -1;
	}
	return 0;
}
