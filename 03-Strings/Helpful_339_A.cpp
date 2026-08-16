#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> nums;

    // Extract numbers
    for (char c : s) {
        if (c != '+') {
            nums.push_back(c - '0');
        }
    }

    // Sort numbers
    sort(nums.begin(), nums.end());

    // Print result
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1) {
            cout << "+";
        }
    }

    return 0;
}