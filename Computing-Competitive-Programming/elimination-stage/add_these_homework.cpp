#include <iostream>

using namespace std;

int main() {
    int a,b,i;
    long num=0;
    
    cin>>a>>b;
    for(i=a;i<=b;i++){
        num+=i;
    }
    cout<<(num%1000000007);
    return 0;
}