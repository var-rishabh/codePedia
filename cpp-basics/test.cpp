#include <iostream>
using namespace std;

bool testFunction(int n) {
	bool result = false;
	int old = n;
	int x = 0;
	while (n > 0) {
		x = (x * 10) + n%10;
		n /= 10;
	}
	if (old == x) result = true;
    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        // int n;
        // cin >> n;

		// int m;
		// cin >> m;

        int x;
        cin >> x;

        bool result = testFunction(x);
        cout << result << endl;
    }

    return 0;
}
