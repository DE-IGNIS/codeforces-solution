#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    if (cin >> n >> s) {
        int a = 0, d = 0;
        for (char c : s) {
            if (c == 'A') a++;
            else if (c == 'D') d++;
        }
        if (a > d) cout << "Anton\n";
        else if (d > a) cout << "Danik\n";
        else cout << "Friendship\n";
    }
    return 0;
}