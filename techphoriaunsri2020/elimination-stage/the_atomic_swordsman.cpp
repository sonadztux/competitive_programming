#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long int n, m,res=1; cin >> n >> m;    
    string ans="kalah";
    while(n--){
        res*=2;
        if(n!=0&&res>=m){
            ans="menang";
            break;
        }
    }
    cout << ans;
}