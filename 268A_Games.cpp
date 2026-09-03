#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    vector<int> h(n), a(n);
    for (int i = 0; i < n; ++i) {
        cin >> h[i] >> a[i];
    }

    int conflict_count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i != j && h[i] == a[j]) {
                conflict_count++;
            }
        }
    }

    cout << conflict_count << "\n";

    return 0;
}