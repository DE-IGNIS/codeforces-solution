#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];

    string s;
    cin >> s;

    long long total = 0;

    for (char c : s) {
        
        total += a[c - '1'];
    }

    cout << total << '\n';

    return 0;
}