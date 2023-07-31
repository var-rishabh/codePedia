#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int sum = 0;
    int l;
    while (n > 0) {
        l = n%10;
        sum += l;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
