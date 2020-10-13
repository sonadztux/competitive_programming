#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long n, t, angka, wait = 0;
    char op;
    
    cin >> t >> n;
    
    while (t--) {
        cin >> op >> angka;
        
        if (op == '+') {
            n += angka;
        } else if (op == '-') {
            if (n >= angka) {
                n -= angka; 
            } else {
                wait++;
            }
        }
    }
    
    cout << n << " " << wait;
    return 0;
}
