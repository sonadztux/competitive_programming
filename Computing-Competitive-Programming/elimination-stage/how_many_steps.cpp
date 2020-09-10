#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int x,y,z,p,q,r;
    cin>>x>>y>>z>>p>>q>>r;
    cout<<abs(p-x)+abs(q-y)+abs(r-z);
    return 0;
}