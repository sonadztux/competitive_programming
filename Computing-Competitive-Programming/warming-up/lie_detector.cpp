#include <iostream>

using namespace std;

int main(){
    int n,i; cin >> n;
    string s,tmp;

    for(i=0;i<n;i++){
        cin >> s;
        if(i!=0){
            if(tmp=="LIE"&&s=="LIE") tmp="TRUTH";
            else if(tmp=="TRUTH"&&s=="LIE") tmp="LIE";
        }else{
            tmp=s;
        }
    }
    cout << tmp;
}
