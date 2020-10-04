#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,nt=0,na=0; cin >> t;
    while(t--){
        int i,a;
        string st,sa; cin >> st;
        if(st.length()>nt) nt = st.length();
        
        cin >> a;
        while(a--){
            cin >> sa;
            if(sa.length()>na) na=sa.length();
        }
    }
    cout << nt << " " << na;
}