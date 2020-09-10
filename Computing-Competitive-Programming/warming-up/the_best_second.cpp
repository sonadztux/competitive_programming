#include <iostream>

using namespace std;

int main(){
    int mhs, i, max=0, max2=0, temp;
    
    cin>>mhs;
    for(i=0;i<=mhs;i++){
        cin>>temp;
        if(temp>max){
            max2=max;
            max=temp;
        }else if(temp>max2&&temp<max){
            max2=temp;
        }
    }
    cout<<max2;
}