#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        long long n, s;
        cin >> n >> s;
        cout << s / (n / 2 + 1) << '\n';
    }
    return 0;
}