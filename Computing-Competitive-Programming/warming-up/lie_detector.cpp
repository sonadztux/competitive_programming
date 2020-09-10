#include <iostream>

using namespace std;

int main(){
    int n,i; cin >> n;
    string s[n], ans="TRUTH";

    for(i=0;i<n;i++){
        cin >> s[i];
    }

    for(i=n-1;i>0;i--){
        if(i==n-1){
            if(s[i]=="TRUTH" && s[i-1]=="LIE") ans="LIE";
            else if (s[i]=="LIE" && s[i-1]=="TRUTH") ans="LIE";
        }else{
            if(s[i-1]=="LIE" && ans=="TRUTH") ans="LIE";
            else if(s[i-1]=="TRUTH" && ans=="LIE") ans="LIE";
            else if(s[i-1]==ans) ans="TRUTH";
        }
    }
    cout << ans;
}