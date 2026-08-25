#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        string target = "Timur";

        if (n != 5) {
            cout << "NO\n";
            continue;
        }

        sort(s.begin(), s.end());
        sort(target.begin(), target.end());

        if (s == target)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}