#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int current = 0, ans = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if (x == 0) {
                current++;
                ans = max(ans, current);
            } else {
                current = 0;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}