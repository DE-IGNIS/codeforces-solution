#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int &x : a) cin >> x;
 
        int even_mismatch = 0, odd_mismatch = 0;
 
        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) even_mismatch++;
                else odd_mismatch++;
            }
        }
 
        if (even_mismatch != odd_mismatch) {
            cout << -1 << '\n';
        } else {
            cout << even_mismatch << '\n';
        }
    }
 
    return 0;
}