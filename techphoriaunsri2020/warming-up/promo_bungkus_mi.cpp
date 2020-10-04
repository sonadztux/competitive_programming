#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int b,d; cin >> b >> d;
        if(d==b) cout << 1 << endl;
        else if(d>b) cout << b << endl;
        else cout << abs(b/d)+(b%d) << endl; 
    }
}