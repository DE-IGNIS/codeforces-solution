#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int denominations[] = {100, 20, 10, 5, 1};
    int count = 0;

    for (int bill : denominations) {
        count += n / bill;
        n %= bill;
    }

    cout << count << endl;

    return 0;
}