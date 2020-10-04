#include <bits/stdc++.h>
using namespace std;

void ench(string s){
    deque<char> de;
    int len = 0;
    for(size_t i = 0; i < s.size(); i++){
        if(s[i] == '>'){
            if(len < (int) de.size()) len++;
        } else if(s[i] == '<'){
            if(len > 0) len--;
        } else if(s[i] == '-'){
            if(len > 0) {
                de.erase(de.begin()+len-1);
                len--;
            }
        } else {
            de.insert(de.begin()+len, s[i]);
            len++;
        }
    }
    
    for(size_t i = 0; i < de.size(); i++){
        cout << de[i];
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    string s;
    
    for(int i = 0; i < t; i++){
        cin >> s;
        ench(s);
    }
}