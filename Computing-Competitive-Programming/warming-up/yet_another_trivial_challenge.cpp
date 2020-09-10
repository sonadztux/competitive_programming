#include <iostream>
using namespace std;

int main(){
    unsigned int a,b,sum;
    
    cin>>a>>b;
    if( a>=0 && b>=0 && a<=2000000000 && b<=2000000000 ){
        cout<<a+b;
    }
}