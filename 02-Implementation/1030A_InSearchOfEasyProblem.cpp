#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n) {
        bool hard = false;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            if (val == 1) hard = true;
        }
        if (hard) cout << "HARD\n";
        else cout << "EASY\n";
    }
    return 0;
}