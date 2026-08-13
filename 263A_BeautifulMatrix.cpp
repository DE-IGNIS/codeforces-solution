#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int val, row = 0, col = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> val;
            if (val == 1) {
                row = i;
                col = j;
            }
        }
    }
    cout << abs(row - 3) + abs(col - 3) << "\n";
    return 0;
}