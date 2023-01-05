#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n , q;
    cin >> n >> q;
    
    vector<vector<int>> vec(n);
    
    for(int i=0;i<n ; i++){
        int s;
        cin>>s ;
        vec[i]= vector<int>(s);
        for(int j=0;j<s;j++){
           cin>>vec[i][j];
        }    
    }
    
    while(q>0){
        int i;
        int j;
        cin>>i >>j;
        cout<<vec[i][j]<<endl;
        q--;
    }
    
    return 0;
}