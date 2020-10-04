#include<bits/stdc++.h>

using namespace std;

unsigned long long count( unsigned long long S[], unsigned long long m, unsigned long long n ) { 
    unsigned long long table[n+1]; 
    
    memset(table, 0, sizeof(table)); 

    table[0] = 1; 

    for(unsigned long long i=0; i<m; i++) 
        for(unsigned long long j=S[i]; j<=n; j++) 
            table[j] += table[j-S[i]]; 

    return table[n]; 
} 

int main() { 
    unsigned long long t;
    unsigned long long t, arr[] = {1, 5, 10, 25, 50}; 
    while(cin >> t){
        unsigned long long m = sizeof(arr)/sizeof(arr[0]); 
        cout << count(arr, m, t) << endl; 
        getchar(); 
    }
} 