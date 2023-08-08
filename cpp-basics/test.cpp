#include <iostream>
using namespace std;

int calcDivi(int n) {
  int sum = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      sum += i;
      if ((n/i) != i) {
        sum += (n/i);
      }
    }
  }
  return sum;
}

// bool testFunction(int x) {
// int testFunction(int n, int m) {
int testFunction(int n) {
	int count = 0;
	for (int i = 1; i <= n; i++) {
		count += calcDivi(i);
	}
	return count;
}

int calcGCD(int n, int m) {
    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;
}


int main() { 
    int t;
    cin >> t;

    while (t--) {
        // int n, m;
        // cin >> n >> m;
        int x;
        cin >> x;

        // int result = testFunction(n, m);
        int result = testFunction(x);
        // bool result = testFunction(x);

        cout << result << endl;
    }

    return 0;
}
