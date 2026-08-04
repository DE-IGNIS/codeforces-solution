#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--) {
        string x; 
        cin >> x;
        int mn = 9;
        for (char c : x) 
        {
            mn = min(mn, c - '0')
        };
        cout << mn << "\n";
    }
}