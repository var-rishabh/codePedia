#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[5] = {65,97};
    // for (int i = 0; a[i] != '\0'; i++) {
    //     printf("%c ", a[i]);
    //     printf("%d ", a[i]);
    // }

    char b[5] = {'J', 'O', 'H', 'N', '\0'};
    // printf("%s ", b);

    char ca[] = "radioactive";
    for (int i = 0; ca[i] != '\0'; i++) {
        ca[i] -= 32;
    }
    // cout << ca;

    char ao[] = "radio";
    char oa[] = "radio";
    if (oa == ao) {
        cout << "true" << endl;
    }  else {
        cout << "false" << endl;
    }

    int i = 65124566;
    int *j = &i;
    char *pc = (char *)j;
    cout << pc + 3;     // prints the whole remaining string instead of an address.
    
    return 0;
}