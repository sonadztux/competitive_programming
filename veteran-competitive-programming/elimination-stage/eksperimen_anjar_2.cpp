#include <bits/stdc++.h>
using namespace std;

#define ll unsigned long long int 
const ll MOD = 1000000007; 

ll powerLL(ll x, ll n) { 
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

int main(){
    ll n,x,res; cin >> n;
    x=powerStrings(to_string(2),to_string(n));
    res=x*(x+1)/2;
    cout << res%MOD;
}