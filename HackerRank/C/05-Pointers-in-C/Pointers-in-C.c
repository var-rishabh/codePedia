#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function 
    int x = *a;
    int y = *b;
    
    *a = *a + *b;
    *b = x - *b;
    if (*b < 0) {
        *b = *b + 2*((-1)*(*b));
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}