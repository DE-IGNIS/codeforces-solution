#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> canPass(n + 1, false);

    int p;
    cin >> p;

    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        canPass[level] = true;
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        canPass[level] = true;
    }

    for (int level = 1; level <= n; level++) {
        if (!canPass[level]) {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy!";

    return 0;
}