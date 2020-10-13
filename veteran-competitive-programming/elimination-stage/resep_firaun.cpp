#include <bits/stdc++.h> 
using namespace std; 

#define ll unsigned long long int 
const ll MOD = 101; 

ll powerLL(ll x, ll n) 
{ 
    ll result = 1; 
    while (n) { 
        if (n & 1) 
            result = result * x % MOD; 
        n = n / 2; 
        x = x * x % MOD; 
    } 
    return result; 
} 

ll powerStrings(string sa, string sb) {
    ll a = 0, b = 0; 

    for (int i = 0; i < sa.length(); i++) 
        a = (a * 10 + (sa[i] - '0')) % MOD; 
        
    for (int i = 0; i < sb.length(); i++) 
        b = (b * 10 + (sb[i] - '0')) % (MOD - 1); 

    return powerLL(a, b); 
} 

int main() { 
    int a,b,c,d; cin >> a >> b >> c >> d;
    ll res=0;
    res=powerStrings(to_string(a), to_string(b));
    res=powerStrings(to_string(res), to_string(c));
    res=powerStrings(to_string(res), to_string(d));
    // res=powerStrings(to_string(d), to_string(res));

    cout << res;
} 