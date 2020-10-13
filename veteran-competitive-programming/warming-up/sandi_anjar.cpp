// Basically this problem
// is about Caesar Chiper
// https://en.wikipedia.org/wiki/Caesar_cipher

#include <bits/stdc++.h>
using namespace std;

string solve(string s, int k) { 
    string res = ""; 
    for (int i=0;i<s.length();i++) {
        if (isupper(s[i])) res += char(int(s[i]+k-65)%26 +65); 
        else res += char(int(s[i]+k-97)%26 +97); 
    } 
    return res; 
} 

int main() {
    string s; cin >> s;
    int n; cin >> n;
    cout << solve(s, n);
    
}