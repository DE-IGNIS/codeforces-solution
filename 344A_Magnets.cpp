#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    if (cin >> n) {
        int groups = 0;
        string prev = "";
        for (int i = 0; i < n; i++) {
            string current;
            cin >> current;
            if (current != prev) {
                groups++;
                prev = current;
            }
        }
        cout << groups << "\n";
    }
    return 0;
}