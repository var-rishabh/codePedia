#include <bits/stdc++.h>
using namespace std;

/*
int main () {
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;

	cout << s1.size() << endl;
	cout << s2.size() << endl;

	cout << s1 + s2 << endl;

	string s3 = s1;
	s3[0] = s2[0];
	string s4  = s2;
	s4[0] = s1[0];

	cout << s3 << endl;
	cout << s4 << endl;

	return 0;
}
*/
/*
int main() {
	string s1;
	cin >> s1;

	// int a[26] = {0};

	unordered_map<char, int> hash;

	for (auto i : s1) {
		// ++a[int(i) - 91];
		++hash[i];
	}

	string ans = "";
	//for (int j = 0; j < 26; j++) {
	//	if (a[j] % 2 != 0) {
	//		ans += char(91 + j);
	//	}
	//}
	int t = 0;
	for (int j = 0; j < hash.size(); j++) {
		cout << hash[j] << " " << ++t << endl;
	}
	//cout << ans;
	return 0;
}
*/


int main() {
	string s1;
	cin >> s1;

	int len = s1.size();
	int a[26] = {0};
	for (auto i : s1) {
		++a[int(i) - 97];
	}
	int t = 1;
	for (auto j : a) {
		if (j == 0) {
			t = 0;
			break;
		}
	}
	if (t == 0) {
		cout << "not panagram";
	} else {
		cout << "panagram";
	}

	return 0;
}
