#include <iostream>
using namespace std;

// program to print prime numbers
 
int main(){
  int i, j, num, count; 
  cout << "Enter a number: ";
  cin >> num;
  for(j = 1; j <= num; j++) {
    count = 0;
    for (i = 2; i <= j/2; i++) {
        if(j%i == 0) {
            count++;
        break;
        }
    }
    if(count == 0 && j != 1 ) {
        cout << j << " ";
    }  
  }
  return 0;
}