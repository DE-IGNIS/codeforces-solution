#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int mx = max(Y, W);

    int numerator = 7 - mx;
    int denominator = 6;

    int g = gcd(numerator, denominator);

    numerator /= g;
    denominator /= g;

    cout << numerator << "/" << denominator << endl;

    return 0;
}