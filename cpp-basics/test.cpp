#include <iostream>
using namespace std;

// bool testFunction(int x) {
// int testFunction(int n, int m) {
// int testFunction(int n) {
string testFunction(string s, int arr[][3], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = arr[i][0]; j <= arr[i][1]; j++
      ) {
      if (arr[i][2] == 1 && s[j] != 'z') {
        s[j] += 1;
      } else if (arr[i][2] == 1 && s[j] == 'z') {
        s[j] = 'a';
      } else if (arr[i][2] == 0 && s[j] != 'a') {
        s[j] -= 1;
      } else if (arr[i][2] == 0 && s[j] == 'a') {
        s[j] = 'z';
      }
    }
  }
  return s;
}

void lolfa() {

}

int main() {
  // int t;
  // cin >> t;

  // int *a = 0;
  // while (t--) {
  //   // int n, m;
  //   // cin >> n >> m;
  //   // int x;
  //   // cin >> x;
  //   string s;
  //   cin >> s;

  //   int n = 2;

  //   int arr[n][3] = { {0,0,0}, {1,1,1} };
  //   // int result = testFunction(n, m);
  //   // int result = testFunction(s);
  //   string result = testFunction(s, arr, n);
  //   // bool result = testFunction(x);

  //   cout << result << endl;
  // }
  cout << 1 % 2;
  return 0;
}
