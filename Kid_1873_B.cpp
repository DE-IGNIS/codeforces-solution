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
 
        long long max_product = 0;
 
        for (int i = 0; i < n; i++) {
            a[i]++;  
            
            long long product = 1;
            for (int j = 0; j < n; j++) {
                product *= a[j];
            }
 
            max_product = max(max_product, product);
 
            a[i]--;  
        }
 
        cout << max_product << '\n';
    }
 
    return 0;
}