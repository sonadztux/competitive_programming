#include <iostream>
using namespace std;
int main() {
    int n,i,d=2; cin >> n;
    bool prime=true;
    if(n/2>250000000) d=4;
    for(i=2;i<n/d;i++){
        if(n%i==0){
            prime=false; break;
        }
    }
    if(prime){
        cout << "prime";
    }else{
        cout << "composite smallest factor: " << i;
    }
}
