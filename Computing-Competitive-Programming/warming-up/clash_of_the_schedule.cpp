#include <iostream>

using namespace std;

int main(){
    int n,m,kpk; cin >> n >> m;
    kpk=n;
    while(kpk%m != 0){
        kpk+=n;
    }
    cout << kpk;
}