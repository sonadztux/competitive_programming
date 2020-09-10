#include <iostream>

using namespace std;

int main(){
    int n, i;
    
    cin>>n;
    for(i = 1; i <= n; i++){
        if(i%3 == 0 && i%5 == 0){
            cout<<"HEYAHOOO ";
        }else if(i%3 == 0){
            cout<<"HEYA ";
        }else if(i%5 == 0){
            cout<<"HOOO ";
        }else{
            cout<<i<<" ";
        }
    }
}