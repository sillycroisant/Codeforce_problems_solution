#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m = n % 5;
    if( m != 0 ){
        cout << n/5 + 1;
    } else {
        cout << n/5;
    }
}