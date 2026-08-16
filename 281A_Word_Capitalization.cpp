#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    if (cin >> s) {
        s[0] = toupper(s[0]);
        cout << s << "\n";
    }
    return 0;
}