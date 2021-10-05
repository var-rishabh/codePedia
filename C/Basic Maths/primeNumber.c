#include <stdio.h>

// program to print prime numbers
 
void main(){
  int i, j, num, count; 
  printf("Enter a number: ");
  scanf("%d", &num);
  for(j = 1; j <= num; j++) {
    count = 0;
    for (i = 2; i <= j/2; i++) {
        if(j%i == 0) {
            count++;
        break;
        }
    }
    if(count == 0 && j != 1 ) {
        printf(" %d ", j);
    }  
  }
}