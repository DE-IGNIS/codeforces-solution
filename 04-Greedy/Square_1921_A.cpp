#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int x, y;
        int min_x = INT_MAX, max_x = INT_MIN;
        int min_y = INT_MAX, max_y = INT_MIN;
 
        for (int i = 0; i < 4; i++) {
            cin >> x >> y;
            min_x = min(min_x, x);
            max_x = max(max_x, x);
            min_y = min(min_y, y);
            max_y = max(max_y, y);
        }
 
        int side = max_x - min_x;  
        cout << side * side << endl;
    }
 
    return 0;
}